/*
	file: fn_leaveGrp.sqf
	author(s): Iceman77
	
	Description: 
		Have the player leave his current group
	
	Parameters: 
		none
		
	Usage:
		action = "_nul=call DGM_fnc_leaveGrp;";

*/

private ["_oldGroup"];

// --- Store the player's group he's about to leave
_oldGrp = groupID (group player);

// --- Have the player leave the group, set the null group's groupID to ""
[player] joinSilent grpNull;
(group player) setGroupId [""];

// --- Broadcast the player's old group (??)
publicVariable str _oldGrp;

// -- Trigger onLbSelected event 
lbSetCurSel [IDC_DGM_LISTBOX_AVAILGROUPS, 0];
player sideChat format ["You have left group %1", _oldGrp];

nil
