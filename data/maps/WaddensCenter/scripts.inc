WaddensCenter_MapScripts::
	.byte 0


WaddensRespawn::
# 7 "data/maps/WaddensCenter/scripts.pory"
	setrespawn HEAL_LOCATION_WADDENS_COVE
	end


WaddensCenterNurse::
# 12 "data/maps/WaddensCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/WaddensCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/WaddensCenter/scripts.pory"
	waitmessage
# 15 "data/maps/WaddensCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/WaddensCenter/scripts.pory"
	release
	end

