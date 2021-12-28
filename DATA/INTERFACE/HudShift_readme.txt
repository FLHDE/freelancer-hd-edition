				   HUD Shift
				 by Jason Hood

				 Version 2.12.1


HUD Shift is a plugin to reposition items in the HUD.  It can be installed
either in EXE\dacom.ini:

	[Libraries]
	...
	HudShift.dll		; place before jflp.dll

or EXE\freelancer.ini:

	[Initial SP DLLs]
	...
	DLL = HudShift.dll

Either use the full path to HudShift.dll, or copy it to EXE (former) or
DLLS\BIN (latter).  Copy HudShift.ini to DATA\INTERFACE.

Using freelancer.ini, the shifts will be applied every time a game is loaded,
allowing positions to be changed on the fly.  Conversely, dacom.ini will apply
the shifts once.  The intention is to use freelancer.ini when experimenting to
find the right shift, then use dacom.ini once satisfied.  Either location will
re-apply the shift when the resolution changes, but a game must still be loaded
in order for the shift to take effect.

The default setting will place items back at the screen edge when using wide-
screen resolutions.  The position can be fine-tuned, if you'd like it a little
off the edge, or you can totally rearrange everything.


Jason Hood, 4 November, 2021.
http://freelancer.adoxa.vze.com/
