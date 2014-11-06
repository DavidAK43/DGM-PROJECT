if (isDedicated) exitWith {};

lbSetCurSel [IDC_DGM_LISTBOX_AVAILGROUPS, lbCurSel IDC_DGM_LISTBOX_AVAILGROUPS];

if (lbCurSel IDC_DGM_LISTBOX_AVAILGROUPS == -1) exitWith {
	hint "Select a group to join first";
};

private ["_input","_compStr","_oldGrp"];

_input = (lbData [IDC_DGM_LISTBOX_AVAILGROUPS, lbCurSel IDC_DGM_LISTBOX_AVAILGROUPS]);
_compStr = [_input] call BIS_fnc_filterString;
if (str (group player) == _compStr) exitWith {hint "You are already in this group";};
 
_oldGrp = group player;

call compile format [
   "
	if ((group player) != %1) then {
		[ player ] joinSilent %1;	
		publicVariable '(group player)';
	} else {
		hint 'You are already in group %1';
	};
   ", 
 _compStr
];

publicVariable "_oldGrp";
_nul=call DGM_fnc_refresh;

nil

