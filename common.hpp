/*
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

class CommonBlufor {
    uniform[] = {UNIFORM};
    vest[] = {VEST_EMPTY};
    backpack[] = {BACKPACK_ASSAULT};

    primary[] = {RIFLE_ACOG};
    secondary[] = {PISTOL};
    launcher[] = {""};

    magazines[] = {
        MAG_PISTOL,3,
        MAG_RIFLE,7,
        MAG_RIFLE_TRACER,4,
        GRENADES_BASIC
    };
    items[] = {
        "ACE_EarPlugs",
        "ACE_microDAGR",
        "ACE_fieldDressing",10,
        "ACE_morphine",
        "ACE_tourniquet"
    };

    headgear[] = {HELMET};
    goggles[] = {GOGGLES};
    nvgs[] = {NVG};
    binoculars[] = {""};

    map[] = {""};
    gps[] = {""};
    compass[] = {"ItemCompass"};
    watch[] = {"ItemWatch"};

    lrRadios[] = {""};
    insignia[] = {INSIGNIA_COMMON};
};

/* ###################### - Company Command - ###################### */
class B_Company_Common : CommonBlufor {
    vest[] = {VEST_BELT};
    primary[] = {PDW};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_PDW,3
    };
    items[] += {"ACE_MapTools"};

    headgear[] = {CAP_OFFICER};
    goggles[] = {GOGGLES_OFFICER};
    nvgs[] = {""};
    binoculars[] = {RANGEFINDER};

    map[] = {"ItemMap"};
    gps[] = {BFT_PDA};

    lrRadios[] = {RADIO_PACK};
};
//CO
class B_Company_CO: B_Company_Common {
    headgear[] = {CAP_CO};
};
//XO
class B_Company_XO: B_Company_Common {
    gps[] = {BFT_TABLET};
    headgear[] = {CAP_XO};
};
//MIO
class B_Company_MIO: B_Company_Common {
    gps[] = {BFT_TABLET};
};
//CoLo
class B_Company_CoLo: B_Company_Common {
    items[] += {"CL_Logitracker"};
};
//FO
class B_Company_FO: B_Company_Common {
    items[] += {"ACE_RangeTable_82mm"};
};

/* ###################### - Platoon Lead - ###################### */
//PL Basis
class B_Platoon_Common: CommonBlufor {
    vest[] = {VEST_LIGHT};
    primary[] = {CARBINE_HOLO};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_CARBINE,5,
        MAG_CARBINE_TRACER,2,
        GRENADES_LIGHT
    };
    items[] += {"ACE_MapTools"};
    headgear[] = {HELMET_BARE};
    gps[] = {BFT_PDA};
    map[] = {"ItemMap"};
    binoculars[] = {RANGEFINDER};
    goggles[] = {GOGGLES_OFFICER};
    lrRadios[] = {RADIO_HAND};
};
//PL
class B_Platoon_PL: B_Platoon_Common {
    lrRadios[] += {RADIO_PACK};
};
//PSgt
class B_Platoon_Sgt: B_Platoon_Common {
    gps[] = {BFT_TABLET};
    lrRadios[] += {RADIO_PACK};
};
//UAV Operator
class B_soldier_UAV_F: B_Platoon_Common {
    items[] += {"ACE_UAVBattery",TERMINAL};
};
//JTAC
class B_recon_JTAC_F: B_Platoon_Common {
    vest[] = {VEST_GRENADIER};
    backpack[] = {BACKPACK_KITBAG};
    primary[] = {CARBINE_UGL_HOLO};
    binoculars[] = {DESIGNATOR};
    lrRadios[] += {RADIO_PACK};
    magazines[] += {
        "Laserbatteries",
        "MiniGrenade",2,
        "1Rnd_SmokeOrange_Grenade_shell",2,
        "1Rnd_SmokeBlue_Grenade_shell",2,
        "1Rnd_SmokePurple_Grenade_shell",2,
        "1Rnd_SmokeYellow_Grenade_shell",2,
        "1Rnd_SmokeGreen_Grenade_shell",2,
        "1Rnd_SmokeRed_Grenade_shell",2,
        "1Rnd_Smoke_Grenade_shell",2,
        "UGL_FlareGreen_F",2,
        "UGL_FlareRed_F",2,
        "UGL_FlareYellow_F",2
    };
};
//Platoon-Medic
class B_Platoon_Medic: B_Platoon_Common {
    vest[] = {VEST_MEDIC};
    backpack[] = {BACKPACK_KITBAG};
    items[] += {
        "ACE_personalAidKit",2,
        "ACE_salineIV_500",10,
        "ACE_surgicalKit",
        "W_Defibrillator",
        "ACE_fieldDressing",10,
        "ACE_elasticBandage",40,
        "ACE_quikclot",30,
        "ACE_tourniquet",6,
        "ACE_morphine",10,
        "ACE_epinephrine",20
    };
    //preLoadout = ASSIGN_MEDICCLASS(2);
};

