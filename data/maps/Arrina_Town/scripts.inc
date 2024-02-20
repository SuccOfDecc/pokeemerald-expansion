Arrina_Town_MapScripts::
	.byte 0


ArrinaFerrySailor::
# 5 "data/maps/Arrina_Town/scripts.pory"
	goto_if_set FLAG_FOURTH_BADGE, ArrinaFerrySailor_1
# 21 "data/maps/Arrina_Town/scripts.pory"
	lockall
# 22 "data/maps/Arrina_Town/scripts.pory"
	msgbox ArrinaFerrySailor_Text_3
# 24 "data/maps/Arrina_Town/scripts.pory"
	releaseall
	return

ArrinaFerrySailor_1:
# 6 "data/maps/Arrina_Town/scripts.pory"
	msgbox ArrinaFerrySailor_Text_0, MSGBOX_YESNO
# 8 "data/maps/Arrina_Town/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ArrinaFerrySailor_4
# 15 "data/maps/Arrina_Town/scripts.pory"
	msgbox ArrinaFerrySailor_Text_2
# 16 "data/maps/Arrina_Town/scripts.pory"
	closemessage
# 17 "data/maps/Arrina_Town/scripts.pory"
	releaseall
	return

ArrinaFerrySailor_4:
# 9 "data/maps/Arrina_Town/scripts.pory"
	lockall
# 10 "data/maps/Arrina_Town/scripts.pory"
	msgbox ArrinaFerrySailor_Text_1
# 11 "data/maps/Arrina_Town/scripts.pory"
	closemessage
# 12 "data/maps/Arrina_Town/scripts.pory"
	warp MAP_CORRIN_ISLAND, 2
	return


ArrinaFerrySailor_Text_0:
# 6 "data/maps/Arrina_Town/scripts.pory"
	.string "I run the ferry here!\n"
	.string "Well...\p"
	.string "...okay fine it's a tiny\n"
	.string "little sailboat...\p"
	.string "Do you want to go to Corrin Island?$"

ArrinaFerrySailor_Text_1:
# 10 "data/maps/Arrina_Town/scripts.pory"
	.string "Great!\p"
	.string "All aboard the Corrin Express!$"

ArrinaFerrySailor_Text_2:
# 15 "data/maps/Arrina_Town/scripts.pory"
	.string "Come back when you're ready.$"

ArrinaFerrySailor_Text_3:
# 22 "data/maps/Arrina_Town/scripts.pory"
	.string "I run the ferry here!\n"
	.string "Well...\p"
	.string "...okay fine it's a tiny\n"
	.string "little sailboat...\p"
	.string "But you need this city's\n"
	.string "gym badge first.$"
