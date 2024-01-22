
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
            class cas_nineliner: main
            {
                displayName = "$STR_nln_cas_nineliner_interactions_selfAction";
                condition = "!nln_cas_nineliner_disable";
                statement = "call nln_cas_nineliner_fnc_openMenu;";
                icon = "\x\nln\addons\sheet_cas_nineliner\data\ui\cas_nineliner.paa";

                class edit: edit_main
                {
                    condition = "!nln_cas_nineliner_disable";
                    statement = "call nln_cas_nineliner_fnc_openMenu;";
                };

                class show: show_main
                {
                    condition = "!nln_cas_nineliner_disable && (isNull (uiNamespace getVariable ['nln_cas_nineliner', displayNull]))";
                    statement = "call nln_cas_nineliner_fnc_openBackground;";
                };

                class hide: hide_main
                {
                    condition = "!nln_cas_nineliner_disable && !(isNull (uiNamespace getVariable ['nln_cas_nineliner', displayNull]))";
                    statement = "call nln_cas_nineliner_fnc_closeBackground;";
                };
            };
        };
    };
};
