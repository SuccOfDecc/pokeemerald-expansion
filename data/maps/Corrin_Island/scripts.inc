Corrin_Island_MapScripts::
	.byte 0


CorrinFerrySailor::
# 6 "data/maps/Corrin_Island/scripts.pory"
	lockall
# 7 "data/maps/Corrin_Island/scripts.pory"
	msgbox CorrinFerrySailor_Text_0, MSGBOX_YESNO
# 8 "data/maps/Corrin_Island/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CorrinFerrySailor_1
# 12 "data/maps/Corrin_Island/scripts.pory"
	closemessage
# 13 "data/maps/Corrin_Island/scripts.pory"
	releaseall
	return

CorrinFerrySailor_1:
# 9 "data/maps/Corrin_Island/scripts.pory"
	warp MAP_ARRINA_TOWN, 20, 3
	return


CorrinFerrySailor_Text_0:
# 7 "data/maps/Corrin_Island/scripts.pory"
	.string "Shall I call the ferry to\n"
	.string "take you back to Arrina?$"
