/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_STR         "rhs_uniform_cu_ucp"
#define UNIFORM             ARR_1(UNIFORM_STR)
#define UNIFORM_COMMAND     UNIFORM
#define UNIFORM_SPECIAL     UNIFORM
#define UNIFORM_DIVER       ARR_1("U_I_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  ARR_1("U_B_HeliPilotCoveralls")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_2("U_B_FullGhillie_sard","U_B_FullGhillie_ard")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      "rhsusf_iotv_ucp"
#define VEST_BELT       "V_Rangemaster_belt"
#define VEST_LIGHT      "rhsusf_iotv_ucp_Repair"
#define VEST_RIFLEMAN   "rhsusf_iotv_ucp_Rifleman"
#define VEST_GRENADIER  "rhsusf_iotv_ucp_Grenadier"
#define VEST_MEDIC      "rhsusf_iotv_ucp_Medic"
#define VEST_SL         "rhsusf_iotv_ucp_Squadleader"
#define VEST_TL         "rhsusf_iotv_ucp_Teamleader"
#define VEST_MG         "rhsusf_iotv_ucp_SAW"
#define VEST_DM         VEST_RIFLEMAN

#define VEST_CREW		ARR_1("rhsusf_iotv_ucp_Repair")

#define VEST_SF			VEST_RIFLEMAN
#define VEST_SF_TL		VEST_TL
#define VEST_SF_MG		VEST_MG
#define VEST_SF_GR		VEST_GRENADIER

#define VEST_BREATHER	"V_RebreatherB"
#define VEST_DIVER		"VSM_LBT1961_Black"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_4(  \
    "B_AssaultPack_cbr",            \
    "B_AssaultPack_khk",            \
    "rhsusf_falconii_coy",          \
    "rhsusf_assault_eagleaiii_ucp"  \ 
)
#define BACKPACK_KITBAG     ARR_3("B_Kitbag_rgr","B_Kitbag_cbr","B_Kitbag_mcamo")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_cbr")
#define BACKPACK_BERGEN     ARR_1("")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	""

//	CSW-BACKPACKS
#define HMG_GUN		"RHS_M2_Gun_Bag"
#define HMG_TRIPOD	"RHS_M2_MiniTripod_Bag"
#define GMG_GUN		"RHS_Mk19_Gun_Bag"
#define GMG_TRIPOD	"RHS_Mk19_Tripod_Bag"
#define MORTAR_GUN	"rhs_M252_Gun_Bag"
#define MORTAR_POD	"rhs_M252_Bipod_Bag"



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER_BK "rhsusf_acc_anpeq15side_bk"
#define LASERPOINTER_TN "rhsusf_acc_anpeq15side"

#define ACOG_1 "rhsusf_acc_ACOG"
#define ACOG_2 "rhsusf_acc_ACOG2"
#define ACOG_3 "rhsusf_acc_ACOG3"

#define HOLOSIGHT "rhsusf_acc_eotech_552"
#define CCO "rhsusf_acc_compm4"

#define SNIPER_OPTIC "rhsusf_acc_premier"
#define SNIPER_OPTIC_NV "rhsusf_acc_premier_anpvs27"

#define DMR_BIPOD "rhsusf_acc_harris_bipod"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE_1 "rhs_weap_m16a4_carryhandle"
#define RIFLE_2 "rhs_weap_m16a4_carryhandle_pmag"
#define RIFLE_UGL "rhs_weap_m16a4_carryhandle_M203"
#define RIFLE_ACOG ARR_6(                   \
    WEAPON(RIFLE_1,LASERPOINTER_BK,ACOG_1,""), \
    WEAPON(RIFLE_1,LASERPOINTER_BK,ACOG_2,""), \
    WEAPON(RIFLE_1,LASERPOINTER_BK,ACOG_3,""), \
    WEAPON(RIFLE_2,LASERPOINTER_BK,ACOG_1,""), \
    WEAPON(RIFLE_2,LASERPOINTER_BK,ACOG_2,""), \
    WEAPON(RIFLE_2,LASERPOINTER_BK,ACOG_3,"")  \
)
#define RIFLE_UGL_ACOG ARR_3(                   \
    WEAPON(RIFLE_UGL,LASERPOINTER_BK,ACOG_1,""),   \
    WEAPON(RIFLE_UGL,LASERPOINTER_BK,ACOG_2,""),	\
    WEAPON(RIFLE_UGL,LASERPOINTER_BK,ACOG_3,"")	\
)

// CARBINE & PDW
#define PDW WEAPON("SMG_05_F","","","")
#define CARBINE_1 "rhs_weap_m4_carryhandle"
#define CARBINE_2 "rhs_weap_m4_carryhandle_mstock"
#define CARBINE_3 "rhs_weap_m4_carryhandle_pmag"
#define CARBINE_4 "rhs_weap_m4_mstock"
#define CARBINE_UGL	"rhs_weap_m4a1_m203"

