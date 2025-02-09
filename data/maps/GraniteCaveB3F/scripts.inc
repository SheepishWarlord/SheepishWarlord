GraniteCaveB3F_MapScripts::
	.byte 0


GraniteCaveB3F_EventScript_HeatranSpawn::
# 6 "data/maps/GraniteCaveB3F/scripts.pory"
	lockall
# 7 "data/maps/GraniteCaveB3F/scripts.pory"
	msgbox GraniteCaveB3F_EventScript_HeatranSpawn_Text_0
# 8 "data/maps/GraniteCaveB3F/scripts.pory"
	playmoncry SPECIES_HEATRAN, CRY_MODE_ENCOUNTER
# 9 "data/maps/GraniteCaveB3F/scripts.pory"
	waitmessage
# 10 "data/maps/GraniteCaveB3F/scripts.pory"
	waitmoncry
# 11 "data/maps/GraniteCaveB3F/scripts.pory"
	setwildbattle SPECIES_HEATRAN, 50, ITEM_NONE
# 12 "data/maps/GraniteCaveB3F/scripts.pory"
	dowildbattle
# 13 "data/maps/GraniteCaveB3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/GraniteCaveB3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq GraniteCaveB3F_EventScript_HeatranSpawn_2
# 17 "data/maps/GraniteCaveB3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GraniteCaveB3F_EventScript_HeatranSpawn_3
# 20 "data/maps/GraniteCaveB3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq GraniteCaveB3F_EventScript_HeatranSpawn_4
# 23 "data/maps/GraniteCaveB3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq GraniteCaveB3F_EventScript_HeatranSpawn_5
GraniteCaveB3F_EventScript_HeatranSpawn_1:
# 26 "data/maps/GraniteCaveB3F/scripts.pory"
	waitmessage
# 27 "data/maps/GraniteCaveB3F/scripts.pory"
	releaseall
	return

GraniteCaveB3F_EventScript_HeatranSpawn_2:
# 15 "data/maps/GraniteCaveB3F/scripts.pory"
	call Won_or_Caught1
	goto GraniteCaveB3F_EventScript_HeatranSpawn_1

GraniteCaveB3F_EventScript_HeatranSpawn_3:
# 18 "data/maps/GraniteCaveB3F/scripts.pory"
	call Won_or_Caught1
	goto GraniteCaveB3F_EventScript_HeatranSpawn_1

GraniteCaveB3F_EventScript_HeatranSpawn_4:
# 21 "data/maps/GraniteCaveB3F/scripts.pory"
	call RanAway1
	goto GraniteCaveB3F_EventScript_HeatranSpawn_1

GraniteCaveB3F_EventScript_HeatranSpawn_5:
# 24 "data/maps/GraniteCaveB3F/scripts.pory"
	call RanAway1
	goto GraniteCaveB3F_EventScript_HeatranSpawn_1


Won_or_Caught1::
# 32 "data/maps/GraniteCaveB3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 33 "data/maps/GraniteCaveB3F/scripts.pory"
	removeobject 1
# 34 "data/maps/GraniteCaveB3F/scripts.pory"
	setvar VAR_HEATRAN, 2
# 35 "data/maps/GraniteCaveB3F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


RanAway1::
# 40 "data/maps/GraniteCaveB3F/scripts.pory"
	playmoncry SPECIES_HEATRAN, CRY_MODE_ENCOUNTER
# 41 "data/maps/GraniteCaveB3F/scripts.pory"
	msgbox RanAway1_Text_0, MSGBOX_AUTOCLOSE
# 42 "data/maps/GraniteCaveB3F/scripts.pory"
	waitmessage
# 43 "data/maps/GraniteCaveB3F/scripts.pory"
	waitmoncry
# 44 "data/maps/GraniteCaveB3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/GraniteCaveB3F/scripts.pory"
	setvar VAR_HEATRAN, 3
# 46 "data/maps/GraniteCaveB3F/scripts.pory"
	removeobject 1
# 47 "data/maps/GraniteCaveB3F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Heatran::
# 52 "data/maps/GraniteCaveB3F/scripts.pory"
	lockall
# 53 "data/maps/GraniteCaveB3F/scripts.pory"
	setflag FLAG_TEMP_1
# 54 "data/maps/GraniteCaveB3F/scripts.pory"
	releaseall
	return


GraniteCaveB3F_EventScript_HeatranSpawn_Text_0:
# 7 "data/maps/GraniteCaveB3F/scripts.pory"
	.string "Gwaobababa!$"

RanAway1_Text_0:
# 41 "data/maps/GraniteCaveB3F/scripts.pory"
	.string "gwo$"
