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
#define	UNIFORM_STR         "rhs_uniform_g3_rgr"    // Für Inventar
#define UNIFORM             ARR_1(UNIFORM_STR)      // Für Zufallsauswahl
#define UNIFORM_COMMAND     UNIFORM
#define UNIFORM_SPECIAL     UNIFORM
#define UNIFORM_DIVER       ARR_1("U_I_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  ARR_1("rhs_uniform_g3_blk")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_2("U_B_FullGhillie_sard","U_B_FullGhillie_ard")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("VSM_LBT1961_OGA_OD")
#define VEST_BELT       ARR_1("V_Rangemaster_belt")
#define VEST_LIGHT      ARR_3("V_Chestrig_rgr","V_Chestrig_khk","V_Chestrig_oli")
#define VEST_RIFLEMAN   ARR_3("V_TacVest_oli","V_TacVest_khk","V_TacVest_brn")
#define VEST_GRENADIER  ARR_1("V_PlateCarrier1_rgr_noflag_F")
#define VEST_MEDIC      ARR_1("VSM_LBT6094_operator_OGA_OD")
#define VEST_SL         ARR_1("V_PlateCarrier2_rgr_noflag_F")
#define VEST_TL         VEST_GRENADIER
#define VEST_MG         ARR_4("VSM_FAPC_MG_OGA_OD","VSM_CarrierRig_Gunner_OGA_OD","VSM_LBT6094_MG_OGA_OD","VSM_RAV_MG_OGA_OD")
#define VEST_DM         ARR_2("VSM_CarrierRig_Operator_OGA_OD","VSM_FAPC_Operator_OGA_OD")

#define VEST_CREW		ARR_2("V_TacChestrig_oli_F","V_BandollierB_oli")

#define VEST_SF			ARR_4("VSM_RAV_operator_OGA","VSM_LBT6094_operator_OGA","VSM_CarrierRig_operator_OGA","VSM_FAPC_operator_OGA")
#define VEST_SF_TL		ARR_4("VSM_RAV_operator_OGA_OD","VSM_LBT6094_operator_OGA_OD","VSM_CarrierRig_operator_OGA_OD","VSM_FAPC_operator_OGA_OD")
#define VEST_SF_MG		ARR_4("VSM_RAV_MG_OGA","VSM_LBT6094_MG_OGA","VSM_CarrierRig_Gunner_OGA","VSM_FAPC_MG_OGA")
#define VEST_SF_GR		VEST_SF

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		ARR_1("VSM_LBT1961_Black")



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_3("B_FieldPack_oli","B_FieldPack_khk","B_FieldPack_cbr")
#define BACKPACK_KITBAG     ARR_2("B_Kitbag_rgr","B_Kitbag_cbr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_oli")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		"RHS_M2_Gun_Bag"                //Browning M2
#define HMG_TRIPOD	"RHS_M2_MiniTripod_Bag"         //
#define GMG_GUN		"RHS_Mk19_Gun_Bag"              //Mk19
#define GMG_TRIPOD	"RHS_Mk19_Tripod_Bag"           //
#define MORTAR_GUN	""                              //keiner
#define MORTAR_POD	""                              //



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER_BK "acc_pointer_ir"

#define RCO "optic_Holosight_blk_F"

#define SNIPER_OPTIC "optic_LRPS"
#define SNIPER_OPTIC_NV "optic_NVS"

#define DMR_BIPOD "rhsusf_acc_harris_bipod"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE "arifle_TRG21_F"
#define RIFLE_UGL "arifle_TRG21_GL_F"
#define RIFLE_RCO WEAPON(RIFLE,"",RCO,"")
#define RIFLE_UGL_RCO WEAPON(RIFLE_UGL,"",RCO,"")
#define RIFLE_CCO RIFLE_RCO
#define RIFLE_UGL_CCO RIFLE_UGL_RCO

// CARBINE & PDW
#define PDW WEAPON("hgun_PDW2000_F","","","")
#define CARBINE_1 "arifle_TRG20_F"
#define CARBINE_UGL	RIFLE_UGL

#define CARBINE ARR_1(CARBINE_1)
#define CARBINE_HOLO WEAPON(CARBINE_1,RCO,"","")
#define CARBINE_UGL_HOLO WEAPON(CARBINE_UGL,RCO,"","")

