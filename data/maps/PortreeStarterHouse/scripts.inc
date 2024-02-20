# 1 "data/maps/PortreeStarterHouse/scripts.pory"

# 2 "data/maps/PortreeStarterHouse/scripts.pory"

# 3 "data/maps/PortreeStarterHouse/scripts.pory"

# 4 "data/maps/PortreeStarterHouse/scripts.pory"
	.byte 0

PortreeStarterHouse_MapScripts::
# 8 "data/maps/PortreeStarterHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PortreeStarterHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PortreeStarterHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/PortreeStarterHouse/scripts.pory"
	map_script_2 VAR_D_GOING_TO_PICK, 0, OnEntryStarter
	.2byte 0


OnEntryStarter::
# 13 "data/maps/PortreeStarterHouse/scripts.pory"
	compare VAR_D_GOT_STARTER, 0
	goto_if_eq OnEntryStarter_1
	return

OnEntryStarter_1:
# 14 "data/maps/PortreeStarterHouse/scripts.pory"
	clearflag FLAG_GOT_STARTER
# 15 "data/maps/PortreeStarterHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StarterWalkup
# 16 "data/maps/PortreeStarterHouse/scripts.pory"
	waitmovement 0
# 17 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox OnEntryStarter_Text_0
# 18 "data/maps/PortreeStarterHouse/scripts.pory"
	setvar VAR_D_CHOOSING_STARTER, 1
# 19 "data/maps/PortreeStarterHouse/scripts.pory"
	setflag FLAG_GETTING_STARTER
# 20 "data/maps/PortreeStarterHouse/scripts.pory"
	setvar VAR_D_GOING_TO_PICK, 1
# 21 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
	return


CantLeaveStarter::
# 26 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox CantLeaveStarter_Text_0
# 27 "data/maps/PortreeStarterHouse/scripts.pory"
	waitmessage
# 28 "data/maps/PortreeStarterHouse/scripts.pory"
	closemessage
# 29 "data/maps/PortreeStarterHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TurnBackUp
# 30 "data/maps/PortreeStarterHouse/scripts.pory"
	waitmovement 0
# 31 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
	return


Portree_StarterBallG::
# 36 "data/maps/PortreeStarterHouse/scripts.pory"
	lockall
# 37 "data/maps/PortreeStarterHouse/scripts.pory"
	goto_if_unset FLAG_GOT_STARTER, Portree_StarterBallG_1
# 56 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox Portree_StarterBallG_Text_2
# 57 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
	return

Portree_StarterBallG_1:
# 38 "data/maps/PortreeStarterHouse/scripts.pory"
	showmonpic SPECIES_DREEPY, 10, 3
# 39 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox Portree_StarterBallG_Text_0, MSGBOX_YESNO
# 40 "data/maps/PortreeStarterHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Portree_StarterBallG_5
# 50 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
# 51 "data/maps/PortreeStarterHouse/scripts.pory"
	hidemonpic
Portree_StarterBallG_4:
# 53 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
	return

Portree_StarterBallG_5:
# 41 "data/maps/PortreeStarterHouse/scripts.pory"
	givemon SPECIES_DREEPY, 7, ITEM_EXP_SHARE
# 42 "data/maps/PortreeStarterHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 43 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox Portree_StarterBallG_Text_1
# 44 "data/maps/PortreeStarterHouse/scripts.pory"
	setflag FLAG_STARTERG
# 45 "data/maps/PortreeStarterHouse/scripts.pory"
	removeobject 1
# 46 "data/maps/PortreeStarterHouse/scripts.pory"
	call ChoseStarterText
# 47 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
	goto Portree_StarterBallG_4


Portree_StarterBallF::
# 62 "data/maps/PortreeStarterHouse/scripts.pory"
	lockall
# 63 "data/maps/PortreeStarterHouse/scripts.pory"
	goto_if_unset FLAG_GOT_STARTER, Portree_StarterBallF_1
# 82 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox Portree_StarterBallG_Text_2
# 83 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
	return

