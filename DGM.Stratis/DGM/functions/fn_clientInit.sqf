/*
	file: fn_clientInit.sqf
	author(s): Iceman77
	
	Description: 
		Store idcs into local global variables
		Set the player's group
	
	Parameters: 
		none
		
	Usage:
		postInit=1;

*/

if (isDedicated) exitWith {};
waitUntil {!(isNull player)};

IDD_DGM_DIALOG      			 =  90900;
IDC_DGM_LISTBOX_CURGRP 		 =	100900;
IDC_DGM_LISTBOX_AVAILGROUPS 	 =	100901;
IDC_DGM_LISTBOX_MEMBERS 		 =	100902;
IDC_DGM_EDITBOX_CREATEGROUP 	 =  200900;

nil
