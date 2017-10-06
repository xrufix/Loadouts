class COMMON {
    side = QUOTE(SIDE);
    
    uniform[] = {UNIFORM};
    vest[] = {VEST_EMPTY};
    backpack[] = {BACKPACK_ASSAULT};

    primary[] = {RIFLE_CCO};
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

    preLoadout = NOTRAITS;
};

/* ###################### - Company Command - ###################### */
class LOADOUT(company,common) : COMMON {
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
    gps[] = {EASYTRACK_PDA};

    lrRadios[] = {RADIO_PACK};
};
//CO
class LOADOUT(company,co) : LOADOUT(company,common) {
    displayName = DN_CO_CO;
    headgear[] = {CAP_CO};
};
//XO
class LOADOUT(company,xo) : LOADOUT(company,common) {
    displayName = DN_CO_XO;
    gps[] = {EASYTRACK_TABLET};
    headgear[] = {CAP_XO};
};
//MIO
class LOADOUT(company,mio) : LOADOUT(company,common) {
    displayName = DN_CO_MIO;
    gps[] = {EASYTRACK_TABLET};
};
//CoLo
class LOADOUT(company,colo) : LOADOUT(company,common) {
    displayName = DN_CO_COLO;
    items[] += {"CL_Logitracker"};
};
//FO
class LOADOUT(company,fo) : LOADOUT(company,common) {
    displayName = DN_CO_FO;
    items[] += {"ACE_RangeTable_82mm"};
};

