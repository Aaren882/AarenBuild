
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
            class medevac_nineliner: main
            {
                displayName = "$STR_nln_medevac_nineliner_interactions_selfAction";
                condition = "!nln_medevac_nineliner_disable";
                statement = "call nln_medevac_nineliner_fnc_openMenu;";
                icon = "\x\nln\addons\sheet_medevac_nineliner\data\ui\medevac_nineliner.paa";

                class edit: edit_main
                {
                    condition = "!nln_medevac_nineliner_disable";
                    statement = "call nln_medevac_nineliner_fnc_openMenu;";
                };

                class show: show_main
                {
                    condition = "!nln_medevac_nineliner_disable && (isNull (uiNamespace getVariable ['nln_medevac_nineliner', displayNull]))";
                    statement = "call nln_medevac_nineliner_fnc_openBackground;";
                };

                class hide: hide_main
                {
                    condition = "!nln_medevac_nineliner_disable && !(isNull (uiNamespace getVariable ['nln_medevac_nineliner', displayNull]))";
                    statement = "call nln_medevac_nineliner_fnc_closeBackground;";
                };
            };
        };
    };
};
