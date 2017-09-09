/* ###################### - DISPLAY NAMES - ###################### */
#define DN_CO_CO    "Company Commanding Officer"
#define DN_CO_XO    "Company Executive Officer"
#define DN_CO_MIO   "Mission Intelligence Officer"
#define DN_CO_COLO  "Chief of Logistics"
#define DN_CO_FO    "Forward Observer"

#define DN_PL_PL    "Infantry Platoon Leader"
#define DN_PL_PS    "Infantry Platoon Sergeant"
#define DN_PL_UAV   "Infantry Platoon UAV Operator"
#define DN_PL_JTAC  "Infantry Platoon JTAC"
#define DN_PL_MED   "Infantry Platoon Medic"

#define DN_RS_SL    "Squad Leader"
#define DN_RS_TL    "Squad Fireteam Leader"   // Ohne Granatwerfer
#define DN_RS_AR    "Squad Automatic Rifleman"
#define DN_RS_GRN   "Squad Grenadier"
#define DN_RS_M32   "Squad Grenadier (M32)"
#define DN_RS_LITE  "Squad Rifleman (light)"
#define DN_RS_AC    "Squad Ammo Carrier"
#define DN_RS_LAT   "Squad Light Anti-Tank Rifleman"
#define DN_RS_CM    "Squad Combat Medic"
#define DN_RS_DM    "Squad Designated Marksman"
#define DN_RS_ENG   "Squad Combat Engineer"

#define DN_WS_MMG   "Weapon Squad Medium Machine Gunner"
#define DN_WS_MMGA  "Weapon Squad Assistant MMG"
#define DN_WS_HMG   "Weapon Squad Heavy Machine Gunner"
#define DN_WS_HMGA  "Weapon Squad Assistant HMG"
#define DN_WS_GMG   "Weapon Squad Grenade Machine Gunner"
#define DN_WS_GMGA  "Weapon Squad Assistant GMG"
#define DN_WS_AT    "Weapon Squad AT-Specialist"
#define DN_WS_AAT   "Weapon Squad AT-Assistant"
#define DN_WS_AA    "Weapon Squad AA-Specialist"
#define DN_WS_AAA   "Weapon Squad AA-Assistant"
#define DN_WS_MOR   "Weapon Squad Mortar Gunner"
#define DN_WS_MORA  "Weapon Squad Mortar Assistant"
#define DN_WS_MORAC "Weapon Squad Mortar Ammo Carrier"

#define DN_SF_RM    "Special Team Operator"
#define DN_SF_TL    "Special Team Leader"
#define DN_SF_AR    "Special Team Automatic Rifleman"
#define DN_SF_GRN   "Special Team Grenadier"
#define DN_SF_LAT   "Special Team Light Anti-Tank"
#define DN_SF_MED   "Special Team Medic"
#define DN_SF_DM    "Special Team Marksman"
#define DN_SF_EXP   "Special Team Explosive Specialist"

#define DN_DV_RM    "Combat Diver Operator"
#define DN_DV_TL    "Combat Diver Team Leader"
#define DN_DV_EXP   "Combat Diver Explosive Specialist"
#define DN_DV_MED   "Combat Diver Medic"
#define DN_DV_DM    "Combat Diver Marksman"
#define DN_DV_JTAC  "Combat Diver Terminal Attack Controller"

#define DN_SN_SPOT  "Sniper Spotter"
#define DN_SN_AP    "Sniper (M2010)"
#define DN_SN_AM    "Sniper (M107)"
#define DN_SN_EXP   "Sniper Explosive Specialist"

#define DN_VE_CRW   "Armored Vehicle Crew"
#define DN_VE_CMD   "Armored Vehicle Commander"
#define DN_VE_JET   "Jet Pilot"
#define DN_VE_HCRW  "Helicopter Crew"
#define DN_VE_HPL   "Helicopter Pilot/Copilot/Gunner"

#define DN_SP_LOG   "Logistician"
#define DN_ME_DCT   "Medical Service Doctor"
#define DN_ME_TL    "Medical Service Team Leader"
#define DN_ME_PIL   "Medical Service Helicopter Pilot"
#define DN_ME_DRV   "Medical Service Driver"