/* ###################### - Rifle Squad - ###################### */
//Squadleader
class B_Soldier_SL_F: CommonBlufor {
    vest[] = {VEST_SL};
    gps[] = {BFT_PDA};
    binoculars[] = {RANGEFINDER};
    primary[] = {RIFLE_UGL_ACOG};
    magazines[] += {
        "1Rnd_HE_Grenade_shell",10,
        "1Rnd_Smoke_Grenade_shell",2,
        "1Rnd_SmokeRed_Grenade_shell",2,
        "1Rnd_SmokeGreen_Grenade_shell",2,
        "1Rnd_SmokePurple_Grenade_shell",2,
        "1Rnd_SmokeOrange_Grenade_shell",2,
        "ACE_HuntIR_M203",4};
    items[] += {"ACE_IR_Strobe_Item","ACE_HuntIR_monitor"};
    lrRadios[] = {RADIO_HAND};
    map[] = {"ItemMap"};
};
//Fireteam Leader
class B_Soldier_TL_F: CommonBlufor {
    vest[] = {VEST_TL};
    binoculars[] = {BINOCULAR};
    items[] += {"ACE_IR_Strobe_Item"};
    magazines[] += {MAG_AUTORIFLE,1};
};
//Automatic Rifleman
class B_soldier_AR_F: CommonBlufor {
    vest[] = {VEST_MG};
    primary[] = {AUTORIFLE_ACOG};
    magazines[] = {
        MAG_AUTORIFLE,3,
        MAG_PISTOL,3,
        GRENADES_MINI
    };
    goggles[] = {GOGGLES_FULL};
};
//Grenadier
class B_Soldier_GL_F: CommonBlufor {
    vest[] = {VEST_GRENADIER};
    primary[] = {RIFLE_UGL_ACOG};
    magazines[] += {"1Rnd_HE_Grenade_shell",24,"1Rnd_Smoke_Grenade_shell",8};
};
//Grenadier M32
class B_Squad_M32: CommonBlufor {
    vest[] = {VEST_GRENADIER};
    primary[] = {"rhs_weap_m32"};
    magazines[] = {
        MAG_PISTOL,5,
        "rhsusf_mag_6Rnd_M433_HEDP",5,
        "rhsusf_mag_6Rnd_M714_white",1,
        "rhsusf_mag_6Rnd_M576_Buckshot",2,
        GRENADES_BASIC
    };
};
//Rifleman (Light)
class B_Soldier_lite_F: CommonBlufor {
    vest[] = {VEST_RIFLEMAN};
};
//Rifleman (Ammo Carrier)
class B_Soldier_F: CommonBlufor {
    vest[] = {VEST_RIFLEMAN};
    magazines[] += {
        MAG_RIFLE,4,
        "HandGrenade",2,
        MAG_AUTORIFLE,2
    };
};
//Rifleman AT
class B_soldier_LAT_F: CommonBlufor {
    vest[] = {VEST_RIFLEMAN};
    backpack[] = {BACKPACK_AT_LIGHT};
    launcher[] = {AT_LIGHT};
    magazines[] += {MAGS_AT_LIGHT};
};
//Combat Medic
class B_medic_F: CommonBlufor {
    vest[] = {VEST_MEDIC};
    items[] += {
        "ACE_fieldDressing",10,
        "ACE_elasticBandage",30,
        "ACE_quikclot",20,
        "ACE_tourniquet",4,
        "ACE_morphine",10,
        "ACE_epinephrine",10,
        "ACE_salineIV_250",2,
        "ACE_surgicalKit"
    };
    //preLoadout = ASSIGN_MEDICCLASS(1);
};
//Designated Marksman
class B_soldier_M_F: CommonBlufor {
    vest[] = {VEST_DM};
    primary[] = {DMR};
    items[] += {"ACE_RangeCard"};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_DMR,10,
        GRENADES_BASIC
    };
};
//Combat Engineer
class B_engineer_F: CommonBlufor {
    vest[] = {VEST_LIGHT};
    items[] += {"ToolKit"};
    //preLoadout = ASSIGN_REPAIRCLASS(1);
};


