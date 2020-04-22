onLoadMission = "Custom Warlords w/Vanilla content! Find us @ www.discord.io/warlords";
onLoadName = "Warlords unOFFICIAL";
loadScreen = "images\loadScreen.paa";
overviewPicture = "A3\Data_F_Warlords\data\wl_logo_ca.paa";
overviewText = $STR_A3_WL_modRules;
dev = "Josef Zemanek";
author = "BIS + GamerDad";
respawn = "BASE";
respawnDelay = 30;

corpseManagerMode = 1;
corpseLimit = 50;
corpseRemovalMinTime = 300;
corpseRemovalMaxTime = 600;
wreckManagerMode = 1;
wreckLimit = 10;
wreckRemovalMinTime = 30;
wreckRemovalMaxTime = 60;
minPlayerDistance = 50;

WLAIRequisitonBlacklist[] = {"B_crew_F", "B_Helipilot_F", "B_Pilot_F", "O_crew_F", "O_Helipilot_F", "O_Pilot_F", "B_T_crew_F", "B_T_Helipilot_F", "B_T_Pilot_F", "O_T_crew_F", "O_T_Helipilot_F", "O_T_Pilot_F"};

//What's allowed in game
class CfgWLRequisitionPresets
{
    class MyWLAssetList // --- class name used in the Init module
  {
		class EAST
		{
			class Aircraft
			{
				
				class O_Heli_Light_02_unarmed_F
				{
					cost = 1500;
					requirements[] = {"H"};
				};
				class O_Heli_Transport_04_covered_F
				{
					cost = 3000;
					requirements[] = {"H"};
				};
				class O_Heli_Transport_04_F
				{
					cost = 2750;
					requirements[] = {"H"};
				};
				
			};
			class Defences
			{
				class O_GMG_01_A_F
				{
					cost = 500;
					requirements[] = {};
				};
				class O_GMG_01_F
				{
					cost = 250;
					requirements[] = {};
				};
				class O_GMG_01_high_F
				{
					cost = 250;
					requirements[] = {};
				};
				class O_HMG_01_A_F
				{
					cost = 500;
					requirements[] = {};
				};
				class O_HMG_01_F
				{
					cost = 250;
					requirements[] = {};
				};
				class O_HMG_01_high_F
				{
					cost = 250;
					requirements[] = {};
				};
			};
			class Gear
			{
				class Box_East_Ammo_F
				{
					cost = 200;
					requirements[] = {};
				};
				class Box_East_AmmoOrd_F
				{
					cost = 250;
					requirements[] = {};
				};
				class Box_East_AmmoVeh_F
				{
					cost = 500;
					requirements[] = {};
				};
				class Box_East_Grenades_F
				{
					cost = 200;
					requirements[] = {};
				};
				class Box_East_Wps_F
				{
					cost = 250;
					requirements[] = {};
				};
				class Box_East_WpsLaunch_F
				{
					cost = 300;
					requirements[] = {};
				};
				class Box_East_WpsSpecial_F
				{
					cost = 500;
					requirements[] = {};
				};
				class O_supplyCrate_F
				{
					cost = 500;
					requirements[] = {};
				};
			};
			class Infantry
			{
				class O_crew_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_HeavyGunner_F
				{
					cost = 200;
					requirements[] = {};
				};
				class O_Helipilot_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_medic_F
				{
					cost = 125;
					requirements[] = {};
				};
				class O_Pilot_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_Sharpshooter_F
				{
					cost = 300;
					requirements[] = {};
				};
				class O_sniper_F
				{
					cost = 300;
					requirements[] = {};
				};
				class O_Soldier_A_F
				{
					cost = 150;
					requirements[] = {};
				};
				class O_soldier_AR_F
				{
					cost = 150;
					requirements[] = {};
				};
				class O_Soldier_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_Soldier_GL_F
				{
					cost = 125;
					requirements[] = {};
				};
				class O_soldier_LAT_F
				{
					cost = 250;
					requirements[] = {};
				};
				class O_soldier_M_F
				{
					cost = 150;
					requirements[] = {};
				};
				class O_soldier_repair_F
				{
					cost = 200;
					requirements[] = {};
				};
			};
			class Naval
			{
				class O_Boat_Armed_01_hmg_F
				{
					cost = 750;
					requirements[] = {"W"};
				};
				class O_Boat_Transport_01_F
				{
					cost = 100;
					requirements[] = {"W"};
				};
				class O_SDV_01_F
				{
					cost = 900;
					requirements[] = {"W"};
				};
			};
			class Vehicles
			{
				
