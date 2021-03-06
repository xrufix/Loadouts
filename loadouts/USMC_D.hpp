/* ###################### - UGL-Magazines - ###################### */
#include "components\blufor.hpp"
#include "components\ugl_vanilla.hpp"

// #define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "rhs_uniform_FROG01_d"
#define UNIFORM             ARR_1(UNIFORM_SINGLE)
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON     UNIFORM
#define UNIFORM_DIVER       ARR_1("U_I_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  ARR_1("U_B_HeliPilotCoveralls")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_2("U_B_FullGhillie_sard","U_B_FullGhillie_ard")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("rhsusf_spc")
#define VEST_OFFICER    ARR_1("V_Rangemaster_belt")
#define VEST_LIGHT      ARR_1("rhsusf_spc_light")
#define VEST_RM         ARR_1("rhsusf_spc_rifleman")
#define VEST_GR         ARR_1("rhsusf_spc_teamleader")
#define VEST_CM         ARR_1("rhsusf_spc_corpsman")
#define VEST_SL         ARR_1("rhsusf_spc_teamleader")
#define VEST_TL         VEST_SL
#define VEST_MG         ARR_1("rhsusf_spc_mg")
#define VEST_DM         ARR_1("rhsusf_spc_marksman")

#define VEST_CREW		ARR_1("rhsusf_spc_crewman")

#define VEST_RECON			ARR_1("rhsusf_mbav_rifleman")
#define VEST_RECON_TL		ARR_1("rhsusf_mbav_grenadier")
#define VEST_RECON_MG		ARR_1("rhsusf_mbav_mg")
#define VEST_RECON_GR		ARR_1("rhsusf_mbav_grenadier")

#define VEST_BREATHER	"V_RebreatherB"
#define VEST_DIVER		"rhsusf_mbav_rifleman"

#define VEST_PROTECTED  "W_V_EOD_coyote_ICRC"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_3("B_AssaultPack_cbr","B_AssaultPack_sgg","rhsusf_falconii_coy")
#define BACKPACK_KITBAG     ARR_2("B_Kitbag_rgr","B_Kitbag_cbr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_cbr")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	BACKPACK_ASSAULT
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		ARR_1("RHS_M2_Gun_Bag")
#define HMG_TRIPOD	ARR_1("RHS_M2_MiniTripod_Bag")
#define GMG_GUN		ARR_1("RHS_Mk19_Gun_Bag")
#define GMG_TRIPOD	ARR_1("RHS_Mk19_Tripod_Bag")
#define MORTAR_GUN	ARR_1("rhs_M252_Gun_Bag")
#define MORTAR_POD	ARR_1("rhs_M252_Bipod_Bag")



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER "rhsusf_acc_anpeq15_bk_light"
#define LASERPOINTER_TN "rhsusf_acc_anpeq16a_light"

#define RCO_1 "rhsusf_acc_ACOG_USMC"
#define RCO_2 "rhsusf_acc_ACOG2_USMC"
#define RCO_3 "rhsusf_acc_ACOG3_USMC"

#define HOLOSIGHT "rhsusf_acc_eotech_552"
#define CCO "rhsusf_acc_compm4"

#define SNIPER_OPTIC "rhsusf_acc_premier"
#define SNIPER_OPTIC_NV "rhsusf_acc_premier_anpvs27"

#define DMR_BIPOD "rhsusf_acc_harris_bipod"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE "rhs_weap_m16a4"
#define RIFLE_UGL "rhs_weap_m16a4_carryhandle_M203"
#define RIFLE_RCO ARR_3( \
    WEAPON_OLD(RIFLE,LASERPOINTER,RCO_1,""), \
    WEAPON_OLD(RIFLE,LASERPOINTER,RCO_2,""), \
    WEAPON_OLD(RIFLE,LASERPOINTER,RCO_3,""))
#define RIFLE_UGL_RCO ARR_3( \
    WEAPON_OLD(RIFLE_UGL,LASERPOINTER,RCO_1,""), \
    WEAPON_OLD(RIFLE_UGL,LASERPOINTER,RCO_2,""), \
    WEAPON_OLD(RIFLE_UGL,LASERPOINTER,RCO_3,""))
#define RIFLE_CCO RIFLE_RCO
#define RIFLE_UGL_CCO RIFLE_UGL_RCO

#define MAG_RIFLE			"rhs_mag_30Rnd_556x45_M855A1_Stanag"
#define MAG_RIFLE_TRACER	"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"

// PDW
#define PDW WEAPON_OLD("SMG_05_F","","","")
#define MAG_PDW	"30Rnd_9x21_Mag_SMG_02"

