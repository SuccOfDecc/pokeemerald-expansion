BolshanCenter_MapScripts::
	.byte 0


BolshanRespawn::
# 7 "data/maps/BolshanCenter/scripts.pory"
	setrespawn HEAL_LOCATION_BOLSHAN_CITY
	end


BolshanCenterNurse::
# 12 "data/maps/BolshanCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/BolshanCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/BolshanCenter/scripts.pory"
	waitmessage
# 15 "data/maps/BolshanCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/BolshanCenter/scripts.pory"
	release
	end

