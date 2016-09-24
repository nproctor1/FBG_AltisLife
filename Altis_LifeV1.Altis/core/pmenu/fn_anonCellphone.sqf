#include "..\..\script_macros.hpp"
/*
	File: fn_cellphone.sqf
	Author: Alan
	
	Description:
	Opens the cellphone menu?
*/
private["_display","_units","_type"];
if(playerSide == west || playerSide == independent) then {
hint"Error: Unauthorized Access";
closeDialog 0;} else {
if !(FETCH_CONST(life_donorlevel) >= 4) then {
hint"Error: Unauthorized Access";
closeDialog 0;
} else {
disableSerialization;
waitUntil {!isNull findDisplay 3000};
_display = findDisplay 3000;
_units = _display displayCtrl 3004;

ctrlSetText [3003, ""];
lbClear _units;

{
	if(alive _x && _x != player) then {
		switch (side _x) do {
			case west: {_type = "Cop"};
			case civilian: {_type = "Civ"};
			case independent: {_type = "Med"};
		};
		_units lbAdd format["%1 (%2)",_x GVAR ["realname",name _x],_type];
		_units lbSetData [(lbSize _units)-1,str(_x)];
	};
} foreach playableUnits;

lbSetCurSel [3004,0];
};
};