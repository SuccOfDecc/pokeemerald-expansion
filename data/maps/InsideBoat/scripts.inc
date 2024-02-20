InsideBoat_MapScripts::
# 2 "data/maps/InsideBoat/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, InsideBoat_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

InsideBoat_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/InsideBoat/scripts.pory"
	map_script_2 VAR_D_INSIDE_BOAT, 0, IntroBoatSetFlags
	.2byte 0


IntroBoatSetFlags::
# 7 "data/maps/InsideBoat/scripts.pory"
	goto_if_unset FLAG_HIDE_PORTREE_SAILOR, IntroBoatSetFlags_1
	return

IntroBoatSetFlags_1:
# 8 "data/maps/InsideBoat/scripts.pory"
	setflag FLAG_HIDE_PORTREE_SAILOR
# 9 "data/maps/InsideBoat/scripts.pory"
	setrespawn HEAL_LOCATION_BOLSHAN_CITY
# 10 "data/maps/InsideBoat/scripts.pory"
	call PlayTestFlags
# 11 "data/maps/InsideBoat/scripts.pory"
	setvar VAR_D_INSIDE_BOAT, 1
	return


PlayTestFlags::
# 16 "data/maps/InsideBoat/scripts.pory"
	setflag FLAG_FOURTH_BADGE
# 17 "data/maps/InsideBoat/scripts.pory"
	setflag FLAG_THIRD_BADGE
	return

