/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Gun store";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 3000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 10000, -1 },
            { "hgun_Pistol_01_F", "", 3000, -1 }
        };
        mags[] = {
			
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 }
        };
    };

    class rebel {
        name = "Rebel Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
			{ "LMG_03_F", "Lim", 100000, -1 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
            { "arifle_AKS_F", "", 50000, 7500, { "", "", -1 } }, //Apex DLC
            { "arifle_AKM_F", "", 30000, 7500, { "", "", -1 } }, 
			{ "srifle_DMR_06_olive_F", "", 30000, 7500, { "", "", -1 } }, 
            { "optic_ACO_grn", "", 3500, 350 },
            { "optic_Holosight", "", 3600, 275 },
            { "optic_Hamr", "", 7500, -1 },
            { "acc_flashlight", "", 1000, 100 }
        };
        mags[] = {
			{ "200Rnd_556x45_Box_F", "Lim 200rnd", 5000 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
			{ "30Rnd_545x39_Mag_F", "", 300, 100, { "", "", -1 } },
			{ "20Rnd_762x51_Mag", "", 2000, 100, { "", "", -1 } },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
    };
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 5000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 10000, -1 },
            { "hgun_ACPC2_F", "", 7000, -1 },
            { "hgun_PDW2000_F", "", 15000, -1 },
			{ "arifle_AKS_F", "", 75000, -1 },
            { "optic_ACO_grn_smg", "", 950, 250 }
        };
        mags[] = {
			{ "30Rnd_762x39_Mag_F", "AkM Mag", 5000 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
			{ "30Rnd_545x39_Mag_F", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 100, 650 },
            { "hgun_P07_F", "", 2500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1000, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "SMG_05_F", "", 1000, 7500 },
            { "SMG_02_F", "", 1000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "MineDetector", "", 1000, 500 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag_SMG_02", "", 130 }
			
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 1000, -1 },
            { "arifle_MXC_F", "", 2000, 5000 },
			{ "srifle_DMR_07_blk_F", "", 4000, 5000},
            { "HandGrenade_Stone", "Flashbang", 300, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 200, 100, {"life_coplevel", "SCALAR", 3 } },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
    };
	//PMC Shops
	//
	    class PMC_weapons {
        name = "Private Military Depo";
        side = "civ";
        license = "PMCSoldier";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_AK12_F", "Ak12", 75000, -1 },
            { "arifle_AKM_F", "AKM", 50000, -1},
			{ "arifle_AKS_F", "AKS", 30000, -1 },
            { "LMG_03_F", "Lim", 100000, -1 },
            { "SMG_05_F", "Protector 9mm", 120000, -1 },
			{ "arifle_SPAR_01_blk_F", "SPAR-16(Black)", 120000, -1 },
			{ "arifle_SPAR_01_khk_F", "SPAR-16(Khaki)", 120000, -1 },
			{ "arifle_SPAR_01_snd_F", "SPAR-16(Sand)", 120000, -1 },
			{ "srifle_EBR_F", "Mk18 ABR 7.62 mm", 150000, -1 },
			{ "hgun_ACPC2_F", "ACP .45", 5000, -1 },			
			{ "SMG_02_F", "Sting 9 mm", 7000, -1 },
			{ "srifle_DMR_04_F", "", 35000, -1 },
			{ "optic_ERCO_blk_F", "ERCO(Black)", 15000, -1 },
			{ "optic_ERCO_snd_F", "ERCO(Sand)", 15000, -1 },
			{ "arifle_Mk20_F", "Mk20 5.56 mm(Camo)", 30000, -1 },
			{ "muzzle_snds_M", "5.56 mm Sound Suppressor ", 150000, -1 },
			{ "muzzle_snds_L", "9mm Suppressor", 20000, -1 },
			{ "bipod_01_F_blk", "Bipod-Black(Nato)", 20000, -1 },
			{ "bipod_02_F_blk", "Bipod-black(Csat)", 20000, -1 },
			{ "Binocular", "Binocular", 2000, -1 },
			{ "Rangefinder", "Rangefinder", 2000, -1 },
			{ "optic_DMS", "DMS Scope", 30000, -1 },
			{ "optic_LRPS", "LRPS", 30000, -1 },
            { "optic_ACO_grn", "ACO_grn", 3500, -1 },
            { "optic_Holosight", "Holosight", 3600, -1 },
            { "optic_Hamr", "Hamr", 7500, -1 },
            { "acc_flashlight", "flashlight", 1000, -1}
        };
        mags[] = {
            { "30Rnd_762x39_Mag_F", "Ak12 Mag", 5000 },
            { "30Rnd_762x39_Mag_F", "AkM Mag", 5000 },
			{ "30Rnd_545x39_Mag_F", "AkS Mag", 5000 },
            { "200Rnd_556x45_Box_F", "Lim 200rnd", 15000 },
			{ "30Rnd_762x39_Mag_Green_F", "Lim 200rnd(Green)", 15000},
            { "30Rnd_9x21_Mag_SMG_02", "30rnd 9mm Mag", 1000 },
			{ "30Rnd_556x45_Stanag", "5.56 30rnd Stanag", 5000 },
			{ "30Rnd_556x45_Stanag_green", "5.56 30rnd Stanag(Green)", 5000 },
            { "9Rnd_45ACP_Mag", "9rn 45ACP mag", 275 },
			{ "10Rnd_127x54_Mag", "9rn 45ACP mag", 275 },
			{ "20Rnd_762x51_Mag", "762x51", 5000 }
        };
    };
};
