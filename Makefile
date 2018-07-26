ARMAKE=.build/bin/armake
ARMAKESRC=https://github.com/TheMysteriousVincent/armake.git

all: build_armake \
	nln_main.pbo \
	nln_sheet_adjust_fire_mission.pbo \
	nln_sheet_cas_checkin.pbo \
	nln_sheet_cas_nineliner.pbo \
	nln_sheet_fire_for_effect.pbo \
	nln_sheet_gunship_cff.pbo \
	nln_sheet_marking_mission.pbo \
	nln_sheet_medevac_nineliner.pbo \
	nln_sheet_notepad.pbo \
	nln_sheet_target_locatoin_methods.pbo \
	nln_ui_fonts \
	remove

build_armake: prepare
	git clone $(ARMAKESRC) .build/armake
	cd .build/armake && make
	cp -f .build/armake/bin/armake .build/bin/

prepare:
	mkdir -p .build/
	mkdir -p .build/bin/

nln_main.pbo:
	$(ARMAKE) build --force -e prefix=x\\nln\\addons\\main addons/main .build/nln_main.pbo

nln_sheet_adjust_fire_mission.pbo:
	$(ARMAKE) build --force -e prefix=x\\nln\\addons\\adjust_fire_mission addons/sheet_adjust_fire_mission .build/nln_sheet_adjust_fire_mission.pbo

nln_sheet_cas_checkin.pbo:
	$(ARMAKE) build --force -e prefix=x\\nln\\addons\\cas_checkin addons/sheet_cas_checkin .build/nln_sheet_cas_checkin.pbo

nln_sheet_cas_nineliner.pbo:
	$(ARMAKE) build --force -e prefix=x\\nln\\addons\\cas_nineliner addons/sheet_cas_nineliner .build/nln_sheet_cas_nineliner.pbo

nln_sheet_fire_for_effect.pbo:
	$(ARMAKE) build --force -e prefix=x\\nln\\addons\\fire_for_effect addons/sheet_fire_for_effect .build/nln_sheet_fire_for_effect.pbo

nln_sheet_gunship_cff.pbo:
	$(ARMAKE) build --force -e prefix=x\\nln\\addons\\gunship_cff addons/sheet_gunship_cff .build/nln_sheet_gunship_cff.pbo

nln_sheet_marking_mission.pbo:
	$(ARMAKE) build --force -e prefix=x\\nln\\addons\\marking_mission addons/sheet_marking_mission .build/nln_sheet_marking_mission.pbo

nln_sheet_medevac_nineliner.pbo:
	$(ARMAKE) build --force -e prefix=x\\nln\\addons\\medevac_nineliner addons/sheet_medevac_nineliner .build/nln_sheet_medevac_nineliner.pbo

nln_sheet_notepad.pbo:
	$(ARMAKE) build --force -e prefix=x\\nln\\addons\\notepad addons/sheet_notepad .build/nln_sheet_notepad.pbo

nln_sheet_target_locatoin_methods.pbo:
	$(ARMAKE) build --force -e prefix=x\\nln\\addons\\target_location_methods addons/sheet_target_location_methods .build/nln_sheet_target_location_methods.pbo

nln_ui_fonts:
	$(ARMAKE) build --force -e prefix=x\\nln\\addons\\ui_fonts addons/ui_fonts .build/nln_ui_fonts.pbo

test: prepare
	git clone https://github.com/TheMysteriousVincent/sqf.git .build/sqf
	python3 .build/sqf/sqflint.py -d addons/
	python3 tools/config_style_checker.py

remove:
	rm -Rf .build/armake
	rm -Rf .build/bin
	rm -Rf .build/sqf

removeAll:
	rm -Rf .build/
