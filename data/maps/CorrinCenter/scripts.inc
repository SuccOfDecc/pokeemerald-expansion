CorrinCenter_MapScripts::
	.byte 0


CorrinRespawn::
# 7 "data/maps/CorrinCenter/scripts.pory"
	setrespawn HEAL_LOCATION_CORRIN_ISLAND
	end


CorrinCenterNurse::
# 12 "data/maps/CorrinCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/CorrinCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/CorrinCenter/scripts.pory"
	waitmessage
# 15 "data/maps/CorrinCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/CorrinCenter/scripts.pory"
	release
	end