Portree_StarterBallF_1:
# 64 "data/maps/PortreeStarterHouse/scripts.pory"
	showmonpic SPECIES_SLUGMA, 10, 3
# 65 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox Portree_StarterBallF_Text_0, MSGBOX_YESNO
# 66 "data/maps/PortreeStarterHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Portree_StarterBallF_5
# 76 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
# 77 "data/maps/PortreeStarterHouse/scripts.pory"
	hidemonpic
Portree_StarterBallF_4:
# 79 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
	return

Portree_StarterBallF_5:
# 67 "data/maps/PortreeStarterHouse/scripts.pory"
	givemon SPECIES_SLUGMA, 7, ITEM_EXP_SHARE
# 68 "data/maps/PortreeStarterHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 69 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox Portree_StarterBallF_Text_1
# 70 "data/maps/PortreeStarterHouse/scripts.pory"
	setflag FLAG_STARTERF
# 71 "data/maps/PortreeStarterHouse/scripts.pory"
	removeobject 2
# 72 "data/maps/PortreeStarterHouse/scripts.pory"
	call ChoseStarterText
# 73 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
	goto Portree_StarterBallF_4


Portree_StarterBallW::
# 88 "data/maps/PortreeStarterHouse/scripts.pory"
	lockall
# 89 "data/maps/PortreeStarterHouse/scripts.pory"
	goto_if_unset FLAG_GOT_STARTER, Portree_StarterBallW_1
# 107 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox Portree_StarterBallG_Text_2
# 108 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
	return

Portree_StarterBallW_1:
# 90 "data/maps/PortreeStarterHouse/scripts.pory"
	showmonpic SPECIES_SPHEAL, 10, 3
# 91 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox Portree_StarterBallW_Text_0, MSGBOX_YESNO
# 92 "data/maps/PortreeStarterHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Portree_StarterBallW_5
# 101 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
# 102 "data/maps/PortreeStarterHouse/scripts.pory"
	hidemonpic
Portree_StarterBallW_4:
# 104 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
	return

Portree_StarterBallW_5:
# 93 "data/maps/PortreeStarterHouse/scripts.pory"
	givemon SPECIES_SPHEAL, 7, ITEM_EXP_SHARE
# 94 "data/maps/PortreeStarterHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 95 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox Portree_StarterBallW_Text_1
# 96 "data/maps/PortreeStarterHouse/scripts.pory"
	removeobject 3
# 97 "data/maps/PortreeStarterHouse/scripts.pory"
	call ChoseStarterText
# 98 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
	goto Portree_StarterBallW_4


NicknamePartyMon::
# 114 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 115 "data/maps/PortreeStarterHouse/scripts.pory"
	hidemonpic
# 116 "data/maps/PortreeStarterHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 117 "data/maps/PortreeStarterHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 118 "data/maps/PortreeStarterHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


# 122 "data/maps/PortreeStarterHouse/scripts.pory"
StarterWalkup:
# 123 "data/maps/PortreeStarterHouse/scripts.pory"
	walk_up
# 123 "data/maps/PortreeStarterHouse/scripts.pory"
	walk_up
# 123 "data/maps/PortreeStarterHouse/scripts.pory"
	walk_up
# 124 "data/maps/PortreeStarterHouse/scripts.pory"
	walk_right
# 125 "data/maps/PortreeStarterHouse/scripts.pory"
	face_up
	step_end

# 128 "data/maps/PortreeStarterHouse/scripts.pory"
TurnBackUp:
# 129 "data/maps/PortreeStarterHouse/scripts.pory"
	walk_up
	step_end

# 132 "data/maps/PortreeStarterHouse/scripts.pory"
PlayerTalkToProfStarter:
# 133 "data/maps/PortreeStarterHouse/scripts.pory"
	face_player
	step_end

ChoseStarterText::
# 137 "data/maps/PortreeStarterHouse/scripts.pory"
	setflag FLAG_GOT_STARTER
# 138 "data/maps/PortreeStarterHouse/scripts.pory"
	clearflag FLAG_GETTING_STARTER
