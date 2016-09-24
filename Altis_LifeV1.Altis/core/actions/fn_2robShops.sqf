/*
	file: fn_robShops.sqf
    Author: Stevo
    Description: Executes the rob shop action!
	Thanks: MrKraken (for the barebones tutorial), Ciaran (for assisting with syntax errors and script development) & Erdem Cankiran (for showing how to implement the user of markers)
*/ 
private["_shop","_robber","_loot","_dist","_rip","_marker","_pos","_ui","_progress","_pgText","_cP","_chance","_temp","_alarm","_shopName","_pause"];
//The object that has the action attached to it is _this.
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; 

//The player.
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;

//Setting a delay to be used later (seconds).
_pause = 300;

//Identifying the associated marker with the shop.
_marker = switch (_shop) do {
  case station_1: {"station_m_1"};
  case station_2: {"station_m_2"};
  case station_3: {"station_m_3"};
  case station_4: {"station_m_4"};
  case station_5: {"station_m_5"};
  case station_6: {"station_m_6"};
  case station_7: {"station_m_7"};
  case station_8: {"station_m_8"};
  case station_9: {"station_m_9"};
  case station_10: {"station_m_10"};
  case station_11: {"station_m_11"};
  case station_12: {"station_m_12"};
  case station_13: {"station_m_13"};
  case station_14: {"station_m_14"};
  case station_15: {"station_m_15"};
  case station_16: {"station_m_16"};
  case station_17: {"station_m_17"};
  case station_18: {"station_m_18"};
  case station_19: {"station_m_19"};
  case station_20: {"station_m_20"};
  case gs_1: {"Gen_Store_1"};
  case gs_2: {"Gen_Store_2"};
  case gs_3: {"Gen_Store_3"};
  case gs_4: {"Gen_Store_4"};
};

//Giving the shop a friendly name.
_shopName = switch (_shop) do {
  case station_1: {"Kavala North Station"};
  case station_2: {"Kavala Service Station"};
  case station_3: {"MSR Service Station 1"};
  case station_4: {"Topolia Service Station"};
  case station_5: {"Agios Dionysios Station"};
  case station_6: {"Lakka Service Station"};
  case station_7: {"Airport North Station"};
  case station_8: {"MSR Intersection Station"};
  case station_9: {"Checkpoint South Station"};
  case station_10: {"MSR Service Station 2"};
  case station_11: {"Chalkeia Service Station"};
  case station_12: {"Selakano Service Station"};
  case station_13: {"Paros Station"};
  case station_14: {"Ioannina Station"};
  case station_15: {"Sofia Station"};
  case station_16: {"Zaros Station"};
  case station_17: {"Neochori Service Station"};
  case station_18: {"Kavala South Station"};
  case station_19: {"Syrta Station"};
  case station_20: {"Athira Service Station"};
  case gs_1: {"Kavala General Store"};
  case gs_2: {"Athira General Store"};
  case gs_3: {"Pygros General Store"};
  case gs_4: {"Sofia General Store"};
};	

if (isNil "_marker") exitWith {};
_pos = getMarkerPos _marker;

/* First-Run Checks */
_loot = _shop getVariable ["_funds",1000];
_rip = _shop getVariable "_status";
if (isNil "_loot") then {	
  	_loot = 1000 + round(random 9000);
	_shop setVariable ["_funds",_loot,true];
};
if (isNil "_rip") then {
  _rip = false;
  _shop setVariable ["_status",_rip,true];
};

_loot = _shop getVariable ["_funds",1000];
_rip = _shop getVariable "_status";

/* Initiation Checks */
if (_loot == 0) exitWith {hint "There isn't any money in this shop!"};
if (vehicle player != _robber) exitWith {hint "You need to exit your Vehicle!"};
if (currentWeapon _robber == "") exitWith {hint "Come at me, bro!"};
if ((west countSide playableUnits) < 1) exitWith {hint "There aren't any cops online!"};
if (_rip) exitWith {hint "A robbery is already in progress!"};
if !(alive _robber) exitWith {};

/* Robbery Action */
_rip = true; 

//Robbery in Progress
_shop setVariable ["_status",_rip,true];
_marker setMarkerColor "ColorRed";

//Sets up the Progress Bar
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2...  (1%1)","%",(localize "STR_pAct_RobProgress")];
_progress progressSetPosition 0.01;
_cP = 0.01;
_alarm = false;
_rip = _shop getVariable "_status";

if (_rip) then {
  while{true} do {
    if (_cP >= 1) exitWith {};
    sleep 8;
    _cP = _cP + 0.01;
    _progress progressSetPosition _cP;
    _pgText ctrlSetText format["%3...  (%2%1)","%",round(_cP * 100),(localize "STR_pAct_RobProgress")];
    _dist = _robber distance _shop;
    if !(_dist < 11) exitWith {};
    if !(alive _robber) exitWith {};
    
    //Randomises the alarm at any point, to trigger once
    if !(_alarm) then {
      //Randomises the chance with random integer and player distance from shop NPC / register
      _chance = random(9900);
      _chance = _chance + (_dist * 10);
      //Triggering the alarm + adding player to wanted system
      if (_chance > 9800) then {
        hint "The cashier hit the silent alarm, the police have been alerted of your actions!";
        [[1,format["ALARM! - There is a robbery under way at %1!", _shopName]], "life_fnc_broadcast",west,false] spawn life_fnc_MP;
        [[getPlayerUID _robber,name _robber,"211"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;
        _alarm = true;
      };
    };
  };
  
  //Exit client script checks
  If !(alive _robber) exitWith {
    _rip = false;
    _shop setVariable ["_status",_rip,true];
    _marker setMarkerColor "ColorGreen";
  };
  If (_robber distance _shop > 10) exitWith {
    _rip = false;
    _shop setVariable ["_status",_rip,true];
    _marker setMarkerColor "ColorGreen";
    hint "You ran too far away!";
    5 cutText ["","PLAIN"];
  };
  
  //Removes progress bar
  5 cutText ["","PLAIN"];
  
  //Exit code
  titleText[format["You have stolen %1 from the cash register!",[_loot] call life_fnc_numberText],"PLAIN"];
  [[1,format["Somebody just got away with a robbery at %1!", _shopName]], "life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
  _loot = _shop getVariable ["_funds",1000];
  life_cash = life_cash + _loot;
  _loot = 0;
  _shop setVariable ["_funds",_loot,true];
  _rip = false;
  _shop setVariable ["_status",_rip,true];
  life_use_atm = false;
  hint "Your ATM use has been disabled for 5 minutes!";
  //Reset script for shops (global)
  [[[_shop,_marker,_pause],"core\functions\fn_robShopReset.sqf"],"BIS_fnc_execVM",false,false] call bis_fnc_MP;
  
  //Client-side reset
  sleep _pause;
  hint "You may now use the ATMs again.";
  life_use_atm = true;
  _loot = _shop getVariable ["_funds",1000];};