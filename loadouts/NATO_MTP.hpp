/* ###################### - UGL-Magazines - ###################### */
#include "components\blufor.hpp"
#include "components\ugl_vanilla.hpp"

#define EASYTRACK
#define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "U_B_CombatUniform_mcam"        // Für Inventar
#define UNIFORM             ARR_2(UNIFORM_SINGLE,"U_B_CombatUniform_mcam_vest")      // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON       ARR_2("xru_u_b_combatuniform_drt","xru_u_b_combatuniform_drt_vest")
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        ARR_1("xru_u_b_combatuniform_sage_tshirt")
#define UNIFORM_HELICOPTER  ARR_1("U_B_HeliPilotCoveralls")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_2("U_B_FullGhillie_sard","U_B_FullGhillie_ard")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_2("V_PlateCarrier1_rgr","xru_V_PlateCarrier1_khk")
#define VEST_OFFICER       ARR_1("V_Rangemaster_belt")
#define VEST_LIGHT      VEST_EMPTY
#define VEST_RM         ARR_2("V_PlateCarrier2_rgr","xru_V_PlateCarrier2_khk")
#define VEST_GR         VEST_RM
#define VEST_CM         VEST_RM
#define VEST_SL         VEST_RM
#define VEST_TL         VEST_RM
#define VEST_MG         VEST_RM
#define VEST_DM         VEST_RM

#define VEST_CREW		ARR_1("V_Chestrig_oli")

#define VEST_RECON			VEST_LIGHT
#define VEST_RECON_TL		VEST_RM
#define VEST_RECON_MG		VEST_LIGHT
#define VEST_RECON_GR		VEST_RM

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		ARR_1("V_TacVestIR_blk")

#define VEST_PROTECTED  "W_V_EOD_olive_ICRC"

/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_5("B_AssaultPack_cbr","B_AssaultPack_rgr","B_AssaultPack_khk","B_AssaultPack_mcamo","B_AssaultPack_sgg")
#define BACKPACK_KITBAG     ARR_2("B_Kitbag_mcamo","B_Kitbag_cbr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_mcamo")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	ARR_1("")
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		"B_HMG_01_weapon_F"
#define HMG_TRIPOD	"B_HMG_01_support_F"
#define GMG_GUN		"B_GMG_01_weapon_F"
#define GMG_TRIPOD	"B_HMG_01_support_F"
#define MORTAR_GUN	"B_Mortar_01_weapon_F"
#define MORTAR_POD	"B_Mortar_01_support_F"



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER "acc_pointer_ir"

#define RCO "optic_hamr"
#define CCO "optic_aco_grn"

#define SNIPER_OPTIC "optic_LRPS"
#define SNIPER_OPTIC_NV "optic_NVS"

#define DMR_BIPOD "bipod_01_F_snd"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           ARR_1("arifle_MX_F")
#define RIFLE_UGL       ARR_1("arifle_MX_GL_F")
#define RIFLE_RCO       WEAPON_OLD(RIFLE,LASERPOINTER,RCO,"")
#define RIFLE_UGL_RCO   WEAPON_OLD(RIFLE_UGL,LASERPOINTER,RCO,"")
#define RIFLE_CCO       WEAPON_OLD(RIFLE,LASERPOINTER,CCO,"")
#define RIFLE_UGL_CCO   WEAPON_OLD(RIFLE_UGL,LASERPOINTER,CCO,"")

#define MAG_RIFLE			ARR_1("30Rnd_65x39_caseless_mag")
#define MAG_RIFLE_TRACER	ARR_1("30Rnd_65x39_caseless_mag_Tracer")

// CARBINE & PDW
#define PDW         WEAPON_OLD("smg_01_f",CCO,"acc_flashlight_smg_01","")
#define MAG_PDW	        ARR_1("30Rnd_45ACP_Mag_SMG_01")


#define CARBINE     ARR_1("arifle_MXC_Black_F")
#define CARBINE_UGL	ARR_1("arifle_MX_GL_Black_F")
#define CARBINE_CCO        WEAPON_OLD(CARBINE,CCO,"","")
#define CARBINE_UGL_CCO    WEAPON_OLD(CARBINE_UGL,CCO,"","")

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER

// SF CARBINES
#define RIFLE_RECON ARR_3(\
    WEAPON_OLD("arifle_SPAR_01_blk_F",LASERPOINTER,"optic_ERCO_blk_F","muzzle_snds_M"),\
    WEAPON_OLD("arifle_SPAR_01_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f"),\
    WEAPON_OLD("arifle_SPAR_01_snd_F",LASERPOINTER,"optic_ERCO_snd_F","muzzle_snds_M_snd_f")\
)
#define RIFLE_UGL_RECON ARR_3(\
    WEAPON_OLD("arifle_SPAR_01_gl_blk_F",LASERPOINTER,"optic_ERCO_blk_F","muzzle_snds_M"),\
    WEAPON_OLD("arifle_SPAR_01_gl_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f"),\
    WEAPON_OLD("arifle_SPAR_01_gl_snd_F",LASERPOINTER,"optic_ERCO_snd_F","muzzle_snds_M_snd_f")\
)
#define RIFLE_RECON_TAN ARR_2(\
    WEAPON_OLD("arifle_SPAR_01_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f"),\
    WEAPON_OLD("arifle_SPAR_01_snd_F",LASERPOINTER,"optic_ERCO_snd_F","muzzle_snds_M_snd_f")\
)
#define RIFLE_UGL_RECON_TAN ARR_2(\
    WEAPON_OLD("arifle_SPAR_01_gl_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f"),\
    WEAPON_OLD("arifle_SPAR_01_gl_snd_F",LASERPOINTER,"optic_ERCO_snd_F","muzzle_snds_M_snd_f")\
)
#define RIFLE_DIVER 		WEAPON_OLD("arifle_SPAR_01_blk_F",LASERPOINTER,"optic_ERCO_blk_F","muzzle_snds_M")
#define RIFLE_UGL_DIVER 	WEAPON_OLD("arifle_SPAR_01_gl_blk_F",LASERPOINTER,"optic_ERCO_blk_F","muzzle_snds_M")

#define MAG_RIFLE_RECON          ARR_1("30Rnd_556x45_Stanag_red")
#define MAG_RIFLE_RECON_TRACER   ARR_1("ACE_30Rnd_556x45_Stanag_Tracer_Dim")

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR     WEAPON_OLD("srifle_EBR_F",DMR_BIPOD,LASERPOINTER,"optic_SOS")
#define MAG_DMR ARR_1("20Rnd_762x51_Mag")

#define DMR_RECON ARR_3(\
    WEAPON("arifle_SPAR_03_blk_F",LASERPOINTER,"optic_ams","muzzle_snds_b","bipod_01_f_blk"),\
    WEAPON("arifle_SPAR_03_khk_F",LASERPOINTER,"optic_ams_khk","muzzle_snds_b_khk_f","bipod_01_f_khk"),\
    WEAPON("arifle_SPAR_03_snd_F",LASERPOINTER,"optic_ams_snd","muzzle_snds_b_snd_f","bipod_01_f_snd")\
)
#define DMR_DIVER WEAPON("arifle_SPAR_03_blk_F",LASERPOINTER,"optic_ams","muzzle_snds_b","bipod_01_f_blk")
#define MAG_DMR_RECON  MAG_DMR

#define SR_AP WEAPON_OLD("srifle_DMR_02_sniper_F",SNIPER_OPTIC,"bipod_01_F_snd","ACE_muzzle_mzls_338")
#define MAGS_SR_AP  ARR_4("10Rnd_338_Mag",10,"ACE_10Rnd_338_API526_Mag",5)

#define SR_AM WEAPON_OLD("srifle_lrr_camo_f",SNIPER_OPTIC,"","")
#define MAGS_SR_AM  ARR_4("7Rnd_408_Mag",7,"ACE_7Rnd_408_305gr_Mag",3)

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE   WEAPON_OLD("arifle_MX_SW_F",LASERPOINTER,RCO,"bipod_01_F_snd")
#define MAGS_AUTORIFLE      ARR_4("100Rnd_65x39_caseless_mag",7,"100Rnd_65x39_caseless_mag_Tracer",3)
#define MAGS_AUTORIFLE_ASST ARR_4("100Rnd_65x39_caseless_mag",4,"100Rnd_65x39_caseless_mag_Tracer",2)