/* ###################### - Weapon Squad - ###################### */
//Common
class B_support_Common: CommonBlufor {
    vest[] = {VEST_RIFLEMAN};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_RIFLE,7,
        MAG_RIFLE_TRACER,2,
        GRENADES_BASIC
    };
};
class B_support_Common_Asst: B_support_Common {
    backpack[] = {BACKPACK_KITBAG};
    binoculars[] = {BINOCULAR};
}
//MMG
class B_HeavyGunner_F: B_support_Common {
    vest[] = {VEST_MG};
    backpack[] = {""};
    primary[] = {MMG};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_MMG,3,
        GRENADES_LIGHT
    };
    goggles[] = {GOGGLES_FULL};
};
//MMG Assistant
class B_soldier_AAR_F: B_support_Common_Asst {
    magazines[] += {MAG_MMG,5};
};
//HMG
class B_support_MG_F: B_support_Common {
    backpack[] = {HMG_GUN};
};
//HMG Assistant
class B_support_AMG_F: B_support_Common_Asst {
    backpack[] = {HMG_TRIPOD};
};
//GMG
class B_support_GMG_F: B_support_Common {
    backpack[] = {GMG_GUN};
};
//GMG Assistant
class B_support_AGMG: B_support_Common_Asst {
    backpack[] = {GMG_TRIPOD};
};
//MS AT
class B_soldier_AT_F: B_support_Common {
    backpack[] = {""};
    launcher[] = {AT_MISSILE};
};
//AMS AT
class B_soldier_AAT_F: B_support_Common_Asst {
    backpack[] = {BACKPACK_CARRYALL};
    magazines[] += {MAGS_AT_MISSILE_ASST};
};
//MS AA
class B_soldier_AA_F: B_support_Common {
    backpack[] = {""};
    launcher[] = {AA_MISSILE};
    magazines[] += {MAGS_AA_MISSILE};
};
//AMS AA
class B_soldier_AAA_F: B_support_Common_Asst {
    magazines[] += {MAGS_AA_MISSILE_ASST};
};
//M252 Gunner
class B_support_Mort_F: B_support_Common {
    backpack[] = {MORTAR_GUN};
    items[] += {"ACE_RangeTable_82mm"};
};
//M252 Assistant
class B_support_AMort_F: B_support_Common_Asst {
    backpack[] = {MORTAR_BAG};
    items[] += {"ACE_RangeTable_82mm"};
};
//M252 Ammo Bearer (ausgeklammert, weil der M252 derzeit nicht ACE-kompatibel ist.
class b_support_Mort_Ammo: B_support_Common {
    backpack[] = {BACKPACK_KITBAG};
    items[] += {"ACE_1Rnd_82mm_Mo_HE",5};
    //"ACE_1Rnd_82mm_Mo_Smoke","ACE_1Rnd_82mm_Mo_Illum"
};

