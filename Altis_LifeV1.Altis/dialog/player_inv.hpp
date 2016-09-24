#include "player_sys.sqf"
class playerSettings {
 idd = playersys_DIALOG;
 movingEnable = true;
 enableSimulation = true;
 class controlsBackground {
 class HG: life_RscPicture
 {
 idc = -1;
 text = "images\tablet\tablet.paa";
 x = 0.258501 * safezoneW + safezoneX;
 y = 0.0716 * safezoneH + safezoneY;
 w = 0.485625 * safezoneW;
 h = 0.854 * safezoneH;
 };
 class moneyTitle: life_RscText
 {
 idc = -1;
 text = "Money";
 x = 0.309686 * safezoneW + safezoneX;
 y = 0.2648 * safezoneH + safezoneY;
 w = 0.0979687 * safezoneW;
 h = 0.0276 * safezoneH;
 };
 class moneyStatusInfo: life_RscStructuredText
 {
 idc = 2015;
 sizeEx = 0.020;
 text = "";
 x = 0.309217 * safezoneW + safezoneX;
 y = 0.2942 * safezoneH + safezoneY;
 w = 0.0992812 * safezoneW;
 h = 0.066 * safezoneH;
 };
 class PlayersWeight : life_RscTitle {
 idc = carry_weight;
 style = 1;
 x = 0.647;
 y = 0.559;
 text = "";
 };
 class itemHeader: life_RscText
 {
 idc = -1;
 text = "Inventory";
 x = 0.543781 * safezoneW + safezoneX;
 y = 0.2668 * safezoneH + safezoneY;
 w = 0.149531 * safezoneW;
 h = 0.0276 * safezoneH;
 };
 };
 class controls {
 class moneyEdit: life_RscEdit
 {
 idc = 2018;
 text = "1";
 sizeEx = 0.030;
 x = 0.310999 * safezoneW + safezoneX;
 y = 0.3628 * safezoneH + safezoneY;
 w = 0.060375 * safezoneW;
 h = 0.0252 * safezoneH;
 };
 class NearPlayers: life_RscCombo
 {
 idc = 2022;
 x = 0.311 * safezoneW + safezoneX;
 y = 0.3908 * safezoneH + safezoneY;
 w = 0.0975245 * safezoneW;
 h = 0.028 * safezoneH;
 };
 class moneyDrop: life_RscButtonMenu
 {
 idc = 2001;
 text = "Give";
 x = 0.372688 * safezoneW + safezoneX;
 y = 0.3628 * safezoneH + safezoneY;
 w = 0.0354375 * safezoneW;
 h = 0.0252 * safezoneH;
 tooltip = "G";
 onButtonClick = "[] call life_fnc_giveMoney";
 };
 class licenseHeader: life_RscStructuredText
 {
 idc = -1;
 text = "License's";
 x = 0.422655 * safezoneW + safezoneX;
 y = 0.265 * safezoneH + safezoneY;
 w = 0.108281 * safezoneW;
 h = 0.0276 * safezoneH;
 };
 class Licenses_Menu: life_RscControlsGroup
 {
 idc = -1;
 x = 0.425188 * safezoneW + safezoneX;
 y = 0.2984 * safezoneH + safezoneY;
 w = 0.103031 * safezoneW;
 h = 0.297 * safezoneH;
 class controls
 {
 class life_Licenses: life_RscStructuredText
 {
 idc = 2014;
 sizeEx = 0.020;
 text = "";
 x = 0;
 y = 0;
 w = 0.0928125 * safezoneW;
 h = 0.297 * safezoneH;
 };
 };
 }
 class itemList: life_RscListbox
 {
 idc = item_list;
 x = 0.544622 * safezoneW + safezoneX;
 y = 0.2984 * safezoneH + safezoneY;
 w = 0.148312 * safezoneW;
 h = 0.1732 * safezoneH;
 sizeEx = 0.040;
 };
 class itemEdit: life_RscEdit
 {
 idc = item_edit;
 text = "1";
 x = 0.544623 * safezoneW + safezoneX;
 y = 0.4776 * safezoneH + safezoneY;
 w = 0.148313 * safezoneW;
 h = 0.0248 * safezoneH;
 };
 class iNearPlayers: life_RscCombo
 {
 idc = 2023;
 x = 0.544623 * safezoneW + safezoneX;
 y = 0.5056 * safezoneH + safezoneY;
 w = 0.148312 * safezoneW;
 h = 0.022 * safezoneH;
 };
 class RemoveButton: life_RscButtonMenu
 {
 text = "R";
 x = 0.544622 * safezoneW + safezoneX;
 y = 0.5308 * safezoneH + safezoneY;
 w = 0.0170625 * safezoneW;
 h = 0.0308 * safezoneH;
 tooltip = "Remove"; 
 onButtonClick = "[] call life_fnc_removeItem;";
 };
 class UseButton: life_RscButtonMenu
 {
 text = "U";
 x = 0.565625 * safezoneW + safezoneX;
 y = 0.5308 * safezoneH + safezoneY;
 w = 0.0170625 * safezoneW;
 h = 0.0308 * safezoneH;
 onButtonClick = "[] call life_fnc_useItem;";
 tooltip = "Use";
 };
 class DropButton: life_RscButtonMenu
 {
 idc = 2002;
 text = "G";
 x = 0.586625 * safezoneW + safezoneX;
 y = 0.5308 * safezoneH + safezoneY;
 w = 0.0170625 * safezoneW;
 h = 0.0308 * safezoneH;
 onButtonClick = "[] call life_fnc_giveItem;";
 tooltip = "Give";
 };
 class ButtonAdminMenu_ICON: life_RscPicture
 {
 idc = 20210;
 text = "images\tablet\admin.paa";
 x = 0.546406 * safezoneW + safezoneX;
 y = 0.566 * safezoneH + safezoneY;
 w = 0.04125 * safezoneW;
 h = 0.077 * safezoneH;
 };
 class ButtonAdminMenu: life_RscButtonMenu
 {
 idc = 2021;
 x = 0.551562 * safezoneW + safezoneX;
 y = 0.577 * safezoneH + safezoneY;
 w = 0.0309375 * safezoneW;
 h = 0.055 * safezoneH;
 onButtonClick = "createDialog ""life_admin_menu""; ";
 tooltip = $STR_PM_AdminMenu;
 colorBackground[] = {-1,-1,-1,-1};
 colorBackgroundFocused[] = {1,1,1,0.12};
 colorBackground2[] = {0.75,0.75,0.75,0.2};
 color[] = {1,1,1,1};
 colorFocused[] = {0,0,0,1};
 color2[] = {0,0,0,1};
 colorText[] = {1,1,1,1};
 colorDisabled[] = {0,0,0,0.4};
 };
 class ButtonSettings_ICON: life_RscPicture
 {
 idc = -1;
 text = "images\tablet\config.paa";
 x = 0.387122 * safezoneW + safezoneX;
 y = 0.6988 * safezoneH + safezoneY;
 w = 0.0315 * safezoneW;
 h = 0.056 * safezoneH;
 };
 class ButtonSettings: life_RscButtonMenu
 {
 idc = -1;
 x = 0.388441 * safezoneW + safezoneX;
 y = 0.7016 * safezoneH + safezoneY;
 w = 0.028875 * safezoneW;
 h = 0.0504 * safezoneH;
 onButtonClick = "[] call life_fnc_settingsMenu;";
 tooltip = "Settings";
 colorBackground[] = {-1,-1,-1,-1};
 colorBackgroundFocused[] = {1,1,1,0.12};
 colorBackground2[] = {0.75,0.75,0.75,0.2};
 color[] = {1,1,1,1};
 colorFocused[] = {0,0,0,0};
 color2[] = {0,0,0,0};
 colorText[] = {1,1,1,1};
 colorDisabled[] = {1,0,0,0.1};
 };
 