				class O_APC_Wheeled_02_rcws_v2_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class O_LSV_02_armed_F
				{
					cost = 1000;
					requirements[] = {};
				};
				class O_LSV_02_AT_F
				{
					cost = 1250;
					requirements[] = {};
				};
				class O_LSV_02_unarmed_F
				{
					cost = 350;
					requirements[] = {};
				};
				class O_MRAP_02_F
				{
					cost = 500;
					requirements[] = {};
				};
				class O_MRAP_02_gmg_F
				{
					cost = 1600;
					requirements[] = {};
				};
				class O_MRAP_02_hmg_F
				{
					cost = 1400;
					requirements[] = {};
				};
				class O_Quadbike_01_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_Truck_03_ammo_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class O_Truck_03_Fuel_F
				{
					cost = 750;
					requirements[] = {};
				};
				class O_Truck_03_medical_F
				{
					cost = 750;
					requirements[] = {};
				};
				class O_Truck_03_Repair_F
				{
					cost = 1500;
					requirements[] = {};
				};
				class O_Truck_03_transport_F
				{
					cost = 650;
					requirements[] = {};
				};
			};
		};
		class WEST
		{
			class Aircraft
			{
				
				class B_Heli_Light_01_F
				{
					cost = 1000;
					requirements[] = {"H"};
				};
				class B_Heli_Transport_03_F
				{
					cost = 4500;
					requirements[] = {"H"};
				};
				
			};
			class Defences
			{
				class B_GMG_01_A_F
				{
					cost = 500;
					requirements[] = {};
				};
				class B_GMG_01_F
				{
					cost = 250;
					requirements[] = {};
				};
				class B_GMG_01_high_F
				{
					cost = 250;
					requirements[] = {};
				};
				class B_HMG_01_A_F
				{
					cost = 500;
					requirements[] = {};
				};
				class B_HMG_01_F
				{
					cost = 250;
					requirements[] = {};
				};
				class B_HMG_01_high_F
				{
					cost = 250;
					requirements[] = {};
				};
			};
			class Gear
			{
				class B_supplyCrate_F
				{
					cost = 500;
					requirements[] = {};
				};
				class Box_NATO_Ammo_F
				{
					cost = 200;
					requirements[] = {};
				};
				class Box_NATO_AmmoOrd_F
				{
					cost = 250;
					requirements[] = {};
				};
				class Box_NATO_AmmoVeh_F
				{
					cost = 500;
					requirements[] = {};
				};
				class Box_NATO_Grenades_F
				{
					cost = 200;
					requirements[] = {};
				};
				class Box_NATO_Wps_F
				{
					cost = 250;
					requirements[] = {};
				};
				class Box_NATO_WpsLaunch_F
				{
					cost = 300;
					requirements[] = {};
				};
				class Box_NATO_WpsSpecial_F
				{
					cost = 500;
					requirements[] = {};
				};
			};
			class Infantry
			{
				class B_crew_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_HeavyGunner_F
				{
					cost = 200;
					requirements[] = {};
				};
				class B_Helipilot_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_medic_F
				{
					cost = 125;
					requirements[] = {};
				};
				class B_Pilot_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_Sharpshooter_F
				{
					cost = 300;
					requirements[] = {};
				};
				class B_sniper_F
				{
					cost = 300;
					requirements[] = {};
				};
				class B_Soldier_A_F
				{
					cost = 150;
					requirements[] = {};
				};
				class B_soldier_AR_F
				{
					cost = 150;
					requirements[] = {};
				};
				class B_Soldier_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_Soldier_GL_F
				{
					cost = 125;
					requirements[] = {};
				};
				class B_soldier_LAT2_F
				{
					cost = 300;
					requirements[] = {};
				};
				class B_soldier_M_F
				{
					cost = 150;
					requirements[] = {};
				};
				class B_soldier_repair_F
				{
					cost = 200;
					requirements[] = {};
				};
			};
			class Naval
			{
				class B_Boat_Armed_01_minigun_F
				{
					cost = 750;
					requirements[] = {"W"};
				};
				class B_Boat_Transport_01_F
				{
					cost = 100;
					requirements[] = {"W"};
				};
				class B_SDV_01_F
				{
					cost = 900;
					requirements[] = {"W"};
				};
			};
			class Vehicles
			{
				
				class B_APC_Tracked_01_rcws_F
				{
					cost = 3500;
					requirements[] = {};
				};
				class B_LSV_01_armed_F
				{
					cost = 1000;
					requirements[] = {};
				};
				class B_LSV_01_AT_F
				{
					cost = 1250;
					requirements[] = {};
				};
				class B_LSV_01_unarmed_F
				{
					cost = 350;
					requirements[] = {};
				};
				class B_MRAP_01_F
				{
					cost = 500;
					requirements[] = {};
				};
				class B_MRAP_01_gmg_F
				{
					cost = 1600;
					requirements[] = {};
				};
				class B_MRAP_01_hmg_F
				{
					cost = 1400;
					requirements[] = {};
				};
				class B_Quadbike_01_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_Truck_01_ammo_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class B_Truck_01_fuel_F
				{
					cost = 750;
					requirements[] = {};
				};
				class B_Truck_01_medical_F
				{
					cost = 750;
					requirements[] = {};
				};
				class B_Truck_01_Repair_F
				{
					cost = 1500;
					requirements[] = {};
				};
				class B_Truck_01_transport_F
				{
					cost = 650;
					requirements[] = {};
				};
			};
		};
	};
};