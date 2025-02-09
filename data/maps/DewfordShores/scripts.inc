DewfordShores_MapScripts::
	.byte 0


DewfordShores_EventScript_TeamAquaZapdos::
# 4 "data/maps/DewfordShores/scripts.pory"
	lockall
# 5 "data/maps/DewfordShores/scripts.pory"
	applymovement 13, TurnRight
# 6 "data/maps/DewfordShores/scripts.pory"
	waitmovement 13
# 7 "data/maps/DewfordShores/scripts.pory"
	applymovement 13, Common_Movement_ExclamationMark
# 8 "data/maps/DewfordShores/scripts.pory"
	waitmovement 13
# 9 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_TeamAquaZapdos_Text_0, MSGBOX_YESNO
# 10 "data/maps/DewfordShores/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DewfordShores_EventScript_TeamAquaZapdos_1
# 14 "data/maps/DewfordShores/scripts.pory"
	goto DewfordShores_EventScript_LetsHurry
	return

DewfordShores_EventScript_TeamAquaZapdos_1:
# 11 "data/maps/DewfordShores/scripts.pory"
	goto DewfordShores_EventScript_PlayerNotReady
	return


DewfordShores_EventScript_PlayerNotReady::
# 19 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_PlayerNotReady_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/DewfordShores/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerNotReady
# 21 "data/maps/DewfordShores/scripts.pory"
	applymovement 13, Common_Movement_FaceOriginalDirection
# 22 "data/maps/DewfordShores/scripts.pory"
	waitmovement 13
# 23 "data/maps/DewfordShores/scripts.pory"
	releaseall
	return


# 26 "data/maps/DewfordShores/scripts.pory"
TurnRight:
# 27 "data/maps/DewfordShores/scripts.pory"
	face_right
	step_end

# 30 "data/maps/DewfordShores/scripts.pory"
PlayerNotReady:
# 31 "data/maps/DewfordShores/scripts.pory"
	walk_fast_up
	step_end

DewfordShores_EventScript_LetsHurry::
# 35 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_LetsHurry_Text_0
# 36 "data/maps/DewfordShores/scripts.pory"
	addobject 1
# 37 "data/maps/DewfordShores/scripts.pory"
	addobject 2
# 38 "data/maps/DewfordShores/scripts.pory"
	addobject 3
# 39 "data/maps/DewfordShores/scripts.pory"
	addobject 4
# 40 "data/maps/DewfordShores/scripts.pory"
	addobject 6
# 41 "data/maps/DewfordShores/scripts.pory"
	addobject 7
# 42 "data/maps/DewfordShores/scripts.pory"
	addobject 8
# 43 "data/maps/DewfordShores/scripts.pory"
	addobject 9
# 44 "data/maps/DewfordShores/scripts.pory"
	addobject 10
# 45 "data/maps/DewfordShores/scripts.pory"
	addobject 11
# 46 "data/maps/DewfordShores/scripts.pory"
	addobject 12
# 47 "data/maps/DewfordShores/scripts.pory"
	waitmessage
# 48 "data/maps/DewfordShores/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChallengeTeamAqua1
# 49 "data/maps/DewfordShores/scripts.pory"
	applymovement 13, ChallengeTeamAquaAlina1
# 50 "data/maps/DewfordShores/scripts.pory"
	waitmovement 13
# 51 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_LetsHurry_Text_1
# 52 "data/maps/DewfordShores/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 53 "data/maps/DewfordShores/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 54 "data/maps/DewfordShores/scripts.pory"
	waitmovement 12
# 55 "data/maps/DewfordShores/scripts.pory"
	waitmovement 11
# 56 "data/maps/DewfordShores/scripts.pory"
	applymovement 12, FaceUp
# 57 "data/maps/DewfordShores/scripts.pory"
	applymovement 11, TurnRight
# 58 "data/maps/DewfordShores/scripts.pory"
	waitmovement 11
# 59 "data/maps/DewfordShores/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_DEWFORD_1, DewfordAqua1, DewfordAqua1Won, DewfordShores_EventScript_NextBattle
	return


