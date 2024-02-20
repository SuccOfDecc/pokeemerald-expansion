DonkinCenter_MapScripts::
	.byte 0


DonkinRespawn::
# 7 "data/maps/DonkinCenter/scripts.pory"
	setrespawn HEAL_LOCATION_DONKIN_TOWN
	end


DonkinCenterNurse::
# 12 "data/maps/DonkinCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/DonkinCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/DonkinCenter/scripts.pory"
	waitmessage
# 15 "data/maps/DonkinCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/DonkinCenter/scripts.pory"
	release
	end

