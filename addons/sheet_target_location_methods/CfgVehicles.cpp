
class Man;
class CAManBase : Man {
    class ACE_SelfActions {
        class nln_sheets {
            class main
            {
                class edit_main;
                class show_main;
                class hide_main;
            };
            class target_location_methods: main {
                displayName = "$STR_nln_target_location_methods_interactions_selfAction";
                condition = "!nln_target_location_methods_disable";
                statement = "call nln_target_location_methods_fnc_openMenu;";
                icon = "\x\nln\addons\sheet_target_location_methods\data\ui\target_location_methods.paa";

                class edit: edit_main {
                    condition = "!nln_target_location_methods_disable";
                    statement = "call nln_target_location_methods_fnc_openMenu;";
                };

                class show: show_main {
                    condition = "!nln_target_location_methods_disable && (isNull (uiNamespace getVariable ['nln_target_location_methods', displayNull]))";
                    statement = "call nln_target_location_methods_fnc_openBackground;";
                };

                class hide: hide_main {
                    condition = "!nln_target_location_methods_disable && !(isNull (uiNamespace getVariable ['nln_target_location_methods', displayNull]))";
                    statement = "call nln_target_location_methods_fnc_closeBackground;";
                };
            };
        };
    };
};
