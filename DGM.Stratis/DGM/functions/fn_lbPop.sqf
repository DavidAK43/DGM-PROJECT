/*
	file: fn_lbPop.sqf
	author(s): Iceman77
	
	Description: 
		Populate the 3 list boxes with the appropriate data. 
		eg; Player's current group members, available groups, and selected group's members
	
	Parameters: 
		_this select 0: <Array> of numbers. 3 list box idcs.
		
	Usage:
		_nul = [ [ IDC_DGM_LISTBOX_AVAILGROUPS, IDC_DGM_LISTBOX_MEMBERS, IDC_DGM_LISTBOX_CURGRP ] ] call DGM_fnc_lbPop;

*/

private ["_listBoxArray","_listBoxGroups","_listBoxMembers","_listBoxPlayerGroupsMembers","_lbGroupsCurSel","_grp","_grpCountOld","_playerGroupOldCount"];

_listBoxArray 				= [_this, 0, [],[[]],[3]] call BIS_fnc_param;
_listBoxGroups			 	= [_listBoxArray, 0, -1,[-1]] call BIS_fnc_paramIn;
_listBoxMembers 				= [_listBoxArray, 1, -1,[-1]] call BIS_fnc_paramIn;
_listBoxPlayerGroupsMembers 	= [_listBoxArray, 2, -1,[-1]] call BIS_fnc_paramIn;
_lbGroupsCurSel 				= lbCurSel _listBoxGroups;

// --- Clear all 3 lbs
{
	lbClear _x;
} forEach _listBoxArray;

// --- Fill the "available groups" lb with all "assumed playable" groups. This is for playable Ai groups atm too, aslong as their ID is pre-set 
{
	if (side _x == side player) then {
		if (groupID _x != "") then {
			if ((leader _x) in playableUnits) then { 
				private ["_index","_grpID"];
				_grpID = groupID _x; 
				_index = lbAdd [ _listBoxGroups, _grpID + " - Leader: " + name (leader _x)];
				lbSetData [_listBoxGroups, _index, _grpID];
			};
		};
	};
} forEach allGroups;

// --- If an lb row is selected then fill the current group's members and selected group's members into the appropriate lb
if (_lbGroupsCurSel != -1) then { 

	call compile format ["_grp = %1;", lbData [_listBoxGroups, _lbGroupsCurSel]];
	
	{
		private ["_index"];
		_index = lbAdd [_listBoxMembers, (name _x)];
		//lbSetTooltip [_listBoxMembers, _forEachIndex, format ["KVD - %1:%2", _kills, _deaths]];
	} forEach (units _grp);
	
	{
		private ["_index"];
		_index = lbAdd [ _listBoxPlayerGroupsMembers, (name _x)];
	} forEach (units (group player));		
	
};

nil
