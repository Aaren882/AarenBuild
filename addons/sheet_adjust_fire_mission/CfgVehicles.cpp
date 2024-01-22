
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
            class adjust_fire_mission: main
            {
                displayName = "$STR_nln_adjust_fire_mission_interactions_selfAction";
                condition = "!nln_adjust_fire_mission_disable";
                statement = "call nln_adjust_fire_mission_fnc_openMenu;";
                icon = "\x\nln\addons\sheet_adjust_fire_mission\data\ui\adjust_fire_mission.paa";

                class edit: edit_main
                {
                    condition = "!nln_adjust_fire_mission_disable";
                    statement = "call nln_adjust_fire_mission_fnc_openMenu;";
                };

                class show: show_main
                {
                    condition = "!nln_adjust_fire_mission_disable && (isNull (uiNamespace getVariable ['nln_adjust_fire_mission', displayNull]))";
                    statement = "call nln_adjust_fire_mission_fnc_openBackground;";
                };

                class hide: hide_main
                {
                    condition = "!nln_adjust_fire_mission_disable && !(isNull (uiNamespace getVariable ['nln_adjust_fire_mission', displayNull]))";
                    statement = "call nln_adjust_fire_mission_fnc_closeBackground;";
                };
            };
        };
    };
};