// CARBINE
#define CARBINE_1 "rhs_weap_m4"
#define CARBINE_2 "rhs_weap_m4_mstock"
#define CARBINE_UGL	"rhs_weap_m4a1_m203"

#define CARBINE ARR_2(CARBINE_1,CARBINE_2)
#define CARBINE_CCO ARR_2(            	\
    WEAPON_OLD(CARBINE_1,HOLOSIGHT,"",""),	\
    WEAPON_OLD(CARBINE_2,HOLOSIGHT,"",""))
#define CARBINE_UGL_CCO WEAPON_OLD(CARBINE_UGL,HOLOSIGHT,"","")

#define MAG_CARBINE MAG_RIFLE
#define MAG_CARBINE_TRACER MAG_RIFLE_TRACER

// RECON RIFLES
#define RIFLE_RECON ARR_2( \
    WEAPON_OLD("rhs_weap_m4a1_blockII_d","rhsusf_acc_su230_mrds_c","rhsusf_acc_anpeq15_wmx_light","rhsusf_acc_nt4_tan"), \
    WEAPON_OLD("rhs_weap_m4a1_blockII_KAC_d","rhsusf_acc_su230_mrds_c","rhsusf_acc_anpeq15_light","rhsusf_acc_nt4_tan"))
#define RIFLE_UGL_RECON WEAPON_OLD("rhs_weap_m4a1_blockII_M203_d","rhsusf_acc_g33_xps3_tan",LASERPOINTER_TN,"rhsusf_acc_nt4_tan")

#define RIFLE_RECON_TAN RIFLE_RECON
#define RIFLE_UGL_RECON_TAN RIFLE_UGL_RECON

#define RIFLE_DIVER WEAPON_OLD("rhs_weap_mk18_KAC_bk","rhsusf_acc_g33_xps3","rhsusf_acc_anpeq15_bk","rhsusf_acc_nt4_black")
#define RIFLE_UGL_DIVER WEAPON_OLD("rhs_weap_mk18_m320","rhsusf_acc_g33_xps3","rhsusf_acc_anpeq15_bk","rhsusf_acc_nt4_black")

#define MAG_RIFLE_RECON          "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan"
#define MAG_RIFLE_RECON_TRACER   "rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red"

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR WEAPON_OLD("srifle_EBR_F",DMR_BIPOD,"rhsusf_acc_anpeq15side_bk","rhsusf_acc_m8541")
#define MAG_DMR "20Rnd_762x51_Mag"

#define DMR_RECON WEAPON("arifle_SPAR_03_snd_F","muzzle_snds_B_snd_F","rhsusf_acc_anpeq16a_light","rhsusf_acc_su230a_mrds_c",DMR_BIPOD)
#define DMR_DIVER WEAPON("arifle_SPAR_03_blk_F","muzzle_snds_B","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230a_mrds",DMR_BIPOD)
#define MAG_DMR_RECON "ACE_20Rnd_762x51_M118LR_Mag"

#define SR_AP WEAPON_OLD("rhs_weap_m40a5_d",SNIPER_OPTIC,"rhsusf_acc_harris_swivel","")
#define MAGS_SR_AP "rhsusf_10Rnd_762x51_m118_special_Mag",9,"rhsusf_10Rnd_762x51_m993_Mag",3

#define SR_AM WEAPON_OLD("rhs_weap_M107_d",SNIPER_OPTIC,"","")
#define MAGS_SR_AM "rhsusf_mag_10Rnd_STD_50BMG_M33",3,"rhsusf_mag_10Rnd_STD_50BMG_mk211",1

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE ARR_3(                    	\
    WEAPON_OLD("rhs_weap_m27iar_grip",LASERPOINTER,RCO_1,"rhsusf_acc_harris_bipod"),	\
    WEAPON_OLD("rhs_weap_m27iar_grip",LASERPOINTER,RCO_2,"rhsusf_acc_harris_bipod"),	\
    WEAPON_OLD("rhs_weap_m27iar_grip",LASERPOINTER,RCO_3,"rhsusf_acc_harris_bipod"))
#define MAG_AUTORIFLE       "rhs_mag_30Rnd_556x45_M855A1_PMAG"
#define MAGS_AUTORIFLE      ARR_4(MAG_AUTORIFLE,12,"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",4)
#define MAGS_AUTORIFLE_ASST ARR_4(MAG_AUTORIFLE,8,"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",4)

#define AUTORIFLE_RECON WEAPON_OLD("rhs_weap_m27iar_grip","rhsusf_acc_anpeq16a_light","rhsusf_acc_su230_mrds","rhsusf_acc_harris_bipod")
#define MAGS_AUTORIFLE_RECON   ARR_2("rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",6)

