("'nln_' in (configName _x)" configclasses (configFile >> "RscTitles")) apply {
  private _name = configName _x;
  if !(isnull (uiNamespace getVariable [_name,displayNull])) then {
    _name cutText ["", "PLAIN"];
  };
};
