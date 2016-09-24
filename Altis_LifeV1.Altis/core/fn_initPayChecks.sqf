#include "..\script_macros.hpp"
/*
	File: fn_initPayChecks.sqf
	Author: jmuirhead

*/



switch (playerSide) do
{
	case west:
	{
		switch(FETCH_CONST(life_coplevel)) do
		{
			case 0: {life_paycheck = life_paycheck + 0;};
			case 1: {life_paycheck = life_paycheck + 250;}; 
			case 2: {life_paycheck = life_paycheck + 500;}; 
			case 3: {life_paycheck = life_paycheck + 750;}; 
			case 4: {life_paycheck = life_paycheck + 1000;}; 
			case 5: {life_paycheck = life_paycheck + 1250;}; 
			case 6: {life_paycheck = life_paycheck + 1500;}; 
			case 7: {life_paycheck = life_paycheck + 1750;};
		};
		switch(FETCH_CONST(life_donorlevel)) do
		{
			case 0: {life_paycheck = life_paycheck + 0;}; 
			case 1: {life_paycheck = life_paycheck + 2000;};
			case 2: {life_paycheck = life_paycheck + 3000;}; 
			case 3: {life_paycheck = life_paycheck + 4000;}; 
			case 4: {life_paycheck = life_paycheck + 5000;}; 
			case 5: {life_paycheck = life_paycheck + 6000;}; 
		};
	};

	case independent:
	{
		switch(FETCH_CONST(life_mediclevel)) do
		{
			case 0: {life_paycheck = life_paycheck + 0;}; 
			case 1: {life_paycheck = life_paycheck + 1000;}; 
			case 2: {life_paycheck = life_paycheck + 1500;}; 
			case 3: {life_paycheck = life_paycheck + 2000;};
			case 4: {life_paycheck = life_paycheck + 2500;};
			case 5: {life_paycheck = life_paycheck + 3000;};
		};
		switch(FETCH_CONST(life_donorlevel)) do
		{
			case 0: {life_paycheck = life_paycheck + 0;}; 
			case 1: {life_paycheck = life_paycheck + 2000;};
			case 2: {life_paycheck = life_paycheck + 2500;}; 
			case 3: {life_paycheck = life_paycheck + 3000;}; 
			case 4: {life_paycheck = life_paycheck + 3500;}; 
			case 5: {life_paycheck = life_paycheck + 4000;}; 
		};
	};
	
	case civilian:
	{
		switch(FETCH_CONST(life_donorlevel)) do
		{
			case 0: {life_paycheck = life_paycheck + 0;}; 
			case 1: {life_paycheck = life_paycheck + 2000;};
			case 2: {life_paycheck = life_paycheck + 2500;}; 
			case 3: {life_paycheck = life_paycheck + 3000;}; 
			case 4: {life_paycheck = life_paycheck + 3500;}; 
			case 5: {life_paycheck = life_paycheck + 10000;};
		};
	};
};