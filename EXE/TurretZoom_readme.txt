				  Turret Zoom
				 by Jason Hood

				  Version 1.41


Turret Zoom is a plugin that lets you adjust the Turret View camera using the
mouse wheel.  To install it, copy TURRETZOOM.DLL to Freelancer's EXE directory
and add it to the [Libraries] section of EXE\dacom.ini.

The default behavior is to adjust the "z" position of the camera, providing a
zoom in (wheel down) and out (wheel up) feature.  It will scale the current
value, by 1.5 up to 5K, then by 1.1.  Use the modifiers for additional control:

	Shift	     move by 10K
	Ctrl	     move by 1K
	Alt	     move by 100
	Shift+Ctrl   move by 10
	Ctrl+Alt     move by 1

Zooming in causes the camera to become quite sensitive.  The speed is halved
every 10K, but can be fine-tuned by holding Shift+Ctrl+Alt and moving the wheel
down (halve the speed) or up (double it).

Holding Shift+Alt and moving the wheel down will switch to "y" mode (moving the
wheel up will go back to "z").  In "y" mode, the camera will move up and down
with the wheel.

The current values are saved when you enter Turret View and restored on exit.
However, this means if there is a situation where the view is reset without
actually exiting Turret View, those values will become default.  Should that
occur, a new launch/load/select will restore the original values.


=======
Options
=======

Strings can be added after the DLL in dacom.ini to customize the values (shown
with their default):

	fast		 immediate movement (like previous versions)
	inverse 	 reverse wheel direction (movement only)
	max=200000	 maximum distance to move
	shift=10000	 Shift movement
	ctrl=1000	 Ctrl movement
	alt=100 	 Alt movement
	s+c=10		 Shift+Ctrl movement
	c+a=1		 Ctrl+Alt movement
	small=1.1	 small move factor
	large=1.5	 large move factor
	switch=5000	 distance to switch from large to small
	adjust=0.5	 zoom in camera speed adjust factor
	interval=10000	 interval to adjust camera speed

For example:

	 TurretZoom.dll inverse max=20000 switch=0

will cause wheel up to zoom in; move the camera no further than 20K; and always
use the small factor.  There is a chance this may not work on your system, in
which case the options can be patched directly into the DLL (which will also
override the dacom.ini options).  Open TurretZoom.dll in your hex editor and go
to hex offset 30C0, then just write in the options you want.  However, this
method requires adding a space before the equal sign ("max = 20000").


================================
Jason Hood, 5 June, 2011.
http://freelancer.adoxa.cjb.net/
