
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
            class notepad: main {
                displayName = "$STR_nln_notepad_interactions_selfAction";
                condition = "!nln_notepad_disable";
                statement = "call nln_notepad_fnc_openMenu;";
                icon = "\x\nln\addons\sheet_notepad\data\ui\notepad.paa";

                class edit: edit_main {
                    condition = "!nln_notepad_disable";
                    statement = "call nln_notepad_fnc_openMenu;";
                };

                class show: show_main {
                    condition = "!nln_notepad_disable && (isNull (uiNamespace getVariable ['nln_notepad', displayNull]))";
                    statement = "call nln_notepad_fnc_openBackground;";
                };

                class hide: hide_main {
                    condition = "!nln_notepad_disable && !(isNull (uiNamespace getVariable ['nln_notepad', displayNull]))";
                    statement = "call nln_notepad_fnc_closeBackground;";
                };
            };
        };
    };
};