#define AUTORIFLE_RECON    ARR_3(\
    WEAPON_OLD("arifle_SPAR_02_blk_F",LASERPOINTER,"optic_ERCO_blk_F","muzzle_snds_M"),\
    WEAPON_OLD("arifle_SPAR_02_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f"),\
    WEAPON_OLD("arifle_SPAR_02_snd_F",LASERPOINTER,"optic_ERCO_snd_F","muzzle_snds_M_snd_f")\
)
#define MAGS_AUTORIFLE_RECON   ARR_2("150Rnd_556x45_Drum_Mag_F",7)

#define MMG ARR_2(\
    WEAPON_OLD("MMG_02_camo_F",LASERPOINTER,RCO,"bipod_01_F_mtp"),\
    WEAPON_OLD("MMG_02_sand_F",LASERPOINTER,RCO,"bipod_01_F_snd")\
)
#define MAGS_MMG            ARR_2("130Rnd_338_Mag",3)
#define MAGS_MMG_ASST       ARR_2("130Rnd_338_Mag",5)


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		WEAPON_OLD("hgun_p07_f","","","")
#define MAG_PISTOL 		ARR_1("16Rnd_9x21_Mag")

#define PISTOL_SF	WEAPON_OLD("hgun_Pistol_heavy_01_F","muzzle_snds_acp","optic_MRD","")
#define MAG_PISTOL_SF 	ARR_1("11Rnd_45ACP_Mag")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	    WEAPON_OLD("launch_nlaw_f","","","")
#define MAGS_AT_LIGHT   MAG_PISTOL

#define AT_ROCKET	    WEAPON_OLD("launch_MRAWS_sand_F",LASERPOINTER,"","")
#define MAGS_AT_ROCKET          ARR_1("MRAWS_HEAT_F")
#define MAGS_AT_ROCKET_ASST     ARR_4("MRAWS_HEAT_F",4,"MRAWS_HE_F",2)

#define AA_MISSILE	    WEAPON_OLD("launch_B_Titan_F","","","")
#define MAGS_AA_MISSILE         ARR_1("Titan_AA")
#define MAGS_AA_MISSILE_ASST    ARR_2("Titan_AA",2)

#define AT_MISSILE      WEAPON_OLD("launch_B_Titan_short_F","","","")
#define MAGS_AT_MISSILE       ARR_1("Titan_AT")
#define MAGS_AT_MISSILE_ASST  ARR_3("Titan_AT",2,"Titan_AP")

/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_6( \
    "H_HelmetSpecB", \
    "H_HelmetSpecB_paint1", \
    "H_HelmetSpecB_paint2", \
    "H_HelmetSpecB_blk", \
    "H_HelmetSpecB_sand", \
    "H_HelmetSpecB_snakeskin" \
)

// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_6( \
    "H_HelmetB", \
    "H_HelmetB_black", \
    "H_HelmetB_desert", \
    "H_HelmetB_grass", \
    "H_HelmetB_sand", \
    "H_HelmetB_snakeskin" \
)

// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_6(        	\
    "H_HelmetB_light", 	\
    "H_HelmetB_light_grass",   	\
    "H_HelmetB_light_snakeskin",	\
    "H_HelmetB_light_desert",	\
    "H_HelmetB_light_black",   	\
    "H_HelmetB_light_sand"	\
)

#define HELMET_DIVER ARR_1("H_HelmetB_light_black")

// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("H_HelmetCrew_B")
#define HELMET_HELICOPTER	ARR_1("H_PilotHelmetHeli_B")
#define HELMET_HELI_CREW	ARR_1("H_CrewHelmetHeli_B")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_B")

// COMMANDERS
#define CAP_CO      ARR_1("H_Beret_02")
#define CAP_XO      ARR_1("H_Beret_blk")
#define CAP_OFFICER ARR_1("h_milcap_mcamo")

/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_1("")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_1("G_Combat")
#define GOGGLES_SF		ARR_4("G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_beast")
#define GOGGLES_SF_FULL ARR_1("G_Balaclava_combat")
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")

/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("NVGoggles")
#define NVG_SF	NVG

/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator")

/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_PRC148")
#define RADIO_PACK 	ARR_1("ACRE_PRC117F")
#define RADIO_SR "ACRE_PRC343"

/* ###################### - INSIGNIA - ###################### */
#define INSIGNIA_COMMON ARR_1("")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
