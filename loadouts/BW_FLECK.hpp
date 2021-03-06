/* ###################### - UGL-Magazines - ###################### */
#include "components\blufor.hpp"
#include "components\ugl_vanilla.hpp"

#define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      ARR_1("pbw_uniform3k_fleck")
#define UNIFORM             ARR_7("pbw_uniform1_fleck","pbw_uniform1h_fleck","pbw_uniform2_fleck","pbw_uniform3_fleck","pbw_uniform3k_fleck","pbw_uniform4_fleck","pbw_uniform4k_fleck")
#define UNIFORM_COMPANY     ARR_1("pbw_uniform1_fleck")
#define UNIFORM_RECON       ARR_2("BWA3_Uniform_Fleck","BWA3_Uniform_sleeves_Fleck")
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  ARR_1("bwa3_uniform_helipilot")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_1("U_B_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("BWA3_Vest_Fleck")
#define VEST_OFFICER    VEST_EMPTY
#define VEST_LIGHT      ARR_1("BWA3_Vest_Rifleman_Fleck")
#define VEST_RM         VEST_LIGHT
#define VEST_GR         ARR_1("BWA3_Vest_grenadier_Fleck")
#define VEST_CM         ARR_1("BWA3_Vest_Medic_Fleck")
#define VEST_SL         ARR_1("BWA3_Vest_Leader_Fleck")
#define VEST_TL         VEST_SL
#define VEST_MG         ARR_1("BWA3_Vest_MachineGunner_Fleck")
#define VEST_DM         ARR_1("BWA3_Vest_Marksman_Fleck")

#define VEST_CREW		VEST_EMPTY

#define VEST_RECON			ARR_3("VSM_FAPC_Operator_OGA_OD","VSM_RAV_operator_OGA_OD","VSM_CarrierRig_Operator_OGA_OD")
#define VEST_RECON_TL		VEST_RECON
#define VEST_RECON_MG		ARR_2("VSM_RAV_MG_OGA_OD","VSM_FAPC_MG_OGA_OD")
#define VEST_RECON_GR		VEST_RECON

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		ARR_1("VSM_FAPC_Operator_OGA_OD")

#define VEST_PROTECTED  "W_V_EOD_olive_ICRC"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("BWA3_AssaultPack_Fleck")
#define BACKPACK_KITBAG     ARR_1("BWA3_Kitbag_Fleck")
#define BACKPACK_CARRYALL   ARR_1("BWA3_PatrolPack_Fleck")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	ARR_1("")
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      ARR_1("BWA3_FieldPack_Fleck")

//	CSW-BACKPACKS
#define HMG_GUN		ARR_1("RHS_M2_Gun_Bag")
#define HMG_TRIPOD	ARR_1("RHS_M2_MiniTripod_Bag")
#define GMG_GUN		ARR_1("RHS_Mk19_Gun_Bag")
#define GMG_TRIPOD	ARR_1("RHS_Mk19_Tripod_Bag")
#define MORTAR_GUN	ARR_1("rhs_M252_Gun_Bag")
#define MORTAR_POD	ARR_1("rhs_M252_Bipod_Bag")



/* ###################### - ATTACHMENTS- ###################### */



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           WEAPON("BWA3_G36A1","bwa3_acc_llm01_irlaser","","","")
#define RIFLE_RCO       RIFLE
#define RIFLE_CCO       RIFLE

#define RIFLE_UGL       WEAPON("BWA3_G36A1_AG40","bwa3_acc_llm01_irlaser","","","")
#define RIFLE_UGL_RCO   RIFLE_UGL
#define RIFLE_UGL_CCO   RIFLE_UGL

#define MAG_RIFLE        ARR_1("BWA3_30Rnd_556x45_G36")
#define MAG_RIFLE_TRACER ARR_1("BWA3_30Rnd_556x45_G36_Tracer")

// PDW
#define PDW     WEAPON("hlc_smg_MP5N","","","","")
#define MAG_PDW ARR_1("hlc_30Rnd_9x19_B_MP5")


// CARBINE
#define CARBINE     WEAPON("BWA3_G36KA0","","","","")
#define CARBINE_CCO CARBINE

#define CARBINE_UGL     RIFLE_UGL
#define CARBINE_UGL_CCO RIFLE_UGL_CCO

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER


// SF CARBINES
#define RIFLE_RECON         WEAPON_OLD("BWA3_G36KA4","bwa3_optic_eotech_mag_off","bwa3_acc_llm01_irlaser","bwa3_muzzle_snds_qdss")
#define RIFLE_UGL_RECON     WEAPON_OLD("BWA3_G36A3_AG40","bwa3_optic_eotech_mag_off","bwa3_acc_llm01_irlaser","bwa3_muzzle_snds_qdss")
#define RIFLE_RECON_TAN     WEAPON_OLD("BWA3_G36KA4_tan","bwa3_optic_eotech_sand_mag_off","bwa3_acc_llm01_irlaser_tan","bwa3_muzzle_snds_qdss_tan")
#define RIFLE_UGL_RECON_TAN WEAPON_OLD("BWA3_G36A3_AG40_tan","bwa3_optic_eotech_sand_mag_off","bwa3_acc_llm01_irlaser_tan","bwa3_muzzle_snds_qdss_tan")
#define RIFLE_DIVER         RIFLE_RECON
#define RIFLE_UGL_DIVER     RIFLE_UGL_RECON

#define MAG_RIFLE_RECON         MAG_RIFLE
#define MAG_RIFLE_RECON_TRACER  "BWA3_30Rnd_556x45_G36_Tracer_Dim"


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR     WEAPON("BWA3_G28","bwa3_optic_pmii_dmr_microt1_rear","bwa3_acc_llm01_irlaser","","")
#define MAG_DMR ARR_3("BWA3_10Rnd_762x51_G28_Tracer",4,"BWA3_10Rnd_762x51_G28_LR")

#define DMR_RECON   WEAPON("BWA3_G28","bwa3_optic_pmii_dmr_microt1_rear","bwa3_acc_llm01_irlaser","bwa3_muzzle_snds_rotex_iia","")
#define DMR_DIVER   DMR_RECON
#define MAG_DMR_RECON ARR_3("BWA3_10Rnd_762x51_G28_Tracer_Dim",4,"BWA3_10Rnd_762x51_G28_LR")

#define SR_AP       WEAPON_OLD("hlc_rifle_awMagnum_OD_ghillie","rhsusf_acc_LEUPOLDMK4_2","","")
#define MAGS_SR_AP  ARR_6("hlc_5rnd_300WM_FMJ_AWM",5,"hlc_5rnd_300WM_AP_AWM",4,"hlc_5rnd_300WM_BTSP_AWM",2)

#define SR_AM       WEAPON_OLD("rhs_weap_M107_w","rhsusf_acc_LEUPOLDMK4_2","","")
#define MAGS_SR_AM  ARR_2("rhsusf_mag_10Rnd_STD_50BMG_M33",6)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           WEAPON_OLD("BWA3_MG4","bwa3_optic_zo4x30","bwa3_acc_llm01_irlaser","")
#define MAG_AUTORIFLE       ARR_1("BWA3_200Rnd_556x45")
#define MAGS_AUTORIFLE      ARR_3(MAG_AUTORIFLE,3,"BWA3_200Rnd_556x45_Tracer")
#define MAGS_AUTORIFLE_ASST ARR_3(MAG_AUTORIFLE,2,"BWA3_200Rnd_556x45_Tracer")

#define AUTORIFLE_RECON        WEAPON_OLD("BWA3_MG4","bwa3_optic_zo4x30_rsas","bwa3_acc_llm01_irlaser","bwa3_muzzle_snds_qdss")
#define MAGS_AUTORIFLE_RECON   MAGS_AUTORIFLE

#define MMG           WEAPON("BWA3_MG5_tan","bwa3_optic_zo4x30i_sand","bwa3_acc_llm01_irlaser","","")
#define MAGS_MMG      ARR_4("BWA3_120Rnd_762x51_soft",2,"BWA3_120Rnd_762x51_Tracer_soft",2)
#define MAGS_MMG_ASST MAGS_MMG


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON_OLD("BWA3_P8","","","")
#define MAG_PISTOL 		ARR_1("BWA3_15Rnd_9x19_P8")

#define PISTOL_SF	    WEAPON_OLD("ksk_USP_45","muzzle_snds_acp","","")
#define MAG_PISTOL_SF 	ARR_1("11Rnd_45ACP_Mag")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON_OLD("BWA3_Pzf3","BWA3_optic_NSA80","","")
#define MAGS_AT_LIGHT           ARR_1("BWA3_PzF3_Tandem")

#define AT_ROCKET	            WEAPON_OLD("BWA3_CarlGustav_Optic","BWA3_optic_Carlgustav","","")
#define MAGS_AT_ROCKET          ARR_3("BWA3_Carlgustav_HEAT",2,"BWA3_Carlgustav_HEDP")
#define MAGS_AT_ROCKET_ASST     ARR_5("BWA3_Carlgustav_HEAT",2,"BWA3_Carlgustav_HEDP","BWA3_Carlgustav_Illum",2)

#define AA_MISSILE	            WEAPON_OLD("rhs_weap_fim92","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_fim92_mag")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_fim92_mag",2)

#define AT_MISSILE              WEAPON_OLD("launch_i_Titan_short_F","","","")
#define MAGS_AT_MISSILE         ARR_1("Titan_AT")
#define MAGS_AT_MISSILE_ASST    ARR_3("Titan_AT",2,"Titan_AP")



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_4("PBW_Helm1_fleck","PBW_Helm2_fleck","PBW_Helm2_fleck_h","PBW_Helm1_fleck_h")
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_2("PBW_Helm4_fleck","PBW_Helm4_fleck_h")
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_3("BWA3_OpsCore_Fleck_Camera","BWA3_OpsCore_Fleck_Patch","BWA3_OpsCore_Fleck")
#define HELMET_DIVER HELMET_SF
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("BWA3_CrewmanKSK_Fleck_Headset")
#define HELMET_HELICOPTER	ARR_1("H_PilotHelmetHeli_O")
#define HELMET_HELI_CREW	ARR_1("H_CrewHelmetHeli_O")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_O")

// COMMANDERS
#define CAP_CO      ARR_1("bwa3_beret_pzgren")
#define CAP_XO      ARR_1("bwa3_beret_jaeger")
#define CAP_OFFICER ARR_1("PBW_muetze1_fleck")



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_4("rhs_googles_clear","rhs_googles_black","rhs_googles_orange","rhs_googles_yellow")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    GOGGLES
#define GOGGLES_SF		ARR_8("rhsusf_shemagh_grn","rhsusf_shemagh_tan","rhsusf_shemagh_white","rhsusf_shemagh_od","G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_beast")
#define GOGGLES_SF_FULL ARR_4("rhsusf_shemagh_gogg_grn","rhsusf_shemagh_gogg_tan","rhsusf_shemagh_gogg_od","rhsusf_shemagh_gogg_white")
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG		ARR_1("")
#define NVG_SF	ARR_1("rhsusf_ANPVS_15")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator_03")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_SEM52SL")
#define RADIO_PACK 	ARR_1("ACRE_SEM70")
#define RADIO_SR "ACRE_SEM52SL"


/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
