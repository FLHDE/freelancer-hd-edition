# Changelog

## [[0.5] - TBD](https://github.com/BC46/freelancer-hd-edition/releases/tag/0.5)

### Changed

- Added HD Nomad Lair textures
- Added HD Dyson Sphere textures
- Added updated version of the HD Character Models addon (tremendously improved character textures over the previous version)
- Made intro skips optional
- Made jump tunnel time adjustable
- Added native Anti-Aliasing and Anisotropic Filtering options in the installer
- Added higher quality startup movies
- Added improved HD Nebulae and Fog
- Improved HD Nomad, Pirate, Bretonia, Blood Dragon and Utility ship textures
- Added many HD weapon and misc effect textures
- Added an HD Smoke effect
- Added HD Base Interior tables
- Added HD weapon models
- Added HD equipment carts
- Added HD background stars
- Added HD vanilla HUD
- Added HD mouse cursors
- Added HD button textures and other icons
- Made the Dark HUD optional
- Made the Flat Interface optional
- Improved HD cockpits
- Improved the St03b starsphere
- Added HD Base Interiors (Proof of Concept) for the following bases:
	- Manhattan
	- Pittsburgh
	- Liberty Dreadnought
- Improved station textures:
	- Fixed outline for dome trees
	- Improved dome grass
	- Improved HD station numbers
	- Added HD base windows
	- Added HD light panel textures
	- Improved texture quality of previously original textures for asteroid stations
- Added HD cargo crates
- Added optional shinier reflections
- Improved overall reflections
- Added an improved explosion effect texture
- Replaced Liberty Defender with Juni's Defender in Kress cutscene
- Adjusted the HQ reveal and exposition music so it has the same length as the original
- Reduced vanilla icon sizes in contact list so they can no longer overlap
- Add possibility for users to choose a separate save game folder
- Increased asteroid field fill distance
- Multiplied the maximum docking initiation distance by 5x
- Reduced time between contact list refreshes to 0.5 seconds
- Allowed the current worth to be shown in Multiplayer
- Increased max number of characters in the chat input box (allows for longer messages to be typed)
- Increased the max number of chat lines in the chat history window
- Improved the zoomed map by adding more, smaller stars to it
- Compressed HQ Music to 320 kb/s (fixes issues with Freelancer sometimes not looping or playing the music)
- Improved texture quality of some original ship textures
- Fixed fog colors on the New York nav map
- Made both Unknown systems appear on the nav map after visiting them
- Inverted the HD Moonblu Planet color so it looks more like the original
- Made the Text Strings Revision patch optional
- Added the Territory plugin with a custom config; shows which region of space the current system is in
- Added the Ranks plugin with a custom config; associates a rank with the playerlevel
- Added the HUDless plugin
- Replaced manual hex edits with the Factions plugin for making several factions appear in the faction list
- Added a trail-less version of the CSV engine (unused)
- Ensured the Rowlett's Revenge weapon drop has the correct string reference (it used to be called Nomad Prototype)
- Reduced LODCurve in the dyson_city hypergate ale effect to ensure it doesn't look too dense
- When both the Dark HUD and Adv Wide HUD have been selected, the player will now actually get both
- Add a visit tag to the gravity buoy in Ew01 so it can no longer be selected in the contact list
- Reverted the solid gauge bars (still made the gaps a bit smaller than the original)
- Removed a purposeless hazard buoy on the outer edge of Bw06
- Adjust colors slightly in the Ew05 and Ew06 starspheres
- Centered the nav map animation in 16:9
- Added the latest version of HUD Shift which centers all windows correctly
- Fixed seams in some Bretonia starspheres
- Added optional no-story (open single player) modes:
	- Normal: the player starts on Manhattan with a basic loadout and a default reputation
	- Pirate: the player starts on Rochester with a basic loadout and an inverted reputation
- Removed silence in the zone_nebula_nomad ambient sound
- Made the fog in the Liberty Dreadnought deck start right away, instead of 30 seconds later
- Moved Armored Transport in mission 13 cutscene so it's no longer on the same landing pad as the Anubis
- Ensured Bounty Hunter and Corsair ships have Corsair engines (like the NPCs do)
- Added updated Maximized Draw Distances addon (enables high quality sphere rendering)
- Adjusted the cutscene music attenuation according to the differences in volume between the standard and HQ music
- Mission 1 cutscene fixes:
	- Prevented the Transport ship from tilting downwards at the very start
	- Prevented Freeport 7 escorts from colliding with each another off-screen
	- Adjusted the angle and position of the 3rd Nomad attacker ship so it can fire torpedoes properly
	- Ensure the Nomad attacker ship's engines can't be seen as they are decloaking when the camera zooms out
