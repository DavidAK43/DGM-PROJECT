/*
	file: fn_joinGrp.sqf
	author(s): Iceman77
	
	Description: 
		Have the player join the selected group 
	
	Parameters: 
		_this select 0:<Array> Of numbers - lb Idcs
		
	Usage:
		action = "[ [IDC_DGM_LISTBOX_AVAILGROUPS, IDC_DGM_LISTBOX_MEMBERS, IDC_DGM_LISTBOX_CURGRP ] ] call DGM_fnc_joinGrp;";

*/

private ["_listBoxArray","_listBoxGroups","_listBoxMembers","_lbGroupsCurSel","_grp","_oldGrp"];

_oldGrp 						= group player;
_listBoxArray					= [_this, 0, [],[[]],[3]] call BIS_fnc_param;
_listBoxGroups 				= [_listBoxArray, 0, -1,[-1]] call BIS_fnc_paramIn;
_listBoxMembers 				= [_listBoxArray, 1, -1,[-1]] call BIS_fnc_paramIn;
_listBoxPlayerGroupsMembers 	= [_listBoxArray, 2, -1,[-1]] call BIS_fnc_paramIn;
_lbGroupsCurSel 				= lbCurSel _listBoxGroups;

// --- If the player hasn't even selected a group, then exit and notify the player
if (_lbGroupsCurSel == -1) exitWith {
	player sideChat "You have no group selected. Please select a group before clicking join.";
	nil
};

// --- Have the player join the selected group if he's not already in it
call compile format [
	"
		_grp = %1;
		if ((group player) != _grp) then {
			[player] joinSilent _grp;
			player sideChat format ['You joined %1 group', _grp];
		} else {
			player sideChat format ['You are already in %1 group', _grp];
		};
			
	",
	
	lbData [_listBoxGroups, _lbGroupsCurSel]	
];

// --- broadcast the updated group (??)
publicVariable str _grp;

// --- If The player's old group has no units, then delete it else just manually populate the lb 
if (count (units _oldGrp) == 0) then {
	_oldGrp = grpNull;
	publicVariable str _oldGrp;
	lbSetCurSel [_listBoxGroups, _lbGroupsCurSel];
} else {
	_nul = [ [ _listBoxGroups, _listBoxMembers, _listBoxPlayerGroupsMembers ] ] call DGM_fnc_lbPop;
};

nil
