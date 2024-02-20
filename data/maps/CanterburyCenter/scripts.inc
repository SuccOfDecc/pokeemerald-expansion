CanterburyCenter_MapScripts::
	.byte 0


CanterburyRespawn::
# 7 "data/maps/CanterburyCenter/scripts.pory"
	setrespawn HEAL_LOCATION_CANTERBURY_TOWN
	end


CanterburyCenterNurse::
# 12 "data/maps/CanterburyCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/CanterburyCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/CanterburyCenter/scripts.pory"
	waitmessage
# 15 "data/maps/CanterburyCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/CanterburyCenter/scripts.pory"
	release
	end

