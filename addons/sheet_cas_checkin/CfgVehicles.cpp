
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
            class cas_checkin: main
            {
                displayName = "$STR_nln_cas_checkin_interactions_selfAction";
                condition = "!nln_cas_checkin_disable";
                statement = "call nln_cas_checkin_fnc_openMenu;";
                icon = "\x\nln\addons\sheet_cas_checkin\data\ui\cas_check_in.paa";

                class edit: edit_main
                {
                    condition = "!nln_cas_checkin_disable";
                    statement = "call nln_cas_checkin_fnc_openMenu;";
                };

                class show: show_main
                {
                    condition = "!nln_cas_checkin_disable && (isNull (uiNamespace getVariable ['nln_cas_checkin', displayNull]))";
                    statement = "call nln_cas_checkin_fnc_openBackground;";
                };

                class hide: hide_main
                {
                    condition = "!nln_cas_checkin_disable && !(isNull (uiNamespace getVariable ['nln_cas_checkin', displayNull]))";
                    statement = "call nln_cas_checkin_fnc_closeBackground;";
                };
            };
        };
    };
};
