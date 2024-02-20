PortreeCenter_MapScripts::
	.byte 0


PortreeRespawn::
# 7 "data/maps/PortreeCenter/scripts.pory"
	setrespawn HEAL_LOCATION_PORTREE
	end


PortreeCenterNurse::
# 12 "data/maps/PortreeCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 13 "data/maps/PortreeCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/PortreeCenter/scripts.pory"
	waitmessage
# 15 "data/maps/PortreeCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/PortreeCenter/scripts.pory"
	release
	end