/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_STR         "rhs_uniform_cu_ocp"
#define UNIFORM             ARR_1(UNIFORM_STR)
#define UNIFORM_COMMAND     UNIFORM
#define UNIFORM_SPECIAL     UNIFORM
#define UNIFORM_DIVER       ARR_1("U_I_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  ARR_1("U_B_HeliPilotCoveralls")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_2("U_B_FullGhillie_sard","U_B_FullGhillie_ard")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("rhsusf_iotv_ocp")
#define VEST_BELT       ARR_1("V_Rangemaster_belt")
#define VEST_LIGHT      ARR_1("rhsusf_iotv_ocp_Repair")
#define VEST_RIFLEMAN   ARR_1("rhsusf_iotv_ocp_Rifleman")
#define VEST_GRENADIER  ARR_1("rhsusf_iotv_ocp_Grenadier")
#define VEST_MEDIC      ARR_1("rhsusf_iotv_ocp_Medic")
#define VEST_SL         ARR_1("rhsusf_iotv_ocp_Squadleader")
#define VEST_TL         ARR_1("rhsusf_iotv_ocp_Teamleader")
#define VEST_MG         ARR_1("rhsusf_iotv_ocp_SAW")
#define VEST_DM         VEST_RIFLEMAN

#define VEST_CREW		ARR_1("rhsusf_iotv_ocp_Repair")

#define VEST_SF			VEST_RIFLEMAN
#define VEST_SF_TL		VEST_TL
#define VEST_SF_MG		VEST_MG
#define VEST_SF_GR		VEST_GRENADIER

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		ARR_1("VSM_LBT1961_Black")



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_5(  \
    "B_AssaultPack_cbr",            \
    "B_AssaultPack_khk",            \
    "rhsusf_falconii_coy",          \
    "rhsusf_falconii_mc",           \
    "rhsusf_assault_eagleaiii_ocp"  \
)
#define BACKPACK_KITBAG     ARR_2("B_Kitbag_rgr","B_Kitbag_cbr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_cbr")
#define BACKPACK_BERGEN     ARR_1("")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	ARR_1("")

//	CSW-BACKPACKS
#define HMG_GUN		ARR_1("RHS_M2_Gun_Bag")
#define HMG_TRIPOD	ARR_1("RHS_M2_MiniTripod_Bag")
#define GMG_GUN		ARR_1("RHS_Mk19_Gun_Bag")
#define GMG_TRIPOD	ARR_1("RHS_Mk19_Tripod_Bag")
#define MORTAR_GUN	ARR_1("rhs_M252_Gun_Bag")
#define MORTAR_POD	ARR_1("rhs_M252_Bipod_Bag")



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER_BK ARR_1("rhsusf_acc_anpeq15side_bk")
#define LASERPOINTER_TN ARR_1("rhsusf_acc_anpeq15side")

#define RCO_1 ARR_1("rhsusf_acc_ACOG")
#define RCO_2 ARR_1("rhsusf_acc_ACOG2")
#define RCO_3 ARR_1("rhsusf_acc_ACOG3")

#define HOLOSIGHT   ARR_1("rhsusf_acc_eotech_552")
#define CCO         ARR_1("rhsusf_acc_compm4")

#define SNIPER_OPTIC    ARR_1("rhsusf_acc_premier")
#define SNIPER_OPTIC_NV ARR_1("rhsusf_acc_premier_anpvs27")

