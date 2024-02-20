# 1 "data/maps/Portree/scripts.pory"

# 2 "data/maps/Portree/scripts.pory"
	.byte 0

Portree_MapScripts::
# 5 "data/maps/Portree/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Portree_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Portree_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Portree/scripts.pory"
	map_script_2 VAR_D_GET_OFF_BOAT, 0, OffTheBoatPortree
	.2byte 0


OffTheBoatPortree::
# 10 "data/maps/Portree/scripts.pory"
	setvar VAR_D_GET_OFF_BOAT, 1
# 11 "data/maps/Portree/scripts.pory"
	clearflag FLAG_GOT_STARTER
# 12 "data/maps/Portree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 13 "data/maps/Portree/scripts.pory"
	waitmovement 0
# 14 "data/maps/Portree/scripts.pory"
	msgbox OffTheBoatPortree_Text_0
# 15 "data/maps/Portree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerOffBoatPortree
# 16 "data/maps/Portree/scripts.pory"
	applymovement 1, GuyOffBoatPortree
# 17 "data/maps/Portree/scripts.pory"
	waitmovement 0
# 18 "data/maps/Portree/scripts.pory"
	opendoor 30, 10
# 19 "data/maps/Portree/scripts.pory"
	waitdooranim
# 20 "data/maps/Portree/scripts.pory"
	applymovement 1, GuyEnterStarterHousePortree
# 21 "data/maps/Portree/scripts.pory"
	waitmovement 0
# 22 "data/maps/Portree/scripts.pory"
	removeobject 1
# 23 "data/maps/Portree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnterStarterHousePortree
# 24 "data/maps/Portree/scripts.pory"
	waitmovement 0
# 25 "data/maps/Portree/scripts.pory"
	warp MAP_PORTREE_STARTER_HOUSE, 0
	return


# 28 "data/maps/Portree/scripts.pory"
PlayerOffBoatPortree:
# 29 "data/maps/Portree/scripts.pory"
	walk_up
# 29 "data/maps/Portree/scripts.pory"
	walk_up
# 29 "data/maps/Portree/scripts.pory"
	walk_up
# 29 "data/maps/Portree/scripts.pory"
	walk_up
# 29 "data/maps/Portree/scripts.pory"
	walk_up
# 30 "data/maps/Portree/scripts.pory"
	walk_right
# 30 "data/maps/Portree/scripts.pory"
	walk_right
# 30 "data/maps/Portree/scripts.pory"
	walk_right
# 30 "data/maps/Portree/scripts.pory"
	walk_right
# 30 "data/maps/Portree/scripts.pory"
	walk_right
# 30 "data/maps/Portree/scripts.pory"
	walk_right
# 30 "data/maps/Portree/scripts.pory"
	walk_right
# 30 "data/maps/Portree/scripts.pory"
	walk_right
# 30 "data/maps/Portree/scripts.pory"
	walk_right
# 30 "data/maps/Portree/scripts.pory"
	walk_right
# 30 "data/maps/Portree/scripts.pory"
	walk_right
# 30 "data/maps/Portree/scripts.pory"
	walk_right
# 31 "data/maps/Portree/scripts.pory"
	walk_up
	step_end

# 34 "data/maps/Portree/scripts.pory"
GuyOffBoatPortree:
# 35 "data/maps/Portree/scripts.pory"
	walk_up
# 35 "data/maps/Portree/scripts.pory"
	walk_up
# 35 "data/maps/Portree/scripts.pory"
	walk_up
# 36 "data/maps/Portree/scripts.pory"
	walk_right
# 36 "data/maps/Portree/scripts.pory"
	walk_right
# 36 "data/maps/Portree/scripts.pory"
	walk_right
# 36 "data/maps/Portree/scripts.pory"
	walk_right
# 36 "data/maps/Portree/scripts.pory"
	walk_right
# 36 "data/maps/Portree/scripts.pory"
	walk_right
# 36 "data/maps/Portree/scripts.pory"
	walk_right