 class ButtonCrafting_ICON: life_RscPicture
 {
 idc = -1;
 text = "images\tablet\crafting.paa";
 x = 0.43 * safezoneW + safezoneX;
 y = 0.6988 * safezoneH + safezoneY;
 w = 0.0315 * safezoneW;
 h = 0.056 * safezoneH;
 };
 class ButtonCrafting: life_RscButtonMenu
 {
 idc = -1;
 x = 0.43 * safezoneW + safezoneX;
 y = 0.7016 * safezoneH + safezoneY;
 w = 0.028875 * safezoneW;
 h = 0.0504 * safezoneH;
 onButtonClick = "closeDialog 0; createDialog ""Life_craft"";";
 tooltip = "Crafting";
 colorBackground[] = {-1,-1,-1,-1};
 colorBackgroundFocused[] = {1,1,1,0.12};
 colorBackground2[] = {0.75,0.75,0.75,0.2};
 color[] = {1,1,1,1};
 colorFocused[] = {0,0,0,0};
 color2[] = {0,0,0,0};
 colorText[] = {1,1,1,1};
 colorDisabled[] = {1,0,0,0.1};
 };
 
 class ButtonKeys_ICON: life_RscPicture
 {
 idc = 20111;
 text = "images\tablet\key.paa";
 x = 0.465873 * safezoneW + safezoneX;
 y = 0.6988 * safezoneH + safezoneY;
 w = 0.0315 * safezoneW;
 h = 0.056 * safezoneH;
 };
 class ButtonKeys: life_RscButtonMenu
 {
 idc = 2000;
 x = 0.467187 * safezoneW + safezoneX;
 y = 0.7016 * safezoneH + safezoneY;
 w = 0.028875 * safezoneW;
 h = 0.0504 * safezoneH;
 onButtonClick = "createDialog ""life_key_management"";";
 tooltip = "Key Chain";
 colorBackground[] = {-1,-1,-1,-1};
 colorBackgroundFocused[] = {1,1,1,0.12};
 colorBackground2[] = {0.75,0.75,0.75,0.2};
 color[] = {1,1,1,1};
 colorFocused[] = {0,0,0,0};
 color2[] = {0,0,0,0};
 colorText[] = {1,1,1,1};
 colorDisabled[] = {1,0,0,0.1};
 };
 class ButtonCell_ICON: life_RscPicture
 {
 idc = 1204;
 text = "images\tablet\phone.paa";
 x = 0.581372 * safezoneW + safezoneX;
 y = 0.6988 * safezoneH + safezoneY;
 w = 0.0315 * safezoneW;
 h = 0.056 * safezoneH;
 };
 class ButtonCell: life_RscButtonMenu
 {
 idc = 2001;
 x = 0.582685 * safezoneW + safezoneX;
 y = 0.7016 * safezoneH + safezoneY;
 w = 0.028875 * safezoneW;
 h = 0.0504 * safezoneH;
 onButtonClick = "createDialog ""Life_cell_phone"";";
 tooltip = $STR_PM_CellPhone;
 colorBackground[] = {-1,-1,-1,-1};
 colorBackgroundFocused[] = {1,1,1,0.12};
 colorBackground2[] = {0.75,0.75,0.75,0.2};
 color[] = {1,1,1,1};
 colorFocused[] = {0,0,0,0};
 color2[] = {0,0,0,0};
 colorText[] = {1,1,1,1};
 colorDisabled[] = {1,0,0,0.1};
 };

class ButtonAnonCell_ICON: life_RscPicture
 {
 idc = 1204;
 text = "images\tablet\MatrixMessage.paa";
 x = 0.62 * safezoneW + safezoneX;
 y = 0.7016 * safezoneH + safezoneY;
 w = 0.028875 * safezoneW;
 h = 0.056 * safezoneH;
 };
 class ButtonAnonCell: life_RscButtonMenu
 {
 idc = 2001;
 x = 0.62 * safezoneW + safezoneX;
 y = 0.7016 * safezoneH + safezoneY;
 w = 0.028875 * safezoneW;
 h = 0.0504 * safezoneH;
 onButtonClick = "createDialog ""Life_anoncell_phone"";";
 tooltip = "Unknown App";
 colorBackground[] = {-1,-1,-1,-1};
 colorBackgroundFocused[] = {1,1,1,0.12};
 colorBackground2[] = {0.75,0.75,0.75,0.2};
 color[] = {1,1,1,1};
 colorFocused[] = {0,0,0,0};
 color2[] = {0,0,0,0};
 colorText[] = {1,1,1,1};
 colorDisabled[] = {1,0,0,0.1};
 };
 
