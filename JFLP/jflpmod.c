/*
  jflpmod.c - Patch a mod's script files to work with JFLP.

  Jason Hood, 12 & 13 August, 2009.

  Make adjustments to script files so they will work with JFLP:
  * change numbers from six decimals to six significant digits;
  * comment the opening movies;
  * remove marketgood lines for ships that can't be bought;
  * remove faction_weight lines;
  * delete data sections using DATA\MISSIONS\mshipprops.ini.

  It's quite a simple parser, so it expects CRLF files, no leading or trailing
  spaces, correct syntax and no comments within <section> and <dest> regions.

  Developed in MinGW, changes may be necessary for other compilers.
*/

#define PVERS "1.00"
#define PDATE "13 August, 2009"


#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void  process( LPCSTR );
LPSTR get_line( int*, LPSTR*, DWORD* );
BOOL  market_ship( LPSTR, int, FILE* );
BOOL  numbers( LPSTR, int, FILE* );
LPSTR EngNum( double, LPSTR );


int main( int argc, char* argv[] )
{
  if (argc == 1 ||
      ((argv[1][0] == '/' || argv[1][0] == '-') && argv[1][1] == '?') ||
      strcmp( argv[1], "--help" ) == 0)
  {
    puts( "JFLPMOD by Jason Hood <jadoxa@yahoo.com.au>\n"
	  "Version " PVERS " (" PDATE ").  Freeware.\n"
	  "http://freelancer.adoxa.cjb.net/\n"
	  "\n"
	  "Patch a mod's script files for JFLP compatibility.\n"
	  "\n"
	  "jflpmod mods\\mod\\*.xml\n"
	  "\n"
	  "The original script has \".sdk\" appended."
	);
    return 0;
  }

  while (*++argv)
    process( *argv );

  return 0;
}


void process( LPCSTR name )
{
  char	oname[MAX_PATH];
  FILE* ofile;

  HANDLE file = CreateFile( name, GENERIC_READ, FILE_SHARE_READ, NULL,
			    OPEN_EXISTING, 0, NULL );
  if (file == INVALID_HANDLE_VALUE)
  {
    fprintf( stderr, "Unable to open \"%s\".\n", name );
    return;
  }
  HANDLE map = CreateFileMapping( file, NULL, PAGE_READONLY, 0, 0, NULL );
  if (map == NULL)
  {
    fprintf( stderr, "Unable to create file mapping for \"%s\".\n", name );
    CloseHandle( file );
    return;
  }
  LPSTR view = MapViewOfFile( map, FILE_MAP_READ, 0, 0, 0 );
  if (view == NULL)
  {
    fprintf( stderr, "Unable to map view of \"%s\".\n", name );
    CloseHandle( map );
    CloseHandle( file );
    return;
  }

  _snprintf( oname, sizeof(oname), "%s.new", name );
  ofile = fopen( oname, "wb" );
  if (!ofile)
  {
    fprintf( stderr, "Unable to create file \"%s\".\n", oname );
    return;
  }

  BOOL	changed = FALSE;
  LPSTR xml = view;
  DWORD len = GetFileSize( file, NULL );
  while (len)
  {
    LPSTR line;
    int   llen;
    LPSTR strt = xml;
    DWORD slen = len;
    while (len)
    {
      line = get_line( &llen, &xml, &len );
      if (*line == '<' && (strnicmp( line+1, "dest>", 5 ) == 0 ||
			   strnicmp( line+1, "section>", 8 ) == 0))
	break;
      if (llen > 41 &&
	  strnicmp( line,
		    "<data file=\"DATA\\Missions\\mShipProps.ini\"", 41 ) == 0)
      {
	fwrite( strt, slen - len - llen - 1, 1, ofile );
	do
	  line = get_line( &llen, &xml, &len );
	while (*line != '<' || strnicmp( line+1, "/data>", 6 ) != 0);
	strt = xml;
	slen = len;
	changed = TRUE;
      }
    }
    fwrite( strt, slen - len, 1, ofile );
    while (len)
    {
      line = get_line( &llen, &xml, &len );
      if (*line == '<')
      {
	fwrite( line, llen, 1, ofile );
	break;
      }
      if (llen > 12 && strnicmp( line, "movie_file", 10 ) == 0)
      {
	fputc( ';', ofile );
	fwrite( line, llen, 1, ofile );
	changed = TRUE;
      }
      else if (llen > 12 && strnicmp( line, "marketgood", 10 ) == 0)
	changed |= market_ship( line, llen, ofile );
      else if (llen > 14 && strnicmp( line, "faction_weight", 14 ) == 0)
	changed = TRUE;
      else
	changed |= numbers( line, llen, ofile );
    }
  }

  fclose( ofile );

  UnmapViewOfFile( view );
  CloseHandle( map );
  CloseHandle( file );

  if (!changed)
    remove( oname );
  else
  {
    char tname[MAX_PATH];
    _snprintf( tname, sizeof(tname), "%s.sdk", name );
    rename( name, tname );
    rename( oname, name );
  }
}