/* ###################### - Reconnaissance - ###################### */
//Common Recon
class B_recon_Common: CommonBlufor {
    vest[] = {VEST_SF};
    secondary[] = {PISTOL_SF};
    primary[] = {SF_CARBINE};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAG_CARBINE,9,
        MAG_CARBINE_TRACER,2,
        GRENADES_BASIC
    };
    items[] += {
        "ACE_IR_Strobe_Item",
        "ACE_CableTie",2
    };
    goggles[] = {GOGGLES_SF};
    headgear[] = {HELMET_SF};
    nvgs[] = {NVG_SF};
    map[] = {"ItemMap"};
    insignia[] = {INSIGNIA_SF};
    //preLoadout = ASSIGN_MEDICCLASS(1) + ASSIGN_REPAIRCLASS(1);
};
//Teamlead
class B_recon_TL_F: B_recon_Common {
    vest[] = {VEST_SF_TL};
    primary[] = {SF_CARBINE_UGL};
    magazines[] += {
        "1Rnd_HE_Grenade_shell",10,
        "1Rnd_Smoke_Grenade_shell",2,
        "1Rnd_SmokeOrange_Grenade_shell",
        "1Rnd_SmokePurple_Grenade_shell",
        "1Rnd_SmokeGreen_Grenade_shell",
        "ACE_HuntIR_M203",5,
        GRENADE_IR
    };
    items[] += {
        "ACE_wirecutter",
        "ACE_IR_Strobe_Item",
        "ACE_HuntIR_monitor"
    };
    binoculars[] = {RANGEFINDER};
    gps[] = {BFT_PDA};
    lrRadios[] = {RADIO_HAND};
};
//AR
class B_Recon_Sharpshooter_F: B_recon_Common {
    vest[] = {VEST_SF_MG};
    primary[] = {AUTORIFLE_SF};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAGS_AUTORIFLE_SF,
        GRENADES_BASIC
    };
    items[] += {LASERPOINTER_BK};
    goggles[] = {GOGGLES_SF_FULL};
};
//Grenadier
class B_recon_F: B_recon_Common {
    vest[] = {VEST_SF_GR};
    primary[] = {SF_CARBINE_UGL};
    magazines[] += {
        "1Rnd_HE_Grenade_shell",24,
        "1Rnd_Smoke_Grenade_shell",8
    };
};
//LAT
class B_recon_LAT_F: B_recon_Common {
    backpack[] = {""};
    launcher[] = {AT_LIGHT};
    magazines[] += {MAGS_AT_LIGHT};
};
//CM
class B_recon_medic_F: B_recon_Common {
    items[] += {
        "ACE_fieldDressing",10,
        "ACE_elasticBandage",30,
        "ACE_quikclot",20,
        "ACE_tourniquet",4,
        "ACE_morphine",6,
        "ACE_epinephrine",12,
        "ACE_salineIV_250",6,
        "ACE_surgicalKit"
    };
    //preLoadout = ASSIGN_MEDICCLASS(2);
};
//Marksman
class B_recon_M_F: B_recon_Common {
    primary[] = {DMR_SF};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAG_DMR_SF,10,
        GRENADES_BASIC
    };
    items[] += {DMR_BIPOD};
};
//Explosive Specialist
class B_recon_exp_F: B_recon_Common {
    backpack[] = {BACKPACK_KITBAG};
    secondary[] = {"ACE_VMM3"};
    magazines[] += {
        "DemoCharge_Remote_Mag",4,
        "SatchelCharge_Remote_Mag",
        "SLAMDirectionalMine_Wire_Mag",2
    };
    items[] += {
        "ACE_Clacker",
        "ACE_SpraypaintRed",
        "ACE_SpraypaintGreen",
        "ACE_DefusalKit",
        "ACE_DeadManSwitch"
    };
    //preLoadout = ASSIGN_EOD + ASSIGN_REPAIRCLASS(1);
};

