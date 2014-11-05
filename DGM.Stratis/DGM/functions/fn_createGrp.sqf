/*
	file: fn_createGrp.sqf
	author(s): Iceman77
	
	Description: 
		Create the passed group (string - editbox) and have the player join it 
	
	Parameters: 
		_this select 0:<String> - Edit Box text
		
	Usage:
		action = "[ctrlText ((finddisplay IDD_DGM_DIALOG) displayctrl IDC_DGM_EDITBOX_CREATEGROUP)] call DGM_fnc_createGrp";

*/

private ["_oldGrp","_editBoxText"];

_oldGrp = group player;
_editBoxText = [_this, 0, "", [""]] call BIS_fnc_param;
_editBoxText = [_editBoxText] call BIS_fnc_filterString;
_nameTaken = false;

// --- If after string filtering, the name is already taken then exit and notify the player that the group is taken
{
	if (_editBoxText == groupID _x) exitWith {
		_nameTaken = true;
	};
} forEach allGroups;

if (_nameTaken) exitWith {
	player sideChat "There's already a group with that name. Input a different name."; 
	nil
};

// --- If the player has entered no name then exit and notify the player that he needs to enter a name first
if (_editBoxText == "") exitWith {
	player sideChat "You have to input a name before you can create a group";
	nil
};

// --- If we make it here, then create the group and have the player join it
call compile format ["
	%1 = createGroup (side Player);
	[player] joinSilent %1;
	%1 setGroupId [_editBoxText];
	player sideChat format ['You have created a group named %1', %1]
  ", 
_editBoxtext
];

// --- Broadcast both of the updated groups (??)
{
	publicVariable str _x;
} forEach [(group player), _oldGrp];

// --- Shitty WorkAround - 2x setCurSel
lbSetCurSel [IDC_DGM_LISTBOX_AVAILGROUPS, 999];// 1x trigger lbpop - index will be second to last now
lbSetCurSel [IDC_DGM_LISTBOX_AVAILGROUPS, 999];// 2x - trigger lbPop again.. Set current selection to very last 

nil

