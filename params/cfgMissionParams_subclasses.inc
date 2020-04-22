class BIS_WLStartingDaytime //-6 is start for morning
{
	title = $STR_A3_combatpatrol_params_1;
	values[] = {100, -6, 0, 6, -12};
	texts[] = {$STR_A3_WL_param37_value1, $STR_A3_combatpatrol_params_3, $STR_A3_MP_COOP_m03_noon, $STR_A3_MP_COOP_m03_evening, $STR_A3_combatpatrol_params_6};
	default = -4;
};
class BIS_WLTimeAcceleration //Fast time
{
	title = $STR_A3_WL_param2_title;
	values[] = {1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24};
	texts[] = {$STR_DISP_OPT_DISABLED, "x2", "x4", "x6", "x8", "x10", "x12", "x14", "x16", "x18", "x20", "x22", "x24"};
	default = 12;
};
class BIS_WLProgress //Forced Progress: Accelerated flag cap startup, 2 = BLUFOR 25% & OPFOR 25%
{
	title = $STR_A3_WL_param1_title;
	values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	texts[] = {$STR_DISP_OPT_DISABLED,$STR_A3_WL_forcedProgress_perc_1,$STR_A3_WL_forcedProgress_perc_2,$STR_A3_WL_forcedProgress_perc_3,$STR_A3_WL_forcedProgress_perc_4,$STR_A3_WL_forcedProgress_perc_5,$STR_A3_WL_forcedProgress_perc_6,$STR_A3_WL_forcedProgress_perc_7,$STR_A3_WL_forcedProgress_perc_8,$STR_A3_WL_forcedProgress_perc_9,$STR_A3_WL_forcedProgress_perc_10,$STR_A3_WL_forcedProgress_perc_11,$STR_A3_WL_forcedProgress_perc_12};
	default = 1;
};
class BIS_WLFTEnabled //Fast Travel
{
	title = $STR_A3_fastravel1;
	values[] = {1, 0, 2, 3, 4};
	texts[] = {$STR_A3_WL_param3_value1, $STR_A3_WL_param3_value2, $STR_A3_WL_param3_value3, $STR_A3_WL_param3_value4, $STR_A3_WL_param3_value5};
	default = 1;
};
class BIS_WLScanEnabled //Sector Scan
{
	title = $STR_A3_WL_param4_title;
	values[] = {1, 0};
	texts[] = {$STR_DISP_OPT_ENABLED, $STR_DISP_OPT_DISABLED};
	default = 1;
};
class BIS_WLVotingResetEnabled //Reset Sector Voting
{
	title = $STR_A3_WL_menu_resetvoting;
	values[] = {1, 0};
	texts[] = {$STR_DISP_OPT_ENABLED, $STR_DISP_OPT_DISABLED};
	default = 0;
};
class BIS_WLTeamBalanceEnabled //Team Balancing
{
	title = $STR_A3_WL_module_team_balance;
	values[] = {1, 0};
	texts[] = {$STR_DISP_OPT_ENABLED, $STR_DISP_OPT_DISABLED};
	default = 1;
};
class BIS_WLAIVoting //AI Sector Voting
{
	title = $STR_A3_WL_param5_title;
	values[] = {1, 0};
	texts[] = {$STR_DISP_OPT_ENABLED, $STR_DISP_OPT_DISABLED};
	default = 0;
};
class BIS_WLArsenalEnabled //Arsenal Access on/off
{
	title = $STR_A3_Arsenal;
	values[] = {1, 0};
	texts[] = {$STR_DISP_OPT_ENABLED, $STR_DISP_OPT_DISABLED};
	default = 1;
};
class BIS_WLMarkersTransparency //HUD Icons for Sectors
{
	title = $STR_A3_WL_param7_title;
	values[] = {4, 3, 2, 1, 0};
	texts[] = {$STR_A3_WL_param7_value1, $STR_A3_WL_markerAlpha_perc_1, $STR_A3_WL_markerAlpha_perc_2, $STR_A3_WL_markerAlpha_perc_3, $STR_A3_WL_param7_value2};
	default = 2;
};
class BIS_WLPlayersTransparency //HUD Icons for players
{
	title = $STR_A3_WL_param8_title;
	values[] = {4, 3, 2, 1, 0};
	texts[] = {$STR_A3_WL_param7_value1, $STR_A3_WL_markerAlpha_perc_1, $STR_A3_WL_markerAlpha_perc_2, $STR_A3_WL_markerAlpha_perc_3, $STR_A3_WL_param7_value2};
	default = 2;
};
class BIS_WLFatigueEnabled //Fatigue on/off
{
	title = $STR_A3_fatigue1;
	values[] = {1, 0};
	texts[] = {$STR_DISP_OPT_ENABLED, $STR_DISP_OPT_DISABLED};
	default = 1;
};
class BIS_WLMusic //Music on/off
{
	title = $STR_A3_rscattributemusic_title;
	values[] = {1, 0};
	texts[] = {$STR_DISP_OPT_ENABLED, $STR_DISP_OPT_DISABLED};
	default = 1;
};
class BIS_WLVoice //Lady voice on/off
{
	title = $STR_A3_orange_faction_idap_cfgidentities_expo_name;
	values[] = {1, 0};
	texts[] = {$STR_DISP_OPT_ENABLED, $STR_DISP_OPT_DISABLED};
	default = 1;
};
class BIS_WLStartCP //Starting CP
{
	title = $STR_A3_WL_param12_title;
	values[] = {0, 100, 250, 500, 1000, 2500, 5000};
	texts[] = {"0", "100", "250", "500", "1000", "2500", "5000"};
	default = 1000;
};
class BIS_WLCPMultiplier  //CP Income multiplier
{
	title = $STR_A3_WL_param13_title;
	values[] = {1, 2, 3, 4, 5};
	texts[] = {"1x", "2x", "3x", "4x", "5x"};
	default = 1;
};
class BIS_WLMaxCP //Max CP a player can have
{
	title = $STR_A3_WL_param_cp_limit;
	values[] = {-1, 0, 500, 1000, 2500, 5000, 10000, 20000, 35000, 50000, 75000, 100000};
	texts[] = {$STR_A3_ta_vanguard_unlimited, "0", "500", "1000", "2500", "5000", "10000", "20000", "35000", "50000", "75000", "100000"};
	default = 50000;
};
class BIS_WLScanCooldown //Sector SCAN cooldown
{
	title = $STR_A3_WL_param_scan_timeout;
	values[] = {0, 10, 20, 30, 45, 60, 90, 120, 180, 300};
	texts[] = {$STR_DISP_OPT_DISABLED, "10", "20", "30", "45", "60", "90", "120", "180", "300"};
	default = 30;
};
class BIS_WLVotingTimeout //How long voting lasts
{
	title = $STR_A3_WL_param14_title;
	values[] = {5, 10, 15, 20, 25, 30};
	texts[] = {"5", "10", "15", "20", "25", "30"};
	default = 15;
};
class BIS_WLVehicleSpan //Vehicle Despawn
{
	title = $STR_A3_WL_param15_title;
	values[] = {900, 1800, 3600, 5400, 7200, 1000000};
	texts[] = {"15", "30", "60", "90", "120", $STR_A3_WL_param15_value1};
	default = 3600;
};
class BIS_WLJetsDLCAssetsEnabled //Jets DLC On/OFF
{
	title = $STR_A3_CfgHints_PremiumContent_PremiumJets0;
	values[] = {1, 0};
	texts[] = {$STR_DISP_OPT_ENABLED, $STR_DISP_OPT_DISABLED};
	default = 1;
};

	#define VIEW_DISTANCE_MIN 1500
	#define VIEW_DISTANCE_MAX 4000
	#define VIEW_DISTANCE_DEFAULT 4000
#include "\a3\Functions_F_Heli\Params\paramViewDistance.inc"


#include "\a3\Functions_F\Params\paramRevive.hpp"

