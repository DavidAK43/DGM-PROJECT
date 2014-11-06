if (isDedicated) exitWith {};

private ["_input","_compStr","_grpName","_oldGrp","_nameTaken"];

_input = [_this, 0, "",[""]] call BIS_fnc_param;
_compStr = [_input] call BIS_fnc_filterString;
_oldGrp = group player;
_nameTaken = false;

if (_input == "") exitWith {
	hint "Input a group name first";
	nil
};

{
	if (_compStr == groupID _x) exitWith {
		_nameTaken = true;
	};
} forEach DGMGROUPS;

if (_nameTaken) exitWith {
	hint "That group name is taken. Input another.";
	nil
};

call compile format [
   "
    %1 = createGroup ( side player );
	%1 setGroupID [_compStr];		
	[ player ] joinSilent %1;	
	[[(group player),[groupID (group player)]],'setGroupId',true,true] call BIS_fnc_mp;
	DGMGROUPS pushBack %1;
	publicVariable 'DGMGROUPS';
	publicVariable '(group player)';
   ", 
 _compStr
];

if (count (units _oldGrp) == 0) then {

	if (_oldGrp in DGMGROUPS) exitWith { 
		DGMGROUPS deleteAt (DGMGROUPS find _oldGrp);
		publicVariable "DGMGROUPS";
		
		_oldGrp = grpNull;
		publicVariable "_oldGrp";
	};
	
};

_nul=call DGM_fnc_refresh;
lbSetCurSel [IDC_DGM_LISTBOX_AVAILGROUPS, 999];

nil

