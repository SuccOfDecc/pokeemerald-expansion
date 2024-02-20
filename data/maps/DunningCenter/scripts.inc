DunningCenter_MapScripts::
	.byte 0


DunningRespawn::
# 7 "data/maps/DunningCenter/scripts.pory"
	setrespawn HEAL_LOCATION_DUNNING_HILL
	end


DunningCenterNurse::
# 12 "data/maps/DunningCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/DunningCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/DunningCenter/scripts.pory"
	waitmessage
# 15 "data/maps/DunningCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/DunningCenter/scripts.pory"
	release
	end

