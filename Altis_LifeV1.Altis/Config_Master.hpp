#define true 1
#define false 0

/*
    Master settings for various features and functionality
*/
class Life_Settings {
    /* Persistent Settings */
    save_civ_weapons = true; //Allow civilians to save weapons on them?
    save_virtualItems = true; //Save Virtual items (all sides)?
    save_playerStats = false; //Save food & water (all sides)?
    save_veh_virtualItems = true; //Save Virtual items for vehicles (all sides)?
    save_veh_gear = true; //Save Gear for vehicles (all sides)?

    /* Clothing related settings */
    clothing_box = true; //true = preview inside a black box.  false = preview on map.
    clothing_masks[] = { "H_Shemag_olive", "H_Shemag_khk", "H_Shemag_tan", "H_Shemag_olive_hs", "H_ShemagOpen_khk", "H_ShemagOpen_tan", "G_Balaclava_blk", "G_Balaclava_combat", "G_Balaclava_lowprofile", "G_Balaclava_oli", "G_Bandanna_aviator", "G_Bandanna_beast", "G_Bandanna_blk", "G_Bandanna_khk", "G_Bandanna_oli", "G_Bandanna_shades", "G_Bandanna_sport", "G_Bandanna_tan", "U_O_GhillieSuit", "U_I_GhillieSuit", "U_B_GhillieSuit", "H_RacingHelmet_1_black_F", "H_RacingHelmet_1_red_F", "H_RacingHelmet_1_white_F", "H_RacingHelmet_1_blue_F", "H_RacingHelmet_1_yellow_F", "H_RacingHelmet_1_green_F", "H_RacingHelmet_1_F", "H_RacingHelmet_2_F", "H_RacingHelmet_3_F", "H_RacingHelmet_4_F" };

    /* Cop related settings */
    cops_online_min = 5; //minimum cops online for robbing a bank

    /* Medic related settings*/
    allow_medic_weapons = true; // true allows medics to hold/use weapons - false disallows

    /* Revive system settings */
    revive_cops = true; //true to enable cops the ability to revive everyone or false for only medics/ems.
    revive_fee = 10000; //Revive fee that players have to pay and medics / EMS are rewarded

    /* House related settings */
    house_limit = 5; //Maximum amount of houses a player can own.

    /* Gang related settings */
    gang_price = 100000; //Price for creating a gang, remember they are persistent so keep it reasonable to avoid millions of gangs.
    gang_upgradeBase = 10000; //The base cost for upgrading slots in a gang
    gang_upgradeMultiplier = 2.5; //Not sure if in use?

    /* Player-related systems */
    enable_fatigue = false; //Set to false to disable the ARMA 3 false system.
    total_maxWeight = 24; //Static variable for the maximum weight allowed without having a backpack
    paycheck_period = 5; //Scaled in minutes

    /* Impound Variables */
    impound_car = 350; //Price for impounding cars
    impound_boat = 350; //Price for impounding boats
    impound_air = 1000; //Price for impounding helicopters / planes

    /* Initial Bank Amount */
    bank_cop = 15000; //Amount of cash on bank for new cops
    bank_civ = 15000; //Amount of cash on bank for new civillians
    bank_med = 15000; //Amount of cash on bank for new medics

    /* Paycheck Amount */
    paycheck_cop = 1000; //Payment for cops
    paycheck_civ = 750; //Payment for civillians
    paycheck_med = 0; //Payment for medics

    /* Federal Reserve settings */
    noatm_timer = 20; //Time in minutes that players won't be able to deposit his money after selling stolen gold

    /* Spyglass settings */
    spyglass_init = false; //Enable or disable spyglass

    /* ATM settings */
    global_ATM = true; //Allow users to access any ATM on the map.

    /* Pump settings */
    Pump_service = true; //Allow users to use pump service on the map. Default = false

    /* Skins settings */
    civ_skins = false; //Enable or disable civilian skins. Before enabling, you must add all the SEVEN files to textures folder. (It must be named as: civilian_uniform_1.jpg, civilian_uniform_2.jpg...civilian_uniform_6.jpg, civilian_uniform_7.jpg)

