
class Man;
class CAManBase : Man {
    class ACE_SelfActions {
        class nln_sheets {
            displayName = "$STR_nln_main_interactions_selfActionSheets";
            condition = "!nln_adjust_fire_mission_disable || !nln_cas_checkin_disable || !nln_cas_nineliner_disable || !nln_fire_for_effect_disable || !nln_gunship_cff_disable || !nln_marking_mission_disable || !nln_medevac_nineliner_disable || !nln_notepad_disable || !nln_target_location_methods_disable";
            statement = "";
            class close_Shown {
                displayName = "Close All";
                condition = "true";
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\ico_OFF_ca.paa";
                statement = "call nln_main_fnc_Close_All;";
            };

            class main {
              class edit_main {
                displayName = "$STR_nln_main_interactions_selfActionEdit";
                icon = "\a3\3den\Data\Displays\Display3DEN\PanelRight\customcomposition_edit_ca.paa";
              };
              class show_main {
                displayName = "$STR_nln_main_interactions_selfActionShow";
                icon = "\a3\ui_f\data\Map\Diary\Icons\diaryLocateTask_ca.paa";
              };
              class hide_main {
                displayName = "$STR_nln_main_interactions_selfActionHide";
                icon = "\a3\ui_f\data\IGUI\Cfg\Actions\ico_OFF_ca.paa";
              };
            };
        };
    };
};
