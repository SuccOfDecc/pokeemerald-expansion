MiraCenter_MapScripts::
	.byte 0


MiraRespawn::
# 7 "data/maps/MiraCenter/scripts.pory"
	setrespawn HEAL_LOCATION_MIRA_RIVER
	end


MiraCenterNurse::
# 12 "data/maps/MiraCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/MiraCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/MiraCenter/scripts.pory"
	waitmessage
# 15 "data/maps/MiraCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/MiraCenter/scripts.pory"
	release
	end