 class ButtonSyncData_ICON: life_RscPicture
 {
 idc = 1205;
 text = "images\tablet\sync.paa";
 x = 0.308373 * safezoneW + safezoneX;
 y = 0.6988 * safezoneH + safezoneY;
 w = 0.0315 * safezoneW;
 h = 0.056 * safezoneH;
 };
 class ButtonSyncData: life_RscButtonMenu
 {
 idc = 2002;
 x = 0.309676 * safezoneW + safezoneX;
 y = 0.7016 * safezoneH + safezoneY;
 w = 0.028875 * safezoneW;
 h = 0.0504 * safezoneH;
 onButtonClick = "[] call SOCK_fnc_syncData;";
 tooltip = $STR_PM_SyncData;
 colorBackground[] = {-1,-1,-1,-1};
 colorBackgroundFocused[] = {1,1,1,0.12};
 colorBackground2[] = {0.75,0.75,0.75,0.2};
 color[] = {1,1,1,1};
 colorFocused[] = {0,0,0,0};
 color2[] = {0,0,0,0};
 colorText[] = {1,1,1,1};
 colorDisabled[] = {1,0,0,0.1};
 };
 class Markt_ICON: life_RscPicture
 {
 idc = 980021;
 text = "images\tablet\markt.paa";
 x = 0.543311 * safezoneW + safezoneX;
 y = 0.6988 * safezoneH + safezoneY;
 w = 0.0315 * safezoneW;
 h = 0.056 * safezoneH;
 };
 class Markt_Knopf: life_RscButtonMenu
 {
 idc = -1;
 x = 0.544623 * safezoneW + safezoneX;
 y = 0.7016 * safezoneH + safezoneY;
 w = 0.028875 * safezoneW;
 h = 0.0504 * safezoneH;
 onButtonClick = "createDialog ""life_dynmarket_prices"";";
 tooltip = "Market"; //--- ToDo: Localize;
 colorBackground[] = {-1,-1,-1,-1};
 colorBackgroundFocused[] = {1,1,1,0.12};
 colorBackground2[] = {0.75,0.75,0.75,0.2};
 color[] = {1,1,1,1};
 colorFocused[] = {0,0,0,0};
 color2[] = {0,0,0,0};
 colorText[] = {1,1,1,1};
 colorDisabled[] = {1,0,0,0.1};
 };
 class ButtonGang_ICON: life_RscPicture
 {
 idc = 1207;
 text = "images\tablet\gang.paa";
 x = 0.34775 * safezoneW + safezoneX;
 y = 0.6988 * safezoneH + safezoneY;
 w = 0.0315 * safezoneW;
 h = 0.056 * safezoneH;
 };
 class ButtonGang: life_RscButtonMenu
 {
 idc = 1209;
 x = 0.34775 * safezoneW + safezoneX;
 y = 0.6988 * safezoneH + safezoneY;
 w = 0.0315 * safezoneW;
 h = 0.056 * safezoneH;
 onButtonClick = "if(isNil ""life_action_gangInUse"") then {if(isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
 tooltip = "Gang";
 colorBackground[] = {-1,-1,-1,-1};
 colorBackgroundFocused[] = {1,1,1,0.12};
 colorBackground2[] = {0.75,0.75,0.75,0.2};
 color[] = {1,1,1,1};
 colorFocused[] = {0,0,0,0};
 color2[] = {0,0,0,0};
 colorText[] = {1,1,1,1};
 colorDisabled[] = {1,0,0,0.1};
 };
 class ButtonWanted_ICON: life_RscPicture
 {
 idc = 1210;
 text = "images\tablet\wanted.paa";
 x = 0.505251 * safezoneW + safezoneX;
 y = 0.6988 * safezoneH + safezoneY;
 w = 0.0315 * safezoneW;
 h = 0.056 * safezoneH;
 };
 class ButtonWanted: life_RscButtonMenu
 {
 idc = 2008;
 x = 0.506562 * safezoneW + safezoneX;
 y = 0.7016 * safezoneH + safezoneY;
 w = 0.028875 * safezoneW;
 h = 0.0504 * safezoneH;
 onButtonClick = "[] call life_fnc_wantedMenu";
 colorBackground[] = {-1,-1,-1,-1};
 colorBackgroundFocused[] = {1,1,1,0.12};
 colorBackground2[] = {0.75,0.75,0.75,0.2};
 color[] = {1,1,1,1};
 colorFocused[] = {0,0,0,0};
 color2[] = {0,0,0,0};
 colorText[] = {1,1,1,1};
 colorDisabled[] = {1,0,0,0.1};
 tooltip = $STR_PM_WantedList;
 }; 
 };
};









