#include "..\..\script_macros.hpp"
/*
	File: fn_copMarkerZones.sqf
	Author: Jason_000
	Description: Allows police to place markers

*/
//Error Checks
if (playerSide == independent) exitWith {hint "You must be a cop to do this!"};  //cops only
if (playerSide == civilian) exitWith {hint "You must be a cop to do this!"};  //cops only
if((FETCH_CONST(life_coplevel)) < 5) exitWith { hint "You are not the right level!"};
closeDialog 0;

marker={
	_pos = [_this select 0, _this select 1, _this select 2];
	
	_markername1 = "Restricted_Area1";
	_markername2 = "Restricted_Area2";
	//
	
	_marker = createMarker [_markername1, [(_pos select 0), (_pos select 1), 0]];
	_marker setMarkerShape "ELLIPSE";
	_marker setMarkerSize [200, 200];
	_marker setMarkerBrush "SOLID";
	_marker setMarkerColor "ColorWEST";
	//
	
	_marker2 = createMarker [_markername2, [(_pos select 0), (_pos select 1), 0]];
	_marker2 setMarkerColor "ColorBlack";
	_marker2 setMarkerType "mil_warning";
	_marker2 setMarkerShape "ICON";
	_marker2 setMarkerSize [1,1];
	_marker2 setMarkerText "Cop Controlled Area!";
	
	//End
	onMapSingleClick "";
	openMap [false, false];
	hint "You have placed your marker on the map!";
sleep 300;
	deleteMarker _marker;
	deleteMarker _marker2;
	hint "Your marker on the map has been removed!";
};

openMap [true, false];
onMapSingleClick "[_pos select 0, _pos select 1, _pos select 2] spawn marker";