#define CARBINE ARR_4(CARBINE_1,CARBINE_2,CARBINE_3,CARBINE_4)
#define CARBINE_HOLO ARR_4(            	\
    WEAPON(CARBINE_1,HOLOSIGHT,"",""),	\
    WEAPON(CARBINE_2,HOLOSIGHT,"",""),	\
    WEAPON(CARBINE_3,HOLOSIGHT,"",""),	\
    WEAPON(CARBINE_4,HOLOSIGHT,"","")	\
)
#define CARBINE_UGL_HOLO WEAPON(CARBINE_UGL,HOLOSIGHT,"","")

// SF CARBINES
#define SF_CARBINE ARR_4(	                                                                        \
    WEAPON("rhs_weap_mk18_bk","rhsusf_acc_nt4_black",LASERPOINTER_BK,"rhsusf_acc_SpecterDR"),   	\
    WEAPON("rhs_weap_mk18","rhsusf_acc_nt4_tan",LASERPOINTER_BK,"rhsusf_acc_SpecterDR"),        	\
    WEAPON("rhs_weap_mk18_KAC_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD"),	\
    WEAPON("rhs_weap_mk18_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD")   	\
)
#define SF_CARBINE_UGL ARR_3(	                                                                            \
    WEAPON("rhs_weap_m4a1_blockII_M203","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR"),	    \
    WEAPON("rhs_weap_m4a1_blockII_M203_bk","rhsusf_acc_nt4_black",LASERPOINTER_BK,"rhsusf_acc_SpecterDR"),	\
    WEAPON("rhs_weap_m4a1_blockII_M203_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD")	\
)
#define SF_CARBINE_TN ARR_2(	                                                                    \
    WEAPON("rhs_weap_mk18_KAC_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD"),	\
    WEAPON("rhs_weap_mk18_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD")	    \
)
#define SF_CARBINE_UGL_TN		WEAPON("rhs_weap_m4a1_blockII_M203_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD")
#define SF_CARBINE_DIVER 		WEAPON("rhs_weap_mk18_KAC_bk","rhsusf_acc_nt4_black",LASERPOINTER_BK,CCO)
#define SF_CARBINE_DIVER_UGL 	WEAPON("rhs_weap_m4a1_blockII_M203_bk","rhsusf_acc_nt4_black",LASERPOINTER_BK,CCO)

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR WEAPON("srifle_EBR_F",DMR_BIPOD,LASERPOINTER_BK,"optic_AMS")
#define DMR_SF ARR_3(                                                                     	\
    WEAPON("arifle_SPAR_03_blk_F","muzzle_snds_B",LASERPOINTER_BK,"optic_AMS"),         	\
    WEAPON("arifle_SPAR_03_khk_F","muzzle_snds_B_khk_F",LASERPOINTER_TN,"optic_AMS_khk"),	\
    WEAPON("arifle_SPAR_03_snd_F","muzzle_snds_B_snd_F",LASERPOINTER_TN,"optic_AMS_snd")	\
)
#define DMR_DIVER WEAPON("arifle_SPAR_03_blk_F","muzzle_snds_B",LASERPOINTER_BK,"rhsusf_acc_SpecterDR_A")
#define SR_AP WEAPON("rhs_weap_xm2010_wd","rhsusf_acc_LEUPOLDMK4_2","","")
#define SR_AM WEAPON("rhs_weap_M107_w",SNIPER_OPTIC,"","")

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE_1 "rhs_weap_m249_pip_S"
#define AUTORIFLE_2 "rhs_weap_m249_pip_S_vfg"
#define AUTORIFLE_ACOG ARR_6(                    	\
    WEAPON(AUTORIFLE_1,LASERPOINTER_BK,ACOG_1,""),	\
    WEAPON(AUTORIFLE_1,LASERPOINTER_BK,ACOG_2,""),	\
    WEAPON(AUTORIFLE_1,LASERPOINTER_BK,ACOG_3,""),	\
    WEAPON(AUTORIFLE_2,LASERPOINTER_BK,ACOG_1,""),	\
    WEAPON(AUTORIFLE_2,LASERPOINTER_BK,ACOG_2,""),	\
    WEAPON(AUTORIFLE_2,LASERPOINTER_BK,ACOG_3,"")	\
)
#define AUTORIFLE_SF WEAPON("hlc_lmg_mk46","rhsusf_acc_ARDEC_M240","rhsusf_acc_anpeq15side_bk",HOLOSIGHT)
#define MMG WEAPON("rhs_weap_m240B","rhsusf_acc_ACOG_MDO",LASERPOINTER_BK,"")



/* ###################### - SIDEARMS - ###################### */
#define PISTOL		WEAPON("rhsusf_weap_m9","","","")
#define PISTOL_SF	WEAPON("rhsusf_weap_glock17g4","","","")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	WEAPON("rhs_weap_M136_hedp","","","")
#define AT_MISSILE	WEAPON("rhs_weap_fgm148","","","")
#define AA_MISSILE	WEAPON("rhs_weap_fim92","","","")



/* ###################### - MAGAZINES - ###################### */
//  RIFLE & CARBINE
#define MAG_RIFLE			"30Rnd_556x45_Stanag"
#define MAG_RIFLE_TRACER	"30Rnd_556x45_Stanag_Tracer_Red"

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER

