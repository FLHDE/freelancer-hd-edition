# Changelog

## [[v0.7] - TBD](https://github.com/FLHDE/freelancer-hd-edition/releases/tag/0.7)

### Visual
- Replaced all starsphere textures with detailed vanilla upscales
- Made sure that solars use the same Kusari textures as the Kusari ships
- Added new HD asteroid textures that look more like the ones from vanilla Freelancer
- Restored the original diffuse color values for the Utility ships
- Added overhauled HD vanilla planet textures
- Added a Deband shader to the ReShade config to prevent banding; makes gradients appear smoother
- Made trade lane lights easier to see by increasing the size and making the green lights blink
- Smoothened edges of the weapon beam effects
- Added missing HD solar textures
- Added a new faction flag rift image for Rheinland and Kusari which is now used for news stories about conflicts between Rheinland and Kusari
- Replaced one of the Liner ship textures
- Recreated the Liberty and Order ship textures
- Added opacity to the glass bottles that are used during cinematics
- Added visual reactor effects to the Liberty Battleship and Osiris
- Added HD planet ring textures
- Updated the Flat UI Interface to V2
- Added additional Dark HUD interface textures
- Added HD vanilla-like trade lane textures
- Updated the vanilla radiation alert icon
- Set the default mip filtering mode to "linear" for higher quality texture rendering
- Added support for Anti-Aliasing and Anisotropic Filtering with the Vanilla Graphics API options
- Added an HD dust texture used by the mining ships effects
- Removed the custom capital ship explosion effects
- Improved the projectile and spark effect textures
- Added custom heavy fighter Civilian effects
- Restored original diffuse colors and transparency values for the Rheinland and Kusari ships
- Added an HD damage texture for Utility ships
- Updated the black-yellow metal texture for Jump Gates and Docking Rings to look more realistic
- Replaced outdated textures for the Kusari, Liberty, and Rheinland turrets
- Re-encoded the HD movie intros with more accurate colors
- Adjusted the cinematics TV and fade black effects to cover the entire screen on ultrawide aspect ratios
- Updated the window textures of stations to illuminate better
- Ensure the weapon platform turrets use HD textures
- Replaced the zoomed Nav Map texture with one that looks more like the vanilla Freelancer version
- Added an HD version of the vanilla Freelancer Nav Map background
- Reduced the default saturation value in the ReShade preset
- Improved the gas mine texture
- Improved all nebula textures by making them appear smoother and more vanilla-like
- Improved the green glass texture
- Made the nebula exclusion textures seamless
- Added new HD startup screens
- Added a visual cruise disruption effect to all ship engines
- Made the crater textures seamless
- Used the correct ice texture for asteroid bases
- Added HD cloaking and storm effects
- Decreased the gamma slider range from the options menu to allow for darker gamma values
- Converted all news and mission images to 32-bit to prevent them from being rendered with banding
- Updated the dust asteroid belt to remove groups of rocks that appeared to have been glued together
- Adjusted the default Gamma values in the ReShade preset when windowed or borderless windowed mode is used
- Updated the Nav map legend texture to be more detailed
- Added missing HD Dyson Sphere textures
- Made the Nomad mines and some Nomad City textures emissive
- Made the Manufacturing Platform window textures emissive
- Adjusted the order of ReShade shaders
- Adjusted the defaulted settings for the adaptive sharpening ReShade shader
- Improved the metal floor pads in the deck base interiors
- Added unused starspheres to the following systems: Omega-7, Sigma-13, Omicron Beta, Alaska, Omicron Minor, Nomad Lair, and St03 (Dyson)
- Removed out-of-place spots on the Planet Hiran texture
- Improved the destroy and assassination mission images
- Replaced the lava detailmap texture with a more detailed version
- Made the Neural Net map icon more detailed