# 62 "data/maps/DewfordShores/scripts.pory"
FaceUp:
# 63 "data/maps/DewfordShores/scripts.pory"
	face_up
	step_end

# 66 "data/maps/DewfordShores/scripts.pory"
ChallengeTeamAqua1:
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 67 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 68 "data/maps/DewfordShores/scripts.pory"
	walk_fast_right
# 69 "data/maps/DewfordShores/scripts.pory"
	face_down
	step_end

# 72 "data/maps/DewfordShores/scripts.pory"
ChallengeTeamAquaAlina1:
# 73 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 73 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 73 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 73 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 73 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 73 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 73 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 73 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 73 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 73 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 73 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 73 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 73 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 73 "data/maps/DewfordShores/scripts.pory"
	walk_fast_down
# 74 "data/maps/DewfordShores/scripts.pory"
	face_left
	step_end

DewfordShores_EventScript_NextBattle::
# 86 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_NextBattle_Text_0
# 87 "data/maps/DewfordShores/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChallengeTeamAqua2
# 88 "data/maps/DewfordShores/scripts.pory"
	applymovement 13, ChallengeTeamAquaAlina2
# 89 "data/maps/DewfordShores/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 90 "data/maps/DewfordShores/scripts.pory"
	applymovement 1, FaceUp
# 91 "data/maps/DewfordShores/scripts.pory"
	applymovement 3, FaceUp
# 92 "data/maps/DewfordShores/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_GRUNT_AQUA_DEWFORD_2, NotYouToo, TRAINER_GRUNT_AQUA_DEWFORD_3, Rats, TRAINER_ALINA_DEWFORD_SHORES
# 93 "data/maps/DewfordShores/scripts.pory"
	goto DewfordShores_EventScript_BrawlyHelps
	return


# 96 "data/maps/DewfordShores/scripts.pory"
ChallengeTeamAqua2:
# 97 "data/maps/DewfordShores/scripts.pory"
	walk_fast_up
# 97 "data/maps/DewfordShores/scripts.pory"
	walk_fast_up
# 97 "data/maps/DewfordShores/scripts.pory"
	walk_fast_up
# 98 "data/maps/DewfordShores/scripts.pory"
	walk_fast_left
# 98 "data/maps/DewfordShores/scripts.pory"
	walk_fast_left
# 98 "data/maps/DewfordShores/scripts.pory"
	walk_fast_left
# 98 "data/maps/DewfordShores/scripts.pory"
	walk_fast_left
# 99 "data/maps/DewfordShores/scripts.pory"
	face_down
	step_end

# 102 "data/maps/DewfordShores/scripts.pory"
ChallengeTeamAquaAlina2:
# 103 "data/maps/DewfordShores/scripts.pory"
	walk_faster_up
# 103 "data/maps/DewfordShores/scripts.pory"
	walk_faster_up
# 104 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 104 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 104 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 105 "data/maps/DewfordShores/scripts.pory"
	face_down
	step_end

DewfordShores_EventScript_BrawlyHelps::
# 117 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_BrawlyHelps_Text_0, MSGBOX_AUTOCLOSE
# 118 "data/maps/DewfordShores/scripts.pory"
	addobject 14
# 119 "data/maps/DewfordShores/scripts.pory"
	addobject 15
# 120 "data/maps/DewfordShores/scripts.pory"
	applymovement 14, BrawlyHelp
# 121 "data/maps/DewfordShores/scripts.pory"
	applymovement 15, WinonasHereToo
# 122 "data/maps/DewfordShores/scripts.pory"
	waitmovement 15
# 123 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_BrawlyHelps_Text_1
# 124 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_BrawlyHelps_Text_2
# 125 "data/maps/DewfordShores/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordShores_EventScript_BrawlyHelps_2
# 129 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_BrawlyHelps_Text_3
# 130 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_BrawlyHelps_Text_4
DewfordShores_EventScript_BrawlyHelps_1:
# 132 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_BrawlyHelps_Text_5
# 133 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_BrawlyHelps_Text_6
# 134 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_BrawlyHelps_Text_7
# 135 "data/maps/DewfordShores/scripts.pory"
	waitmessage
