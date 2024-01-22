
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
            class fire_for_effect: main
            {
                displayName = "$STR_nln_fire_for_effect_interactions_selfAction";
                condition = "!nln_fire_for_effect_disable";
                statement = "call nln_fire_for_effect_fnc_openMenu;";
                icon = "\x\nln\addons\sheet_fire_for_effect\data\ui\fire_for_effect.paa";

                class edit: edit_main
                {
                    condition = "!nln_fire_for_effect_disable";
                    statement = "call nln_fire_for_effect_fnc_openMenu;";
                };

                class show: show_main
                {
                    condition = "!nln_fire_for_effect_disable && (isNull (uiNamespace getVariable ['nln_fire_for_effect', displayNull]))";
                    statement = "call nln_fire_for_effect_fnc_openBackground;";
                };

                class hide: hide_main
                {
                    condition = "!nln_fire_for_effect_disable && !(isNull (uiNamespace getVariable ['nln_fire_for_effect', displayNull]))";
                    statement = "call nln_fire_for_effect_fnc_closeBackground;";
                };
            };
        };
    };
};
