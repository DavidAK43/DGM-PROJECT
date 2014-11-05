#define Color75 "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.75
#define Color50 "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.50

class IGUIBack
{
	idc = -1;
	access = 0;
	background = 1;
	type = 0;
	style = 0;
	colorBackground[] = {0,0,0,0.5};
	colorShadow[] = {0,0,0,0.5};
	colorText[] = {1,1,1,0.5};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0;
	w = 0;
	shadow = 1;
	font = "puristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	moving = 1;
};

class RscPicture
{
	idc = -1;
	access = 0;
	type = 0;
	style = 0x30 + 0x800;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "puristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0)";
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};

class RscButton
{
	idc = -1;
	access = 0;
	type = 1;
	style = 0x02;
	text = "";
	colorText[] = {1,1,1,0.75};
	colorDisabled[] = {1,1,1,0.1};
	colorBackground[] = {Color75};
	colorBackgroundDisabled[] = {0.5,0.5,0.5,0.5};
	colorBackgroundActive[] = {Color50};
	colorFocused[] = {Color75};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	shadow = 2;
	font = "puristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75)";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0.001;
	offsetPressedY = 0.001;
	borderSize = 1;
	moving = 1;
};

class RscText
{
	idc = -1;
	access = 0;
	type = 0;
	style = 0x02;
	colorBackground[] = {Color75};
	colorText[] = {1,1,1,0.8};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
    h = 0;
	w = 0;
	shadow = 2;
	font = "puristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	moving = 1;	  
};

class RscProgress 
{ 
	idc = -1;
	type = 8; 
	style = 0; 
	colorFrame[] = {0,0,0,0}; 
	colorBar[] = {1,1,1,1};
	texture = "#(argb,8,8,3)color(1,1,1,1)";
	shadow = 0;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
}; 	

class RscListBox
{ 
	idc = -1;
	type = 5;
	style = 0x10;
	font = "puristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75)";
	rowHeight=0.025;
	lineSpacing = 1;
	idcRight = -1;
	idcLeft = -1;
	drawSideArrows = 1;
	columns[] = {0.937500,0.968750,1.000000,0.7};
	colorText[] = {1,1,1,0.7};
	colorScrollBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
	colorSelect[] = {0.937500,0.968750,1.000000,0.7};
	colorSelect2[] = {0.937500,0.968750,1.000000,0.7};
	colorSelectBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
	colorSelectBackground2[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
	colorBackground[] = {1,1,1,0.05};
	maxHistoryDelay = 1.0;
	soundSelect[] = {"",0.1,1};
	period = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	shadow = 0;
	colorDisabled[] = {1, 1, 1, 0.6};
	
	class listScrollBar
	{
		color[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
		colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
	    colorDisabled[] = {1, 1, 1, 1};
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
        arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
        border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
        thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
        soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
		shadow = 1;
		width = 0.021;
	};	
};	

class RscEdit
{
	idc = -1;
    type = 2;
	style = 0x10;
	font = "PuristaLight";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75)";
	rowHeight=0.015;
	lineSpacing = 0.5;
	idcRight = -1;
	idcLeft = -1;
	drawSideArrows = 1;
	columns[] = {0.937500,0.968750,1.000000,0.7};
	text = "";
	colorText[] = {1,1,1,0.9};
	colorScrollBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
	colorSelect[] = {0.937500,0.968750,1.000000,0.7};
	colorSelect2[] = {0.937500,0.968750,1.000000,0.7};
	colorSelection[] = {0.937500,0.968750,1.000000,0.7};
	colorSelectBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
	colorSelectBackground2[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
	maxHistoryDelay = 1.0;
	soundSelect[] = {"",0.1,1};
	period = 1;
	autoComplete = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	shadow = 0;
	colorDisabled[] = {1, 1, 1, 0.6};
	
	class ScrollBar
	{
		color[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
		colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
	    colorDisabled[] = {1, 1, 1, 1};
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
        arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
        border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
        thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
        soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
		shadow = 1;
		width = 0.021;
	};	
};

class RscActiveText 
{
    idc = -1;
	type = 11;
	style = 0x30 + 0x800;
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.035;
	font = "PuristaMedium";
	shadow = 2;
	text = "";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	color[] = {1,1,1,1};
	colorText[] = {1,1,1,1};
	colorActive[] = {Color75};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
    soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
    soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
    soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
};