# 136 "data/maps/DewfordShores/scripts.pory"
	fadescreen FADE_TO_BLACK
# 137 "data/maps/DewfordShores/scripts.pory"
	removeobject 1
# 138 "data/maps/DewfordShores/scripts.pory"
	removeobject 2
# 139 "data/maps/DewfordShores/scripts.pory"
	removeobject 3
# 140 "data/maps/DewfordShores/scripts.pory"
	removeobject 4
# 141 "data/maps/DewfordShores/scripts.pory"
	removeobject 6
# 142 "data/maps/DewfordShores/scripts.pory"
	removeobject 7
# 143 "data/maps/DewfordShores/scripts.pory"
	removeobject 8
# 144 "data/maps/DewfordShores/scripts.pory"
	removeobject 9
# 145 "data/maps/DewfordShores/scripts.pory"
	removeobject 10
# 146 "data/maps/DewfordShores/scripts.pory"
	removeobject 11
# 147 "data/maps/DewfordShores/scripts.pory"
	removeobject 12
# 148 "data/maps/DewfordShores/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 149 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_BrawlyHelps_Text_8
# 150 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_BrawlyHelps_Text_9
# 151 "data/maps/DewfordShores/scripts.pory"
	applymovement 15, BrawlyandWinonaLeave
# 152 "data/maps/DewfordShores/scripts.pory"
	applymovement 14, BrawlyandWinonaLeave
# 153 "data/maps/DewfordShores/scripts.pory"
	waitmovement 14
# 154 "data/maps/DewfordShores/scripts.pory"
	removeobject 14
# 155 "data/maps/DewfordShores/scripts.pory"
	removeobject 15
# 156 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_BrawlyHelps_Text_10
# 157 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_BrawlyHelps_Text_11
# 158 "data/maps/DewfordShores/scripts.pory"
	waitmessage
# 159 "data/maps/DewfordShores/scripts.pory"
	fadescreen FADE_TO_BLACK
# 160 "data/maps/DewfordShores/scripts.pory"
	setvar VAR_DEWFORD_SHORES, 1
# 161 "data/maps/DewfordShores/scripts.pory"
	setflag FLAG_DEWFORD_SHORES_EVENT
# 162 "data/maps/DewfordShores/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 163 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_BrawlyHelps_Text_12, MSGBOX_YESNO
# 164 "data/maps/DewfordShores/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DewfordShores_EventScript_BrawlyHelps_5
# 168 "data/maps/DewfordShores/scripts.pory"
	trainerbattle_single TRAINER_ALINA_DEWFORD_SHORES, ImGonnaWin, YouReallyAreStrong
	return

DewfordShores_EventScript_BrawlyHelps_2:
# 126 "data/maps/DewfordShores/scripts.pory"
	goto YouHaveBadge
	goto DewfordShores_EventScript_BrawlyHelps_1

DewfordShores_EventScript_BrawlyHelps_5:
# 165 "data/maps/DewfordShores/scripts.pory"
	goto DewfordShores_EventScript_AlinaWantsToBattle3
	return


# 171 "data/maps/DewfordShores/scripts.pory"
BrawlyHelp:
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 172 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 173 "data/maps/DewfordShores/scripts.pory"
	walk_faster_down
# 173 "data/maps/DewfordShores/scripts.pory"
	walk_faster_down
# 173 "data/maps/DewfordShores/scripts.pory"
	walk_faster_down
# 173 "data/maps/DewfordShores/scripts.pory"
	walk_faster_down
# 173 "data/maps/DewfordShores/scripts.pory"
	walk_faster_down
# 173 "data/maps/DewfordShores/scripts.pory"
	walk_faster_down
	step_end

