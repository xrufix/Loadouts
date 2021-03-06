#define GRENADES_BASIC  ARR_4("ACE_Chemlight_Orange","ACE_Chemlight_White","SmokeShellOrange","SmokeShellPurple")

#include "common\template.hpp"

// SOLDIER(company,co,)
// SOLDIER(company,xo, )
// SOLDIER(company,mio )
// SOLDIER(company,colo )
// SOLDIER(company,fo )

SOLDIER(platoon,pl,b_officer_f)
SOLDIER(platoon,psgt,b_t_officer_f)
SOLDIER(platoon,uav,b_soldier_uav_f)
SOLDIER(platoon,jtac,b_recon_jtac_f)
SOLDIER(platoon,medic,b_t_medic_f)

SOLDIER(squad,sl,b_soldier_sl_f)
SOLDIER(squad,ftl,b_soldier_tl_f)
SOLDIER(squad,ar,b_soldier_ar_f)
SOLDIER(squad,gl,b_soldier_gl_f)
SOLDIER(squad,gl2,b_t_soldier_gl_f)
SOLDIER(squad,light,b_soldier_lite_f)
SOLDIER(squad,aar,b_soldier_f)
SOLDIER(squad,lat,b_soldier_lat_f)
SOLDIER(squad,cm,b_medic_f)
SOLDIER(squad,dm,b_soldier_m_f)
SOLDIER(squad,eng,b_engineer_f)

SOLDIER(weapons,mg,b_heavygunner_f)
SOLDIER(weapons,amg,b_soldier_aar)
SOLDIER(weapons,hmg,b_support_mg_f)
SOLDIER(weapons,ahmg,b_support_amg_f)
SOLDIER(weapons,gmg,b_support_gmg_f)
SOLDIER(weapons,agmg,b_t_support_amg_f)
SOLDIER(weapons,atgm,b_soldier_at_f)
SOLDIER(weapons,aatgm,b_soldier_aat_f)
SOLDIER(weapons,aa,b_soldier_aa_f)
SOLDIER(weapons,aaa,b_soldier_aaa_f)
SOLDIER(weapons,mort,b_support_mort_f)
SOLDIER(weapons,amort,b_support_amort_f)
SOLDIER(weapons,acmort,b_soldier_a_f)

SOLDIER(recon,rm,b_recon_f)
SOLDIER(recon,tl,b_recon_tl_f)
SOLDIER(recon,ar,b_recon_sharpshooter_f)
SOLDIER(recon,gl,b_t_recon_f)
SOLDIER(recon,lat,b_recon_lat_f)
SOLDIER(recon,cm,b_recon_medic_f)
SOLDIER(recon,dm,b_recon_m_f)
SOLDIER(recon,exp,b_recon_exp_f)

SOLDIER(diver,rm,b_diver_f)
SOLDIER(diver,tl,b_diver_tl_f)
SOLDIER(diver,exp,b_diver_exp_f)
SOLDIER(diver,cm,b_t_diver_f)
SOLDIER(diver,dm,b_t_diver_exp_f)
SOLDIER(diver,jtac,b_t_diver_tl_f)

SOLDIER(sniper,spot,b_spotter_f)
SOLDIER(sniper,ap,b_ghillie_ard_f)
SOLDIER(sniper,am,b_ghillie_lsh_f)
SOLDIER(sniper,exp,b_sniper_f)

SOLDIER(crew,common,b_crew_f)
SOLDIER(crew,cmd,b_t_crew_f)
SOLDIER(crew,jet,b_pilot_f)
SOLDIER(crew,heli,b_helicrew_f)
SOLDIER(crew,helipilot,b_helipilot_f)

SOLDIER(logistics,common,b_soldier_repair_f)

//SOLDIER(medevac,doc, )
//SOLDIER(medevac,tl, )
//SOLDIER(medevac,heli, )
//SOLDIER(medevac,drv, )
