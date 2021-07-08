			    Jason's Freelancer Patch
				  Version 1.25


This is a patch to correct many things in the original game.  It builds on the
work of Louva-Deus (the SDK/QuickFix) and Buck Danny (the Unofficial FL SP 1.4
patch).  Only the changes I have made are described; changes made by SDK 1.3
are not described (but those from 1.5b15 are); changes made by Buck Danny are
described in "Patch description 1.40.txt" (or .doc) - please read that before
continuing.  Unfortunately, some of the changes might introduce incompatibil-
ities with some mods - see mods.txt for a list and necessary changes.  It will
also not work with unpatched servers.

Servers running JFLP wanting to remain compatible with clients that do not, need
to undo one of the changes.  In DATA\MISSIONS\mbases.ini, replace every
	Scripts\vendors\robot_commtrader_fidget.thn
with
	Scripts\vendors\li_commtrader_fidget.thn
to prevent the client from crashing.


The following changes described in the 1.4 patch have been reverted:

* Li01.ini in the folder \Data\Universe\Systems\Li01\
Ithaca: since it's not dockable, leave it off the Nav Map.

* Rh01.ini in the folder \Data\Universe\Systems\Rh01\
Oder Shipyard: even though the infocard says it's a Daumann base, the bartender
and jobs are Military, so leave it owned by them.

* Shiparch.ini in the folder \Data\Ships\
Spaces in the Kusari surprise fighter: the .cmp file does indeed have those
spaces (not a fault of bini).

* Weapon_equip.ini in the folder \Data\Equipment
Transport turrets: leave as non-lootable.


See jflp125.txt for what has been updated since JFLP 1.20.


The general format of the patch descriptions is:

    PATH\file
    - [nickname:] change (reason). [Source]

where "PATH\file" is the file (or files) being changed; "nickname" identifies
the section (or sections) where the change occurs; "change" indicates what has
been done different; "reason" explains why the change occurs (if not obvious);
and "Source" indicates how the change was found.  If source is absent, it means
I found the change myself; [S] indicates it was found by FLScan 1.3; [*] by SDK
1.5b15; [E] by FL Error Checker 1.011; {S} indicates the change removes its
FLSpew.txt warning; and {D} indicates the change occurs due to
"deform::start_aim()" warnings.

All unpacked .ini files
- use six significant digits (not six decimals) and engineering notation (eg:
  "0.000000" simply becomes "0"; "27.799998" becomes "27.8"; "57148.132813"
  becomes "57148.1"; "132000000.000000" becomes "132e6"; and
  "1000000015047466200000000000000.000000" becomes "1e30").

DATA\concave.ini
DATA\FX\fuse_li_battleship.ini
DATA\FX\MISC\tlrtube.3db
DATA\INTERFACE\HUD\hudtarget.ini
DATA\MISSIONS\factionsets.ini
DATA\MISSIONS\mshipprops.ini
DATA\MISSIONS\ENCOUNTERS\new_encounter_example.ini
DATA\MISSIONS\M01A\mission1 readme.doc
DATA\MISSIONS\M01B\mission1 readme.doc
DATA\RANDOMMISSIONS\solar_pan.thn
DATA\SCRIPTS\BASES\li_01_cityscape_gamestart_01.thn
DATA\SHIPS\BORDER_WORLD\BW_VHEAVY_FIGHTER\bh_vheavy_fighter.cmp
DATA\SOLAR\ASTEROIDS\shapes.ini
DATA\SOLAR\BLACKHOLE\bh_flute4.pte
DATA\SOLAR\PLANETS\PLANET_ICE_GREY\planet_ice_grey.mat~tmp1
DATA\UNIVERSE\SYSTEMS\INTRO\intro.ini
- deleted (not actually used).