# 176 "data/maps/DewfordShores/scripts.pory"
WinonasHereToo:
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 177 "data/maps/DewfordShores/scripts.pory"
	walk_faster_left
# 178 "data/maps/DewfordShores/scripts.pory"
	walk_faster_down
# 178 "data/maps/DewfordShores/scripts.pory"
	walk_faster_down
# 178 "data/maps/DewfordShores/scripts.pory"
	walk_faster_down
# 178 "data/maps/DewfordShores/scripts.pory"
	walk_faster_down
# 178 "data/maps/DewfordShores/scripts.pory"
	walk_faster_down
# 178 "data/maps/DewfordShores/scripts.pory"
	walk_faster_down
	step_end

# 181 "data/maps/DewfordShores/scripts.pory"
BrawlyandWinonaLeave:
# 182 "data/maps/DewfordShores/scripts.pory"
	walk_right
# 182 "data/maps/DewfordShores/scripts.pory"
	walk_right
# 182 "data/maps/DewfordShores/scripts.pory"
	walk_right
# 183 "data/maps/DewfordShores/scripts.pory"
	walk_up
# 183 "data/maps/DewfordShores/scripts.pory"
	walk_up
# 183 "data/maps/DewfordShores/scripts.pory"
	walk_up
# 183 "data/maps/DewfordShores/scripts.pory"
	walk_up
# 183 "data/maps/DewfordShores/scripts.pory"
	walk_up
# 183 "data/maps/DewfordShores/scripts.pory"
	walk_up
# 183 "data/maps/DewfordShores/scripts.pory"
	walk_up
# 183 "data/maps/DewfordShores/scripts.pory"
	walk_up
# 183 "data/maps/DewfordShores/scripts.pory"
	walk_up
# 183 "data/maps/DewfordShores/scripts.pory"
	walk_up
	step_end

DewfordShores_EventScript_AlinaWantsToBattle::
# 187 "data/maps/DewfordShores/scripts.pory"
	lockall
# 188 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_AlinaWantsToBattle_Text_0, MSGBOX_YESNO
# 189 "data/maps/DewfordShores/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DewfordShores_EventScript_AlinaWantsToBattle_1
# 193 "data/maps/DewfordShores/scripts.pory"
	trainerbattle_single TRAINER_ALINA_DEWFORD_SHORES, ImGonnaWin, YouReallyAreStrong
	return

DewfordShores_EventScript_AlinaWantsToBattle_1:
# 190 "data/maps/DewfordShores/scripts.pory"
	goto DewfordShores_EventScript_AlinaWantsToBattle2
	return


NULL::
	return


DewfordShores_EventScript_AlinaWantsToBattle2::
# 207 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_AlinaWantsToBattle2_Text_0
# 208 "data/maps/DewfordShores/scripts.pory"
	releaseall
	return


YouHaveBadge::
# 212 "data/maps/DewfordShores/scripts.pory"
	msgbox YouHaveBadge_Text_0
	return


DewfordShores_EventScript_AlinaWantsToBattle3::
# 217 "data/maps/DewfordShores/scripts.pory"
	msgbox DewfordShores_EventScript_AlinaWantsToBattle3_Text_0
# 218 "data/maps/DewfordShores/scripts.pory"
	releaseall
	return


ZapdosBattle::
# 222 "data/maps/DewfordShores/scripts.pory"
	lockall
# 223 "data/maps/DewfordShores/scripts.pory"
	msgbox ZapdosBattle_Text_0
# 224 "data/maps/DewfordShores/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 225 "data/maps/DewfordShores/scripts.pory"
	waitmessage
# 226 "data/maps/DewfordShores/scripts.pory"
	waitmoncry
# 227 "data/maps/DewfordShores/scripts.pory"
	setwildbattle SPECIES_ZAPDOS, 50, ITEM_NONE
# 228 "data/maps/DewfordShores/scripts.pory"
	dowildbattle
