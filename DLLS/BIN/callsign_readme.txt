				   Call Sign
				 by Jason Hood

				  Version 1.00


Tired of being called "Freelancer Alpha one dash one"?  Use this plugin to
customise your call sign.  Copy CALLSIGN.DLL to DLLS\BIN and add it to the end
of the [Initial ?P DLLs] sections in EXE\freelancer.ini.  Then just append how
you want to be called:

	DLL = callsign.dll, faction [formation [number][-][number]]

If faction is not recognised as a name (see below), it will be treated as a
nickname.  Formation may be name or number.  The numbers can be between 0 and
20, inclusive.	Removing the dash will remove it for everybody.  Leaving a part
out will result in numerous "invalid MSG id" warnings in FLSpew.txt.


				    FACTIONS

    player  Freelancer          co_vr   Ageira            fc_fa   Alliance
                                co_alg  ALG               fc_b    Bundschuh
    br_p    Bretonia Police     br_m    BMM               fc_c    Corsairs
    ku_p    Kusari Police       co_be   Bowex             fc_bd   Dragons
    li_p    Liberty Police      co_hsp  Cryer             fc_g    Gaians
    li_lsf  LSF                 co_khc  Daumann           fc_gc   GC
    rh_p    Rheinland Police	co_me	DSE		  fc_lh   Hacker
                                co_nws  Gateway           fc_rh   Hessians
    br_n    Armed Forces        co_ic   Interspace        fc_h    Hogosha
    rh_n    Military            co_kt   Kishiro           fc_j    Junkers
    ku_n    Naval Forces        rh_m    Kruger            fc_lwb  LWB
    li_n    Navy                co_ti   Planetform        fc_m    Mollys
                                co_rs   Republican        fc_or   Order
    gd_bh   Bounty Hunters      co_shi  Samura            fc_ou   Outcasts
    gd_gm   GMG                 co_os   Spa and Cruise    fc_lr   Rogues
    gd_im   IMG                 co_ni   Synth Foods       fc_u    Unioners
    gd_z    Zoners              co_ss   Universal         fc_x    Xenos


                                   FORMATIONS

                     01 Alpha      14 Red        22 Matsu
                     02 Beta       15 Blue       23 Sakura
                     03 Gamma      16 Gold       24 Fuji
                     04 Delta      17 Green      25 Botan
                     05 Epsilon    18 Silver     26 Hagi
                     06 Zeta       19 Black      27 Susuki
                     07 Theta      20 White      28 Kiku
                     08 Iota       21 Yellow     29 Yanagi
                     09 Kappa
                     10 Lambda
                     11 Omicron
                     12 Sigma
                     13 Omega


Jason Hood, 3 February, 2010.
http://freelancer.adoxa.cjb.net/