- Properly despawn Freeport 7 so it can't be seen in New York during mission 1
- Ensured the Planet Houston -> Bering Jump Gate trade lane has the correct name
- Assigned a faction to the Alaska -> New York Jump Gate, and the Magellan -> New York Jump Gate so their names are displayed properly
- Lowered volume for music that plays when Orillion talks during a mission 13 cutscene
- Set numerous friendly jumpholes during story missions to neutral
- Prevent cloaked Rheinland Battleships from being visible during mission 7
- Turned down the volume of a rather loud voice line in mission 6
- Removed a screech in the HQ Omicron Battle music
- Added "HDE" to the version text in the main menu to indicate that the Freelancer: HD Edition installation has succeeded
- Replaced Freelancer.exe's application icon with a Freelancer: HD Edition icon
- Added an alternative base interior lighting fix
- Include a copy of ReShade with a basic, optional config (includes HDR, increased saturation, and bloom)
- Replaced d3d8to9 with DxWrapper
- Changed dgVoodoo2 version to 2.54
- Added optional player engine trails
- Added an FLDOCS folder with useful Readmes and documentation
- Include documentation regarding manual hex/binary edits for Freelancer: HD Edition
- Applied engine fixes in the gasminer3.thn main menu script
- Compressed R8G8B8 textures to DXT1 and DXT5 (saves space)
- Added an HD jump effect
- Disabled the D3D8 error spam in FLSpew (Freelancer log)
- Added flplusplus; allows for configurable draw distances, PNG screenshots, and more
- Fixed uneven edges in HD main menu Freelancer logos
- Set the mine detonation distance to 8 (mitigates the mine collision bug)
- Added missing audio files from JFLP v1.25; fixes some incorrect NPC chatter
- Applied several vanilla compatibility hotfixes (prevents crashes when playing on vanilla servers)
- Dropped support for installations via Freelancer Mod Manager


## [[0.4.1] - 2021-08-25](https://github.com/BC46/freelancer-hd-edition/releases/tag/0.4.1)

### Changed
- Updated zlib.dll for better performance in Multiplayer
- Added HD Missile effects
- Fixed size of 16:9 Freelancer logos
- Added support for installations via a dedicated installer


## [[0.4] - 2021-08-21](https://github.com/BC46/freelancer-hd-edition/releases/tag/0.4)

### Changed
- Improved HUD fixes for 1440p/4K screens
- Added HD Liberty news logo
- Added HD Nav map objects
- Added HD explosives and missile effects
- Added HD Ships
- Added HD Effects
- Added MP3 Codec Fix
- Added HD Bases
- Added HD Planets
- Added HD Cockpits
- Fixed contact list view icon
- Fixed trade request button in MP
- Fixed banding in EW01 starsphere
- Added HD Nebulae
- Added HD Asteroids
- Added support for running multiple instances of Freelancer on the same machine
- Added more sound and general options


## [[0.3] - 2021-08-15](https://github.com/BC46/freelancer-hd-edition/releases/tag/0.3)

### Changed
- Added missing text fix for 4K users
- Improved environment map materials (reflections)
- Improved system map
- Added console plugin
- Added Advanced Widescreen HUD
- HUD realignment
- Updated HUDShift
- Script improvements
- Improved universe button in nav map
- Updated dgVoodoo
- Fixed starsphere & news images banding
- Smoothened jump effect
- Added HD Character Models


## [[0.2] - 2021-08-07](https://github.com/BC46/freelancer-hd-edition/releases/tag/0.2)

### Changed
* Added HQ Music
* Added Flat Interface
* Added bar script fixes
* Added 16:9 planetscape fixes
* Added HD Universe map
* Added HD Starspheres
* Added HD Mission & News images
* Reverted trade lane map visibility change
* Added improved reflections
* Added HD Startup screen & main menu logo
* Added HD system map
* Added dgVoodoo2 as optional Windows 10 compat patch
* Move the neural net bar 1 px up so the pixel line disappears
* Added Freelancer manual


## [[0.1] - 2021-07-28](https://github.com/BC46/freelancer-hd-edition/releases/tag/0.1)

### Changed
* Increased effect pool sizes
* Maximized draw distances for space structures, asteroids and effects
* Added support for scrolling through menus
* Added support for zooming in turret view
* Allow players to be called differently in Single Player
* Enabled NPC paths in multiplayer
* Include player ships in ship filter
* Make all planets spin slowly
* Make the first and last trade lane ring in a sequence visible on the nav map after encountering them
* Set maximum level in Single Player to 40
* Show the names of zones as you enter and leave them
* Show the remaining shield and hull points of the selected target as numbers
* 1.1 Patch
* All content from Jason's Freelancer Patch v1.25
* Direct3D 9 wrapper
* Disabled IPv6 adresses in Multiplayer Server list
* Fixed friendly jumphole in mission 6
* Fixed many typos, grammar mistakes, inconsistencies, and more, in the game's text strings
* Fixed several incorrect/missing names and infocards in EW05, EW06, ST01, ST03 and ST03b
* Improved infocards for unknown factions
* Improved Nomad group member names
* Make energy, shield, and hull bars solid
* No longer hide The Order and the Nomads from the factions list
* No-CD Patch
* Prevent intentional frame drops from occurring
* Removed cruise speed display limit
* Removed general speed display limit
* Show "Far" in contact list only at distances of 999.999K or higher
* Removed ESRB notice
* Removed EULA on first run
* Removed unknown graphics card warning