// SF CARBINES
#define SF_CARBINE ARR_2(\
    WEAPON(RIFLE,LASERPOINTER_BK,RCO,"rhsusf_acc_nt4_tan"),\
    WEAPON(RIFLE,LASERPOINTER_BK,RCO,"rhsusf_acc_nt4_black")\
)
#define SF_CARBINE_UGL ARR_2(\
    WEAPON(RIFLE_UGL,LASERPOINTER_BK,RCO,"rhsusf_acc_nt4_tan"),\
    WEAPON(RIFLE_UGL,LASERPOINTER_BK,RCO,"rhsusf_acc_nt4_black")\
)
#define SF_CARBINE_TN           SF_CARBINE
#define SF_CARBINE_UGL_TN		SF_CARBINE_UGL
#define SF_CARBINE_DIVER 		SF_CARBINE
#define SF_CARBINE_DIVER_UGL 	SF_CARBINE_UGL

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR WEAPON("rhs_weap_sr25",DMR_BIPOD,LASERPOINTER_BK,"rhsusf_acc_ACOG3")
#define DMR_SF ARR_3(                                                                     	\
    WEAPON("rhs_weap_sr25_ec","rhsusf_acc_sr25S",LASERPOINTER_BK,"rhsusf_acc_ACOG3"),         	\
    WEAPON("rhs_weap_sr25_ec_wd","rhsusf_acc_sr25S",LASERPOINTER_BK,"rhsusf_acc_ACOG_wd"),	\
    WEAPON("rhs_weap_sr25_ec_d","rhsusf_acc_sr25S",LASERPOINTER_BK,"rhsusf_acc_ACOG_d")	\
)
#define DMR_DIVER DMR_SF
#define SR_AP WEAPON("rhs_weap_m24sws_ghillie",SNIPER_OPTIC,"rhsusf_acc_harris_swivel","")
#define SR_AM WEAPON("rhs_weap_m82a1",SNIPER_OPTIC,"","")

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE "LMG_Zafir_F"
#define AUTORIFLE_RCO WEAPON(AUTORIFLE,"","","")
#define AUTORIFLE_SF WEAPON(AUTORIFLE,LASERPOINTER_BK,RCO,"")
#define MMG AUTORIFLE_SF



/* ###################### - SIDEARMS - ###################### */
#define PISTOL		WEAPON("rhsusf_weap_m9","","","")
#define PISTOL_SF	WEAPON("rhsusf_weap_glock17g4","","","")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	WEAPON("rhs_weap_m72a7","","","")
#define AT_MISSILE	WEAPON("CUP_launch_M47","","","")
#define AA_MISSILE	WEAPON("rhs_weap_fim92","","","")   // Nicht nutzen!



/* ###################### - MAGAZINES - ###################### */
//  RIFLE & CARBINE
#define MAG_RIFLE			ARR_1("30Rnd_556x45_Stanag")
#define MAG_RIFLE_TRACER	ARR_1("30Rnd_556x45_Stanag_Tracer_Red")

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER

//  AR & MG
#define MAG_AUTORIFLE       ARR_1("150Rnd_762x54_Box")
#define MAG_MMG             MAG_AUTORIFLE
#define MAGS_AUTORIFLE_SF   ARR_2(MAG_AUTORIFLE,5)

//  DMR & SR
#define MAG_DMR     ARR_1("rhsusf_20Rnd_762x51_m118_special_Mag")
#define MAG_DMR_SF  ARR_1("rhsusf_20Rnd_762x51_m118_special_Mag")
#define MAGS_SR_AP  ARR_2("rhsusf_5Rnd_762x51_m118_special_Mag",10)
#define MAGS_SR_AM  ARR_4("rhsusf_mag_10Rnd_STD_50BMG_M33",3,"rhsusf_mag_10Rnd_STD_50BMG_mk211",1)

//  PDW & SIDEARMS
#define MAG_PDW	        ARR_1("30Rnd_9x21_Mag")
#define MAG_PISTOL 		ARR_1("rhsusf_mag_15Rnd_9x19_JHP")
#define MAG_PISTOL_SF 	ARR_1("rhsusf_mag_17Rnd_9x19_JHP")

//  ROCKETS & MISSILES
#define MAGS_AT_LIGHT           ARR_1("rhs_m72a7_mag")
#define MAGS_AT_MISSILE         ARR_1("CUP_Dragon_EP1_M")
#define MAGS_AT_MISSILE_ASST    ARR_2("CUP_Dragon_EP1_M",1)
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
    "rhsgref_helmet_M1_bare_alt01",  \
    "rhsgref_helmet_M1_bare"         \
)
// NON-COMBAT INFANTRY
#define HELMET_BARE HELMET
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
#define NVG	    ARR_1("")
#define NVG_SF	ARR_1("NVGoggles_OPFOR")



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

#include "common.hpp"