# FBG_AltisLife
MAKE A BACKUP BEFORE YOU EDIT, WE DO NOT WANT TO LOSE ANYTHING.
//ZIP TIES TESTing

if(playerSide in [independent]) exitWith {};
		if !(license_civ_rebel || liscense_pmc_soldier) exitWith { hintSilent "You need a rebel license !"; };
		if(_shift && playerSide == civilian && !isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && (side cursorTarget in [civilian,east]) && alive cursorTarget && cursorTarget distance player < 3.5 && !(cursorTarget getVariable "Escorting") && !(cursorTarget getVariable "restrained") && speed cursorTarget < 1) then
		{
			if([false,"zipties",1] call life_fnc_handleInv) then
			{
				[] call life_fnc_restrainAction;
				hintSilent "You have cuffed him! ";
			} else {
				hintSilent "You don't have zipties";
			};
		};
		
		
		
		
		/*
	File: fn_restrainAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Retrains the target.
*/
private["_unit"];
_unit = cursorTarget;
if(isNull _unit) exitWith {}; //Not valid
if((player distance _unit > 3)) exitWith {};
if((_unit getVariable "restrained")) exitWith {};
if(side _unit == west) exitWith {};
if(player == _unit) exitWith {};
if (side player == civilian) then {
	if(life_inv_zipties < 1) exitWith { hintSilent "Du hast keine Kabelbinder bei dir !"; };
	life_inv_zipties = life_inv_zipties - 1;
	hintSilent "Du hast den Zivilisten festgenommen...";
};
if(!isPlayer _unit) exitWith {};

_unit setVariable["restrained",true,true];
[[player], "life_fnc_restrain", _unit, false] spawn life_fnc_MP;
player say3D "cuff";
[[0,"STR_NOTF_Restrained",true,[_unit getVariable["realname", name _unit], profileName]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