//  AR & MG
#define MAG_AUTORIFLE       "rhs_200rnd_556x45_M_SAW"
#define MAG_MMG             "rhsusf_100Rnd_762x51"
#define MAGS_AUTORIFLE_SF   MAG_AUTORIFLE,5

//  DMR & SR
#define MAG_DMR     "20Rnd_762x51_Mag"
#define MAG_DMR_SF  "ACE_20Rnd_762x51_M118LR_Mag"
#define MAGS_SR_AP  "rhsusf_5Rnd_300winmag_xm2010",20
#define MAGS_SR_AM  "rhsusf_mag_10Rnd_STD_50BMG_M33",3,"rhsusf_mag_10Rnd_STD_50BMG_mk211",1

//  PDW & SIDEARMS
#define MAG_PDW	        "30Rnd_9x21_Mag_SMG_02"
#define MAG_PISTOL 		"rhsusf_mag_15Rnd_9x19_JHP"
#define MAG_PISTOL_SF 	"rhsusf_mag_17Rnd_9x19_JHP"

//  ROCKETS & MISSILES
#define MAGS_AT_LIGHT           "rhs_m136_hedp_mag"
#define MAGS_AT_MISSILE         "rhs_fgm148_magazine_AT"
#define MAGS_AT_MISSILE_ASST    "rhs_fgm148_magazine_AT",1
#define MAGS_AA_MISSILE         "rhs_fim92_mag"
#define MAGS_AA_MISSILE_ASST    "rhs_fim92_mag",2

//  GRENADES
#define GRENADE_IR	    "B_IR_Grenade",2
#define GRENADES_BASIC  "Chemlight_red","Chemlight_green","HandGrenade",2,"SmokeShell",2,"SmokeShellOrange","SmokeShellPurple"
#define GRENADES_MINI   "Chemlight_red","Chemlight_green","MiniGrenade",2,"SmokeShell",2,"SmokeShellOrange","SmokeShellPurple"
#define GRENADES_LIGHT  "Chemlight_red","Chemlight_green","SmokeShellOrange","SmokeShellPurple"



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_2(                           \
    "rhsusf_ach_helmet_headset_ucp",            \
    "rhsusf_ach_helmet_ucp_norotos"          	\
)
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_6(          \
    "rhsusf_ach_bare",          \
    "rhsusf_ach_bare_headset",  \
    "rhsusf_ach_bare_semi",         \
    "rhsusf_ach_bare_semi_headset", \
    "rhsusf_ach_bare_wood",         \
    "rhsusf_ach_bare_wood_headset" \
)
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_6(        	\
    "rhsusf_opscore_aor2_pelt", 	\
    "rhsusf_opscore_fg_pelt",   	\
    "rhsusf_opscore_fg_pelt_cam",	\
    "rhsusf_opscore_paint_pelt",	\
    "rhsusf_opscore_ut_pelt",   	\
    "rhsusf_opscore_ut_pelt_cam"	\
)
#define HELMET_DIVER ARR_2(     	\
    "rhsusf_protech_helmet_rhino",	\
    "rhsusf_protech_helmet"	    	\
)
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("rhsusf_cvc_green_helmet")
#define HELMET_HELICOPTER	ARR_1("rhsusf_hgu56p")
#define HELMET_HELI_CREW	ARR_1("rhsusf_hgu56p_mask")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_B")

// COMMANDERS
#define CAP_CO "H_Beret_02"
#define CAP_XO "H_Beret_blk"
#define CAP_OFFICER "H_Cap_oli_hs"



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_1("rhs_googles_clear")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator");
#define GOGGLES_FULL    ARR_1("rhs_ess_black")
#define GOGGLES_SF		ARR_4("G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_beast")
#define GOGGLES_SF_FULL ARR_1("G_Balaclava_combat")
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG				ARR_1("rhsusf_ANPVS_14")
#define NVG_SF			ARR_1("rhsusf_ANPVS_15")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator_03")



/* ###################### - NAVIGATION - ###################### */
#define GPS			""
#define BFT_PDA		"b_EasyTrack_PDA"
#define BFT_TABLET	"b_EasyTrack_Tablet"
#define TERMINAL	"B_UavTerminal"



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	"ACRE_PRC148"
#define RADIO_PACK 	"ACRE_PRC117F"



/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#ifndef INSIGNIA_COMMON
    #define INSIGNIA_COMMON ARR_1("")
#endif
#ifndef INSIGNIA_SF
    #define INSIGNIA_SF ARR_1("")
#endif
#ifndef INSIGNIA_TNK
    #define INSIGNIA_TNK ARR_1("")
#endif
#ifndef INSIGNIA_HELI
    #define INSIGNIA_HELI ARR_1("")
#endif
#ifndef INSIGNIA_JET
    #define INSIGNIA_JET ARR_1("")
#endif
#ifndef INSIGNIA_MEV
    #define INSIGNIA_MEV ARR_1("")
#endif
#ifndef INSIGNIA_SUPPORT
    #define INSIGNIA_SUPPORT ARR_1("")
#endif