// Fortunately, only the market_ships file has this particular sequence.  If
// it's found, ignore the line, since my patch doesn't have it.
BOOL market_ship( LPSTR line, int len, FILE* ofile )
{
  if (len > 20 && memcmp( line + len - 20, ", -1, 0, 0, 1, 1, 1\r", 20 ) == 0)
    return TRUE;
  fwrite( line, len, 1, ofile );
  return FALSE;
}


// Search each parameter for a floating point number; if found, reformat it.
BOOL numbers( LPSTR line, int len, FILE* ofile )
{
  char num[16];
  BOOL rc = FALSE;

  LPSTR parm = memchr( line, '=', len );
  if (!parm)
  {
    fwrite( line, len, 1, ofile );
    return FALSE;
  }

  parm += 2;
  fwrite( line, parm - line, 1, ofile );
  len -= parm - line;
  for (;;)
  {
    LPSTR comma = memchr( parm, ',', len );
    if (!comma)
      comma = parm + len - 2;
    if (comma - parm >= 8 && comma[-7] == '.')
    {
      fputs( EngNum( atof( parm ), num ), ofile );
      rc = TRUE;
    }
    else
      fwrite( parm, comma - parm, 1, ofile );
    if (*comma != ',')
    {
      fputs( "\r\n", ofile );
      break;
    }
    fputs( ", ", ofile );
    len -= comma + 2 - parm;
    parm = comma + 2;
  }

  return rc;
}


// Return a pointer to the start of the line; LLEN contains its length,
// including the CRLF.	MEM & LEN are updated to the next line.
LPSTR get_line( int* llen, LPSTR* mem, DWORD* len )
{
  LPSTR line = *mem;

  LPSTR nl = memchr( *mem, '\n', *len );
  if (!nl)
  {
    nl = *mem + *len;
    *mem += *len;
    *len  = 0;
  }
  else
  {
    ++nl;
    *len -= nl - *mem;
    *mem  = nl;
  }

  *llen = nl - line;
  return line;
}


// Convert a number like "%g", but use engineering notation (the exponent is a
// multiple of 3; there's also no plus sign or leading zeros).
LPSTR EngNum( double num, LPSTR buf )
{
  LPSTR s = buf;

  if (num < 0)
  {
    *s++ = '-';
    num = -num;
  }

  if (num && (num >= 1e6 || num <= 1e-5))
  {
    int exp = (int)floor( log10( num ) );
    int adj = exp % 3;
    if (adj < 0)
      adj += 3;
    exp -= adj;
    num /= pow( 10, exp );
    if (num > 999.999)		// some numbers just aren't what they seem...
    {
      num /= 1000;
      exp += 3;
    }
    sprintf( s, "%ge%d", num, exp );
  }
  else
  {
    sprintf( s, "%g", num );
  }

  return buf;
}
