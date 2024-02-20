SandfieldCenter_MapScripts::
	.byte 0


SandfieldRespawn::
# 7 "data/maps/SandfieldCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SANDFIELD
	end


SandfieldCenterNurse::
# 12 "data/maps/SandfieldCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/SandfieldCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/SandfieldCenter/scripts.pory"
	waitmessage
# 15 "data/maps/SandfieldCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/SandfieldCenter/scripts.pory"
	release
	end