/* ###################### - Diver - ###################### */
//Assault Diver
class B_diver_F: B_recon_Common {
    uniform[] = {UNIFORM_DIVER};
    vest[] = {VEST_BREATHER};
    backpack[] = {BACKPACK_CARRYALL};
    primary[] = {SF_CARBINE_DIVER};
    secondary[] = {PISTOL_SF};
    gps[] = {BFT_PDA};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_CARBINE,10,
        GRENADES_LIGHT,
        "ACE_M84",4
    };
    items[] += {
        VEST_DIVER,
        UNIFORM_STR
    };
    goggles[] = {GOGGLES_DIVER};
    headgear[] = {HELMET_DIVER};
    nvgs[] = {"NVGoggles_OPFOR"};
};
//Diver Team Lead
class B_diver_TL_F: B_diver_F {
    binoculars[] = {RANGEFINDER};
    lrRadios[] = {RADIO_HAND};
    map[] = {"ItemMap"};
    magazines[] += {"MiniGrenade",2};
    items[] += {"ACE_MapTools"};
};
//Diver Explosive Specialist
class B_diver_exp_F: B_diver_F {
    magazines[] += {"DemoCharge_Remote_Mag",4};
    items[] += {
        "ACE_Clacker",
        "ACE_SpraypaintRed",
        "ACE_SpraypaintGreen",
        "ACE_DefusalKit",
        "ACE_DeadManSwitch"
    };
    //preLoadout = ASSIGN_EOD + ASSIGN_REPAIRCLASS(2);
};
// Diver Medic
class B_diver_Medic: B_diver_F {
    items[] += {
        "W_Defibrillator",
        "ACE_fieldDressing",5,
        "ACE_elasticBandage",15,
        "ACE_quikclot",15,
        "ACE_tourniquet",3,
        "ACE_morphine",10,
        "ACE_epinephrine",10,
        "ACE_salineIV_500",8,
        "ACE_surgicalKit"
    };
    binoculars[] = {"ACE_MX2A"};
    //preLoadout = ASSIGN_MEDICCLASS(2);
};
// Marksman
class B_diver_DM: B_diver_F {
    primary[] = {DMR_DIVER};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAG_DMR_SF,10,
        GRENADES_BASIC,
        "ACE_M84",4
    };
    items[] += {DMR_BIPOD};
};
// Diver TL/JTAC
class b_diver_JTAC: B_diver_TL_F {
    primary[] = {SF_CARBINE_DIVER_UGL};
    binoculars[] = {DESIGNATOR};
    lrRadios[] += {RADIO_HAND};
    magazines[] += {
        "Laserbatteries",
        "1Rnd_SmokeOrange_Grenade_shell",2,
        "1Rnd_SmokeBlue_Grenade_shell",2,
        "1Rnd_SmokePurple_Grenade_shell",2,
        "1Rnd_SmokeYellow_Grenade_shell",2,
        "1Rnd_SmokeGreen_Grenade_shell",2,
        "1Rnd_SmokeRed_Grenade_shell",2,
        "1Rnd_HE_Grenade_shell",10
    };
};

/* ###################### - Sniper - ###################### */
//Spotter
class B_sniper_common : B_recon_Common {
    uniform[] = {UNIFORM_SNIPER};
    map[] = {"ItemMap"};
    items[] += {
        SNIPER_OPTIC_NV,
        "ACE_Rangecard"
    };
}
class B_spotter_f: B_recon_common {
    uniform[] = {UNIFORM_SNIPER};
    primary[] = {SF_CARBINE_UGL_TN};
    gps[] = {BFT_PDA};
    binoculars[] = {RANGEFINDER};
    magazines[] = {
        MAG_PISTOL_SF,3,
        GRENADE_IR,
        GRENADES_BASIC,
        MAG_CARBINE,8,
        MAG_CARBINE_TRACER,2,
        "1Rnd_HE_Grenade_shell",10,
        "1Rnd_Smoke_Grenade_shell",2,
        "1Rnd_SmokeOrange_Grenade_shell",
        "1Rnd_SmokePurple_Grenade_shell",
        "1Rnd_SmokeGreen_Grenade_shell",
    };
    items[] += {
        "ACE_ATragMX",
        "ACE_IR_Strobe_Item",
        "ACE_Rangecard",
        "ACE_SpottingScope",
        "ACE_Kestrel4500",
        "ACE_Tripod"
    };
    lrRadios[] = {RADIO_HAND};
};
//Sniper Anti-Personel
class B_sniper_f : B_sniper_common {
    primary[] = {SR_AP};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAGS_SR_AP,
        GRENADES_LIGHT
    };
};
//Sniper Anti-Materiel
class B_ghillie_ard_F: B_sniper_common {
    primary[] = {SR_AM};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAGS_SR_AM,
        GRENADES_LIGHT
    };
};
//Explosives
class B_ghillie_sard_f: B_recon_common {
    uniform[] = {UNIFORM_SNIPER};
    primary[] = {SF_CARBINE_TN};
    magazines[] += {
        "APERSTripMine_Wire_mag",2,
        "ClaymoreDirectionalMine_Remote_mag",2
    };
    items[] += {
        "ACE_Clacker",
        "ACE_SpraypaintRed",
        "ACE_SpraypaintGreen",
        "ACE_DefusalKit",
        "ACE_DeadManSwitch"
    };
    //preLoadout = ASSIGN_EOD + ASSIGN_REPAIRCLASS(1);
};