### Audio
- Added unused engine sounds
- Lowered the default in-game volume to 50%
- Added unused Nomad hull hit sounds to Nomad ships
- Replaced the bugged interface and ambient sound checkboxes with optional volume sliders (offered as "Advanced audio options" in the installer)
- Added missing asteroid background audio in the Dublin Independent Gold Field
- Added missing ambient sounds to the East Leeds Smog Cloud
- Added race music to the Dublin racetrack
- Added test sounds for the interface and ambient volume sliders (part of the "Advanced audio options" feature selectable in the installer)
- Removed the following HQ music tracks for sounding too different from the retail versions: `anticipation_moref`, `awe_and_wonderment`, `dangerous_chase`, and `reveal_enemy_pos`
- Replaced the space, danger, and battle soundtracks with [new remastered versions](https://github.com/Freelancer-Sirius-Revival/FLSR/pull/497) made by [Worldwave](https://github.com/worldwave)

### Features
- [Installer updates](https://github.com/FLHDE/freelancer-hd-edition-installer/releases/tag/0.7)
- Allow the fixed NPC paths in Multiplayer to be used together with the option that removes the level requirements for ships and equipment
- Updated the [MultiIntro plugin](https://github.com/FLHDE/MultiIntro-Updated) to v0.2:
	- Built using a different compiler to prevent false positives from antivirus software
	- Allows for ini-based configuration
- Added [FL Save Convert](https://github.com/dmutlu/fl_convert), a tool that fixes save files suffering from incompatibilities related to starting story missions between versions 1.0 and 1.1 of Freelancer
- Added the Freelancer Global Server Workaround v1.0 (DLL version) to fix some servers not showing up in the server list
- Skip story cinematics (excluding space cutscenes) with the Esc key, like in the Freelancer Beta version
- Every time the main menu is displayed, re-pick a random menu intro, rather than sticking to the same one chosen at startup
- [flplusplus plugin](https://github.com/FLHDE/flplusplus) updates:
  - Improved timestamp logging format
  - Patched out "Failed to get start location" warning
  - Allow for font resource loading
  - Support LOD (draw distance) scaling based on arbitrary values
  - Improved the way how LOD scaling works
  - Added character detail scaling
  - Added effect detail scaling
  - Added asteroid draw distance scaling
  - Added a thn player
  - Fixed permission issues related to initialising the saves directory on some setups, causing the game to not launch
  - Allow for zooming in and out in the ship dealer preview window by scrolling with the mouse wheel
  - Configurable screenshots folder
  - Fixed PNG screenshots not working properly in windowed mode
  - Include the ship, base, and system name to every screenshot taken
  - Automatically regenerate Restart.fl on every launch to prevent startup crashes
  - Allow the FLSpew log to be redirected to the console (with colors)
  - Fixed a potential infinite loop in the code
- Included a copy of [FLHook](https://github.com/TheStarport/FLHook) version 4.0.33 for server-side enhancements
- Automatically load the required fonts every time Freelancer starts, effectively removing the need to install the fonts manually
- Show all group members on the Nav Map
- Group member positions on the Nav Map refresh every second
- Added the [FLSharp plugin](https://github.com/BC46/FLSharp) which introduces many unique features, quality of life improvements, and vanilla Freelancer bug fixes:
  - Fixed a bug that caused the lights of a trade lane to never turn back on after the trade lane gets disrupted.
  - Fixed a bug that caused waypoints to be cleared when the player reaches the coordinates in a different system.
  - Fixed a bug that makes the player ship a selectable target for creating waypoints on the nav map.
  - Makes the weapon flash particle effect play on all barrels instead of only on the first barrel.
  - Fixed a bug for the `one_shot_sound` not playing when firing multi-barrel launchers.
  - Fixed a bug for the ammo count not decrementing correctly when firing multi-barrel launchers.
  - Fixed a bug that caused the `use_animation` scripts defined in `weapon_equip.ini` to not work, i.e. enables weapon animations.
  - Allows a gun's `use_animation` script to be played on the parent (e.g. ship) if the animation name has a leading underscore (`_`); this leading underscore should **not** be included in the cmp file's animation name.
  - Fixed a bug that caused the client to not send the correct engine state of the player's ship to the server.
  - When playing on a server, ensure the client sends an update at least every 2 seconds, when engine kill has been toggled, and if after every 0.25 seconds the ship's orientation has been changed to some extent
  - Sets the minimum time between client-server updates to 40 milliseconds (or 750 ms while in a trade lane) such that jitter is prevented when playing with a high or inconsistent framerate.
  - Allow `ui_music_test` to play when the current background music has finished playing.
  - Added support for playing the `ui_interface_test` and `ui_ambiance_test` sounds when adjusting the respective sliders in the options menu; these sounds should be defined in `interface_sounds.ini`.
  - Automatically prevent crashes while adjusting the interface and ambience volume sliders in the event that the test sounds are not defined.
  - While adjusting the ambience and music volume, mute other background sounds accordingly so that the volume can be fine-tuned more easily.
  - Allows for up to 127 selectable resolutions in the general options menu; these are automatically determined based on the user's main monitor resolution.
  - Fixes the problem where the general options menu can't distinguish two different resolutions with the same width.
  - Makes the default resolution button in the general options menu select the user's main monitor resolution instead of 1024x768.
  - Prevent Freelancer from running with resolutions beyond the main display's capabilities in terms of resolution width and height.
  - Sets the user's main monitor resolution as the default in-game resolution (assumes widescreen support has already been added by JFLP and HUD Shift).
  - Instead of checking if the available resolutions are supported each time the option menu opens, do it only when needed (optimization).
  - Allows for the Ctrl + C hotkey to copy text from any Freelancer input box to the clipboard.
  - Allows for the Ctrl + V hotkey to paste text from the clipboard to any Freelancer input box.
  - Improved the slide-out animation for some UI buttons in the multiplayer menus.
  - When the "You must be on friendlier terms to purchase this." message is displayed in the Dealer menus, allow the exact reputation requirement to be printed too. Include `%d` in the IDS (S 1564, `resources.dll`) to make it work.
  - Fixed a bug that caused the Freelancer process to not always terminate after closing the game.
  - Automatically set rotation lock and auto leveling to the default value when launching to space to prevent control-related issues from occurring (e.g. mouse flight not working).
- Added a patch to prevent Countermeasure Droppers from being activated by right-clicking
- Added the [Rus Chat plugin](https://github.com/FLHDE/rus_chat) to allow Cyrillic characters to be typed in the in-game chat box
- Added an option to make NPCs use regeneratable shields as an extra challenge
- Updated the HUDless plugin to v1.02 which allows the HUD to be hidden while docked at bases too
- Added fully dynamic scaling of draw distances for space objects, effects, and character models
- Updated the Wheel Scroll plugin to v1.12 to add support for scrolling in the chat history and player list
- Added support for various weapon animations
- Added the [Hail plugin](http://adoxa.altervista.org/freelancer/plugins.html#hail) which enables the Hail key
- When the player does not meet the reputation requirements to purchase an item, show the exact reputation requirement

### Fixes
- Fixed widescreen-induced character-related issues in the story cinematics part of Missions 1 to 7 (e.g. characters suddenly appearing, disappearing, or not walking off-screen properly) for ultrawide resolutions (WIP)
- Fixed some minor bugs in several cinematics from Missions 1 to 7 like improper lip syncs and missing animations
- Fixed a voice line cutoff when an order member says "All set sir" during the Mission 13 Toledo landing pad scene
- Reduced the height of the lamp light texture in the planet New Berlin bar to prevent Blix's artifact effect from being hidden during the story cutscene
- Fixed an issue that caused the custom explosion effects to cut off (disappear) in some cases
- Prevented the Rheinland Battleship near Holman Outpost from Mission 7 to be visible when not flying to the waypoint quick enough
- No longer show blank ship control names in the options menu if the "English Text Fixes" option has been disabled
- Added missing tooltips for some ship controls in the options menu
- After the Mission 6 race is over, make the Q's Men ships fly away to prevent them from attacking the player
- Fixed an issue where a regular explosion effect would be shown instead of a Nomad explosion effect in some cases
- Added two missing green lights to trade lanes in some Border Worlds systems
- Fixed a visible cutoff of the Liberty Cruiser main gun effect
- Moved certain HUD maneauverboxes which are used by some bases up slightly to remove a pixel-line
- Fixed bugged space backdrops seen in the Helgoland and Aomori bars
- Perfectly centered the dealer window animations
- Changed the faction of Patrol Zeta 1 from Mission 2 to Navy to be consistent with the voice lines
- Gave the Navy fighters from Mission 3 a helmet in the comm window since they communicate in space
- Gave the Norfolk announcer from Mission 5 the correct Bretonia outfit and added a neuralnet accessory to his second comm
- Gave the Cali base announcer from Mission 7 an Outcast accessory
- Removed Juni's helmet from comm messages during Mission 4 where she was not in space
- Fixed Juni's face not being visible due to making a comm while taking the jump hole to Leeds in Mission 4 (slightly delayed the comm)
- Fixed Ozu saying that a Blood Dragon fighter was killed right at the start of the battle in Mission 8
- Gave Walker a Navy Cruiser captain accessory during Mission 3 and 4
- Gave Walker a helmet when he flies a Defender during Mission 11
- Gave two Liberty Navy pilots from Mission 11 a Liberty helmet (they were wearing Pirate helmets before)
- Gave helmets to LSF Delta and LSF Alpha during Mission 1B
- Fixed Battleship Schiller's cloak effect not always playing in Mission 7
- Renamed the Tain Asteroid Field in Edinburgh to Skye to make it consistent with the ini files and in-game rumors
- Fixed rumors referencing "Sierra Cloud" instead of Tahoe Ice Cloud
- Put Fischer from Mission 10 in a Rheinland Freighter with supplies to make his role consistent with the shooting script and in-game voice lines
- Updated Fischer's faction and character model to be Daumann during Mission 10 since this is how he identifies himself
- Fixed a Pirate Kusari news story using the Manhattan logo
- Fixed several Mission 5-6 news stories using the wrong flag rift image
- Added Niobium to the Barossa wreck to make it consistent with its infocard
- Fixed inconsistencies regarding the Charles Kane and Thomas Morrel wreck names
- Fixed some rumor texts missing a percent sign
- Replaced the incorrect damaged Kusari Battleship rear model with the correct version from the Freelancer Beta
- Recreated two Bretonia capship textures that were previously upside-down
- Updated Muleheim references in rumors to Mülheim
- Fixed inaudible audio dialogues during Mission 1 and Mission 13 if the sound effects were muted
- Removed a duplicate population entry from Yokohama's infocard
- Fixed a sun texture having non-square dimensions
- Fixed a Sigma-13 rumor incorrectly referencing a GMG fleet when it should have been a Rheinland fleet
- Adjusted the position and size of the Ronneburg Base exclusion zone to be consistent with other asteroid bases
- Fixed the position of Freeport 9's floating space domes
- Added missing repair and ship views on the Planet Gammu equipment dealer
- Fixed Leipzig Station having no base announcer
- Enabled phantom physics for mines (fixes the mine collision bug entirely)
- Fixed mouse snapping and stuttering in (borderless) windowed mode by including a fixed dinput8.dll file
- Added a DPI-aware manifest file to Freelancer.exe and FLServer.exe to resolve DPI-scaling issues (e.g. in-game resolution not looking right and the main monitor's resolution not being selectable)
- Corrected a stretched-out texture from `space_factory2`
- Fixed light positions and turret rotation limits of some space stations
- Fixed the solar plants of Nansei Research Station looking broken at great distances
- Improved the collisions of the pipes used in some research space stations
- Fixed some storyline NPC ships having incorrect loadouts
- Fixed the version number not being shifted to the right edge of the screen while the server list is displayed
- Fixed some heavy fighter and freighter ships having light fighter engine effects
- Fixed an issue that caused explosions to not deal full damage (or any damage at all) to large ships and bases
- Centered the load-save information window which is shown when selecting a save game
- Centered the "Hand over your cargo or I'll open fire" window
- Fixed Rheinland ships missing engine trails in the Mission 7 Sprague and Baxter cutscenes
- Lowered the volume of Juni's voice in the Mission 13 Toledo evacuation cutscene
- Shifted the trail alert and multiplayer lag icon to the left-side of the screen on widescreen resolutions
- Shifted the missile alert and radiation alert to the right-side of the screen on widescreen resolutions
- Fixed a skip in the spinning animation of the Manufacturing Platform model
- Centered the Nav Map background within the Nav Map window
- Updated the MP3 Codec Fix plugin to v1.12 to fix crashes that would occur very rarely on startup
- Fixed the Unknown Planet in St03 (Nomad Story system) having its size and atmosphere range swapped
- Updated JFLP.dll to version 1.27 to fix the ratio during cinematics and level detail transitions for widescreen
- Fixed the Schwefelnebel lava field in Dresden having wrong exclusion zones
- Fixed Nago Station having no asteroid exclusion zone
- Removed reputation assignments from all Nav Buoys to prevent NPCs from firing at them
- Added missing infocards to Hazard Buoys in the Texas system
- Corrected sun death zone parameters in Bering, Hudson, Manchester, Leeds, and California
- Fixed NPCs telling two different rumors about Trent working for Juni too early during the storyline
- Fixed NPCs telling a rumor about King waiting for you in Manhattan when he is already in the same room as you
- Fixed a bug that caused Destroy Installation missions to sometimes have a Destroy Contrabrand icon on the job board
- Fixed a Freeport 7 cutscene dialog about the incoming torpedoes which did not play properly
- Adjusted the asteroid field bands of the Sabana Fragments, Mahon Dust Field, Alsterfeld, and Krüger Lavafeld to better match their contents
- Fixed the Asteroid Miners near Leipzig Station mining asteroids of the wrong type
- Fixed a Utility ship texture having only one mip texture, causing it to look pixelated at far distances
- Vertically centered the character info text in the Load Game menu
- Prevent the buttons in the Load Game menu from stuttering during the slide-out animation
- Added missing exclusion zone entries in Tau-23 and Omega-41
- Removed a duplicate exclusion zone in Tau-31
- Fixed Nome Base having no exclusion zone
- Fixed an issue that caused the Trade Lane exclusion zone in Tau-23 to not work
- Fixed the neural net objective star animation not starting from and returning to its original position (previously assumed the 4:3 offsets)
- Properly centered all the Neural Net buttons
- Fixed the Fürstenfelde Cloud infocard mentioning that the Briesen Mining Facility is operated by the IMG instead of Daumann
- Fixed some rumors referring to the prison stations as "prison liners" or "prison ships"
- Fixed the Mission 8 Weapon Platforms around Yukawa Shipyard having the wrong faction assigned
- Fixed a bug that caused the clickable area of the main menu buttons to be incorrect on higher resolutions
- Updated the Nomad asteroids seen from the Ruiz Base bar to no longer be of mixed type
- Prevent the player from possibly being hostile to Shinkaku Station in Mission 7 which previously resulted in possible softlocks
- Rerouted incorrect patrol paths in the California system
- Changed the faction of the Mission 1 transports to Universal Shipping to be consistent with their USV tag
- Removed the word "Transport" from the Mission 1 transport names to ensure the names fit in the contact list
- Force-disabled maximized windowed mode to prevent micro-stuttering when the legacy Graphics API is enabled
- Updated the MP Rep plugin to v1.03 to fix the background flickering that would occur on some setups when the ship dealer window is opened
- Fixed Hideo Yokoyama and Hiroshi Yamazaki at Kabukicho Depot selling information about Ohashi Border Station but revealing a different base on the Nav Map after accepting the offer
- Applied a fix to prevent sudden frame drops from occurring while flying in space
- Added a missing visit flag to one of the Hosho Maru Escort wrecks in Omicron Beta
- Fixed the position of Gas Miner Ogashawa's station parts to no longer float disconnected in space
- Replaced a bugged patch that caused character models to sometimes miss their head during cutscenes on some setups
- Adjusted the positions of the alert icons such that they do not overlap with the Neural Net icons in Multi Player
- No longer show the target wireframe when the HUD is hidden
- Fixed the Zone plugin displaying the nebula names in Omicron Theta twice
- Fixed the Weapon Group buttons being incorrectly positioned on aspect ratios other than 16:9
- Fixed Blood Dragons NPCs on Ainu Depot telling rumors which belonged to the Golden Chrysanthemums
- Fixed the Freeport 5 bartender telling Corsair rumors instead of Zoner rumors
- Fixed the Spew warning "Fix NomadRGB1_NomadAlpha1 texture verify failed: nomad surface" being logged when visiting the Nomad City system
- Added a missing news vendor to Battleship Osiris in Omicron Minor
- Fixed some end-game related news stories and rumors not always showing up
- Fixed a softlock that would occur if the player docked too early at Battleship Osiris during Mission 10
- Fixed the large red suns having lens flare shapes that didn't match the sun's shape
- Adjusted the gasminer3 intro script to fix the ships not suddenly appearing and disappearing on ultrawide resolutions
- Fixed some Nomad Fighters in Mission 12 having an incorrect NPC class
- Fixed wrong fuse hardpoints for the Rheinland Battleship explosion effects
- Removed duplicate lights and added missing lights to the `space_mining01` stations
- Fixed Hakkera having outdated hardpoint placements on his Dagger during the Mission 9 Tekagi cutscene
- Fixed startup crashes that occurred due to missing sections in the custom resource DLLs (re-added them)
- Fixed a texture used in the Planet Cambridge Commodity Dealer having wrong dimensions
- Fixed fan animations not playing in the New Berlin Commodity Dealer, Westfalen Bar, and New Tokyo Bar
- Fixed Mactan Weapon Platforms sometimes firing at Juni during Mission 4 despite being friendly
- Added a missing neuralnet eye accessory to the Mactan announcer during Mission 4
- Fixed spacings, grammar, and punctuation in some of Freelancer's text strings
- Fixed inconsistencies in the Starflier, Startracker, and Legionnaire ship infocards
- Fixed a Blood Dragons rumor missing a large chunk of its original text
- Fixed typos and incorrect information in several rumor texts
- Fixed some general capitalization issues in Freelancer's text strings
- Enforce correct quotation marks and apostrophes in all of Freelancer's text strings
- Fixed Prison Station Mitchell's infocard mentioning that it is being operated by the LSF (the base is actually owned by the Liberty Navy)
- Updated a Mission 1 help text to mention the correct Trade Lane name
- Removed a forced line break in one of Mission 1's help texts
- Fixed the Badlands asteroid field refering "Bedford" instead of Benford
- Fixed Planet Breisgau having a bright spot on its surface
- Fixed Battleship Osiris having no loadout at all at the start of Mission 11
- Applied a patch to ensure Freelancer always assumes the highest possible machine speed (prevents low quality video options from being applied by default on some systems)
- Fixed the ship glass materials not rendering correctly on modern DirectX versions without using dgVoodoo
- Lowered the death zone damage of the Unknown Planet in St03 to make it consistent with all other planet death zone damage values
- Fixed a crash that would occur if a vanilla client docked at a base with robot dealers on a server running HD Edition
- Added a missing Equipment Dealer button navigation button on the Planet Gammu bar
- Fixed the Spew warning "VMESH: couldnt find material 4208234010" being logged when visiting the Nomad Lair system
- Fixed a material name collision that caused Civilian and Utility ships to sometimes have the wrong cockpit glass color
- Fixed a material name collision that caused the Kusari ships to sometimes have the wrong texture colors
- Fixed some NPCs having their dialogue references to Border Station Pirna and Vogtland swapped
- Spawned Von Claussen and King in the first Mission 13 battle (they launched to space during the cutscene but were nowhere to be found in space)
- Fixed Gamma 1 in Mission 3 wearing a male helmet instead of a female helmet
- Fixed an Armored Transport flying backwards in the Cambridge Cityscape background
- Fixed NPCs saying the first number of their call sign twice when requesting to dock
- Fixed some weapon animations being looped incorrectly or oddly timed
- Fixed an issue that caused the weapon platform turrets to possibly not appear properly
- Fixed a bug with low resolution news and mission images on some systems
- Reduced the water planet intro script duration to prevent the suns from appearing to "turn off" for a few seconds right when the script ended

### Misc
- Modified the Tekagi Transport loadout from Mission 8 such that it is consistent with what is being said in the voice lines
- Ensure the playerer ship is not invulnerable to the gas pocket field from Mission 7
- Show the custom version number in the main menu even if the "English Text Fixes" option has been disabled
- Show hidden infocards for Juneau and Ithaca
- Updated the Zone plugin to v1.20 to allow capitalized entered and leaving zone messages
- Added a ring to Planet Kitadake since its infocard specifies that it has one
- Added cloud effects to Planet Fuji's ring
- Make sure the Blood Dragon wing members from mission 9 do not self-destruct too early
- Relocated out-of-place weapon platforms in Mission 11
- Ensured the in-game Freelancer: HD Edition credits can be seen even if the user disabled the "English Text Fixes" option
- Reverted the detonation distance of mines to the vanilla values
- Ensure the Freelancer: HD Edition version number is displayed in the main menu even if the "English Text Fixes" option is disabled
- Added Civlian engine effects to the Civilian ships
- Added an asteroid band to Planet Harris' exclusion zone
- Added an asteroid band to Torres Ice Crystal Field in Tau-37
- Always bypass EULA dialogs when launching Freelancer.exe and FLServer.exe
- Moved three weapon platforms in Omega-41 10K up to be on the same plane as everything else in the system
- Increased the turret zoom scroll speed
- Made the Lower Unknown asteroid field visible on the nav map
- Made the Alaska nebula visible on the nav map
- Added asteroid billboards to the Kyoto Base exclusion zone to give the illusion of a denser asteroid field around the base
- Added an HD version of the Freelancer: HD Edition icon which is now used for the Freelancer executable
- Changed the mouse hover animation of the load-save menu buttons (load game menu) to no longer blink but rather have a smooth color transition, like most other in-game buttons have
- Updated the Territory plugin to version 1.03
- Replaced [zlib](https://github.com/madler/zlib) version 1.2.3 with [zlib-ng](https://github.com/zlib-ng/zlib-ng) version 2.2.4 for significantly faster compression and decompression speeds
- Updated [DxWrapper](https://github.com/elishacloud/dxwrapper) to v1.3.7700.25 (includes lighting bug fix, detail map fix, and more Anti-Aliasing options)
- Included a copy of [dgVoodoo](https://dege.freeweb.hu/dgVoodoo2/dgVoodoo2/) v2.86.2 (recommended for NVIDIA and Intel GPU users)
- Updated [ReShade](https://reshade.me/) to version 6.4.1 (development build)
- Removed the [Microsoft Visual C++ Redist](https://learn.microsoft.com/en-us/cpp/windows/latest-supported-vc-redist?view=msvc-170) dependency from all included DLLs (only exception being [FLHook](https://github.com/TheStarport/FLHook))
- Enabled the Console plugin by default
- Reversed the scrolling directions of the Turret Zoom plugin
- Added asteroid bands to sun exclusions in whole-system-asteroid fields
- Made Planet Hikari spin
- Gave all Trade Lane Rings a name such that they are no longer unnamed in the infocard window
- Removed superfluous "maximum sound distance" and "sound detail level" sliders in the options menu
- Decreased the default mouse sensitivity to 35%
- Increased the default maximum sound elements to 120
- Adjusted the range of the maximum sound elements to 32-120
- Removed sun spines that JFLP added to the large red suns (e.g. Red Giant and Red Dwarf) to preserve the vanilla Freelancer look
- Removed the "practice" debris field in the New York system for having no apparent reason to exist
- Added a Cruise Disrupt Missile Launcher to King's loadout during Mission 2 since he mentioned firing a Cruise Disruptor at Ashcroft
- Updated the name and infocard of the modified Vengeance Mk III guns to be named Vengeance Mk IV instead
- Updated the loadout of the Mission 11 Navy Satellite fighters to use modified Vengeance Mk III guns instead of Nomad Prototypes for voiceline consistency
- Updated the names of the Prototype Elite fighters in Mission 11 to be consistent with the shooting script
- Made all story dialogue audio mixes play on the voice channel instead of the sound effects channel
- Renamed California Minor to Planet California Minor to be consistent with mission texts and voice lines
- Updated the message which you get after failing to destroy the Weapon Platforms in Mission 8 to include that they must be destroyed in time to avoid confusion
- Disrupt the player's cruise when the Transport convoy gets attacked in Mission 8
- Re-added the `vnpc` lines in the new player file for Gammu and Primus which were removed by JFLP (makes it so that the people at the bar know who you are the first time you talk to them)
- Enabled the Liberty Cruiser main gun firing animation
- Enabled the firing animation for Countermeasure Dropers and Mine Droppers
- Made the hailing Blood Dragon fighter come closer to the player when entering Chugoku in Mission 8
- Added a clear error message when Freelancer failed to initialize the saves directory

<!-- continue starting Feb 12, 2025 https://github.com/FLHDE/freelancer-hd-edition/compare/0.6...main -->

## [[v0.6] - 2022-08-27](https://github.com/FLHDE/freelancer-hd-edition/releases/tag/0.6)

### Visual
- Added all remaining HD Base Interiors & Planetscapes
- Added HD vanilla starspheres for the following systems/regions:
	- Liberty
	- Bretonia
	- Rheinland
	- Unknown systems
	- Independent Worlds
	- Tau-37
- Added HD oceans
- Added HD skies
- Added improved Earth and water planet textures that look more like the originals
- Added HD vanilla ship textures that are more faithful to the originals
- Improved ship window textures
- Added improved HD station number textures that have a higher resolution
- Improved the Nomad asteroids
- Improved the Planet Pittsburgh cliff textures
- Added HD sun effects that look more like the originals
- Added a new set of alternative icons
- Improved the commodity icon
- Added higher resolution space cursor textures
- Improved cargo pod texture clarity
- Added HD mine and spike textures
- Character model and props changes:
	- Compressed textures to save space and reduce load times
	- Fixed artefact on Orillion's lip
	- Fixed ridge on the green glass
	- Removed orange stripes from Tobias' mustache
	- Improved several textures which were previously not as good as they should've been
- Denoised jump effect texture
- Added improved lava asteroids
- Added improved Badlands obsidian and mined asteroid textures
- Added HD organism effect textures
- Added more general improved HD effects
- Added optional Adaptive Sharpening
- Ensure all menu intros use space backdrops with stars
- Added the unused Neutron Star effect to Omega-41
- Added new optional explosion effects
- Improved the Mission and News vendor images

### Features
- [Installer updates](https://github.com/FLHDE/freelancer-hd-edition-installer/releases/tag/0.6)
- Added more pitch variations for the NPC chatter as an option
- Added the DelayDisplay plugin which shows a cooldown timer for weapons that require ammunition
- Added the MultiIntro plugin which shows an unused 4th menu intro
- Allow the player to visit the lab on Planet Toledo

### Fixes
- Fixed an issue that caused the debris explosion trail effect to stretch out tremendously
- Updated the faction for the Alaska -> New York jumpgate to prevent it from being hostile in mission 11
- Added an engine to Battleship Arizona so it can properly move towards the Alaska -> New York jumpgate during mission 11
- flplusplus plugin changes:
	- Fixed an issue that caused Freelancer to crash when launching on some Windows installs
	- Improved timestamp logging
	- Removed sound-related patches that previously caused issues
- Assigned correct description names to the nebulae in Omicron Theta
- Corrected numerous German typos and inconsistencies in the English text resources
- Fixed typos and newline issues in the neural net and interface text resources
- Fixed seams in ST03b (Dyson Sphere system) starsphere
- No longer overwrite the neural net and Pirate voice audio files with English versions by default
- Fixed black space backdrops in Kensington and Waterloo station bars
- Applied general fixes to the space backgrounds in numerous bar scripts to ensure they represent an accurate view of the space the bases are in
- Prevented the Valkyrie from landing on the same position as the Anubis in one of the Planet Toledo mission cutscenes
- Reverted a change regarding asteroid draw distances that caused player ships to not be able to collide with some asteroids
- Corrected Frankfurt's nebula color on the nav map
- Ensure Juni will always say her last voice line in New York during mission 4
- Make Ozu and the Blood Dragon escort say something before and after encountering the first hostile contacts in Tohoku during mission 9
- Made the edges of the job board icon softer
- Ensure Ozu and Hakkera's ships use the correct engine effects during the Tekagi cutscene in mission 9
- Updated the MP Rep plugin to fix a crash that would occur on some Windows installs when the equipment or commodity dealer window is opened
- Ensure the correct help text is shown for the Change View button
- Fixed an issue that caused one of the uncloaking Rheinland ships from mission 5 to attack the player too early sometimes
- Updated the orientation of the Freeport station in the gasminer3 intro script so it's no longer upside down
- Fixed an issue that caused Benno Henning on Planet New Berlin to sometimes show an empty bribe dialog
- Fixed the double spaces issue in Zoner pilot names
- Centered the Scan Cargo window
- Replaced outdated jumphole infocards
- Removed a duplicate news entry titled "RHEINLAND ATTACKS LIBERTY!" from mission 9
- Use correct logos for news items from Los Angeles and Crete
- Made alarm (klaxon) quieter at the end of the final Battleship Osiris story cutscene

### Misc
- Compressed nav map textures for faster load times
- Compressed several Manhattan base textures for faster load times
- Removed unused and unedited texture/configuration files
- Updated ReShade to version 5.3.0
- Ensure the user sees some explanations about ReShade on first launch
- Check "Inherit Color Profile" option in the default dgVoodoo config
- Reduced time between weapon list refreshes to 0.1 seconds
- Increased time between contact list refreshes to 1.5 seconds
- Added a Tonemap shader which will be used when the fullscreen windowed option is enabled
- Renamed "GMG Station Glorious" to "Mining Station Glorious"
- Added an ambient sound to the lab on Planet Toledo
- Changed icon of the track rings in the Dublin system to trade lane rings
- Added a description for the Racetrack Buoy in the Dublin system
- Decreased saturation and darkness for the ice white blue planet
- Changed the "WEAPONS OFF-LINE" text to "WEAPONS OFFLINE"
- Renamed "AMBIANCE" to "AMBIENCE" in the sound options
- Renamed "CUT SCENE" to "CUTSCENE" in the video options
- Revived the unused water planet menu intro from the original game files
- Updated the in-game version text so Freelancer: HD Edition's version number is displayed too
- Reduced the draw distances of the lower Unknown asteroid field
- Added the missing for sale ship in Omicron Minor Battleship Osiris
- Disabled encryption when save game files are created and saved
- Adjusted next and previous sub-target button positions slightly
- Removed an unedited icon file and several unused ReShade effects


## [[v0.5] - 2022-01-21](https://github.com/FLHDE/freelancer-hd-edition/releases/tag/0.5)

### Visual
- Added HD Nomad Lair textures
- Added HD Dyson Sphere textures
- Added updated version of the HD Character Models addon (tremendously improved character textures over the previous version)
- Added support for native Anti-Aliasing and Anisotropic Filtering
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
- Improved the zoomed map by adding more, smaller stars to it
- Improved texture quality of some original ship textures
- Adjust colors slightly in the Ew05 and Ew06 (both Unknown systems) starspheres
- Added updated Maximized Draw Distances addon (enables high quality sphere rendering)
- Include a copy of ReShade with a basic, optional config (includes HDR, increased saturation, and bloom)
- Added optional player engine trails
- Added an HD jump effect

### Audio
- Compressed HQ Music to 320 kb/s (fixes issues with Freelancer sometimes not looping or playing the music)
- Adjusted the cutscene music attenuation according to the differences in volume between the standard and HQ music

### Features
- Made intro skips optional
- Made jump tunnel time adjustable
- Made the Dark HUD optional
- Made the Flat Interface optional
- Add possibility for users to choose a separate save game folder
- Increased max number of characters in the chat input box (allows for longer messages to be typed)
- Increased the max number of chat lines in the chat history window
- Made both Unknown systems appear on the nav map after visiting them
- Made the Text Strings Revision patch optional
- Added the Territory plugin with a custom config; shows which region of space the current system is in
- Added the Ranks plugin with a custom config; associates a rank with the playerlevel
- Added the HUDless plugin which allows players to hide the HUD
- Added optional no-story (open single player) modes:
	- Normal: the player starts on Manhattan with a basic loadout and a default reputation
	- Pirate: the player starts on Rochester with a basic loadout and an inverted reputation
- Ensured Bounty Hunter and Corsair ships have Corsair engines (like the NPCs do)
- Added "HDE" to the version text in the main menu to indicate that the Freelancer: HD Edition installation has succeeded
- Added an alternative base interior lighting fix
- Added flplusplus; allows for configurable draw distances, PNG screenshots, and more

### Fixes
- Replaced Liberty Defender with Juni's Defender in Kress cutscene
- Adjusted the HQ reveal and exposition music so it has the same length as the original
- Reduced vanilla icon sizes in contact list so they can no longer overlap
- Fixed fog colors on the New York nav map
- Inverted the HD Moonblu Planet's color so it looks more like the original
- Ensured the Rowlett's Revenge weapon drop has the correct string reference (it used to be called Nomad Prototype)
- Reduced LODCurve in the dyson_city hypergate ale effect to ensure it doesn't look too dense
- When both the Dark HUD and Adv Wide HUD have been selected, the player will now actually get both
- Added a visit tag to the gravity buoy in Tau-37 so it can no longer be selected in the contact list
- Removed a purposeless hazard buoy on the outer edge of Sigma-17
- Centered the nav map animation in 16:9
- Fixed seams in some Bretonia starspheres
- Removed silence in the zone_nebula_nomad ambient sound
- Made the fog in the Liberty Dreadnought deck start right away, instead of 30 seconds later
- Moved Armored Transport in mission 13 cutscene so it's no longer on the same landing pad as the Anubis
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
- Applied engine fixes in the gasminer3.thn main menu script
- Disabled the D3D8 error spam in FLSpew (Freelancer log)
- Fixed uneven edges in HD main menu Freelancer logos
- Set the mine detonation distance to 8 (mitigates the mine collision bug)
- Added missing audio files from JFLP v1.25; fixes some incorrect NPC chatter
- Applied several vanilla compatibility hotfixes (prevents crashes when playing on vanilla servers)

### Misc
- Increased asteroid field fill distance
- Multiplied the maximum docking initiation distance by 5x
- Reduced time between contact list refreshes to 0.5 seconds
- Allowed the current worth to be shown in Multiplayer
- Replaced manual hex edits with the Factions plugin for making several factions appear in the faction list
- Added a trail-less version of the CSV engine (unused)
- Reverted the solid gauge bars (still made the gaps a bit smaller than the original)
- Added the latest version of HUD Shift which centers all windows correctly
- Replaced Freelancer.exe's application icon with a Freelancer: HD Edition icon
- Replaced d3d8to9 with DxWrapper
- Changed dgVoodoo2 version to 2.54
- Added an FLDOCS folder with useful Readmes and documentation
- Include documentation regarding manual hex/binary edits for Freelancer: HD Edition
- Compressed R8G8B8 textures to DXT1 and DXT5 (saves space)
- Dropped support for installations via Freelancer Mod Manager


## [[v0.4.1] - 2021-08-25](https://github.com/FLHDE/freelancer-hd-edition/releases/tag/0.4.1)

### Visual
- Added alternative effects

### Fixes
- Fixed size of 16:9 Freelancer logos

### Misc
- Updated zlib.dll for better performance in Multiplayer
- Added support for installations via [a dedicated installer](https://github.com/FLHDE/freelancer-hd-edition-installer)


## [[v0.4] - 2021-08-21](https://github.com/FLHDE/freelancer-hd-edition/releases/tag/0.4)

### Visual
- Added HD Liberty news logo
- Added HD Nav map objects
- Added HD explosives and missile effects
- Added HD Ships
- Added HD Effects
- Added HD Bases
- Added HD Planets
- Added HD Cockpits
- Added HD Nebulae
- Added HD Asteroids

### Fixes
- Improved HUD fixes for 1440p/4K screens
- Fixed contact list view icon
- Fixed trade request button in MP
- Fixed banding in Tau-37 starsphere
- Added MP3 Codec Fix

### Misc
- Added support for running multiple instances of Freelancer on the same machine
- Added more sound and general options


## [[v0.3] - 2021-08-15](https://github.com/FLHDE/freelancer-hd-edition/releases/tag/0.3)

### Visual
- Added HD Character Models
- Updated jump effect
- Improved reflections
- Improved system map
- Improved universe button on nav map
- Fixed starsphere & news images banding

### Features
- Added console plugin
- Added Advanced Widescreen HUD

### Fixes
- Added missing text fix for 4K users
- Realigned HUD so everything is properly centered

### Misc
- Updated HUD Shift
- Improved Freelancer Mod Manager install script
- Updated dgVoodoo


## [[v0.2] - 2021-08-07](https://github.com/FLHDE/freelancer-hd-edition/releases/tag/0.2)

### Visual
- Added Flat Interface
- Added HD Universe map
- Added HD Starspheres
- Added HD Mission & News images
- Added HD Startup screen & main menu logo
- Added HD system map
- Added improved reflections

### Audio
- Added HQ Music

### Features
- Added dgVoodoo2 as optional Windows 10 compatibility patch

### Fixes
- Added bar script fixes
- Added 16:9 planetscape fixes
- Reverted trade lane map visibility change
- Moved the neural net bar 1 pixel up so the pixel line disappears

### Misc
- Added Freelancer manual


## [[v0.1] - 2021-07-28](https://github.com/FLHDE/freelancer-hd-edition/releases/tag/0.1)

### Visual
- Maximized draw distances for space structures, asteroids and effects
- Increased effect pool sizes

### Features
- Added support for scrolling through menus
- Added support for zooming in turret view
- Allow players to be called differently in Single Player
- Show the remaining shield and hull points of the selected target as numbers
- Enabled NPC paths in multiplayer
- Made all planets spin slowly
- Show the names of zones as you enter and leave them
- Added all content from Jason's Freelancer Patch v1.25
- No-CD Patch
- 1.1 Patch

### Fixes
- Removed unknown graphics card warning
- Disabled IPv6 addresses in the Multiplayer Server list
- Fixed friendly jumphole in mission 6
- Fixed many typos, grammar mistakes, inconsistencies, and more, in the game's text strings
- Fixed several incorrect/missing names and infocards in EW05, EW06, ST01, ST03 and ST03b (unknown and story systems)
- Improved infocards for unknown factions
- Improved Nomad group member names
- Prevent intentional frame drops from occurring

### Misc
- Include player ships in ship filter
- Make the first and last trade lane ring in a sequence visible on the nav map after encountering them
- Set maximum level in Single Player to 40
- Direct3D 9 wrapper
- Make energy, shield, and hull bars solid
- No longer hide The Order and the Nomads from the factions list
- Removed cruise speed display limit
- Removed general speed display limit
- Show "Far" in contact list only at distances of 999.999K or higher
- Removed ESRB notice
