ShillfordCenter_MapScripts::
	.byte 0


ShillfordRespawn::
# 7 "data/maps/ShillfordCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SHILLFORD
	end


ShillfordCenterNurse::
# 12 "data/maps/ShillfordCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/ShillfordCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/ShillfordCenter/scripts.pory"
	waitmessage
# 15 "data/maps/ShillfordCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/ShillfordCenter/scripts.pory"
	release
	end

