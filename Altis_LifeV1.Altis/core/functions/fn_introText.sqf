/*
  File: fn_introText.sqf
  Author: Travis Boi

  Description:
  Intro Text
*/


[] spawn {
sleep 5;
//playSound "IntroMusic"; // Remove the slashes before if you want a song to be played with text
//sleep 5; // Remove the slashes if you have a intro-song
[
	[
		["Good Day And Welcome","align = 'center' shadow = '1' size = '0.5' font='PuristaBold'","#01B8FF"],
		["We Hope You enjoy your visit!","align = 'center' shadow = '1' size = '0.5'","#FFFFFF"],
		[" "," align = 'center' shadow = '1' size = '0.5'","#01B8FF"]
	]
] spawn BIS_fnc_typeText2;

[parseText format [ "<t align='center' size='1.2'><t font='PuristaBold' size='1.6'>%1</t></t>","<t color='#01B8FF'>Good day and welcome to: Reaper Gaming</t>"],nil,nil,nil,nil,0] spawn BIS_fnc_textTiles;
sleep 7;


		[parseText format [ "<t align='center' size='1.2'><t font='PuristaBold' size='1.6'>%1</t></t>","<t color='#01B8FF'>We hope you have a great experience</t> "],nil,nil,nil,nil,0

] spawn BIS_fnc_textTiles;
sleep 7;


		[parseText format [ "<t align='center' size='1.2'><t font='PuristaBold' size='1.6'>%1</t></t>","<t color='#01B8FF'>Hosted by www.forbestgaming.com</t> "],nil,nil,nil,nil,0

] spawn BIS_fnc_textTiles;
sleep 7;


		[parseText format [ "<t align='center' size='1.2'><t font='PuristaBold' size='1.6'>%1</t></t>","<t color='#01B8FF'>Rules:</t> Remember to read our rules before playing"],nil,nil,nil,nil,0

] spawn BIS_fnc_textTiles;
sleep 7;


		[parseText format [ "<t align='center' size='1.2'><t font='PuristaBold' size='1.6'>%1</t></t>","<t color='#01B8FF'>Have A Problem?:</t> Visit The Staff On TS3: 192.99.36.79"],nil,nil,nil,nil,0

] spawn BIS_fnc_textTiles;
};