#define MMG WEAPON_OLD("rhs_weap_m240B","rhsusf_acc_ACOG_MDO","","")
#define MAGS_MMG ARR_2("rhsusf_50Rnd_762x51_m80a1epr",4)
#define MAGS_MMG_ASST ARR_2("rhsusf_50Rnd_762x51_m80a1epr",8)



/* ###################### - SIDEARMS - ###################### */
#define PISTOL			WEAPON_OLD("rhsusf_weap_m9","","","")
#define MAG_PISTOL 		"rhsusf_mag_15Rnd_9x19_JHP"

#define PISTOL_SF		WEAPON_OLD("rhsusf_weap_glock17g4","acc_flashlight_pistol","","")
#define MAG_PISTOL_SF 	"rhsusf_mag_17Rnd_9x19_JHP"



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON_OLD("rhs_weap_M136_hedp","","","")
#define MAGS_AT_LIGHT           "rhs_m136_hedp_mag"

#define AT_ROCKET	            WEAPON_OLD("rhs_weap_smaw_green","rhs_weap_optic_smaw","acc_pointer_IR","")
#define MAGS_AT_ROCKET          ARR_2("rhs_mag_smaw_HEAA","rhs_mag_smaw_SR")
#define MAGS_AT_ROCKET_ASST     ARR_3("rhs_mag_smaw_HEDP","rhs_mag_smaw_HEAA","rhs_mag_smaw_SR")

#define AT_MISSILE              WEAPON_OLD("rhs_weap_fgm148","","","")
#define MAGS_AT_MISSILE         ARR_1("rhs_fgm148_magazine_AT")
#define MAGS_AT_MISSILE_ASST    ARR_1("rhs_fgm148_magazine_AT")

#define AA_MISSILE	            WEAPON_OLD("rhs_weap_fim92","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_fim92_mag")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_fim92_mag",2)



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_6(                           \
    "rhsusf_mich_helmet_marpatd",              	\
    "rhsusf_mich_helmet_marpatd_alt",          	\
    "rhsusf_mich_helmet_marpatd_alt_headset",  	\
    "rhsusf_mich_helmet_marpatd_headset",      	\
    "rhsusf_mich_helmet_marpatd_norotos",      	\
    "rhsusf_mich_helmet_marpatd_norotos_headset"\
)
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_6(                     	\
    "rhsusf_mich_bare_tan",                 	\
    "rhsusf_mich_bare_alt_tan",             	\
    "rhsusf_mich_bare_tan_headset",         	\
    "rhsusf_mich_bare_norotos_tan",         	\
    "rhsusf_mich_bare_norotos_alt_tan",     	\
    "rhsusf_mich_bare_norotos_alt_tan_headset"	\
)
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_5(        	\
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
#define HELMET_CREW 		ARR_2("rhsusf_cvc_helmet","rhsusf_cvc_alt_helmet")
#define HELMET_HELICOPTER	ARR_2("rhsusf_hgu56p_green","rhsusf_hgu56p_visor_green")
#define HELMET_HELI_CREW	ARR_4("rhsusf_hgu56p_mask_green","rhsusf_hgu56p_mask_green_mo","rhsusf_hgu56p_visor_mask_green","rhsusf_hgu56p_visor_mask_green_mo")
#define HELMET_JET			ARR_2("H_PilotHelmetFighter_B","RHS_jetpilot_usaf")

// COMMANDERS
#define CAP_CO "H_Beret_02"
#define CAP_XO "H_Beret_blk"
#define CAP_OFFICER "rhs_8point_marpatd"



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_4("rhs_googles_clear","rhs_googles_black","rhs_googles_orange","rhs_googles_yellow")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_6("rhsusf_shemagh_gogg_tan","rhsusf_shemagh_gogg_od","rhsusf_oakley_goggles_blk","rhsusf_oakley_goggles_clr","rhsusf_oakley_goggles_ylw","rhsusf_oakley_goggles_blk")
#define GOGGLES_SF		ARR_8("rhsusf_shemagh_grn","rhsusf_shemagh_tan","rhsusf_shemagh_white","rhsusf_shemagh_od","G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_beast")
#define GOGGLES_SF_FULL ARR_4("rhsusf_shemagh_gogg_grn","rhsusf_shemagh_gogg_tan","rhsusf_shemagh_gogg_od","rhsusf_shemagh_gogg_white")
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG				ARR_1("rhsusf_ANPVS_14")
#define NVG_SF			ARR_1("rhsusf_ANPVS_15")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator_03")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	"ACRE_PRC148"
#define RADIO_PACK 	"ACRE_PRC117F"
#define RADIO_SR "ACRE_PRC343"



/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
