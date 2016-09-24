StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\fn_statusBar.sqf";
//[] execVM "scripts\fn_robShopInit.sqf";
[] execVM "scripts\zlt_fastrope.sqf";
player enableFatigue false;
StartProgress = true;

[] spawn life_fnc_introText;