SkawCenter_MapScripts::
	.byte 0


CapeSkawRespawn::
# 7 "data/maps/SkawCenter/scripts.pory"
	setrespawn HEAL_LOCATION_CAPE_SKAW
	end


SkawCenterNurse::
# 12 "data/maps/SkawCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/SkawCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/SkawCenter/scripts.pory"
	waitmessage
# 15 "data/maps/SkawCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/SkawCenter/scripts.pory"
	release
	end

