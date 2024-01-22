
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
            class gunship_cff: main
            {
                displayName = "$STR_nln_gunship_call_for_fire_interactions_selfAction";
                condition = "!nln_gunship_cff_disable";
                statement = "call nln_gunship_cff_fnc_openMenu;";
                icon = "\x\nln\addons\sheet_gunship_cff\data\ui\gunship_cff.paa";

                class edit: edit_main
                {
                    condition = "!nln_gunship_cff_disable";
                    statement = "call nln_gunship_cff_fnc_openMenu;";
                };

                class show: show_main
                {
                    condition = "!nln_gunship_cff_disable && (isNull (uiNamespace getVariable ['nln_gunship_cff', displayNull]))";
                    statement = "call nln_gunship_cff_fnc_openBackground;";
                };

                class hide: hide_main
                {
                    condition = "!nln_gunship_cff_disable && !(isNull (uiNamespace getVariable ['nln_gunship_cff', displayNull]))";
                    statement = "call nln_gunship_cff_fnc_closeBackground;";
                };
            };
        };
    };
};