# 139 "data/maps/PortreeStarterHouse/scripts.pory"
	call NicknamePartyMon
# 140 "data/maps/PortreeStarterHouse/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 141 "data/maps/PortreeStarterHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 142 "data/maps/PortreeStarterHouse/scripts.pory"
	special EnableNationalPokedex
# 143 "data/maps/PortreeStarterHouse/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 144 "data/maps/PortreeStarterHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 145 "data/maps/PortreeStarterHouse/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 146 "data/maps/PortreeStarterHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 147 "data/maps/PortreeStarterHouse/scripts.pory"
	setvar VAR_D_CHOOSING_STARTER, 0
# 148 "data/maps/PortreeStarterHouse/scripts.pory"
	setvar VAR_D_GOT_STARTER, 1
# 149 "data/maps/PortreeStarterHouse/scripts.pory"
	clearflag FLAG_HIDE_PORTREE_SAILOR
# 150 "data/maps/PortreeStarterHouse/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 151 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox ChoseStarterText_Text_0
	return


TalkToStarterProf::
# 155 "data/maps/PortreeStarterHouse/scripts.pory"
	lockall
# 156 "data/maps/PortreeStarterHouse/scripts.pory"
	applymovement 4, PlayerTalkToProfStarter
# 157 "data/maps/PortreeStarterHouse/scripts.pory"
	goto_if_unset FLAG_GOT_STARTER, TalkToStarterProf_2
# 161 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox TalkToStarterProf_Text_1
TalkToStarterProf_1:
# 163 "data/maps/PortreeStarterHouse/scripts.pory"
	releaseall
	return

TalkToStarterProf_2:
# 158 "data/maps/PortreeStarterHouse/scripts.pory"
	msgbox TalkToStarterProf_Text_0
	goto TalkToStarterProf_1


OnEntryStarter_Text_0:
# 17 "data/maps/PortreeStarterHouse/scripts.pory"
	.string "You know the drill I'm sure.\n"
	.string "Go ahead, choose your partner.$"

CantLeaveStarter_Text_0:
# 26 "data/maps/PortreeStarterHouse/scripts.pory"
	.string "It's dangerous to go alone,\n"
	.string "I shouldn't have to code this!$"

Portree_StarterBallG_Text_0:
# 39 "data/maps/PortreeStarterHouse/scripts.pory"
	.string "Do you want to choose GRASS?$"

Portree_StarterBallG_Text_1:
# 43 "data/maps/PortreeStarterHouse/scripts.pory"
	.string "You chose GRASS$"

Portree_StarterBallG_Text_2:
# 56 "data/maps/PortreeStarterHouse/scripts.pory"
	.string "Nuh uh! Just one.$"

Portree_StarterBallF_Text_0:
# 65 "data/maps/PortreeStarterHouse/scripts.pory"
	.string "Do you want to choose FIRE?$"

Portree_StarterBallF_Text_1:
# 69 "data/maps/PortreeStarterHouse/scripts.pory"
	.string "You chose FIRE$"

Portree_StarterBallW_Text_0:
# 91 "data/maps/PortreeStarterHouse/scripts.pory"
	.string "Do you want to choose WATER?$"

Portree_StarterBallW_Text_1:
# 95 "data/maps/PortreeStarterHouse/scripts.pory"
	.string "You chose WATER$"

NicknamePartyMon_Text_0:
# 114 "data/maps/PortreeStarterHouse/scripts.pory"
	.string "Give it a nickname?$"

ChoseStarterText_Text_0:
# 151 "data/maps/PortreeStarterHouse/scripts.pory"
	.string "That's it! I won't keep you\n"
	.string "any longer\p"
	.string "Get out there and go!$"

TalkToStarterProf_Text_0:
# 158 "data/maps/PortreeStarterHouse/scripts.pory"
	.string "Go ahead! What are you waiting for?$"

TalkToStarterProf_Text_1:
# 161 "data/maps/PortreeStarterHouse/scripts.pory"
	.string "What was it about 'leave now'\n"
	.string "that you didn't understand?$"
