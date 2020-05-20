enableRadio false;
enableEnvironment false;

titleText ["","BLACK",0.01];

waitUntil {!isNull player && player == player};

sleep 9;

("cutRscIntro" call BIS_fnc_rscLayer) cutRsc ["RscLogoA","BLACK",0.01];
titleText ["","BLACK IN",2];
sleep 2;

sleep 1;
[
	[
        ["Welcome to unOFFICIAL Warlords!","align = 'center' shadow = '1' size = '1' font = 'PuristaBold'"],
	    ["","<br/>"],
	    ["Push and hold I to load tactical screen.","align = 'center' shadow = '1' size = '1'"]
	], (0.001 * safezoneW + safezoneX), (0.9 * safezoneH + safezoneY), true, "<t font='PuristaBold'>%1</t>", [], {false}, true
] spawn BIS_fnc_typeText2;
sleep 12;
titleText ["","BLACK OUT",2];
sleep 2;
("cutRscIntro" call BIS_fnc_rscLayer) cutFadeOut 0;
titleText ["","BLACK IN",2];

//// MISSION TIME \\\\
fnc_time = {
    private ["_hour","_minute","_second","_hours","_minutes","_seconds","_time"];
    _hour = (daytime - (daytime % 1));
    _minute = ((daytime % 1) * 60) - ((daytime % 1) * 60) % 1;
    _second = (((daytime % 1) * 3600) - ((daytime % 1) * 3600) % 1) - (_minute * 60);
    _hours = "";
    if (_hour < 10) then {_hours = "0"};
    _minutes = "";
    if (_minute < 10) then {_minutes = "0"};
    _seconds = "";
    if (_second < 10) then {_seconds = "0"};
    _time = format ["%1%2:%3%4:%5%6",_hours, _hour, _minutes, _minute, _seconds, _second];
    _time
};

// Intro text
private ["_getdate","_date","_time"];
_getdate = date;
_date = format ["%1:%2:%3", _getdate select 2, _getdate select 1, _getdate select 0];
_time = call fnc_time;

if (side player == west) then {
    [
	    [
		    ["NATO BASE","<t align = 'left' shadow = '1' size = '0.9' font='PuristaBold'>%1</t><br/>"],
            ["HOLD I TO FAST TRAVEL,","<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"],
            ["PURCHASE GEAR,","<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"],
            ["PURCHASE SOLDIERS,","<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"],
            ["PURCHASE VEHICLES,","<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"],
            ["AND MUCH MORE!","<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"],
            ["MISSION TIME: ","<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t>"],
            [_time,"<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t>",20]
		    
	    ], 1.20, .50 //X, Y: Higher number moves right , Higher number moves down
    ] spawn BIS_fnc_typeText;
} else {
    [
	    [
		    ["OPFOR BASE","<t align = 'left' shadow = '1' size = '0.9' font='PuristaBold'>%1</t><br/>"],
            ["HOLD I TO FAST TRAVEL,","<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"],
            ["PURCHASE GEAR,","<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"],
            ["PURCHASE SOLDIERS,","<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"],
            ["PURCHASE VEHICLES,","<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"],
            ["AND MUCH MORE!","<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"],
            ["MISSION TIME: ","<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t>"],
            [_time,"<t align = 'left' shadow = '1' size = '0.7' font='PuristaBold'>%1</t>",20]
	    ], 1.20, .50 //X, Y: Higher number moves right , Higher number moves down
    ] spawn BIS_fnc_typeText;
};

enableEnvironment true;
enableRadio true;

execVM "scripts\NRE_earplugs.sqf";