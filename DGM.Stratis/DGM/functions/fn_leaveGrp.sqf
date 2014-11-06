if (isDedicated) exitWith {};

private ["_oldGrp"];

_oldGrp = group player;

if (_oldGrp == grpNull) exitWith {
	hint "You are not in a group...";
};

[player] joinSilent grpNull;
publicVariable "_oldGrp";

if (count (units _oldGrp) == 0 && {(_oldGrp in DGMGROUPS)}) exitWith {
	DGMGROUPS deleteAt (DGMGROUPS find _oldGrp);
	publicVariable "DGMGROUPS";
	lbSetCurSel [IDC_DGM_LISTBOX_AVAILGROUPS, 999];
	hint "You have left the group";
	//_nul=call DGM_fnc_refresh;
	nil			
};

nil