/* ###################### - Tank - ###################### */
//Crewman (Driver, Gunner)
class B_crew_F: CommonBlufor {
    backpack[] = {""};
    vest[] = {VEST_CREW};
    primary[] = {CARBINE};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_CARBINE,6,
        GRENADES_LIGHT
    };
    headgear[] = {HELMET_CREW};
    map[] = {"ItemMap"};
    insignia[] = {INSIGNIA_TNK};
    lrRadios[] = {RADIO_HAND};
};
//Tank Commander
class B_Tank_Commander: B_crew_F {
    backpack[] = {BACKPACK_RADIO};
    lrRadios[] += {RADIO_PACK};
    gps[] = {BFT_PDA};
    binoculars[] = {BINOCULAR};
};

/* ###################### - Aircraft - ###################### */
//Jetpilot
class B_Pilot_F: CommonBlufor {
    uniform[] = {UNIFORM_JET};
    vest[] = {""};
    backpack[] = {""};
    primary[] = {""};
    magazines[] = {
        MAG_PISTOL,3,
        GRENADES_LIGHT
    };
    headgear[] = {HELMET_JET};
    map[] = {"itemMap"};
    gps[] = {BFT_PDA};
    nvgs[] = {""};
    watch[] = {"ACE_Altimeter"};
    goggles[] = {GOGGLES_PILOT};
    insignia[] = {INSIGNIA_JET};
};
//HeliCrew
class B_helicrew_F: B_crew_F {
    headgear[] = {HELMET_HELI_CREW};
    map[] = {""};
    insignia[] = {INSIGNIA_HELI};
};
//HeliPilot
class B_helipilot_F: B_helicrew_F {
    backpack[] = {BACKPACK_ASSAULT};
    map[] = {"itemMap"};
    gps[] = {BFT_PDA};
    goggles[] = {GOGGLES_PILOT};
    lrRadios[] = {RADIO_PACK};
    headgear[] = {HELMET_HELICOPTER};
};

/* ###################### - Logistik - ###################### */
//Logistiker
class B_soldier_repair_F: CommonBlufor {
    vest[] = {VEST_LIGHT};
    backpack[] = {BACKPACK_KITBAG};
    primary[] = {CARBINE};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_CARBINE,6,
        GRENADES_LIGHT
    };
    headgear[] = {HELMET_BARE};
    items[] += {"CL_Logitracker","ToolKit"};
    lrRadios[] = {RADIO_PACK,RADIO_HAND};
    gps[] = {BFT_PDA};
    map[] = {"ItemMap"};
    insignia[] = {INSIGNIA_SUPPORT};
    //preLoadout = ASSIGN_REPAIRCLASS(2);
};

/* ###################### - MEDEVAC - ###################### */
//Common MEDEVAC
class B_MEDEVAC_Common: CommonBlufor {
    primary[] = {""};
    secondary[] = {PISTOL};
    magazines[] = {GRENADES_LIGHT};
    items[] += {"CL_Logitracker"};
    headgear[] = {HELMET_BARE};
    goggles[] = {GOGGLES_OFFICER};
    insignia[] = {INSIGNIA_MEV};
};

//Doctor
class B_MEDEVAC_Doctor: B_MEDEVAC_Common {
    backpack[] = {BACKPACK_KITBAG};
    items[] += {
        "ACE_personalAidKit",4,
        "ACE_salineIV_500",10,
        "ACE_surgicalKit",
        "W_Defibrillator",
        "ACE_elasticBandage",40,
        "ACE_quikclot",40,
        "ACE_tourniquet",6,
        "ACE_morphine",15,
        "ACE_epinephrine",30
    };
    //preLoadout = ASSIGN_MEDICCLASS(2) + ACE_SETCAPTIVE;
};
//Doctor TL
class B_MEDEVAC_TL: B_MEDEVAC_Doctor {
    gps[] = {BFT_PDA};
    lrRadios[] = {RADIO_HAND};
};
//MEDEVAC Pilot
class B_MEDEVAC_Pilot: B_MEDEVAC_Common {
    map[] = {"itemMap"};
    gps[] = {BFT_PDA};
    goggles[] = {GOGGLES_PILOT};
    lrRadios[] = {RADIO_PACK};
    headgear[] = {HELMET_HELICOPTER};
};
//MEDEVAC Driver
class B_MEDEVAC_Driver: B_MEDEVAC_Common {
    items[] += {"ACE_Banana"};
};