#define DMR_BIPOD ARR_1("rhsusf_acc_harris_bipod")



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE_1 "rhs_weap_m16a4_carryhandle"
#define RIFLE_2 "rhs_weap_m16a4_carryhandle_pmag"
#define RIFLE_UGL "rhs_weap_m16a4_carryhandle_M203"
#define RIFLE_RCO ARR_6(                      \
    WEAPON(RIFLE_1,LASERPOINTER_BK,RCO_1,""), \
    WEAPON(RIFLE_1,LASERPOINTER_BK,RCO_2,""), \
    WEAPON(RIFLE_1,LASERPOINTER_BK,RCO_3,""), \
    WEAPON(RIFLE_2,LASERPOINTER_BK,RCO_1,""), \
    WEAPON(RIFLE_2,LASERPOINTER_BK,RCO_2,""), \
    WEAPON(RIFLE_2,LASERPOINTER_BK,RCO_3,"")  \
)
#define RIFLE_UGL_RCO ARR_3(                       \
    WEAPON(RIFLE_UGL,LASERPOINTER_BK,RCO_1,""),    \
    WEAPON(RIFLE_UGL,LASERPOINTER_BK,RCO_2,""),    \
    WEAPON(RIFLE_UGL,LASERPOINTER_BK,RCO_3,"")	   \
)
#define RIFLE_CCO ARR_2(                    \
    WEAPON(RIFLE_1,LASERPOINTER_BK,CCO,""), \
    WEAPON(RIFLE_2,LASERPOINTER_BK,CCO,"") \
)
#define RIFLE_UGL_CCO ARR_1(                  \
    WEAPON(RIFLE_UGL,LASERPOINTER_BK,CCO,"") \
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
    WEAPON("rhs_weap_mk18_KAC_d","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_D"),	\
    WEAPON("rhs_weap_mk18_d","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_D")     	\
)
#define SF_CARBINE_UGL ARR_3(	                                                                            \
    WEAPON("rhs_weap_m4a1_blockII_M203","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR"),	    \
    WEAPON("rhs_weap_m4a1_blockII_M203_bk","rhsusf_acc_nt4_black",LASERPOINTER_BK,"rhsusf_acc_SpecterDR"),	\
    WEAPON("rhs_weap_m4a1_blockII_M203_d","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_D")	\
)
#define SF_CARBINE_TN ARR_2(	                                                                    \
    WEAPON("rhs_weap_mk18_KAC_d","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_D"),	\
    WEAPON("rhs_weap_mk18_d","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_D")	        \
)
#define SF_CARBINE_UGL_TN		WEAPON("rhs_weap_m4a1_blockII_M203_d","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_D")
#define SF_CARBINE_DIVER 		WEAPON("rhs_weap_mk18_KAC_bk","rhsusf_acc_nt4_black",LASERPOINTER_BK,CCO)
#define SF_CARBINE_DIVER_UGL 	WEAPON("rhs_weap_m4a1_blockII_M203_bk","rhsusf_acc_nt4_black",LASERPOINTER_BK,CCO)

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR WEAPON("srifle_EBR_F",DMR_BIPOD,LASERPOINTER_BK,"optic_AMS_snd")
#define DMR_SF ARR_3(                                                                     	\
    WEAPON("arifle_SPAR_03_blk_F","muzzle_snds_B",LASERPOINTER_BK,"optic_AMS"),         	\
    WEAPON("arifle_SPAR_03_khk_F","muzzle_snds_B_khk_F",LASERPOINTER_TN,"optic_AMS_khk"),	\
    WEAPON("arifle_SPAR_03_snd_F","muzzle_snds_B_snd_F",LASERPOINTER_TN,"optic_AMS_snd")	\
)
#define DMR_DIVER   WEAPON("arifle_SPAR_03_blk_F","muzzle_snds_B",LASERPOINTER_BK,"rhsusf_acc_SpecterDR_A")
#define SR_AP       WEAPON("rhs_weap_xm2010_d_leu","rhsusf_acc_LEUPOLDMK4_2_d","","")
#define SR_AM       WEAPON("rhs_weap_M107_d",SNIPER_OPTIC,"","")

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE_1 "rhs_weap_m249_pip_S"
#define AUTORIFLE_2 "rhs_weap_m249_pip_S_vfg"
#define AUTORIFLE_RCO ARR_6(                    	\
    WEAPON(AUTORIFLE_1,LASERPOINTER_BK,RCO_1,""),	\
    WEAPON(AUTORIFLE_1,LASERPOINTER_BK,RCO_2,""),	\
    WEAPON(AUTORIFLE_1,LASERPOINTER_BK,RCO_3,""),	\
    WEAPON(AUTORIFLE_2,LASERPOINTER_BK,RCO_1,""),	\
    WEAPON(AUTORIFLE_2,LASERPOINTER_BK,RCO_2,""),	\
    WEAPON(AUTORIFLE_2,LASERPOINTER_BK,RCO_3,"")	\
)
#define AUTORIFLE_SF    WEAPON("hlc_lmg_mk46","rhsusf_acc_ARDEC_M240","rhsusf_acc_anpeq15side_bk",HOLOSIGHT)
#define MMG             WEAPON("rhs_weap_m240B","rhsusf_acc_ACOG_MDO",LASERPOINTER_BK,"")



/* ###################### - SIDEARMS - ###################### */
#define PISTOL		WEAPON("rhsusf_weap_m9","","","")
#define PISTOL_SF	WEAPON("rhsusf_weap_glock17g4","","","")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	WEAPON("rhs_weap_M136_hedp","","","")
#define AT_MISSILE	WEAPON("rhs_weap_fgm148","","","")
#define AA_MISSILE	WEAPON("rhs_weap_fim92","","","")



/* ###################### - MAGAZINES - ###################### */
//  RIFLE & CARBINE
#define MAG_RIFLE			ARR_1("30Rnd_556x45_Stanag")
#define MAG_RIFLE_TRACER	ARR_1("30Rnd_556x45_Stanag_Tracer_Red")

#define MAG_CARBINE         ARR_1(MAG_RIFLE)
#define MAG_CARBINE_TRACER  ARR_1(MAG_RIFLE_TRACER)

