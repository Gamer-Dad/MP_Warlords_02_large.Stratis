/* 
RSC DIALOG
Author: cb65
*/

class RscLogoA
{
	idd = -1;
	duration = 1e+1000;
	fadeIn = 0;
	fadeOut = 0;
	
	controls[] = {RsclogoPicture};

    class RsclogoPicture
    {
	    idc = -1;
	    type = 0;
	    style = 0x30;
	    x = SafeZoneX + SafeZoneW/2 - w512/2;
	    y = SafeZoneY + SafeZoneH/2 - h512/2;
	    w = w512; 
        h = h512;
	    font = "PuristaMedium";
	    sizeEx = 0;
	    colorBackground[] = {0,0,0,0};
	    colorText[] = {1,1,1,1};
	    text = "images\warlords_logo.paa";
	};
};

class RscLogoB
{
	idd = -1;
	duration = 1e+1000;
	fadeIn = 0;
	fadeOut = 0;
	
	controls[] = {RsclogoPicture};

    class RsclogoPicture
    {
	    idc = -1;
	    type = 0;
	    style = 0x30;
	    x = SafeZoneX + SafeZoneW/2 - w512/2;
	    y = SafeZoneY + SafeZoneH/2 - h256/2;
	    w = w512; 
        h = h256;
	    font = "PuristaMedium";
	    sizeEx = 0;
	    colorBackground[] = {0,0,0,0};
	    colorText[] = {1,1,1,1};
	    text = "logo2.paa";
	};
};