DATA\cameras.ini
- renamed [ChaseCamera] to [ThirdPersonCamera] (former doesn't exist).

DATA\constants.ini
- deleted [AsteroidConsts] section (not used). [E]

DATA\initialworld.ini
- replaced the non-breaking spaces with normal spaces, deleted the duplicated
  comments and aligned them (tab size of 8);
- added locked_gate 3051850763 (Ku07_to_Ku06_hole) (for completeness);
- deleted npc_locked_gates 2382233355 (???), 2569281742 (???), 2974773122
  (Ew01_to_Li01_hole), 2942653837 (Li04_to_Bw05_hole), 3163920771
  (Bw05_to_Li04_hole) and 2868648589 (Li01_to_Ew01_hole) (they don't exist).

DATA\petaldb.ini
- restored ", solar\ast_badlands.mat" to the end of
  "prop = solar_badlands_dynamic, solar\asteroids\models\badlands_dynamic.3db"
  (I guess the SDK removed it because it looked out of place, but it does get
  read, although I didn't determine if it actually has any effect);
- replaced spaces with underscores in "Barrel_Van Clausen" & "Cocktail Glass"
  (for consistency, but they're not used anyway). [*]

DATA\AUDIO\nnvoice.utf
DATA\AUDIO\voices_recognizable.ini
- created dummy NNVoice sounds for dock_granted (0x8C2C1A08),
  dock_denied_hostile (0xBCED6E0A), dock_denied_locked (0x87D89A80), freeflight
  (0x8C47760A), formation (0xA8C57941) and anomaly_detected (0x83F4AAC6)
  (removes warnings "Voice message 2351700488/3169676810/2279119488/2353493514/
  2831513921/2213849798 is invalid for voice 3073825485"). [Buck Danny, me & E]

DATA\AUDIO\pilot_f_ill_m02.utf
DATA\AUDIO\pilot_f_ill_m02a.utf
DATA\AUDIO\pilot_f_ill_m02b.utf
- Replaced "Preparing to" with another "I'm taking on" (they should have been
  "Preparing to take on").

DATA\AUDIO\soundcfg.ini
- deleted default_loop_style and default_reverb lines (not used). [E]

DATA\AUDIO\voices_mission??.ini
- deleted all script lines from extended voices. [E noticed missing nickname,
  turns out script values are ignored when the voice is extended]

DATA\AUDIO\voices_mission12.ini
- timer: deleted line "script = SC_MLHEAD_MOTION_WALLA_CASL_000LV_XA_%". {S}

DATA\CHARACTERS\newcharacter.ini
- deleted thumb value. [E]

DATA\COCKPITS\BRETONIA\b_freighter.ini
DATA\COCKPITS\CORSAIR\bw_fighter.ini
- the final "tether" value was separated by comma, not point. [*]

DATA\EQUIPMENT\commodities_per_faction.ini
- deleted all the zeros (only the commodity name is read).

DATA\EQUIPMENT\engine_good.ini
- the patch kept the original BINI file, which FLScan decompresses to a zero-
  length file, which causes both it and FL to generate a warning.  The file now
  contains a single comment, to appease both. [S]

DATA\EQUIPMENT\goods.ini
- bh_hull, bhe_hull, bhe2_hull, bwe2_hull, coe_hull, coe2_hull, cof_hull,
  gf2_hull, gf4_hull, gf5_hull, gf6_hull: used appropriate hull names.

DATA\EQUIPMENT\market_ships.ini
- only keep the entries for the ships actually being sold;
- deleted Br02_04_base section (doesn't have a ship dealer).

DATA\EQUIPMENT\misc_equip.ini
- ge_s_tractor_01: rounded up the fractional color values. [E]

DATA\EQUIPMENT\weapon_equip.ini
- Added "debris_type = debris_normal" and
  "material_library = Ships\nomad\nomad_fx.txm" to every [CloakingDevice]
  (removes some warnings: "Couldn't find debris_type[0x0]" and "texture
  verify failed: nomad surface: NomadRGB1_NomadAlpha1").

DATA\FX\effects.ini
- added missing "vis_effect" line to pi_pulse_02_proj & pi_pulse_03_proj (adds
  the visual effect to the Rapier and Tizona Del Cid). [Lancer's Reactor]

DATA\FX\fuse.ini
- mission02_burning_trasport_fuse: renamed trans_mid_lod1 to trans_rear_lod1,
  copied trans_port_eng_lod1 section to trans_star_eng_lod1; [E found mid]
- lifter_death_fuse: deleted lifter_clamp02_lod1 group. [E]

DATA\FX\fuse_suprise_solar.ini
- appended "6" to "HpWeapon0";
- added HpTurret07/8/9 to fuse_suprise_drop_loot (drops additional loot).

DATA\FX\jumpeffect.ini
- jump_effect_bretonia, jump_effect_hole: changed jump_out_tunnel_time and
  jump_in_tunnel_time to 0 (simply reduces the jump gate/hole transition time).

DATA\FX\sarma_clear.txm
- new file for rtc_rh03_sun below.

DATA\FX\MISC\misc_ale.ini
- rtc_rh03_sun: a properly-colored sun for Baden-Baden. [mknote]

DATA\FX\MISC\rtc_rh03_sun.ale
- new file for rtc_rh03_sun above.

DATA\FONTS\rich_font.ini
- added "font = 8, Arial Unicode MS, 23", used by super- and subscripts.

DATA\INTERFACE\hud.ini
- deleted object value in [Receiver]. [E]

DATA\INTERFACE\HudShift.ini
- defines interface elements for HudShift.dll (see below).

DATA\INTERFACE\keylist.ini
DATA\INTERFACE\keymap.ini
- added some more options to Controls:
  Ship Controls:
  * Activate Afterburner (USER_AFTERBURNER_ON) - turns the afterburner on;
  * Deactivate Afterburner (USER_AFTERBURNER_OFF) - turns the afterburner off;
  * Strafe Up (USER_MANEUVER_SLIDE_EVADE_UP) - slides the ship up;
  * Strafe Down (USER_MANEUVER_SLIDE_EVADE_DOWN) - slides the ship down;
  * Rotate Clockwise (USER_Z_ROTATE) - turns the ship clockwise;
  * Rotate Anticlockwise (USER_Z_UNROTATE) - turns the ship anticlockwise;
  * Rotation Lock (USER_TOGGLE_LEVEL_CAMERA) - toggles rotation in third view.
    (Rotation will really only work with both Auto Level & Rotation Lock off.)
    [USER_TOGGLE_LEVEL_CAMERA found in the Roll Baby Roll mod]
  User Interface:
  * Formation Members (USER_FORMATION_LIST) - shows formation members;
  * Target View (USER_SWITCH_TO_TARGET) - shows target information;
  * Next Sub-Target (USER_NEXT_SUBTARGET) - selects next sub-target;
  * Previous Sub-Target (USER_PREV_SUBTARGET) - selects previous sub-target.

DATA\INTERFACE\knowledgemap.ini
- removed duplicates;
- removed 60245 (trade lane zones);
- fixed rumor 131154 (Montezuma); [Klaus]
- fixed rumor 131660 (coded incorrectly, now provides Kepler).

DATA\INTERFACE\BASESIDE\navbar.ini
- deleted empty behavior/mesh/hardpoint/event values (they expect strings);
- deleted [NavBar] entries IDS_HOTSPOT_EXIT, IDS_NN_SHIP_VIEW, IDS_PACKAGE_ONE,
  IDS_PACKAGE_THREE, IDS_PACKAGE_TWO, Palace. [E]

DATA\INTERFACE\NEURONET\MISSIONVENDOR\mv_videoscreen.3db
- deleted "Material library\MV_vidmaterial\Dt_name" & Dt_flags and the "Texture
  library" node. {S}

DATA\MISSIONS\faction_prop.ini
- fc_c_grp, fc_ou_grp: increase lastname to 229460.

DATA\MISSIONS\formations.ini
- removed a trailing comma;
- transport2_rheinland: changed "0, 0, 300" to "0, -50, 300" (consistency).

DATA\MISSIONS\mbases.ini
- added some rumors present in the resource files, but not assigned to anyone
  (completed the sequence of numbers);
- some rumors had the wrong numbers (seems to be basic typos);
- fixed some Info giving the wrong information (either because it was the wrong
  message or the wrong info, using my best judgement);
- fixed some rumors not giving their related info (using "." instead of "," to
  separate two values; leaving it out);
- deleted all "offers_missions" lines (it's not actually used);
- changed local faction reference for Ku07_01_Base to fc_bd_grp & Ku07_02_Base
  to ku_n_grp; [*]
- changed Scripts\vendors\li_commtrader_fidget.thn to
  Scripts\vendors\robot_commtrader_fidget.thn for all the robot traders (removes
  lots of warnings relating to Sc_MLHEAD_MOTION_SHAKHEAD_NO_000LV_XA_%);
- a couple of npc's were in with the wrong faction; [Gibbon/Phoenix mod]
- added missing li0406_fix_ship fixture (consistent with other Osiris decks);
- added missing npc entry for fc_b_grp in rh0108;
- ensured all mission_type and weight values added to 100;
- li0107_ageira_001_m, li0110_ageira_003_f, li0110_ageira_004_f: changed their
  individual_name (avoid duplicates);
- li0204_bounty_002_m: renamed to li0204_bounty_002_f (female character);
- ku0502_blood_001_f: affiliation is fc_bd_grp, not fc_gc_grp;
- removed rumor 131460 (see misctext).

DATA\MISSIONS\news.ini
- changed missions 11 to 13 from "loaded" to "accepted" (these missions must be
  immediately accepted);
- added the bases for Mission 13 (with this and the above, News becomes
  available on the battleship Osiris);
- deleted the unused items (no "base" lines and referencing missing resources);
- deleted all the "audio" lines (they should be file names, but were cut);
- added missing "base" (Kreuzberg Depot) to a couple of items;
- deleted autoselect true parameter added by the SDK (it only needs to exist).

DATA\MISSIONS\npcships.ini
- br_n_destroyer_d22 & br_n_battleship_d25, changed pilot from
  destroyer_default to cruiser_default (former doesn't exist). [*]

DATA\MISSIONS\pilots_population.ini
DATA\MISSIONS\pilots_story.ini
- placed loot_preference and attack_preference parameters in upper case
  (necessary for loot, consistency for attack). [E]

DATA\MISSIONS\pilots_story.ini
- MSN10_Bundschuh: gun_id was using capship, changed to fighter. [S]
  (Not that it matters, since the pilot itself is not used, anyway.)

DATA\MISSIONS\voice_properties.ini
- vonclaussn: changed permutation_count for gcs_combat_inflicting_damage_worst
  from 4 to 3 (that's all he has).

DATA\MISSIONS\M*\*.ini
- deleted or commented unused sections;
- deleted missing deactivation triggers; [E]
- deleted autoplay true parameter added by the SDK (it only needs to exist).

DATA\MISSIONS\M01A\m01a.ini
- bush_to_pitts: deleted Act_GiveObjList line. [S]

DATA\MISSIONS\M01B\m01b.ini [S]
- d_2wave2guys: deleted Act_GiveObjList "no_ol" line. [S]

DATA\MISSIONS\M02\m02.ini
- comm_0572: changed "ActTrigger = comm_0572" to comm_0573.

DATA\MISSIONS\M03\m03.ini
- key_to_lab: deleted "mlog_5" line. [S]

DATA\MISSIONS\M04\m04.ini
- bring_in_alert_red_wing_backup & blue/gold/rogue: deleted duplicated "="; [S]
- send_gold_wing: added "Act_GiveObjList = gold_wing, ol_gold_wing" (make use
  of the object list);
- death_to_the_unity: added "Act_GiveObjList = gold_wing, ol_gold_wing_regroup"
  (make use of the object list);
- arrive_at_jumpgate: added "Act_ActTrig = dist_inside_200" (make use of the
  trigger - gives Juni an extra line of dialog);
- hacker_response_comms: added "Act_ActTrig =
  sendcomm_DX_M04_1320_LANEHACKER_BASE_2" (make use of the trigger);
- sendcomm_DX_M04_1370_JUNI & 1380: appended "_helmet" to "pl_female4_head",
  changed comm from "comm_li_hatcher_female" to "comm_br_elite_female" (adds
  the hardpoint for the comm and uses the comm previously seen);
- sendcomm_DX_M04_1380_JUNI: use rh_n_grp, not rh_m_grp. [mknote]

DATA\MISSIONS\M05\m05.ini
- dst_battleship: deleted "ol_stay_put" line; [S]
- enc2_destroyed: renamed "lbl_infinite_wing" to "infinite_wing".

DATA\MISSIONS\M06\m06.ini
- leeds, com0530: deleted "ol_makeform" lines; [S]
- dst_startpt2: deleted "mlog_1a" line; [S]
- Act_DeactTrig = d_quint_Br01, changed to d_quint_Br05; [E]
- ol_gotostart: renamed to ol_goto_start to prevent hash clash.

DATA\MISSIONS\M07\m07.ini
- rh_force_wing1_move_to_player: deleted "stay_in_range_of_stokes" line; [S]
- created "dock_with_Bw08_01" object list; [S]
- when Battleship RNC Schiller dies, it was Battleship RNC Goethe on the comm;
- razor_one_escort1_m07: appended "_hat" to "li_newscaster_head_gen" (to access
  hp_hat for the comm);
- bd_3: appended "_hat" to "ku_bartender_head" (to access hp_hat for the comm).

DATA\MISSIONS\M08\m08.ini
- gangster1/2/3/4: changed gangster to gangsters. [E]

DATA\MISSIONS\M09\m09.ini
- commcomplete_DX_M09_0780_KYOTO: deleted "mlog_dock_with_base" line; [S]
- dragon_wing2_1_pilot: added line
  "space_costume = pl_male3_head_hat, pl_male2_journeyman_body, comm_br_elite"
  (removes "Failed to load costume 0/0" warning);
- unlock (and re-lock) Ku07_to_Ku06_hole (compensate for the lock I added).

DATA\MISSIONS\M10\m10.ini
- spawn_bruschal_event: added "Act_ActTrig = sendcomm_dx_m10_0233_bundbase"
  (make use of the trigger - "one hostile remains");
- removed "_1" from "Rh04_01_dock_ring_1"; [E]
- SetScene_Starter: "d" was missing from "bundschuh"; [E]
- changed chain_reaction_1 to chain_reaction_from_3;
	  chain_reaction_2 to chain_reaction_from_4;
	  chain_reaction_3 to chain_reaction_from_5;
	  chain_reaction_4 to chain_reaction_from_6;
	  chain_reaction_5 to chain_reaction_from_7;
	  chain_reaction_6 to chain_reaction_from_9; [E]
- distvec_sendcomm_dx_m10_1200_cobo: remove "_base" from "bw05_03" (match below
  in bw05.ini).

DATA\MISSIONS\M11\m11.ini
- chaser3-3: duplicated, changed second to chaser3-4; [S]
- delay_juni_enter: deleted Act_PlayMusic (missing music);
- ol_tw_go_z21: removed trailing comma; [*]
- osiris2: added line "costume = pl_male4_head, pi_orillion_body" (removes
  costume warning);
- ol_go_ithaca_die: changed Li01_05 to Li01_Ithaca_station_1, deleted dock
  line; [E]
- nse_Li01again: renamed to nse_Li01_again to prevent hash clash.

DATA\MISSIONS\M12\m12.ini
- pause_for_sendcomm_dx_m12_0320_juni: king was using juni's ObjList;
- jumped_to_escape_2 & start_st01: removed "_R" suffix from the damage triggers,
  reusing the existing ones;
- range_for_sendcomm_dx_m12_0500_vonclaussen: remove "_base" from "st01_01"
  (match below in st01.ini).

DATA\MISSIONS\M13\m13.ini
- the power generators were using the info number, not the name;
- created object list "dock_with_St01"; [S]
- gama1_down & gama2_down: renamed Gama to Gamma.

DATA\MISSIONS\shipclasses.ini
- created freighters2 and TRANSPORTS2 by duplicating originals (they didn't
  exist). [E]

DATA\RANDOMMISSIONS\vignetteparams.ini
- deleted "Assignment" and related nodes (that type is not implemented). [E
  found the type, I found the nodes]

DATA\SCRIPTS\BASES\br_08_bar_ambi_ew02_01.thn
DATA\SCRIPTS\BASES\cv_01_bar_ambi_bw03_02.thn
DATA\SCRIPTS\BASES\cv_01_bar_ambi_bw03_03.thn
DATA\SCRIPTS\BASES\cv_01_bar_ambi_iw06_01.thn
DATA\SCRIPTS\BASES\cv_01_bar_ambi_rh05_01.thn
DATA\SCRIPTS\BASES\ku_08_bar_ambi_ku05_02.thn
DATA\SCRIPTS\BASES\li_09_bar_ambi_iw03_02.thn
DATA\SCRIPTS\BASES\li_09_bar_ambi_iw05_02.thn
DATA\SCRIPTS\BASES\li_09_bar_ambi_iw06_02.thn
DATA\SCRIPTS\BASES\rh_08_bar_ambi_rh03_06.thn
- ambi_skydome_sky_blank: moved down 10000 (cover the bottom of the background).
  [Ruppet identified]

DATA\SCRIPTS\BASES\br_08_bar_hardpoint_01.thn
DATA\SCRIPTS\BASES\br_08_bar_hardpoint_s028x.thn
- deleted Priority value from br_table_round_1 entity (removes warning
  regarding slider value).

DATA\SCRIPTS\BASES\bw_01_equipment_ambi_int_01.thn
- removed copy of ship cushion (not visible).

DATA\SCRIPTS\BASES\bw_01_shipdealer_ambi_int_01.thn
- ambi_ltg03_spot_equip_orange1: changed first atten value from 0 to 1 (removes
  warning "atten all zero");
- removed player ship cushion (not visible).

DATA\SCRIPTS\BASES\cv_01_bar_ambi_br04_05.thn
- ambi_LtG10_Terrain_Inf: enabled lightprops (lights asteroids). [Ruppet]

DATA\SCRIPTS\BASES\cv_01_bar_ambi_ew04_01.thn
- Ambi_Layer_Basic_cv_01_bar_Bw09_03: renamed to
  Ambi_Layer_Basic_cv_01_bar_Ew04_01 (where it is); [Ruppet]
- ambi_starsphere_Ew04_1 & ambi_starsphere_Ew04_stars_2: added (show in the bar
  window). [Ruppet]

DATA\SCRIPTS\BASES\ku_03_cityscape_ambi_day_01.thn
- PlayerShip_gf_rtc_shipcushion_1, PlayerShip_Shipcushion_Marker_A: copied
  spatial_props from X/Shipcentre/01 in the hardpoint .thn (places the ship
  cushion where the ship is).

DATA\SCRIPTS\BASES\ku_07_deck_ambi_int_01.thn
- removed gf_rtc_shipcushion_1 (extra cushion).

DATA\SCRIPTS\BASES\li_09_bar_ambi_li01_12.thn
- deleted Ambi_Lightning_ALL_LtG23_Trgt sections. {S}

DATA\SCRIPTS\BASES\pl_07_bar_ambi_int_01.thn
DATA\SCRIPTS\BASES\pl_07_pad_ambi_day_01.thn
- ambi_ltg24_skydome_inf: changed cutoff from 180.999832 to 179.999832 (removes
  warning "phi > pi").

DATA\SCRIPTS\BASES\pl_10_bar_ambi_int_01.thn
DATA\SCRIPTS\BASES\pl_10_pad_ambi_day_01.thn
- deleted Camera_FINAL entity. {S}

DATA\SCRIPTS\BASES\pl_11_pad_ambi_day_01.thn
DATA\SCRIPTS\BASES\pl_11_pad_hardpoint_01.thn
DATA\SCRIPTS\BASES\pl_12_pad_ambi_day_01.thn
DATA\SCRIPTS\BASES\pl_12_pad_hardpoint_01.thn
- adjust the ship for sale position (Curacao & Baden-Baden).

DATA\SCRIPTS\BASES\pl_12_pad_ambi_day_01.thn
- use rtc_rh03_sun created above.

DATA\SCRIPTS\INTRO\gasminer03.thn
- adjusted to move the transports off a wide screen.

DATA\SCRIPTS\INTRO\intro_waterplanet.thn
- deleted references to missing VisEffect "ring".

DATA\SCRIPTS\STORY\s002xe_nrml_sinclair_li_01_cityscape_01.thn
- event @ 20.968: changed duration from 2 to 1. {D}

DATA\SCRIPTS\STORY\s003x_nrml_manhtn_bar_li_01_bar_01.thn
- event @ 31.129: changed duration from 3.026 to 2.426. {D}

DATA\SCRIPTS\STORY\s004x_nrml_juni_li_01_bar_01.thn
- event @ 0.008: changed duration from 22.271 to 12.271, deleted duplicate; {D}
- events @ 16.718: deleted duplicates; {D}
- event @ 19.5: changed duration from 4.281 to 2.281; {D}
- event @ 40.743: changed duration from 22.724 to 11.724. {D}

DATA\SCRIPTS\STORY\s006x_nrml_king_pl_01_pad_01.thn
- event @ 41.625: changed duration from 13.653 to 5.653; {D}
- deleted all "Sc_MLHEAD_BASEPOSE_000LV_02_01" events. {S}

DATA\SCRIPTS\STORY\s009b_accept_king_li_01_bar_01.thn
- event @ 0.001: changed duration from 20.028 to 10.028; {D}
- event @ 0.001: changed duration from 10.404 to 9.404; {D}
- event @ 0.093: deleted duplicate; {D}
- event @ 10.312: changed duration from 35.812 to 25.812; {D}
- event @ 11.706: changed duration from 7.17 to 7.07; {D}
- event @ 38.062: changed duration from 0.781 to 0.779; {D}
- event @ 55.992: deleted duplicate. {D}

DATA\SCRIPTS\STORY\s010x_nrml_lonnigan_li_01_cityscape_01.thn
- fixed typos "Angent" & "Titlt" (just for my own peace of mind);
- event @ 49.11: changed to 49.101; {D}
- event @ 58.831: changed duration from 0.74 to 0.7; {D}
- event @ 61.619: changed duration from 5.968 to 5.967. {D}

DATA\SCRIPTS\STORY\s012xa_nrml_lonnigan_li_01_cityscape_01.thn
- event @ 21.625: changed duration from 15.541 to 4; {D}
- event @ 42.95: changed animation from "Sc_MLHEAD_CONCNTRTE_000LV_XA_%" to
  "Sc_MLHEAD_CONCNTRTE_TRENT_000LV_XA_%". {S}

DATA\SCRIPTS\STORY\s014c_decline_juni_pl_03_bar_01.thn
- event @ 0.001: changed duration from 11.375 to 11.374. {D}

DATA\SCRIPTS\STORY\s015x_nrml_walker_pl_03_bar_01.thn
- event @ 10.828: changed duration from 5.171 to 5.17. {D}

DATA\SCRIPTS\STORY\s019*.thn
- deleted "flags = REFERENCE" from entity "mix_s019e_1" and added "userprops =
  { category = "Audio" }" value. {S}

DATA\SCRIPTS\STORY\s019b_accept_syd_li_01_cityscape_01.thn
- event @ 54.243: changed duration from 2 to 1.5; {D}
- event @ 97.127: changed duration from 5.497 to 5.165; {D}
- event @ 126.17: changed duration from 3.421 to 3.122. {D}

DATA\SCRIPTS\STORY\s019c_decline_syd_li_01_cityscape_01.thn
- changed animation "Sc_FMHEAD_BASEPOSE_000LV_02_01" to
  "Sc_MLHEAD_BASEPOSE_TRENT_000LV_01_01". {S}

DATA\SCRIPTS\STORY\s020x_nrml_vanpelt_li_09_bar_01.thn
- changed animation "Sc_MLHEAD_MOTION_SHAKHEAD_YES_000LV_XA_%" to
  "Sc_MLHEAD_MOTION_SHAKHEAD_YES_TRENT_000LV_XA_%"; {S}
- event @ 77.8 (START_IK): deleted. {D}

DATA\SCRIPTS\STORY\s021x_nrml_tobias_br_03_equipment_01.thn
- event @ 22.156: changed duration from 9.506 to 8.406; {D}
- event @ 30.625: changed duration from 2.954 to 2.938. {D}

DATA\SCRIPTS\STORY\s026b_accept_vance_br_02_bar_01.thn
- event @ 18.239: changed duration from 7.546 to 1.546. {D}

DATA\SCRIPTS\STORY\s026d_reoffer_vance_br_02_bar_01.thn
- event @ 0.312 (11): deleted. {D}

DATA\SCRIPTS\STORY\s029x_nrml_tobias_br_03_equipment_02.thn
- event @ 8.272: changed duration from 2.256 to 1.728; {D}
- event @ 23.937: changed duration from 1.893 to 1.892. {D}

DATA\SCRIPTS\STORY\s037*.thn
- entity "rtc_music_anticipation_more_forboding_3": made consistent with other
  rtc_music entities (removes "invalid sound reference" warnings).

DATA\SCRIPTS\STORY\s037a_offer_quintaine_br_03_equipment_01.thn
- entity "rtc_music_anticipation_more_forboding_1": deleted first declaration;
- event @ 23.437: deleted (removes "Sc_MLHEAD_MOTION_BREATHE_HEAVY_000LV_XA_%"
  warnings);
- event @ 42.097 (START_IK): deleted, along with associated entity
  "Mrk_look_at_Sinclair"; {D}
- event @ 148.094: changed duration from 10.951 to 7.892; {D}
- event @ 145.503: changed duration from 13.934 to 13.933. {D}

DATA\SCRIPTS\STORY\s038xb_nrml_kress_br_08_bar_01.thn
- event @ 51.687: changed duration from 2 to 1.798. {D}

DATA\SCRIPTS\STORY\s045a_offer_ozu_ku_03_bar_01.thn
- event @ 18.312: deleted (restores Trent's lip-sync).

DATA\SCRIPTS\STORY\s046x_nrml_ozu_bw_02_cityscape_01.thn
- entity "Char_br_male_order_pilot_1": deleted empty Priority value (removes
  slider warning).

DATA\SCRIPTS\STORY\s052x_nrml_akira_bw_02_cityscape_01.thn
- event @ 43.75: changed "Sc_MLHEAD_SAD_DISAPPNTMNT_000LV_XA_%" to
  "Sc_MLHEAD_SAD_CONCERN_TRENT_000LV_XA_%"; {S}
- event @ 52.161: changed duration from 7.217 to 4.789. {D}

DATA\SCRIPTS\STORY\s063x_nrml_botzler_rh_07_deck2_01.thn
- event @ 5.86: changed duration from 3.069 to 3.068; {D}
- event @ 39.039: changed duration from 9.949 to 5.91. {D}

DATA\SCRIPTS\STORY\s064x_nrml_orillion_li_05_deck_01.thn
- event @ 27.6: changed duration from 1.279 to 1.278; {D}
- event @ 50.859: deleted; {D}
- event @ 54.497: changed duration from 3.328 to 3; {D}
- event @ 115.5: changed duration from 1.2 to 1.199; {D}
- event @ 118.629: changed duration from 9.541 to 9.54; {D}
- event @ 140.912: changed duration from 1.399 to 1.397. {D}

DATA\SCRIPTS\STORY\s067a_offer_orillion_li_05_deck_01.thn
DATA\SCRIPTS\STORY\s067b_accept_orillion_li_05_deck_01.thn
- entities "ambience_deck_space_larger_2", "rtc_music_anticipation_motivated_1"
  & "ship_levitation": added appropriate userprops values, deleted flags. {S}

DATA\SCRIPTS\STORY\s067a_offer_orillion_li_05_deck_01.thn
- event @ 3.592: changed duration from 3.608 to 3.607. {D}

DATA\SCRIPTS\STORY\s068x_nrml_walker_br_05_deck2_01.thn
- event @ 0 ("Sc_FMHEAD_BASEPOSE_000LV_02_01"): deleted; {S}
- event @ 0.001: changed duration from 6.796 to 6.795. {D}

DATA\SCRIPTS\STORY\s069x_nrml_neimann_li_10_prison_01.thn
- event @ 96.024: changed duration from 0.532 to 0.531; {D}
- event @ 98.194: deleted. {S Sc_MLHEAD_NEUT_BLINK_EYES_000LV_A_00}

DATA\SCRIPTS\STORY\s070x_nrml_jacobi_li_06_bar_01.thn
- event @ 50.561: changed duration from 1.044 to 1.043. {D}

DATA\SCRIPTS\STORY\s071b_accept_king_li_05_bar_01.thn
- event @ 0.001: changed duration from 12.187 to 12.186. {D}

DATA\SCRIPTS\STORY\s072ab_offer_quintaine_pl_09_lab_01.thn
DATA\SCRIPTS\STORY\s072bb_accept_quintaine_pl_09_pad_01.thn
- entity "mix_072e_2": deleted flags, added userprops; {S}

DATA\SCRIPTS\STORY\s072ab_offer_quintaine_pl_09_lab_01.thn
- event @ 2.578: replaced animation "Sc_FMHEAD_BASEPOSE_JUNI_000LV_01_01"
  with "Sc_FMHEAD_BASEPOSE_000LV_02_01" (Sinclair isn't Juni);
- event @ 34.236: deleted second copy;
- event @ 44.617: changed duration from 47.693 to 47.62; {D}
- event @ 83.165: changed duration from 1.827 to 1.267; {D}
- event @ 87.81: changed duration from 1.963 to 1.489. {D}

DATA\SCRIPTS\STORY\s072ba_accept_quintaine_pl_09_lab_01.thn
- event @ 20.75: changed duration from 1.39 to 1.388. {D}

DATA\SCRIPTS\STORY\s074x_nrml_quintaine_pl_09_pad_01.thn
- entity "sfx_music_upcoming_action_heavy_24": prefixed "RTC_" to "Music_1"
  (removes slider warning).			   
						   
DATA\SCRIPTS\STORY\s075x_nrml_orillion_li_05_deck2_01.thn
- entities "ambi_LtG00_Deck_Ylw_12oc_Pnt" and "03oc" renamed to
  "ambi_LtG00_Deck_Ylw_North_Pnt" and "East" (use the name that exists);
- event @ 13.179: changed duration from 2 to 1.771; {D}
- event @ 28.75: changed duration from 2.786 to 2.569; {D}
- changed animation "Sc_MLHEAD_MOTION_SHAKHEAD_YES_000LV_XA_%" to
  "Sc_MLHEAD_MOTION_SHAKHEAD_YES_TRENT_000LV_XA_%"; {S}
- changed animation "Sc_FMHEAD_MOTION_SHAKHEAD_YES_000LV_XA_%" to
  "Sc_FMHEAD_MOTION_SHAKHEAD_YES_JUNI_000LV_XA_%". {S}

DATA\SCRIPTS\STORY\s076xb_nrml_trent_li_01_bar_01.thn
- event @ 62.03: changed duration from 2.779 to 2.778. {D}

DATA\SCRIPTS\VENDORS\robot_commtrader_fidget.thn
- new file based on li_commtrader_fidget.thn, deleting the
  "Sc_MLHEAD_MOTION_SHAKHEAD_NO_000LV_XA_%" event. {S}

DATA\SHIPS\loadouts.ini
- restored the missile ammo lines removed by the SDK (the ammo accumulates);
- MSN10_Bundschuh & MSN10_Jonner_Friend: changed weapons from lr to b (have
  factions use their own weapons); [* for all these]
- fc_m_pi_fighter_loadout01, SECRET_m_pi_fighter_br01,
  fc_m_pi_elite_loadout01 & SECRET_m_pi_elite_br05: changed turret from c to m;
- SECRET_lr_pi_fighter_li04: changed turret from li to fc_lr;
- fc_ou_bw_elite_loadout02, MSN08_Ozu_Reinforcement & MSN09_Ozu: deleted
  redundant gun ammo lines;
- fc_h_ge_csv_loadout01 & 2: changed turret from j to h (& mark02 [S]);
- fc_rh_bw_elite2_loadout01: changed turret from ou to rh;
- MSN05_Interceptor: commented out "equip = cloak_fighter, HpCloak01". {S}

DATA\SHIPS\loadouts_special.ini
- br_battleship_br_01, br_battleship_co_01, ku_battleship_ku_01,
  rm_b_battleship_br_01, rm_k_battleship_ku_01, rm_l_dreadnought_li_01,
  rm_r_battleship_rh_01, MSN03_Liberty_Dreadnought,
  MSN05_Nomad_Rheinland_Battleship, MSN07_Nomad_Rheinland_Battleship,
  MSN09_Kusari_Battleship, MSN10_Battleship_Osiris, MSN10_Rheinland_Battleship,
  MSN11_Nomad_Liberty_Dreadnought, MSN11_Osirus, or_osiris: deleted tractor
  and/or engine equipment lines (removes not supported/equippable warnings,
  might be a base thing). [* and myself]

DATA\SHIPS\loadouts_utility.ini
- ge_liner_co_01, ge_miner_co_01, ge_miner_co_02: deleted engine (as above). [*]

DATA\SHIPS\shiparch.ini
- deleted separable true parameter added by the SDK (it only needs to exist);
- removed a trailing comma; [*]
- br_battleship, ge_transport, ge_large_transport, ge_train, ge_large_train,
  large_transport_m03, mission02_burning_transport: adjusted bay hardpoints; [*]
- ku_battleship & rh_battleship: deleted docking_sphere & docking_camera lines
  (they're part of solararch); [*]
- bh_fighter, ge_fighter4: deleted distance_render (solararch again?); [*]
- bh_fighter, co_elite, co_elite2, ge_transport, ge_large_transport: matched
  num_exhaust_nozzles with number of HpEngine hardpoints; [E]
- ku_fighter: added the bay door animation and sounds;
- li_elite2/li_spoiler_lod1: use "type = Spoiler";
- ge_fighter5/cv_port_wing_lod1: use "type = Port_Wing";
- ge_csv: fixed HP_bay_surface & HP_bay_external; [Gibbon]
- ge_repair, ge_lifter, ge_armored, ge_transport, ge_large_transport, ge_train,
  ge_large_train: more sensible hold sizes. [Gibbon]

DATA\SHIPS\LIBERTY\LI_FREIGHTER\li_freighter.cmp
- added right-side bay door animation (thanks to Thaddeus).

DATA\SHIPS\UTILITY\CSV\csv.cmp
- added HpBayDoor01 for ge_csv above. [Gibbon]

DATA\SOLAR\loadouts.ini
- removed trailing commas.

DATA\SOLAR\solararch.ini
- space_arch_generator, dyson_generator, dyson_city_generator, lair_shield_gen
  and lair_power_cell: changed type from SATELLITE to MISSION_SATELLITE
  (shows the proper name, not just "... Satellite");
- dyson_city_platform, changed type from SATELLITE to WEAPONS_PLATFORM;
- changed ids of dyson_city_generator (from "Nomad Dyson Sphere" to "Nomad
  Generator", not that it really seems to matter);
- jumphole (and its variations), nomad_gate, dyson_airlock_inside: added
  "open_sound = null" and "close_sound = null" (removes warning "unknown
  Sound archetype '0x0'"); [Buck Danny, but this is a different solution]
- jumpgate_nodock: changed type to SATELLITE (prevents dockable warning);
- deleted separable true parameter added by the SDK (it only needs to exist).

DATA\SOLAR\stararch.ini
- ensure every [star] has every value (removes "unable to find shape ''"
  warnings when near certain suns);
- orange3_starglow and orange2_spines were duplicated, deleted the first;
- St03_starglow had an inner_color of 80, changed to 0.8;
- created blue_lens_glow from red_lens_glow by swapping R/B components; [E]
- bw05_sun2: removed "sm_" from "sm_red_lens_glow"; [E]
- Ku01_starglow had an outer_color of 5, changed to 0.5. [E]

DATA\SOLAR\BLACKHOLE\bh.ini
DATA\SOLAR\BLACKHOLE\omega13.ini
- deleted [Sound] section (sounds are not defined); [E]
- deleted [FadeChunks] and [CloseChunks] sections (they don't exist); [E]
- changed lava_wisp to rock_wisp (former doesn't exist). [E]

DATA\SOLAR\NEBULA\ku04_hiyo_cloud.ini
- Zone_Ku04_Kansai_mine_field: deleted unused color value. [*]

DATA\UNIVERSE\universe.ini
- changed run by reference for Li01_03_base (Battleship Missouri) from W02bF32
  (base) to W02bF33 (battleship);
- changed run by reference for Li02_01_Base (Planet Los Angeles) from W02bF34
  (Liberty Police base) to W02bF35 (Liberty planet);
- fixed run by reference for Br04_05_Base (LD-14) from W02bF07 (Armed Forces)
  to W02bF06 (BMM);
- fixed run by reference for Ku02_05_Base (Ohashi Border Station) from W02bF30
  (Kusari planet) to W02bF29 (Kusari Police base);
- Ew02: fix msg_id_prefix (was referring to Ew01).

DATA\UNIVERSE\SYSTEMS\*\*.ini
- deleted zone_creation_distance from [Zone] (they're part of
  [EncounterFormation]). [*]
- deleted faction_weight and [SystemInfo] name values (they're not used);
- lower cased the 'T' in "mission_eligible = True" (allows my BINI program to
  convert it to bool);

DATA\UNIVERSE\SYSTEMS\BR01\br01.ini
- zone_br01_destroy_vignette_16: unlawful was used twice. [*]

DATA\UNIVERSE\SYSTEMS\BR01\BASES\ROOMS\br01_01_cityscape.ini
- grouped the second set of X and Y lights, added "gap = 0".

DATA\UNIVERSE\SYSTEMS\BR03\br03.ini
- barrier_light: deleted unused behavior; [*]
- ZONE_Br03_vignette19_exclusion: renamed to ZONE_Br03_vignette_19_exclusion
  to prevent hash clash.

DATA\UNIVERSE\SYSTEMS\BW02\bw02.ini
- Bw02_02_Base: renamed to Bw02_02 (object, not base);
- Bw02_suprise_bw_elite_4 & 7 & 10: added missing ids_info. [*]

DATA\UNIVERSE\SYSTEMS\BW02\BASES\ROOMS\bw02_01_cityscape.ini
- changed icolor from 292 to 202 (HpShipLand lights). [E]

DATA\UNIVERSE\SYSTEMS\BW03\bw03.ini
- Bw03_system_light: deleted unneeded ids_name; [*]
- Bw03_Roid_Miner_5: added base and dock_with settings (solves dockable warning
  due to the archetype change by the unofficial patch);
- Bw03_suprise_ge_armored_1, Bw03_suprise_co_elite_1, Bw03_suprise_co_elite_2,
  Bw03_suprise_co_elite_3, Bw03_suprise_ge_train_1: made visit = 16 (wreck
  flag).

DATA\UNIVERSE\SYSTEMS\BW04\bw04.ini
- Bw04_Roid_Miner_1: added base and dock_with settings (solves dockable warning
  due to the archetype change by the unofficial patch) and the behavior setting
  (since other Roid_Miner2s have it).

DATA\UNIVERSE\SYSTEMS\BW05\bw05.ini
- Bw05_03_Base: renamed to Bw05_03 (object, not base);
- Zone_Bw05_oxygen_pocket_001 & 2 & 3: added edge_fraction (spew says to); [*]
- wrecks with ids_info = 66218: make ids_name = 261753 (Escorts of Kassel).

DATA\UNIVERSE\SYSTEMS\BW06\BASES\ROOMS\bw06_01_bar.ini
DATA\UNIVERSE\SYSTEMS\BW06\BASES\ROOMS\bw06_01_planetscape.ini
- gave the bar the same lights as the planetscape;
- grouped the E and L lights, added "gap = 0".

DATA\UNIVERSE\SYSTEMS\BW08\bw08.ini
- restored "drag_modifier = 1.05" to Zone_Bw08_asteroid_field that the SDK
  deleted (it does get read, reducing top speed to 76; cruise isn't affected).

DATA\UNIVERSE\SYSTEMS\BW09\bw09.ini
- crow_light: deleted unneeded ids_name. [*]

DATA\UNIVERSE\SYSTEMS\BW09\BASES\ROOMS\bw09_01_bar.ini
- added missing "music = music_bar_generic02". [mknote identified]

DATA\UNIVERSE\SYSTEMS\BW10\BASES\ROOMS\bw10_01_bar.ini
DATA\UNIVERSE\SYSTEMS\BW10\BASES\ROOMS\bw10_01_planetscape.ini
- grouped the D and E lights, added "gap = 0", fixed E01.

DATA\UNIVERSE\SYSTEMS\EW01\ew01.ini
- created Zone_Ew01_sun2_death section (sun wouldn't kill you).

DATA\UNIVERSE\SYSTEMS\EW02\ew02.ini
- Ew02_suprise_ku_freighter_1, Ew02_suprise_ge_fighter6_1,
  Ew02_suprise_bh_elite2_1: made visit = 16 (wreck flag).

DATA\UNIVERSE\SYSTEMS\EW06\ew06.ini
- Ew06_sun_1000_1: added "ids_name = 261050" (just gives it a name);
- created Zone_Ew06_sun2_death section (sun wouldn't kill you);
- Ew06_robot_planet: changed ids_info to 890 (it's not Junyo);
- Ew06_planet_monkey: changed ids_info to 892 (it's not Junyo) and changed
  reputation to fc_uk_grp (same as its docking ring and the robot ones);
- Zone_Ew06_robot_planet_death: added damage/visit/density/relief_time values
  (same as Zone_Ew06_monkey_planet_death). [*]

DATA\UNIVERSE\SYSTEMS\EW06\BASES\ROOMS\ew06_01_cityscape.ini
- grouped the B and C lights, added "gap = 0".

DATA\UNIVERSE\SYSTEMS\EW06\BASES\ew06_02_base.ini
- the nickname was using "Hi01_01_Base".

DATA\UNIVERSE\SYSTEMS\HI01\hi01.ini
- Hi01_moon_Vesuvius: changed ids_info to 66133 (volcanic, rather than the
  earlier patch's ice, sdk1.5b15's barren and original's planetary fragments).

DATA\UNIVERSE\SYSTEMS\HI01\BASES\ROOM\hi01_01_cityscape.ini
- grouped the B and C lights, added "gap = 0".

DATA\UNIVERSE\SYSTEMS\KU01\ku01.ini
- Ku01_planet_storm_5000_1: deleted (same as Planet Fuji);
- Zone_Ku01_Fuji_planet_ring: created, adding appropriate "ring" value to
  Ku01_Fuji_planet (infocard says it has a ring). [Gibbon/Phoenix mod]

DATA\UNIVERSE\SYSTEMS\KU02\BASES\ROOMS\ku02_04_bar.ini
DATA\UNIVERSE\SYSTEMS\KU02\BASES\ROOMS\ku02_04_planetscape.ini
- gave the bar the same lights as the planetscape;
- grouped the E and L lights, added "gap = 0" and missing lights.

DATA\UNIVERSE\SYSTEMS\KU04\ku04.ini
- Ku04_suprise_bw_fighter_1, Ku04_suprise_co_fighter_1: made vist = 16 (wreck
  flag);
- Zone_Ku04_01_death: made size = 4100 (match the planet).

DATA\UNIVERSE\SYSTEMS\KU05\ku05.ini
- lower cased the 'F' in "population_additive = False" (allows my BINI program
  to convert it to bool).

DATA\UNIVERSE\SYSTEMS\KU06\BASES\ROOMS\ku06_01_cityscape.ini
- grouped all the A lights, added "gap = 0".

DATA\UNIVERSE\SYSTEMS\LI01\li01.ini
- Li01_Trade_Lane_Ring_141 & 6: deleted redundant tradelane_space_name; [*]
- Li01_space_habitat_dmg_2 & Li01_space_tankl4_dmg_1: changed parent from
  li01_space_police_dmg_1 to Li01_Ithaca_station_1. [E]

DATA\UNIVERSE\SYSTEMS\LI02\li02.ini
- deleted [Field] & [AsteroidBillboards] sections (they're not part of the
  system file); [*]
- renamed zone_Li02_Jumpgate_to_Br02 to zone_Li02_Jumpgate_to_Iw04. [*]

DATA\UNIVERSE\SYSTEMS\LI02\BASES\ROOMS\li02_01_cityscape.ini
- removed a leading colon. [*]

DATA\UNIVERSE\SYSTEMS\LI02\BASES\ROOMS\li02_02_bar.ini
DATA\UNIVERSE\SYSTEMS\LI02\BASES\ROOMS\li02_02_planetscape.ini
- gave the bar the same lights as the planetscape;
- grouped the first set of A lights, added "gap = 0".

DATA\UNIVERSE\SYSTEMS\LI04\li04.ini
- Li04_space_tankl4_1: added parent; [*]
- Zone_Li04_South_Dallas_radioactive_area: added "damage = 10" (missing).

DATA\UNIVERSE\SYSTEMS\RH01\rh01.ini
- Rh01_shipyard_2: changed reputation from co_khc_grp to rh_n_grp (to match the
  parent); [*]
- zone_rh01_destroy_vignette_22: removed redundant comment; [*]
- zone_rh01_path_lwb2_1 & 2: appended an underscore to prevent hash clash.

DATA\UNIVERSE\SYSTEMS\RH01\BASES\ROOMS\rh01_01_cityscape.ini
- grouped each of the P, Q and R lights (cycles the lights along the paths
  between the buildings, rather than all blinking at once);
- moved the Y lights, "blink = 0.6" and endpause into the second-last section.
  [* noticed it, this is my fix]

DATA\UNIVERSE\SYSTEMS\RH02\BASES\ROOMS\rh02_01_cityscape.ini
- grouped the R lights, added "gap = 0".

DATA\UNIVERSE\SYSTEMS\RH02\BASES\ROOMS\rh02_02_deck.ini
- added the missing hardpoints to [FlashLightSet].

DATA\UNIVERSE\SYSTEMS\RH02\BASES\ROOMS\rh03_01_cityscape.ini
- grouped the K lights, added "gap = 0".

DATA\UNIVERSE\SYSTEMS\RH04\BASES\ROOMS\rh04_01_bar.ini
DATA\UNIVERSE\SYSTEMS\RH04\BASES\ROOMS\rh04_01_planetscape.ini
DATA\UNIVERSE\SYSTEMS\RH04\BASES\ROOMS\rh04_01_planetscape2.ini
- gave the bar the same lights as the planetscape;
- grouped the E and L lights, adding the missing lights (to complete the
  sequence, but E16 & E17 don't exist) and "gap = 0".

DATA\UNIVERSE\SYSTEMS\RH04\BASES\ROOMS\rh04_05_shipdealer.ini
- replaced the "Bw_01" shipdealer with the "Rh_07" shipdealer (it really looked
  out of place, makes it consistent with the other "Rh_07" decks).

DATA\UNIVERSE\SYSTEMS\ST01\st01.ini
- St01_01_Base: renamed to St01_01 (object, not base).

DATA\UNIVERSE\SYSTEMS\ST03\st03.ini
- restored "rpop_solar_detection = false" deleted by the SDK (it does get read).

DATA\UNIVERSE\SYSTEMS\BR01\br01.ini
DATA\UNIVERSE\SYSTEMS\BR04\br04.ini
DATA\UNIVERSE\SYSTEMS\BW01\bw01.ini
DATA\UNIVERSE\SYSTEMS\KU01\ku01.ini
DATA\UNIVERSE\SYSTEMS\LI04\li04.ini
- removed dummy ids_name (& ids_info) from zones (prevent my Zone plugin
  from showing them).

EXE\dacom.ini
- added "DcDtEtTwo = DcDtEt" to [MaterialMap] (removes warning regarding the
  helicopter material in DATA\BASES\KUSARI\ku_01_hokkaido_cityscape.cmp);
- deleted ".\" from flmaterials (not needed, uniformity);
- added "jflp.dll" and "HudShift.dll" to [Libraries] (see below).

EXE\flconfigdatabase.txt
- Louva-Deus' & Raumpirat's updated graphics hardware list.

EXE\freelancer.ini
- deleted [;Display] section ([Display] is not used);
- commented out the introductory movies;
- removed "fonts_dir", "concave" and "stars" settings (they're not used);
- removed some commented lines (turrets, projectiles, M11 snapshots);
- added Crazy's list server (www.fllistserver.com).

EXE\HudShift.dll
- moves interface elements back to the screen edges for widescreen.

EXE\jflp.dll
- new DLL to remove some warnings from FLSpew.txt:
  * couldnt find material 163618903
    Generated when a waypoint is selected.  I was unable to fix it, so now I
    just remove the warning.
  * get_zone(N) failed
    Generated when a job sector has no name, which is quite frequently.
  * Disconnecting equipment with FATE_UNKNOWN, using FATE_DISAPPEAR
    Generated when a wreck drops its weapons.  This is a bug in Freelancer.exe,
    since it's not recognising the "fate_loot" type.
  * Used Hostile Pick Assistance
    Not sure exactly when this is generated (or even why), but it's something
    to do with targetting enemy fighters.
  * Invalid Deform::start_aim() command
    Replaces this part of the message with "(null)" and the line number (in
    brackets after the file name) with the event timestamp (in milliseconds);
  * cockpit aspect (N) is not PC-Compatible?
    Generated due to widescreen support.
  * ArchDB::Get
    Generated when a job wants an object, searching multiple lists.
- adds a blank line after the equipment's "Stats" and provides stats for
  Powerplants, Engines, Scanners, Tractor Beams and Armor;
- provides widescreen support (including replacing the 800x600 resolution with
  the desktop resolution);
- implement USER_FULLSCREEN (Alt+Enter toggles windowed mode);
- allows viewing of server info, even for different versions.

EXE\newplayer.fl
- deleted the Ew06 (Monkey & Robot) vnpc lines (presumably they were included
  automatically, due to being fc_or_grp).

EXE\infocards.dll
- use superscripts for the large masses and subscripts for the chemicals.

EXE\offerbriberesources.dll
- added the resource string for the Kyoto Base jobs (Okamura Cloud).

EXE\resources.dll
- created proper descriptions for Monkey and Robot planets (ids 890-893).

EXE\equipresources.dll
EXE\infocards.dll
EXE\misctext.dll
EXE\misctextinfo2.dll
EXE\nameresources.dll
EXE\offerbriberesources.dll
EXE\resources.dll
- consistently use "Right Single Quotation Mark" instead of "Apostrophe" (with
  the exception of base and weapon names);
- consistently use "Left/Right Double Quotation Mark" instead of "Quotation
  Mark" (with the exception of bold text, used by ship and weapon titles);
- use "Em Dash" instead of two dashes (and for some single dashes);
- occasionally use "En Dash" instead of a single dash;
- use bullet points instead of plus for the tutorial dialogs;
- adjusted the wrapping used by the tutorial dialog text (for 1024x768, it
  won't look right using 800x600);
- always use one space after a full stop (although it should probably be two);
- added hyphens to names missing them (e.g. "Omega 3", "Planet Baden Baden");
- put a lot more ship names in italics;
- renamed turrets to be consistent with their description (e.g. "Pyros Turret
  Type 1" becomes "Pyros Type 1 Turret");
- renamed some equipment to use the abbreviated ship type (e.g. "Civilian Heavy
  Fighter Powerplant" becomes "Civilian H. F. Powerplant");
- general spelling and grammar fixes (in particular, "Pittsburgh" was frequently
  missing the "h"; removed additional spaces; added full stops);
- replaced "A.S." with "AS" (it was used more);
- replaced "Borderworld Exports" with "Border World Exports"; [mknote]
- removed "Planet " from Durango, Jersey, Izu (they're moons); [Izu from mknote]
- added "Planet " to Atka, Munich, Stulingen (they're not moons);
- replaced "Kruger Mining" with "Kruger Minerals";
- replaced "Bretonia Mining and Metals" and "Bretonia Mining and Manufacturing"
  with "Bretonia Mining and Metal" (it's what the NPCs say). [mknote]

EXE\equipresources.dll
- moved "Advanced" from before Laser to before type in Civilian names;
- changed "ordinance" to "ordnance";
- fixed Tanto Turret description.

EXE\misctext.dll
- changed "offical" to "official";
- changed most "navy" to "Navy"; [Klaus]
- 131154: Padua should be Montezuma; [Klaus]
- 131460: removed (inappropriate duplicate of 132157); [Klaus]
- 131471: removed tag;
- 131503: Omega-4 is presumably Omega-41; [Klaus identified]
- 131756: changed "Kusari naval force" to "Kusari Naval Forces";
- 133320: changed "Navy" to "navy";
- 134323: changed "Charles" to "Edward" (the name of the wreck). [Klaus]

EXE\misctextinfo2.dll
- ordered cast & thanks by surname.

EXE\nameresources.dll
- "Storm" should really be "Escort of the Storm"; [mknote]
- "Texas -> Bering" tradelane becomes "Bering Jump Gate"; [Moonhead]
- added the affiliation for those few NPCs without it; [mknote]
- renamed some NPCs to match their faction in mbases.ini.


Jason Hood <jadoxa@yahoo.com.au>
http://freelancer.adoxa.vze.com/
