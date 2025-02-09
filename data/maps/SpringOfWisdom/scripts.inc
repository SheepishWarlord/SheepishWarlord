SpringOfWisdom_MapScripts::
# 2 "data/maps/SpringOfWisdom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SpringOfWisdom_EventScript_CheckUxieSpawn
	.byte 0


SpringOfWisdom_EventScript_CheckUxieSpawn::
# 6 "data/maps/SpringOfWisdom/scripts.pory"
	goto_if_set FLAG_BADGE06_GET && ! FLAG_UXIE_CAUGHT, SpringOfWisdom_EventScript_CheckUxieSpawn_1
# 17 "data/maps/SpringOfWisdom/scripts.pory"
	setflag FLAG_UXIE_SPAWN
	return

SpringOfWisdom_EventScript_CheckUxieSpawn_1:
# 7 "data/maps/SpringOfWisdom/scripts.pory"
	clearflag FLAG_UXIE_SPAWN
# 8 "data/maps/SpringOfWisdom/scripts.pory"
	lockall
# 9 "data/maps/SpringOfWisdom/scripts.pory"
	addobject 1
# 10 "data/maps/SpringOfWisdom/scripts.pory"
	msgbox SpringOfWisdom_EventScript_CheckUxieSpawn_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/SpringOfWisdom/scripts.pory"
	playmoncry SPECIES_UXIE, CRY_MODE_ENCOUNTER
# 12 "data/maps/SpringOfWisdom/scripts.pory"
	waitmessage
# 13 "data/maps/SpringOfWisdom/scripts.pory"
	waitmoncry
# 14 "data/maps/SpringOfWisdom/scripts.pory"
	releaseall
	return


SpringOfWisdom_EventScript_UxieBattle::
# 23 "data/maps/SpringOfWisdom/scripts.pory"
	lockall
# 24 "data/maps/SpringOfWisdom/scripts.pory"
	playmoncry SPECIES_UXIE, CRY_MODE_ENCOUNTER
# 25 "data/maps/SpringOfWisdom/scripts.pory"
	msgbox SpringOfWisdom_EventScript_UxieBattle_Text_0
# 26 "data/maps/SpringOfWisdom/scripts.pory"
	waitmessage
# 27 "data/maps/SpringOfWisdom/scripts.pory"
	waitmoncry
# 28 "data/maps/SpringOfWisdom/scripts.pory"
	setwildbattle SPECIES_UXIE, 50, ITEM_NONE
# 29 "data/maps/SpringOfWisdom/scripts.pory"
	dowildbattle
# 30 "data/maps/SpringOfWisdom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 31 "data/maps/SpringOfWisdom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SpringOfWisdom_EventScript_UxieBattle_2
# 34 "data/maps/SpringOfWisdom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SpringOfWisdom_EventScript_UxieBattle_3
# 37 "data/maps/SpringOfWisdom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SpringOfWisdom_EventScript_UxieBattle_4
# 40 "data/maps/SpringOfWisdom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SpringOfWisdom_EventScript_UxieBattle_5
SpringOfWisdom_EventScript_UxieBattle_1:
# 43 "data/maps/SpringOfWisdom/scripts.pory"
	waitmessage
# 44 "data/maps/SpringOfWisdom/scripts.pory"
	releaseall
	return

SpringOfWisdom_EventScript_UxieBattle_2:
# 32 "data/maps/SpringOfWisdom/scripts.pory"
	call Won_or_Caught
	goto SpringOfWisdom_EventScript_UxieBattle_1

SpringOfWisdom_EventScript_UxieBattle_3:
# 35 "data/maps/SpringOfWisdom/scripts.pory"
	call Won_or_Caught
	goto SpringOfWisdom_EventScript_UxieBattle_1

SpringOfWisdom_EventScript_UxieBattle_4:
# 38 "data/maps/SpringOfWisdom/scripts.pory"
	call RanAway
	goto SpringOfWisdom_EventScript_UxieBattle_1

SpringOfWisdom_EventScript_UxieBattle_5:
# 41 "data/maps/SpringOfWisdom/scripts.pory"
	call RanAway
	goto SpringOfWisdom_EventScript_UxieBattle_1


Won_or_Caught::
# 48 "data/maps/SpringOfWisdom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/SpringOfWisdom/scripts.pory"
	removeobject 1
# 50 "data/maps/SpringOfWisdom/scripts.pory"
	setflag FLAG_UXIE_CAUGHT
# 51 "data/maps/SpringOfWisdom/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


RanAway::
# 56 "data/maps/SpringOfWisdom/scripts.pory"
	playmoncry SPECIES_UXIE, CRY_MODE_ENCOUNTER
# 57 "data/maps/SpringOfWisdom/scripts.pory"
	msgbox RanAway_Text_0, MSGBOX_AUTOCLOSE
# 58 "data/maps/SpringOfWisdom/scripts.pory"
	waitmessage
# 59 "data/maps/SpringOfWisdom/scripts.pory"
	waitmoncry
# 60 "data/maps/SpringOfWisdom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/SpringOfWisdom/scripts.pory"
	removeobject 1
# 62 "data/maps/SpringOfWisdom/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


GoodRod::
# 67 "data/maps/SpringOfWisdom/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 68 "data/maps/SpringOfWisdom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
	return


SpringOfWisdom_EventScript_CheckUxieSpawn_Text_0:
# 10 "data/maps/SpringOfWisdom/scripts.pory"
	.string "Kyuun$"

SpringOfWisdom_EventScript_UxieBattle_Text_0:
# 25 "data/maps/SpringOfWisdom/scripts.pory"
	.string "Kyuuuuuun$"

RanAway_Text_0:
# 57 "data/maps/SpringOfWisdom/scripts.pory"
	.string "kyuun$"
