GraniteCave_3F_MapScripts::
	.byte 0


GraniteCaveB3F_EventScript_KyuremSpawn::
# 6 "data/maps/GraniteCave_3F/scripts.pory"
	lockall
# 7 "data/maps/GraniteCave_3F/scripts.pory"
	msgbox GraniteCaveB3F_EventScript_KyuremSpawn_Text_0
# 8 "data/maps/GraniteCave_3F/scripts.pory"
	playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
# 9 "data/maps/GraniteCave_3F/scripts.pory"
	waitmessage
# 10 "data/maps/GraniteCave_3F/scripts.pory"
	waitmoncry
# 11 "data/maps/GraniteCave_3F/scripts.pory"
	setwildbattle SPECIES_KYUREM, 60, ITEM_NONE
# 12 "data/maps/GraniteCave_3F/scripts.pory"
	dowildbattle
# 13 "data/maps/GraniteCave_3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/GraniteCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq GraniteCaveB3F_EventScript_KyuremSpawn_2
# 17 "data/maps/GraniteCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GraniteCaveB3F_EventScript_KyuremSpawn_3
# 20 "data/maps/GraniteCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq GraniteCaveB3F_EventScript_KyuremSpawn_4
# 23 "data/maps/GraniteCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq GraniteCaveB3F_EventScript_KyuremSpawn_5
GraniteCaveB3F_EventScript_KyuremSpawn_1:
# 26 "data/maps/GraniteCave_3F/scripts.pory"
	waitmessage
# 27 "data/maps/GraniteCave_3F/scripts.pory"
	releaseall
	return

GraniteCaveB3F_EventScript_KyuremSpawn_2:
# 15 "data/maps/GraniteCave_3F/scripts.pory"
	call Won_or_Caught3
	goto GraniteCaveB3F_EventScript_KyuremSpawn_1

GraniteCaveB3F_EventScript_KyuremSpawn_3:
# 18 "data/maps/GraniteCave_3F/scripts.pory"
	call Won_or_Caught3
	goto GraniteCaveB3F_EventScript_KyuremSpawn_1

GraniteCaveB3F_EventScript_KyuremSpawn_4:
# 21 "data/maps/GraniteCave_3F/scripts.pory"
	call RanAway3
	goto GraniteCaveB3F_EventScript_KyuremSpawn_1

GraniteCaveB3F_EventScript_KyuremSpawn_5:
# 24 "data/maps/GraniteCave_3F/scripts.pory"
	call RanAway3
	goto GraniteCaveB3F_EventScript_KyuremSpawn_1


Won_or_Caught3::
# 32 "data/maps/GraniteCave_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 33 "data/maps/GraniteCave_3F/scripts.pory"
	removeobject 1
# 34 "data/maps/GraniteCave_3F/scripts.pory"
	setflag FLAG_KYUREM
# 35 "data/maps/GraniteCave_3F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


RanAway3::
# 40 "data/maps/GraniteCave_3F/scripts.pory"
	playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
# 41 "data/maps/GraniteCave_3F/scripts.pory"
	msgbox RanAway3_Text_0, MSGBOX_AUTOCLOSE
# 42 "data/maps/GraniteCave_3F/scripts.pory"
	waitmessage
# 43 "data/maps/GraniteCave_3F/scripts.pory"
	waitmoncry
# 44 "data/maps/GraniteCave_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/GraniteCave_3F/scripts.pory"
	setflag FLAG_KYUREM
# 46 "data/maps/GraniteCave_3F/scripts.pory"
	removeobject 1
# 47 "data/maps/GraniteCave_3F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


GraniteCaveB3F_EventScript_KyuremSpawn_Text_0:
# 7 "data/maps/GraniteCave_3F/scripts.pory"
	.string "Krrrhsss!$"

RanAway3_Text_0:
# 41 "data/maps/GraniteCave_3F/scripts.pory"
	.string "krr$"