# 229 "data/maps/DewfordShores/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 230 "data/maps/DewfordShores/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ZapdosBattle_2
# 233 "data/maps/DewfordShores/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ZapdosBattle_3
# 236 "data/maps/DewfordShores/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ZapdosBattle_4
# 239 "data/maps/DewfordShores/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq ZapdosBattle_5
ZapdosBattle_1:
# 242 "data/maps/DewfordShores/scripts.pory"
	waitmessage
# 243 "data/maps/DewfordShores/scripts.pory"
	releaseall
	return

ZapdosBattle_2:
# 231 "data/maps/DewfordShores/scripts.pory"
	call Won_or_Caught2
	goto ZapdosBattle_1

ZapdosBattle_3:
# 234 "data/maps/DewfordShores/scripts.pory"
	call Won_or_Caught2
	goto ZapdosBattle_1

ZapdosBattle_4:
# 237 "data/maps/DewfordShores/scripts.pory"
	call RanAway2
	goto ZapdosBattle_1

ZapdosBattle_5:
# 240 "data/maps/DewfordShores/scripts.pory"
	call RanAway2
	goto ZapdosBattle_1


Won_or_Caught2::
# 248 "data/maps/DewfordShores/scripts.pory"
	fadescreen FADE_TO_BLACK
# 249 "data/maps/DewfordShores/scripts.pory"
	removeobject 5
# 250 "data/maps/DewfordShores/scripts.pory"
	setflag FLAG_ZAPDOS
# 251 "data/maps/DewfordShores/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


RanAway2::
# 256 "data/maps/DewfordShores/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 257 "data/maps/DewfordShores/scripts.pory"
	msgbox RanAway2_Text_0, MSGBOX_AUTOCLOSE
# 258 "data/maps/DewfordShores/scripts.pory"
	waitmessage
# 259 "data/maps/DewfordShores/scripts.pory"
	waitmoncry
# 260 "data/maps/DewfordShores/scripts.pory"
	fadescreen FADE_TO_BLACK
# 261 "data/maps/DewfordShores/scripts.pory"
	setflag FLAG_ZAPDOS
# 262 "data/maps/DewfordShores/scripts.pory"
	removeobject 5
# 263 "data/maps/DewfordShores/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


DewfordShores_EventScript_TeamAquaZapdos_Text_0:
# 9 "data/maps/DewfordShores/scripts.pory"
	.string "(???) You! You can help! Team Aqua's\n"
	.string "going after that POKéMON! Are you\l"
	.string "ready for a fight?$"

DewfordShores_EventScript_PlayerNotReady_Text_0:
# 19 "data/maps/DewfordShores/scripts.pory"
	.string "Okay, then hurry back, we have to do\n"
	.string "something!$"

DewfordShores_EventScript_LetsHurry_Text_0:
# 35 "data/maps/DewfordShores/scripts.pory"
	.string "Good, then let's go!$"

DewfordShores_EventScript_LetsHurry_Text_1:
# 51 "data/maps/DewfordShores/scripts.pory"
	.string "You take the one over there, I'll cover\n"
	.string "this one.$"

DewfordShores_EventScript_NextBattle_Text_0:
# 86 "data/maps/DewfordShores/scripts.pory"
	.string "(???) We beat these two, onto the next!$"

DewfordShores_EventScript_BrawlyHelps_Text_0:
# 117 "data/maps/DewfordShores/scripts.pory"
	.string "Hold it!$"

DewfordShores_EventScript_BrawlyHelps_Text_1:
# 123 "data/maps/DewfordShores/scripts.pory"
	.string "(Brawly) I saw the storm and called some\n"
	.string "backup, I was not expecting to see two\l"
	.string "children rushing into battle$"

DewfordShores_EventScript_BrawlyHelps_Text_2:
# 124 "data/maps/DewfordShores/scripts.pory"
	.string "(Winona) The winds may take you where\n"
	.string "they go, but you must be careful$"

DewfordShores_EventScript_BrawlyHelps_Text_3:
# 129 "data/maps/DewfordShores/scripts.pory"
	.string "(Brawly) I don't know who you are, but\n"
	.string "with that strength, you should\l"
	.string "challenge my gym!$"

