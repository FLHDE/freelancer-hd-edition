			 Single-Player Command Console
				 by Jason Hood

				  Version 1.24


Console is a Freelancer plugin that makes use of the multiplayer chat interface
to enter commands.  To install it, copy CONSOLE.DLL to Freelancer's EXE
directory and add it to the [Libraries] section of EXE\dacom.ini.  Help is built
in - bring up the chat interface by pressing Enter, then type in "help".  The
only command not described is "about", which will show author and version info.

Commands that move the ship do not autosave ("launch" being the exception).
They also make no test of the destination, so if you end up in the middle of a
sun, you'll promptly explode.  The "jump" and "system" commands will treat an
initial digit, minus sign or comma as a position; anything else is taken as an
object.

A few other points of note:
* it really is only for single-player, so servers should have nothing to worry
  about;
* it is not intended as a substitute for FLHook or the like;
* don't bother asking for cloak.


============
LINE EDITING
============

Additional functionality has been added to input boxes.  These work in MP, too.

Ctrl+Left	move to the start of the current/previous word
Ctrl+Right	move to the start of the next word
Ctrl+Backspace	delete to the start of the current/previous word
Ctrl+Delete	delete to the start of the next word
Ctrl+Home	delete to the start of the line
Ctrl+End	delete to the end of the line

A word consists of alphanumerics and the underscore ("_").  For the chat, a
history of commands is stored (but not single-character commands).

Up		select the previous command
Down		select the next command
Ctrl+Up 	search for the previous command matching up to the cursor
Ctrl+Down	search for the next command matching up to the cursor

In SP, a blank line is stored as part of the history; it is ignored in MP.
In MP, a search can be started on a blank line (to find the first/last command),
but otherwise the line must start with a dot (".") or slash ("/") for the
history keys to work.

If your input boxes have a flashing "A", Left and Right do not work (apparently
due to double-byte character set support).  If you only use English text, add
"NoIme" to your Freelancer shortcut to remove it (it's done automatically if
you're not using DBCS).


=======
HISTORY
=======

Legend: - bug fix, + added, * changed.

v1.24, 7 May, 2016:
- don't crash if an animation is only used once;
* allow explicit forward/backward animations.

v1.23, 6 October, 2013:
+ added "play sound" command to play a sound effect;
* prevent IME being used ("NoIme" option or using SBCS).

v1.22, 3 May, 2011:
- fix the atmosphere collision when launching;
- loading Moors after Console would possibly disable Moors.

v1.21, 14 January, 2011:
- fixed searching history when no match exists;
- fixed ship cushion under certain conditions.

v1.20, 9 January, 2011:
- "rep <short name> value" wasn't working;
- test the jump target does actually exist;
- restore original cruise constants when switching to multiplayer;
* allow "base" to use "." (useful to create new jobs);
* the bay animation can run independently of another animation;
* use the Console chat channel;
* update the launch icon and ship cushion after "drive" and "park";
* "system ." from a base positions the ship properly;
+ enhanced line editing, plus command history (for MP, too);
+ "pos" has bookmarks to store/recall position, clipboard support.

v1.10, 23 February, 2010:
- using "system object" would cause a CTD during a jump;
- using "rep = unknown faction" would still use the friendly color;
* use two decimals and remove trailing zeros for rotation values;
* reputation can also be specified as a percentage (0.5 and 50 are equivalent);
+ added "ghost" command to toggle collision detection;
+ added "godmode" command to toggle invincibility (effective after load game);
+ added "rep undo" to restore the reputation prior to the first "rep = ...".

v1.00, 22 December, 2009:
+ initial release.


================================
Jason Hood, 7 May, 2016.
http://freelancer.adoxa.vze.com/