//  AR & MG
#define MAG_AUTORIFLE       ARR_1("rhs_200rnd_556x45_M_SAW")
#define MAG_MMG             ARR_1("rhsusf_100Rnd_762x51")
#define MAGS_AUTORIFLE_SF   ARR_2(MAG_AUTORIFLE,5)

//  DMR & SR
#define MAG_DMR     ARR_1("20Rnd_762x51_Mag")
#define MAG_DMR_SF  ARR_1("ACE_20Rnd_762x51_M118LR_Mag")
#define MAGS_SR_AP  ARR_2("rhsusf_5Rnd_300winmag_xm2010",20)
#define MAGS_SR_AM  ARR_4("rhsusf_mag_10Rnd_STD_50BMG_M33",3,"rhsusf_mag_10Rnd_STD_50BMG_mk211",1)

//  PDW & SIDEARMS
#define MAG_PDW	        ARR_1("30Rnd_9x21_Mag_SMG_02")
#define MAG_PISTOL 		ARR_1("rhsusf_mag_15Rnd_9x19_JHP")
#define MAG_PISTOL_SF 	ARR_1("rhsusf_mag_17Rnd_9x19_JHP")

//  ROCKETS & MISSILES
#define MAGS_AT_LIGHT           ARR_1("rhs_m136_hedp_mag")
#define MAGS_AT_MISSILE         ARR_1("rhs_fgm148_magazine_AT")
#define MAGS_AT_MISSILE_ASST    ARR_2("rhs_fgm148_magazine_AT",1)
#define MAGS_AA_MISSILE         ARR_1("rhs_fim92_mag")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_fim92_mag",2)

//  GRENADES
#define GRENADE_IR	    ARR_2("B_IR_Grenade",2)
#define GRENADES_BASIC  ARR_8("Chemlight_red","Chemlight_green","HandGrenade",2,"SmokeShell",2,"SmokeShellOrange","SmokeShellPurple")
#define GRENADES_MINI   ARR_8("Chemlight_red","Chemlight_green","MiniGrenade",2,"SmokeShell",2,"SmokeShellOrange","SmokeShellPurple")
#define GRENADES_LIGHT  ARR_4("Chemlight_red","Chemlight_green","SmokeShellOrange","SmokeShellPurple")



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_2(                \
    "rhsusf_ach_helmet_headset_ocp", \
    "rhsusf_ach_helmet_ocp_norotos"  \
)
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_6(          \
    "rhsusf_ach_bare_tan",          \
    "rhsusf_ach_bare_tan_headset",  \
    "rhsusf_ach_bare_semi",         \
    "rhsusf_ach_bare_semi_headset", \
    "rhsusf_ach_bare_des",          \
    "rhsusf_ach_bare_des_headset"   \
)
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_6(        	\
    "rhsusf_opscore_aor1_pelt", 	\
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
#define HELMET_CREW 		ARR_1("rhsusf_cvc_helmet")
#define HELMET_HELICOPTER	ARR_1("rhsusf_hgu56p")
#define HELMET_HELI_CREW	ARR_1("rhsusf_hgu56p_mask")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_B")

// COMMANDERS
#define CAP_CO      ARR_1("H_Beret_02")
#define CAP_XO      ARR_1("H_Beret_blk")
#define CAP_OFFICER ARR_1("H_Cap_oli_hs")



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_1("rhs_googles_clear")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_1("rhs_ess_black")
#define GOGGLES_SF		ARR_4("G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_beast")
#define GOGGLES_SF_FULL ARR_1("G_Balaclava_combat")
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG		ARR_1("rhsusf_ANPVS_14")
#define NVG_SF	ARR_1("rhsusf_ANPVS_15")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator_03")



/* ###################### - NAVIGATION - ###################### */
#define GPS			ARR_1("")
#define BFT_PDA		ARR_1("b_EasyTrack_PDA")
#define BFT_TABLET	ARR_1("b_EasyTrack_Tablet")
#define TERMINAL	ARR_1("B_UavTerminal")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_PRC148")
#define RADIO_PACK 	ARR_1("ACRE_PRC117F")



/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#ifndef INSIGNIA_COMMON
    #define INSIGNIA_COMMON ARR_1("")
#endif
#ifndef INSIGNIA_SF
    #define INSIGNIA_SF INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_TNK
    #define INSIGNIA_TNK INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_HELI
    #define INSIGNIA_HELI INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_JET
    #define INSIGNIA_JET INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_MEV
    #define INSIGNIA_MEV INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_SUPPORT
    #define INSIGNIA_SUPPORT INSIGNIA_COMMON
#endif