    /* Car-shop Settings */
    vehicleShop_rentalOnly[] = { "B_MRAP_01_hmg_F", "B_G_Offroad_01_armed_F", "B_Boat_Armed_01_minigun_F" };

    /* Job-related stuff */
    delivery_points[] = { "dp_1", "dp_2", "dp_3", "dp_4", "dp_5", "dp_6", "dp_7", "dp_8", "dp_9", "dp_10", "dp_11", "dp_12", "dp_13", "dp_14", "dp_15", "dp_15", "dp_16", "dp_17", "dp_18", "dp_19", "dp_20", "dp_21", "dp_22", "dp_23", "dp_24", "dp_25" };

	donor_level = true;
	
    /* Wanted System related settings */
    /* crimes[] = {String, Bounty, Code} */
        crimes[] = {
        {"STR_Crime_187V","2000","187V"},//Vehicular Manslaughter
        {"STR_Crime_187","3000","187"},//Manslaughter
        {"STR_Crime_901","10000","901"},//Escaping Jail
        {"STR_Crime_215","2000","215"},//Attempted Auto Theft
        {"STR_Crime_213","100000","213"},//Use of illegal explosives
        {"STR_Crime_211","5000","211"},//Robbery
        {"STR_Crime_207","100000","207"},//Kidnapping
        {"STR_Crime_207A","5000","207A"},//Attempted Kidnapping
        {"STR_Crime_390","500","390"},//Public Intoxication
        {"STR_Crime_487","5000","487"},//Grand Theft
        {"STR_Crime_488","1000","488"},//Petty Theft
        {"STR_Crime_480","3000","480"},//Hit and run
        {"STR_Crime_481","2000","481"},//Drug Possession
        {"STR_Crime_482","1000","482"},//Intent to distribute
        {"STR_Crime_483","2500","483"},//Drug Trafficking
        {"STR_Crime_459","3500","459"},//Burglary
        {"STR_Crime_666","1000","666"},//Tax Evasion
        {"STR_Crime_667","10000","667"},//Terrorism
        {"STR_Crime_668","3000","668"},//Unlicensed Hunting
        {"STR_Crime_1","1000","1"},//Driving without license
        {"STR_Crime_2","1500","2"},//Driving in the wrong way of the street
        {"STR_Crime_3","1100","3"},//Not respecting the signalizations
        {"STR_Crime_4","500","4"},//Speeding
        {"STR_Crime_5","500","5"},//No headlight in the night
        {"STR_Crime_6","800 ","6"},//Driving kart without helmet
        {"STR_Crime_7","100","7"},//Badly parked vehicle
        {"STR_Crime_8","5000","8"},//Rebel vehicle (Not armed)
        {"STR_Crime_9","5000","9"},//Grand Theft (Civilian Vehicle)
        {"STR_Crime_10","5000","10"},//Grand Theft (Military Vehicle)
        {"STR_Crime_11","10000","11"},//Armored Vehicle
        {"STR_Crime_12","5000","12"},//Flying over the city without authorization
        {"STR_Crime_13","3000","13"},//Closing the street without authorization
        {"STR_Crime_14","2000","14"},//Open carry in city (Legal Weapon)
        {"STR_Crime_15","5000","15"},//Rebel weapon
        {"STR_Crime_16","1500","16"},//Ilegal clothing
        {"STR_Crime_17","1000","17"},//Hiding face (Mask)
        {"STR_Crime_18","1000","18"},//Refuses to cooperate
        {"STR_Crime_19","2500","19"},//Hit and run
        {"STR_Crime_20","500","20"},//Insulting a civilian
        {"STR_Crime_21","1500","21"},//Insulting a soldier
        {"STR_Crime_22","2000","22"},//Drug dealing
        {"STR_Crime_23","100000","23"},//Federal research breaking
        {"STR_Crime_24","6000","24"},//Killing of a civilian
        {"STR_Crime_25","6000","25"}//Killing of a soldier
    };

};

#include "Config_Clothing.hpp"
#include "Config_Licenses.hpp"
#include "Config_Vehicles.hpp"
#include "Config_vItems.hpp"
#include "Config_Weapons.hpp"
