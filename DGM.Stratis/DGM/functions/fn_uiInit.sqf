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
if (isDedicated) exitWith {};

_DGM = createDialog "DGM_DIALOG";

waitUntil {!(isNull (findDisplay IDD_DGM_DIALOG))};
_nul=call DGM_fnc_refresh;

nil

