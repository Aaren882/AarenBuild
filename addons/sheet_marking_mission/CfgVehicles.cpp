
class Man;
class CAManBase : Man
{
    class ACE_SelfActions
    {
        class nln_sheets
        {
            class main
            {
                class edit_main;
                class show_main;
                class hide_main;
            };
            class marking_mission: main
            {
                displayName = "$STR_nln_marking_mission_interactions_selfAction";
                condition = "!nln_marking_mission_disable";
                statement = "call nln_marking_mission_fnc_openMenu;";
                icon = "\x\nln\addons\sheet_marking_mission\data\ui\marking_mission.paa";

                class edit: edit_main
                {
                    condition = "!nln_marking_mission_disable";
                    statement = "call nln_marking_mission_fnc_openMenu;";
                };

                class show: show_main
                {
                    condition = "!nln_marking_mission_disable && (isNull (uiNamespace getVariable ['nln_marking_mission', displayNull]))";
                    statement = "call nln_marking_mission_fnc_openBackground;";
                };

                class hide: hide_main
                {
                    condition = "!nln_marking_mission_disable && !(isNull (uiNamespace getVariable ['nln_marking_mission', displayNull]))";
                    statement = "call nln_marking_mission_fnc_closeBackground;";
                };
            };
        };
    };
};
