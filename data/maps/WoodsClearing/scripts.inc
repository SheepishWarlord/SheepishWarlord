WoodsClearing_MapScripts::
	.byte 0


WoodsClearing_EventScript_ShayminBattle::
# 6 "data/maps/WoodsClearing/scripts.pory"
	lockall
# 7 "data/maps/WoodsClearing/scripts.pory"
	msgbox WoodsClearing_EventScript_ShayminBattle_Text_0
# 8 "data/maps/WoodsClearing/scripts.pory"
	playmoncry SPECIES_SHAYMIN, CRY_MODE_ENCOUNTER
# 9 "data/maps/WoodsClearing/scripts.pory"
	waitmessage
# 10 "data/maps/WoodsClearing/scripts.pory"
	waitmoncry
# 11 "data/maps/WoodsClearing/scripts.pory"
	setwildbattle SPECIES_SHAYMIN, 40, ITEM_NONE
# 12 "data/maps/WoodsClearing/scripts.pory"
	dowildbattle
# 13 "data/maps/WoodsClearing/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/WoodsClearing/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq WoodsClearing_EventScript_ShayminBattle_2
# 17 "data/maps/WoodsClearing/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq WoodsClearing_EventScript_ShayminBattle_3
# 20 "data/maps/WoodsClearing/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq WoodsClearing_EventScript_ShayminBattle_4
# 23 "data/maps/WoodsClearing/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq WoodsClearing_EventScript_ShayminBattle_5
WoodsClearing_EventScript_ShayminBattle_1:
# 26 "data/maps/WoodsClearing/scripts.pory"
	waitmessage
# 27 "data/maps/WoodsClearing/scripts.pory"
	releaseall
	return

WoodsClearing_EventScript_ShayminBattle_2:
# 15 "data/maps/WoodsClearing/scripts.pory"
	call Won_or_Caught0
	goto WoodsClearing_EventScript_ShayminBattle_1

WoodsClearing_EventScript_ShayminBattle_3:
# 18 "data/maps/WoodsClearing/scripts.pory"
	call Won_or_Caught0
	goto WoodsClearing_EventScript_ShayminBattle_1

WoodsClearing_EventScript_ShayminBattle_4:
# 21 "data/maps/WoodsClearing/scripts.pory"
	call RanAway0
	goto WoodsClearing_EventScript_ShayminBattle_1

WoodsClearing_EventScript_ShayminBattle_5:
# 24 "data/maps/WoodsClearing/scripts.pory"
	call RanAway0
	goto WoodsClearing_EventScript_ShayminBattle_1


Won_or_Caught0::
# 32 "data/maps/WoodsClearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 33 "data/maps/WoodsClearing/scripts.pory"
	removeobject 1
# 34 "data/maps/WoodsClearing/scripts.pory"
	setvar VAR_SHAYMIN, 2
# 35 "data/maps/WoodsClearing/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


RanAway0::
# 40 "data/maps/WoodsClearing/scripts.pory"
	playmoncry SPECIES_SHAYMIN, CRY_MODE_ENCOUNTER
# 41 "data/maps/WoodsClearing/scripts.pory"
	msgbox RanAway0_Text_0, MSGBOX_AUTOCLOSE
# 42 "data/maps/WoodsClearing/scripts.pory"
	waitmessage
# 43 "data/maps/WoodsClearing/scripts.pory"
	waitmoncry
# 44 "data/maps/WoodsClearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/WoodsClearing/scripts.pory"
	setvar VAR_SHAYMIN, 3
# 46 "data/maps/WoodsClearing/scripts.pory"
	removeobject 1
# 47 "data/maps/WoodsClearing/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


SHAYMIN::
# 52 "data/maps/WoodsClearing/scripts.pory"
	lockall
# 53 "data/maps/WoodsClearing/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, SHAYMIN_2
# 60 "data/maps/WoodsClearing/scripts.pory"
	setflag FLAG_TEMP_1
SHAYMIN_1:
# 62 "data/maps/WoodsClearing/scripts.pory"
	releaseall
	return

SHAYMIN_2:
# 54 "data/maps/WoodsClearing/scripts.pory"
	setvar VAR_SHAYMIN, 1
# 55 "data/maps/WoodsClearing/scripts.pory"
	msgbox RanAway0_Text_0, MSGBOX_AUTOCLOSE
# 56 "data/maps/WoodsClearing/scripts.pory"
	playmoncry SPECIES_SHAYMIN, CRY_MODE_ENCOUNTER
	goto SHAYMIN_1


WoodsClearing_EventScript_ShayminBattle_Text_0:
# 7 "data/maps/WoodsClearing/scripts.pory"
	.string "Shayminmin!$"

RanAway0_Text_0:
# 41 "data/maps/WoodsClearing/scripts.pory"
	.string "kew$"
