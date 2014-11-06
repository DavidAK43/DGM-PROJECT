if (isDedicated) exitWith {};

{
	lbClear _x;
} forEach [
	IDC_DGM_LISTBOX_AVAILGROUPS, 
	IDC_DGM_LISTBOX_MEMBERS, 
	IDC_DGM_LISTBOX_CURGRP
];

if (count DGMGROUPS > 0) then {

	{
		private ["_index","_grp"];
		_grp = _x;
		if (!(isNull _grp) && {(groupID _x) != ""}) then {
			_index = lbAdd [IDC_DGM_LISTBOX_AVAILGROUPS, groupID _grp];
			lbSetData [IDC_DGM_LISTBOX_AVAILGROUPS, _index, groupID _grp];
		};
	} forEach DGMGROUPS;

	if (lbCurSel IDC_DGM_LISTBOX_AVAILGROUPS == -1) then {
		lbSetCurSel [IDC_DGM_LISTBOX_AVAILGROUPS, 0];
	};
	
	private ["_grp"];
	_grp = call compile (lbData [IDC_DGM_LISTBOX_AVAILGROUPS, lbCurSel IDC_DGM_LISTBOX_AVAILGROUPS]);
	{
		private ["_index","_unit"];
		_unit = _x;
		_index = lbAdd [IDC_DGM_LISTBOX_MEMBERS, name _unit];
		//lbSetData [IDC_DGM_LISTBOX_MEMBERS, _index, name _unit];
	} forEach (units _grp);
	
};

{
	private ["_index","_unit"];
	_unit = _x;
	_index = lbAdd [IDC_DGM_LISTBOX_CURGRP, name _unit];
	//lbSetData [IDC_DGM_LISTBOX_CURGRP, _index, name _unit];
} forEach (units (group player));

nil

	
