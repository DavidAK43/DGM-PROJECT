/*
	file: fn_uiInit.sqf
	author(s): Iceman77
	
	Description: 
		Create the dialog and populate list boxes, set the current selection
	
	Parameters: 
		none
		
	Usage:
		this addAction ["Dynamic Group Menu", "_nul=call DGM_fnc_uiInit"];

*/

// --- Create the dialog
_DGM = createDialog "DGM_DIALOG";
waitUntil {!(isNull (findDisplay IDD_DGM_DIALOG))};

// --- Populate the lbs
_nul = [ [ IDC_DGM_LISTBOX_AVAILGROUPS, IDC_DGM_LISTBOX_MEMBERS, IDC_DGM_LISTBOX_CURGRP ] ] call DGM_fnc_lbPop;
lbSetCurSel [IDC_DGM_LISTBOX_AVAILGROUPS, 0];

nil