/*#include "player_sys.sqf"

class playerSettings {

	idd = playersys_DIALOG;
	movingEnable = 1;
	enableSimulation = 1;
	
	class controlsBackground {
	
	class life_RscTitleBackground:life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};
		
		class MainBackground:life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.8;
			h = 0.6 - (22 / 250);
		};
		
		class Title : life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "$STR_PM_Title";
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};
		
		class moneyStatusInfo : Life_RscStructuredText
		{
			idc = 2015;
			sizeEx = 0.020;
			text = "";
			x = 0.105;
			y = 0.30;
			w = 0.3; h = 0.6;
		};
		
		class PlayersName : Title {
			idc = carry_weight;
			style = 1;
			text = "";
		};
	};
	
	class controls {
		
		class itemHeader : Life_RscText
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "$STR_PM_cItems";
			sizeEx = 0.04;
			
			x = 0.62; y = 0.26;
			w = 0.275; h = 0.04;
		};
		
		class licenseHeader : Life_RscText
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "$STR_PM_Licenses";
			sizeEx = 0.04;
			
			x = 0.336; y = 0.26;
			w = 0.275; h = 0.04;
		};
		
		class moneySHeader : Life_RscText
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "$STR_PM_MoneyStats";
			sizeEx = 0.04;
			
			x = 0.11; y = 0.26;
			w = 0.219; h = 0.04;
		};
	
		class itemList : life_RscListBox 
		{
			idc = item_list;
			sizeEx = 0.030;
			
			x = 0.62; y = 0.30;
			w = 0.275; h = 0.3;
		};
		
		class moneyEdit : Life_RscEdit 
		{
			idc = 2018;
			
			text = "1";
			sizeEx = 0.030;
			x = 0.12; y = 0.42;
			w = 0.18; h = 0.03;
		};
		
		class NearPlayers : Life_RscCombo 
		{
			idc = 2022;
		
			x = 0.12; y = 0.46;
			w = 0.18; h = 0.03;
		};
		
		class moneyDrop : Life_RscButtonMenu
		{
			idc = 2001;
			text = "$STR_Global_Give";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_giveMoney";
			sizeEx = 0.025;
			x = 0.135; y = 0.50;
			w = 0.13; h = 0.036;
		};
		
		class itemEdit : Life_RscEdit {
		
		idc = item_edit;
		
		text = "1";
		sizeEx = 0.030;
		x = 0.62; y = 0.61;
		w = 0.275; h = 0.03;
		
		};
		class iNearPlayers : Life_RscCombo
		{
			idc = 2023;
			
			x = 0.62; y = 0.65;
			w = 0.275; h = 0.03;
		};
		/*
		Disabled till it can be redone
		class moneyInput: life_RscCombo {
			
			idc = money_value;
			
			x  = 0.02; y = 0.402;
			w = .1; h = .030;
		};
		*//*
		
		class DropButton : life_RscButtonMenu {
			
			idc = 2002;
			text = "$STR_Global_Give";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_giveItem;";
			
			x = 0.765;
			y = 0.70;
			w = (5.25 / 40);
			h = (1 / 25);
			
		};
		
		class UseButton : life_RscButtonMenu {
			
			text = "$STR_Global_Use";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_useItem;";
			
			x = 0.62;
			y = 0.70;
			w = (5.25 / 40);
			h = (1 / 25);
			
		};
		
		class RemoveButton : life_RscButtonMenu {
			
			text = "$STR_Global_Remove";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_removeItem;";
			
			x = 0.475;
			y = 0.70;
			w = (5.25 / 40);
			h = (1 / 25);
			
		};
		/*
		Disabled till it can be redone
		class DropcButton : life_RscButtonMenu {

			text = "Drop Money";
			onButtonClick = "[] execVM 'player_system\money_fnc.sqf'";
			
			x = 0.13; y = 0.4;
			w = 0.135; h = 0.05;
			
		};
		*//*
		
		class ButtonClose : life_RscButtonMenu {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.1;
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class ButtonSettings : life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Settings";
			onButtonClick = "[] call life_fnc_settingsMenu;";
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class ButtonMyGang : Life_RscButtonMenu {
			idc = 2011;
			text = "$STR_PM_MyGang";
			onButtonClick = "if(isNil ""life_action_gangInUse"") then {if(isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
			x = 0.1 + (6.25 / 19.8) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class Licenses_Menu : Life_RscControlsGroup
		{
			idc = -1;
			w = 0.28;
			h = 0.38;
			x = 0.34;
			y = 0.30;
			
			class Controls
			{
				class Life_Licenses : Life_RscStructuredText
				{
					idc = 2014;
					sizeEx = 0.020;
					text = "";
					x = 0;
					y = 0;
					w = 0.27; h = 0.65;
				};
			};
		};
		
		class ButtonGangList : Life_RscButtonMenu {
			idc = 2012;
			text = "$STR_PM_WantedList";
			onButtonClick = "[] call life_fnc_wantedMenu";
			x = 0.1 + (6.25 / 19.8) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	
		class ButtonKeys : Life_RscButtonMenu {
			idc = 2013;
			text = "$STR_PM_KeyChain";
			onButtonClick = "createDialog ""Life_key_management"";";
			x = 0.26 + (6.25 / 19.8) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class ButtonCell : Life_RscButtonMenu {
			idc = 2014;
			text = "$STR_PM_CellPhone";
			onButtonClick = "createDialog ""Life_cell_phone"";";
			x = 0.42 + (6.25 / 19.8) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class ButtonAdminMenu : Life_RscButtonMenu {
			idc = 2021;
			text = "$STR_PM_AdminMenu";
			onButtonClick = "createDialog ""life_admin_menu"";";
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.805;
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class ButtonSyncData : life_RscButtonMenu {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			text = "$STR_PM_SyncData";
			onButtonClick = "[] call SOCK_fnc_syncData;";
			x = 0.1;
			y = 0.805;
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};*/