/* ###################### - Platoon Lead - ###################### */
//PL Basis
class LOADOUT(platoon,common): COMMON {
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
    gps[] = {EASYTRACK_PDA};
    map[] = {"ItemMap"};
    binoculars[] = {RANGEFINDER};
    goggles[] = {GOGGLES_OFFICER};
    lrRadios[] = {RADIO_HAND};
};
//PL
class LOADOUT(platoon,pl) : LOADOUT(platoon,common) {
    displayName = DN_PL_PL;
    lrRadios[] += {RADIO_PACK};
};
//PSgt
class LOADOUT(platoon,psgt) : LOADOUT(platoon,common) {
    displayName = DN_PL_PS;
    gps[] = {EASYTRACK_TABLET};
    lrRadios[] += {RADIO_PACK};
};
//UAV Operator
class LOADOUT(platoon,uav) : LOADOUT(platoon,common) {
    displayName = DN_PL_UAV;
    items[] += {"ACE_UAVBattery",TERMINAL};
};
//JTAC
class LOADOUT(platoon,jtac) : LOADOUT(platoon,common) {
    displayName = DN_PL_JTAC;
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
class LOADOUT(platoon,medic) : LOADOUT(platoon,common) {
    displayName = DN_PL_MED;
    vest[] = {VEST_MEDIC};
    backpack[] = {BACKPACK_KITBAG};
    items[] += {
        "ACE_personalAidKit",2,
        "ACE_salineIV_500",10,
        "ACE_surgicalKit",
        "W_Defibrillator",
        "ACE_elasticBandage",50,
        "ACE_quikclot",30,
        "ACE_tourniquet",6,
        "ACE_morphine",15,
        "ACE_epinephrine",30
    };
    preLoadout = QUOTE(ISMEDIC(2));
};

/* ###################### - Rifle Squad - ###################### */
//Squadleader
class LOADOUT(squad,sl) : COMMON {
    displayName = DN_RS_SL;
    vest[] = {VEST_SL};
    gps[] = {EASYTRACK_PDA};
    binoculars[] = {RANGEFINDER};
    primary[] = {RIFLE_UGL_CCO};
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
//Fireteam Leader (kein Granatwerfer!)
class LOADOUT(squad,ftl) : COMMON {
    displayName = DN_RS_TL;
    vest[] = {VEST_TL};
    binoculars[] = {BINOCULAR};
    items[] += {"ACE_IR_Strobe_Item"};
    magazines[] += {MAG_AUTORIFLE,1};
};
//Automatic Rifleman
class LOADOUT(squad,ar) : COMMON {
    displayName = DN_RS_AR;
    vest[] = {VEST_MG};
    primary[] = {AUTORIFLE_RCO};
    magazines[] = {
        MAG_AUTORIFLE,3,
        MAG_PISTOL,3,
        GRENADES_MINI
    };
    goggles[] = {GOGGLES_FULL};
};
//Grenadier
class LOADOUT(squad,gl) : COMMON {
    displayName = DN_RS_GRN;
    vest[] = {VEST_GRENADIER};
    primary[] = {RIFLE_UGL_CCO};
    magazines[] += {"1Rnd_HE_Grenade_shell",24,"1Rnd_Smoke_Grenade_shell",8};
};
//Grenadier M32
class LOADOUT(squad,gl2) : COMMON {
    displayName = DN_RS_M32;
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
class LOADOUT(squad,light) : COMMON {
    displayName = DN_RS_LITE;
    primary[] = {RIFLE_RCO};
    vest[] = {VEST_RIFLEMAN};
};
//Rifleman (Ass. Autorifleman)
class LOADOUT(squad,aar) : COMMON {
    displayName = DN_RS_AC;
    primary[] = {RIFLE_RCO};
    vest[] = {VEST_RIFLEMAN};
    magazines[] += {
        MAG_RIFLE,4,
        "HandGrenade",2,
        MAG_AUTORIFLE,2
    };
};
//Rifleman AT
class LOADOUT(squad,lat) : COMMON {
    displayName = DN_RS_LAT;
    vest[] = {VEST_RIFLEMAN};
    backpack[] = {BACKPACK_AT_LIGHT};
    launcher[] = {AT_LIGHT};
    magazines[] += {MAGS_AT_LIGHT};
};
//Combat Medic
class LOADOUT(squad,cm) : COMMON {
    displayName = DN_RS_CM;
    vest[] = {VEST_MEDIC};
    items[] += {
        "ACE_fieldDressing",10,
        "ACE_elasticBandage",30,
        "ACE_quikclot",20,
        "ACE_tourniquet",4,
        "ACE_morphine",10,
        "ACE_epinephrine",10,
        "ACE_salineIV_500",2,
        "ACE_surgicalKit"
    };
    preLoadout = QUOTE(ISMEDIC(1));
};
//Squad Designated Marksman
class LOADOUT(squad,dm) : COMMON {
    displayName = DN_RS_DM;
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
class LOADOUT(squad,eng) : COMMON {
    displayName = DN_RS_ENG;
    vest[] = {VEST_LIGHT};
    items[] += {"ToolKit"};
    preLoadout = QUOTE(ISENGINEER(1));
};


/* ###################### - Weapon Squad - ###################### */
//Common
class LOADOUT(weapons,common): COMMON {
    vest[] = {VEST_RIFLEMAN};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_RIFLE,7,
        MAG_RIFLE_TRACER,2,
        GRENADES_BASIC
    };
};
class LOADOUT(assistant,common): LOADOUT(weapons,common) {
    backpack[] = {BACKPACK_KITBAG};
    binoculars[] = {BINOCULAR};
}
//MMG
class LOADOUT(weapons,mg) : LOADOUT(weapons,common) {
    displayName = DN_WS_MMG;
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
class LOADOUT(weapons,amg) : LOADOUT(assistant,common) {
    displayName = DN_WS_MMGA;
    magazines[] += {MAG_MMG,5};
    items[] += {"ACE_SpareBarrel"};
};
//HMG
class LOADOUT(weapons,hmg) : LOADOUT(weapons,common) {
    displayName = DN_WS_HMG;
    backpack[] = {HMG_GUN};
};
//HMG Assistant
class LOADOUT(weapons,ahmg) : LOADOUT(assistant,common) {
    displayName = DN_WS_HMGA;
    backpack[] = {HMG_TRIPOD};
};
//GMG
class LOADOUT(weapons,gmg) : LOADOUT(weapons,common) {
    displayName = DN_WS_GMG;
    backpack[] = {GMG_GUN};
};
//GMG Assistant
class LOADOUT(weapons,agmg) : LOADOUT(assistant,common) {
    displayName = DN_WS_GMGA;
    backpack[] = {GMG_TRIPOD};
};
//MS AT
class LOADOUT(weapons,atgm) : LOADOUT(weapons,common) {
    displayName = DN_WS_AT;
    backpack[] = {""};
    launcher[] = {AT_MISSILE};
};
//AMS AT
class LOADOUT(weapons,aatgm) : LOADOUT(assistant,common) {
    displayName = DN_WS_AAT;
    backpack[] = {BACKPACK_CARRYALL};
    magazines[] += {MAGS_AT_MISSILE_ASST};
};
//MS AA
class LOADOUT(weapons,aa) : LOADOUT(weapons,common) {
    displayName = DN_WS_AA;
    backpack[] = {""};
    launcher[] = {AA_MISSILE};
    magazines[] += {MAGS_AA_MISSILE};
};
//AMS AA
class LOADOUT(weapons,aaa) : LOADOUT(assistant,common) {
    displayName = DN_WS_AAA;
    magazines[] += {MAGS_AA_MISSILE_ASST};
};
//M252 Gunner
class LOADOUT(weapons,mort) : LOADOUT(weapons,common) {
    displayName = DN_WS_MOR;
    backpack[] = {MORTAR_GUN};
    items[] += {"ACE_RangeTable_82mm"};
};
//M252 Assistant
class LOADOUT(weapons,amort) : LOADOUT(assistant,common) {
    displayName = DN_WS_MORA;
    backpack[] = {MORTAR_BAG};
    items[] += {"ACE_RangeTable_82mm"};
};

class LOADOUT(weapons,acmort) : LOADOUT(assistant,common) {
    displayName = DN_WS_MORAC;
    items[] += {"ACE_1Rnd_82mm_Mo_HE",5};
    //"ACE_1Rnd_82mm_Mo_Smoke","ACE_1Rnd_82mm_Mo_Illum"
};

/* ###################### - Reconnaissance - ###################### */
//Common Recon
class LOADOUT(recon,common): COMMON {
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
    preLoadout = QUOTE(ISENGINEER(1) ISMEDIC(1));
};
//Operator
class LOADOUT(recon,rm) : LOADOUT(recon,common) {
    displayName = DN_SF_RM;
    items[] += {
        "ACE_wirecutter"
    };
};
//Teamlead
class LOADOUT(recon,tl) : LOADOUT(recon,common) {
    displayName = DN_SF_TL;
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
    gps[] = {EASYTRACK_PDA};
    lrRadios[] = {RADIO_HAND};
};
//AR
class LOADOUT(recon,ar) : LOADOUT(recon,common) {
    displayName = DN_SF_AR;
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
class LOADOUT(recon,gl) : LOADOUT(recon,common) {
    displayName = DN_SF_GRN;
    vest[] = {VEST_SF_GR};
    primary[] = {SF_CARBINE_UGL};
    magazines[] += {
        "1Rnd_HE_Grenade_shell",24,
        "1Rnd_Smoke_Grenade_shell",8
    };
};
//LAT
class LOADOUT(recon,lat) : LOADOUT(recon,common) {
    displayName = DN_SF_LAT;
    backpack[] = {""};
    launcher[] = {AT_LIGHT};
    magazines[] += {MAGS_AT_LIGHT};
};
//CM
class LOADOUT(recon,cm) : LOADOUT(recon,common) {
    displayName = DN_SF_MED;
    items[] += {
        "ACE_fieldDressing",10,
        "ACE_elasticBandage",30,
        "ACE_quikclot",20,
        "ACE_tourniquet",3,
        "ACE_morphine",6,
        "ACE_epinephrine",12,
        "ACE_salineIV_500",3,
        "ACE_surgicalKit"
    };
    preLoadout = QUOTE(ISMEDIC(2));
};
//Marksman
class LOADOUT(recon,dm) : LOADOUT(recon,common) {
    displayName = DN_SF_DM;
    primary[] = {DMR_SF};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAG_DMR_SF,10,
        GRENADES_BASIC
    };
    items[] += {DMR_BIPOD};
};
//Explosive Specialist
class LOADOUT(recon,exp) : LOADOUT(recon,common) {
    displayName = DN_SF_EXP;
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
    preLoadout = QUOTE(ISEOD(true) ISENGINEER(1));
};

/* ###################### - Diver - ###################### */
class LOADOUT(diver,common) : LOADOUT(recon,common) {
    displayName = DN_DV_RM;
    uniform[] = {UNIFORM_DIVER};
    vest[] = {VEST_BREATHER};
    backpack[] = {BACKPACK_CARRYALL};
    primary[] = {SF_CARBINE_DIVER};
    secondary[] = {PISTOL_SF};
    gps[] = {EASYTRACK_PDA};
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
//Assault Diver
class LOADOUT(diver,rm) : LOADOUT(diver,common) {};
//Diver Team Lead
class LOADOUT(diver,tl) : LOADOUT(diver,common) {
    displayName = DN_DV_TL;
    binoculars[] = {RANGEFINDER};
    lrRadios[] = {RADIO_HAND};
    map[] = {"ItemMap"};
    magazines[] += {"MiniGrenade",2};
    items[] += {"ACE_MapTools"};
};
//Diver Explosive Specialist
class LOADOUT(diver,exp) : LOADOUT(diver,common) {
    displayName = DN_DV_EXP;
    magazines[] += {"DemoCharge_Remote_Mag",4};
    items[] += {
        "ACE_Clacker",
        "ACE_SpraypaintRed",
        "ACE_SpraypaintGreen",
        "ACE_DefusalKit",
        "ACE_DeadManSwitch"
    };
    preLoadout = QUOTE(ISEOD(true) ISENGINEER(1));
};
// Diver Medic
class LOADOUT(diver,cm) : LOADOUT(diver,common) {
    displayName = DN_DV_MED;
    items[] += {
        "W_Defibrillator",
        "ACE_fieldDressing",5,
        "ACE_elasticBandage",15,
        "ACE_quikclot",15,
        "ACE_tourniquet",3,
        "ACE_morphine",10,
        "ACE_epinephrine",10,
        "ACE_salineIV_1000",4,
        "ACE_surgicalKit"
    };
    binoculars[] = {"ACE_MX2A"};
    preLoadout = QUOTE(ISMEDIC(2));
};
// Marksman
class LOADOUT(diver,dm) : LOADOUT(diver,common) {
    displayName = DN_DV_DM;
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
class LOADOUT(diver,jtac) : LOADOUT(diver,tl) {
    displayName = DN_DV_JTAC;
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
class LOADOUT(sniper,common) : LOADOUT(recon,common) {
    uniform[] = {UNIFORM_SNIPER};
    map[] = {"ItemMap"};
    items[] += {
        SNIPER_OPTIC_NV,
        "ACE_Rangecard"
    };
}
class LOADOUT(sniper,spot) : LOADOUT(recon,common) {
    displayName = DN_SN_SPOT;
    uniform[] = {UNIFORM_SNIPER};
    primary[] = {SF_CARBINE_UGL_TN};
    gps[] = {EASYTRACK_PDA};
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
class LOADOUT(sniper,ap): LOADOUT(sniper,common) {
    displayName = DN_SN_AP;
    primary[] = {SR_AP};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAGS_SR_AP,
        GRENADES_LIGHT
    };
};
//Sniper Anti-Materiel
class LOADOUT(sniper,am) : LOADOUT(sniper,common) {
    displayName = DN_SN_AM;
    primary[] = {SR_AM};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAGS_SR_AM,
        GRENADES_LIGHT
    };
};
//Explosives
class LOADOUT(sniper,exp) : LOADOUT(recon,common) {
    displayName = DN_SN_EXP;
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
    preLoadout = QUOTE(ISEOD(true) ISMEDIC(1));
};

/* ###################### - Tank - ###################### */
//Crewman (Driver, Gunner)
class LOADOUT(crew,common) : COMMON {
    displayName = DN_VE_CRW;
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
    preLoadout = QUOTE(ISENGINEER(1));
};
//Tank Commander
class LOADOUT(crew,cmd) : LOADOUT(crew,common) {
    displayName = DN_VE_CMD;
    backpack[] = {BACKPACK_RADIO};
    lrRadios[] += {RADIO_PACK};
    gps[] = {EASYTRACK_PDA};
    binoculars[] = {BINOCULAR};
};

/* ###################### - Aircraft - ###################### */
//Jetpilot
class LOADOUT(crew,jet) : COMMON {
    displayName = DN_VE_JET;
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
    gps[] = {EASYTRACK_PDA};
    nvgs[] = {""};
    watch[] = {"ACE_Altimeter"};
    goggles[] = {GOGGLES_PILOT};
    insignia[] = {INSIGNIA_JET};
};
//HeliCrew
class LOADOUT(crew,heli) : LOADOUT(crew,common) {
    displayName = DN_VE_HCRW;
    headgear[] = {HELMET_HELI_CREW};
    map[] = {""};
    insignia[] = {INSIGNIA_HELI};
};
//HeliPilot
class LOADOUT(crew,helipilot) : LOADOUT(crew,heli) {
    displayName = DN_VE_HPL;
    backpack[] = {BACKPACK_ASSAULT};
    map[] = {"itemMap"};
    gps[] = {EASYTRACK_PDA};
    goggles[] = {GOGGLES_PILOT};
    lrRadios[] = {RADIO_PACK};
    headgear[] = {HELMET_HELICOPTER};
    nvgs[] = {NVG_SF};
};

/* ###################### - Logistik - ###################### */
//Logistiker
class LOADOUT(logistics,common) : COMMON {
    displayName = DN_SP_LOG;
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
    gps[] = {EASYTRACK_PDA};
    map[] = {"ItemMap"};
    insignia[] = {INSIGNIA_SUPPORT};
    preLoadout = QUOTE(ISENGINEER(2));
};

/* ###################### - MEDEVAC - ###################### */
//Common MEDEVAC
class LOADOUT(medevac,common): COMMON {
    primary[] = {""};
    secondary[] = {PISTOL};
    magazines[] = {GRENADES_LIGHT};
    items[] += {"CL_Logitracker"};
    headgear[] = {HELMET_BARE};
    goggles[] = {GOGGLES_OFFICER};
    insignia[] = {INSIGNIA_MEV};
    preLoadout = QUOTE(ISPROTECTED(true));
};

//Doctor
class LOADOUT(medevac,doc) : LOADOUT(medevac,common) {
    displayName = DN_ME_DCT;
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
    preLoadout = QUOTE(ISMEDIC(2) ISPROTECTED(true));
};
//Doctor TL
class LOADOUT(medevac,tl) : LOADOUT(medevac,doc) {
    displayName = DN_ME_TL;
    gps[] = {EASYTRACK_PDA};
    lrRadios[] = {RADIO_HAND};
};
//MEDEVAC Pilot
class LOADOUT(medevac,heli) : LOADOUT(medevac,common) {
    displayName = DN_ME_PIL;
    map[] = {"itemMap"};
    gps[] = {EASYTRACK_PDA};
    goggles[] = {GOGGLES_PILOT};
    lrRadios[] = {RADIO_PACK};
    headgear[] = {HELMET_HELICOPTER};
    nvgs[] = {NVG_SF};
};
//MEDEVAC Driver
class LOADOUT(medevac,drv) : LOADOUT(medevac,common) {
    displayName = DN_ME_DRV;
    items[] += {"ACE_Banana"};
};