DewfordShores_EventScript_BrawlyHelps_Text_4:
# 130 "data/maps/DewfordShores/scripts.pory"
	.string "(Winona) Cool it, Brawly$"

DewfordShores_EventScript_BrawlyHelps_Text_5:
# 132 "data/maps/DewfordShores/scripts.pory"
	.string "(Brawly) Regardless, I expected more\n"
	.string "from you Alina. But then again, it may be\l"
	.string "time you challenge my gym.$"

DewfordShores_EventScript_BrawlyHelps_Text_6:
# 133 "data/maps/DewfordShores/scripts.pory"
	.string "The rest of you...$"

DewfordShores_EventScript_BrawlyHelps_Text_7:
# 134 "data/maps/DewfordShores/scripts.pory"
	.string "SCRAM! Surely you can't think you're\n"
	.string "strong enough to defeat two gym\l"
	.string "leaders!$"

DewfordShores_EventScript_BrawlyHelps_Text_8:
# 149 "data/maps/DewfordShores/scripts.pory"
	.string "There, I think our work is done, thanks\n"
	.string "Winona!$"

DewfordShores_EventScript_BrawlyHelps_Text_9:
# 150 "data/maps/DewfordShores/scripts.pory"
	.string "(Winona) Zapdos still suffers, we should\n"
	.string "leave this place...$"

DewfordShores_EventScript_BrawlyHelps_Text_10:
# 156 "data/maps/DewfordShores/scripts.pory"
	.string "(???) Thank goodness they came when\n"
	.string "they did, I wasn't sure how many more I\l"
	.string "could battle! Oh! By the way, I'm Alina,\l"
	.string "I'm from Dewford.$"

DewfordShores_EventScript_BrawlyHelps_Text_11:
# 157 "data/maps/DewfordShores/scripts.pory"
	.string "(Alina) Wait a second...I'll be right back$"

DewfordShores_EventScript_BrawlyHelps_Text_12:
# 163 "data/maps/DewfordShores/scripts.pory"
	.string "So, now that that's all over, wanna\n"
	.string "battle me?$"

DewfordShores_EventScript_AlinaWantsToBattle_Text_0:
# 188 "data/maps/DewfordShores/scripts.pory"
	.string "So, have you changed your mind?$"

DewfordShores_EventScript_AlinaWantsToBattle2_Text_0:
# 207 "data/maps/DewfordShores/scripts.pory"
	.string "Alright, I'll still be here!$"

YouHaveBadge_Text_0:
# 212 "data/maps/DewfordShores/scripts.pory"
	.string "(Brawly) I know you got my badge, but that doesn't mean run into trouble!$"

DewfordShores_EventScript_AlinaWantsToBattle3_Text_0:
# 217 "data/maps/DewfordShores/scripts.pory"
	.string "Okay, but I'll be here if you change your\n"
	.string "mind$"

ZapdosBattle_Text_0:
# 223 "data/maps/DewfordShores/scripts.pory"
	.string "CAWWW$"

RanAway2_Text_0:
# 257 "data/maps/DewfordShores/scripts.pory"
	.string "...$"

DewfordAqua1::
# 77 "data/maps/DewfordShores/scripts.pory"
	.string "You have some nerve tryna mess with our\n"
	.string "plans!$"

DewfordAqua1Won::
# 81 "data/maps/DewfordShores/scripts.pory"
	.string "Now my friends here can finish you off!$"

NotYouToo::
# 108 "data/maps/DewfordShores/scripts.pory"
	.string "Don't tell me I lost too...$"

Rats::
# 112 "data/maps/DewfordShores/scripts.pory"
	.string "Rats, I lost...$"

ImGonnaWin::
# 196 "data/maps/DewfordShores/scripts.pory"
	.string "I'm gonna win this!$"

YouReallyAreStrong::
# 200 "data/maps/DewfordShores/scripts.pory"
	.string "You really are strong! No wonder you\n"
	.string "beat those grunts!$"
