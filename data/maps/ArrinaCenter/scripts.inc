ArrinaCenter_MapScripts::
	.byte 0


ArrinaRespawn::
# 7 "data/maps/ArrinaCenter/scripts.pory"
	setrespawn HEAL_LOCATION_ARRINA_TOWN
	end


ArrinaCenterNurse::
# 12 "data/maps/ArrinaCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/ArrinaCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/ArrinaCenter/scripts.pory"
	waitmessage
# 15 "data/maps/ArrinaCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/ArrinaCenter/scripts.pory"
	release
	end

