RockdaleCenter_MapScripts::
	.byte 0


RockdaleRespawn::
# 7 "data/maps/RockdaleCenter/scripts.pory"
	setrespawn HEAL_LOCATION_ROCKDALE
	end


RockdaleCenterNurse::
# 12 "data/maps/RockdaleCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/RockdaleCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/RockdaleCenter/scripts.pory"
	waitmessage
# 15 "data/maps/RockdaleCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/RockdaleCenter/scripts.pory"
	release
	end

