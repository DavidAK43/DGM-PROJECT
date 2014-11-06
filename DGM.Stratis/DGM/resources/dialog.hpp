#define IDD_DGM_DIALOG                  90900
#define IDC_DGM_LISTBOX_CURGRP 			100900
#define IDC_DGM_LISTBOX_AVAILGROUPS 	100901
#define IDC_DGM_LISTBOX_MEMBERS 		100902
#define IDC_DGM_EDITBOX_CREATEGROUP 	200900

class DGM_DIALOG 
{
    idd = IDD_DGM_DIALOG;
	controls[]=
	{
		DGM_BG_MAIN,
		DGM_TEXT_HEADER,
		DGM_LISTBOX_CURGRP,
		DGM_LISTBOX_AVAILGROUPS,
		DGM_LISTBOX_MEMBERS,
		DGM_TEXT_CURGRPHEADER,
		DGM_TEXT_MEMBERSHEADER,
		DGM_TEXT_AVAILGRPHEADER,
		DGM_BUTTON_LEAVEGRP,
		DGM_BUTTONJOINGRP,
		DGM_BUTTON_CREATEGRP,
		DGM_EDITBOX_CREATEGROUP,
		DGM_BUTTONPINGPLAYER,
		DGM_BUTTON_EXIT,
		DGM_ACTIVETEXT_REFRESH
	};

	// BACKGROUNDS
	class DGM_BG_MAIN: IGUIBack
	{
		x = 0.222877 * safezoneW + safezoneX;
		y = 0.206 * safezoneH + safezoneY;
		w = 0.556035 * safezoneW;
		h = 0.4816 * safezoneH;
	};
	
	// LIST BOXES
	class DGM_LISTBOX_CURGRP: RscListbox
	{
		idc = IDC_DGM_LISTBOX_CURGRP;
		x = 0.237463 * safezoneW + safezoneX;
		y = 0.262 * safezoneH + safezoneY;
		w = 0.160439 * safezoneW;
		h = 0.28 * safezoneH;
	};
	class DGM_LISTBOX_AVAILGROUPS: RscListbox
	{
		idc = IDC_DGM_LISTBOX_AVAILGROUPS;
		x = 0.411029 * safezoneW + safezoneX;
		y = 0.262 * safezoneH + safezoneY;
		w = 0.176484 * safezoneW;
		h = 0.28 * safezoneH;
		onLBSelChanged = "_nul=call DGM_fnc_refresh;";
	};
	class DGM_LISTBOX_MEMBERS: RscListbox
	{
		idc = IDC_DGM_LISTBOX_MEMBERS;
		x = 0.602098 * safezoneW + safezoneX;
		y = 0.262 * safezoneH + safezoneY;
		w = 0.160439 * safezoneW;
		h = 0.28 * safezoneH;
	};
	
	// TEXT
	class DGM_TEXT_HEADER: RscText
	{
		text = "Dynamic Group Menu";
		x = 0.222877 * safezoneW + safezoneX;
		y = 0.164 * safezoneH + safezoneY;
		w = 0.555702 * safezoneW;
		h = 0.0392 * safezoneH;
	};
	class DGM_TEXT_CURGRPHEADER: RscText
	{
		text = "Current Group";
		x = 0.237463 * safezoneW + safezoneX;
		y = 0.2312 * safezoneH + safezoneY;
		w = 0.160435 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class DGM_TEXT_MEMBERSHEADER: RscText
	{
		text = "Group Members";
		x = 0.602098 * safezoneW + safezoneX;
		y = 0.2312 * safezoneH + safezoneY;
		w = 0.160435 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class DGM_TEXT_AVAILGRPHEADER: RscText
	{
		text = "Groups";
		x = 0.411029 * safezoneW + safezoneX;
		y = 0.2312 * safezoneH + safezoneY;
		w = 0.176484 * safezoneW;
		h = 0.028 * safezoneH;
	};
	
	// BUTTONS
	class DGM_BUTTON_LEAVEGRP: RscButton
	{
		text = "Leave Group"; //--- ToDo: Localize;
		x = 0.237463 * safezoneW + safezoneX;
		y = 0.5476 * safezoneH + safezoneY;
		w = 0.160453 * safezoneW;
		h = 0.042 * safezoneH;
		action = "_nul=call DGM_fnc_leaveGrp;";
		toolTip = "Leave your current group";
	};
	class DGM_BUTTONJOINGRP: RscButton
	{
		text = "Join Group"; //--- ToDo: Localize;
		x = 0.411029 * safezoneW + safezoneX;
		y = 0.5476 * safezoneH + safezoneY;
		w = 0.17675 * safezoneW;
		h = 0.042 * safezoneH;
		action = "_nul=call DGM_fnc_joinGrp;";
		toolTip = "Join the selected group";
	};
	class DGM_BUTTON_CREATEGRP: RscButton
	{
		text = "Create Group"; //--- ToDo: Localize;
		x = 0.411029 * safezoneW + safezoneX;
		y = 0.598 * safezoneH + safezoneY;
		w = 0.176484 * safezoneW;
		h = 0.042 * safezoneH;
		action = "[ctrlText ((finddisplay IDD_DGM_DIALOG) displayctrl IDC_DGM_EDITBOX_CREATEGROUP)] call DGM_fnc_createGrp";
		toolTip = "Create a group with custom name";
	};
	class DGM_BUTTONPINGPLAYER: RscButton
	{
		text = "Ping Player"; //--- ToDo: Localize;
		x = 0.602098 * safezoneW + safezoneX;
		y = 0.5476 * safezoneH + safezoneY;
		w = 0.160439 * safezoneW;
		h = 0.042 * safezoneH;
		action = "hint 'Feature Not Implemented (Yet)'"; //--- ToDo: Write Function
		toolTip = "Ping selected player with a message";
	};
	class DGM_BUTTON_EXIT: RscButton
	{
		text = "X"; //--- ToDo: Localize;
		colorBackground[] = {1,1,1,0};
		x = 0.727532 * safezoneW + safezoneX;
		y = 0.164 * safezoneH + safezoneY;
		w = 0.0510489 * safezoneW;
		h = 0.0392 * safezoneH;
		action = "closeDialog 0;";
		toolTip = "Exit the group menu";
	};
	
	// ACTIVE TEXT
	class DGM_ACTIVETEXT_REFRESH: RscActiveText
	{
		text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_toolbox_synchro_ca.paa"; //--- ToDo: Localize;
		colorBackground[] = {1,1,1,0};
		x = 0.215 * safezoneW + safezoneX;
		y = 0.164 * safezoneH + safezoneY;
		w = 0.0392 * safezoneW;
		h = 0.0392 * safezoneH;
		action = "_nul=call DGM_fnc_refresh;";
		toolTip = "Refresh the group menu";
	};
	
	// Edit Boxes
	class DGM_EDITBOX_CREATEGROUP: RscEdit
	{
		idc = IDC_DGM_EDITBOX_CREATEGROUP;
		x = 0.411029 * safezoneW + safezoneX;
		y = 0.6484 * safezoneH + safezoneY;
		w = 0.176484 * safezoneW;
		h = 0.028 * safezoneH;
	};
};