# 36 "data/maps/Portree/scripts.pory"
	walk_right
# 36 "data/maps/Portree/scripts.pory"
	walk_right
# 36 "data/maps/Portree/scripts.pory"
	walk_right
# 36 "data/maps/Portree/scripts.pory"
	walk_right
# 36 "data/maps/Portree/scripts.pory"
	walk_right
# 37 "data/maps/Portree/scripts.pory"
	walk_up
# 37 "data/maps/Portree/scripts.pory"
	walk_up
# 37 "data/maps/Portree/scripts.pory"
	walk_up
	step_end

# 40 "data/maps/Portree/scripts.pory"
GuyEnterStarterHousePortree:
# 41 "data/maps/Portree/scripts.pory"
	walk_up
	step_end

# 44 "data/maps/Portree/scripts.pory"
PlayerEnterStarterHousePortree:
# 45 "data/maps/Portree/scripts.pory"
	walk_up
# 45 "data/maps/Portree/scripts.pory"
	walk_up
# 45 "data/maps/Portree/scripts.pory"
	walk_up
	step_end

# 48 "data/maps/Portree/scripts.pory"
SailorGetOnVictoryBoat:
# 49 "data/maps/Portree/scripts.pory"
	walk_down
	step_end

# 52 "data/maps/Portree/scripts.pory"
PlayerGetOnVictoryBoat:
# 53 "data/maps/Portree/scripts.pory"
	walk_down
# 53 "data/maps/Portree/scripts.pory"
	walk_down
	step_end

PortreeTalkToSailor::
# 57 "data/maps/Portree/scripts.pory"
	goto_if_set FLAG_ALL_BADGES, PortreeTalkToSailor_1
# 69 "data/maps/Portree/scripts.pory"
	lockall
# 70 "data/maps/Portree/scripts.pory"
	msgbox PortreeTalkToSailor_Text_1
# 71 "data/maps/Portree/scripts.pory"
	releaseall
	return

PortreeTalkToSailor_1:
# 58 "data/maps/Portree/scripts.pory"
	lockall
# 59 "data/maps/Portree/scripts.pory"
	msgbox PortreeTalkToSailor_Text_0
# 60 "data/maps/Portree/scripts.pory"
	waitmessage
# 61 "data/maps/Portree/scripts.pory"
	closemessage
# 62 "data/maps/Portree/scripts.pory"
	applymovement 2, SailorGetOnVictoryBoat
# 63 "data/maps/Portree/scripts.pory"
	waitmovement 0
# 64 "data/maps/Portree/scripts.pory"
	removeobject 2
# 65 "data/maps/Portree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerGetOnVictoryBoat
# 66 "data/maps/Portree/scripts.pory"
	warp MAP_VICTORY_ROAD
	return


FlySign::
# 76 "data/maps/Portree/scripts.pory"
	goto_if_set FLAG_THIRD_BADGE, FlySign_1
# 80 "data/maps/Portree/scripts.pory"
	lockall
# 81 "data/maps/Portree/scripts.pory"
	msgbox FlySign_Text_0
# 82 "data/maps/Portree/scripts.pory"
	releaseall
	return

FlySign_1:
# 77 "data/maps/Portree/scripts.pory"
	call CB2_OpenFlyMap
	return


OffTheBoatPortree_Text_0:
# 14 "data/maps/Portree/scripts.pory"
	.string "Welcome to the island!\nThis is placeholder text!$"

PortreeTalkToSailor_Text_0:
# 59 "data/maps/Portree/scripts.pory"
	.string "Looks like you've been busy!\p"
	.string "Get in!\n"
	.string "You're going to Victory Road.$"

PortreeTalkToSailor_Text_1:
# 70 "data/maps/Portree/scripts.pory"
	.string "This boat will take you to\n"
	.string "Victory Road!\n"
	.string "... come back with 8 badges$"

FlySign_Text_0:
# 81 "data/maps/Portree/scripts.pory"
	.string "The badge from Waddens Cove\n"
	.string "allows you to fly to other towns$"
