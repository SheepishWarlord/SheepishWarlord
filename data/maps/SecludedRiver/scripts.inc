SecludedRiver_EventScript_SuicuneBattle::
# 4 "data/maps/SecludedRiver/scripts.pory"
	lockall
# 5 "data/maps/SecludedRiver/scripts.pory"
	msgbox SecludedRiver_EventScript_SuicuneBattle_Text_0
# 6 "data/maps/SecludedRiver/scripts.pory"
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
# 7 "data/maps/SecludedRiver/scripts.pory"
	waitmessage
# 8 "data/maps/SecludedRiver/scripts.pory"
	waitmoncry
# 9 "data/maps/SecludedRiver/scripts.pory"
	setwildbattle SPECIES_SUICUNE, 60, ITEM_NONE
# 10 "data/maps/SecludedRiver/scripts.pory"
	dowildbattle
# 11 "data/maps/SecludedRiver/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 12 "data/maps/SecludedRiver/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SecludedRiver_EventScript_SuicuneBattle_2
# 15 "data/maps/SecludedRiver/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SecludedRiver_EventScript_SuicuneBattle_3
# 18 "data/maps/SecludedRiver/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq SecludedRiver_EventScript_SuicuneBattle_4
# 21 "data/maps/SecludedRiver/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq SecludedRiver_EventScript_SuicuneBattle_5
SecludedRiver_EventScript_SuicuneBattle_1:
# 24 "data/maps/SecludedRiver/scripts.pory"
	waitmessage
# 25 "data/maps/SecludedRiver/scripts.pory"
	releaseall
	return

SecludedRiver_EventScript_SuicuneBattle_2:
# 13 "data/maps/SecludedRiver/scripts.pory"
	call Won_or_caught4
	goto SecludedRiver_EventScript_SuicuneBattle_1

SecludedRiver_EventScript_SuicuneBattle_3:
# 16 "data/maps/SecludedRiver/scripts.pory"
	call Won_or_caught4
	goto SecludedRiver_EventScript_SuicuneBattle_1

SecludedRiver_EventScript_SuicuneBattle_4:
# 19 "data/maps/SecludedRiver/scripts.pory"
	call Ranaway4
	goto SecludedRiver_EventScript_SuicuneBattle_1

SecludedRiver_EventScript_SuicuneBattle_5:
# 22 "data/maps/SecludedRiver/scripts.pory"
	call Ranaway4
	goto SecludedRiver_EventScript_SuicuneBattle_1


Won_or_caught4::
# 30 "data/maps/SecludedRiver/scripts.pory"
	fadescreen FADE_TO_BLACK
# 31 "data/maps/SecludedRiver/scripts.pory"
	removeobject 3
# 32 "data/maps/SecludedRiver/scripts.pory"
	setflag FLAG_SUICUNE
# 33 "data/maps/SecludedRiver/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


Ranaway4::
# 38 "data/maps/SecludedRiver/scripts.pory"
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
# 39 "data/maps/SecludedRiver/scripts.pory"
	msgbox Ranaway4_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/SecludedRiver/scripts.pory"
	waitmessage
# 41 "data/maps/SecludedRiver/scripts.pory"
	waitmoncry
# 42 "data/maps/SecludedRiver/scripts.pory"
	fadescreen FADE_TO_BLACK
# 43 "data/maps/SecludedRiver/scripts.pory"
	setflag FLAG_SUICUNE
# 44 "data/maps/SecludedRiver/scripts.pory"
	removeobject 3
# 45 "data/maps/SecludedRiver/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


# 53 "data/maps/SecludedRiver/scripts.pory"

# 54 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_MapScripts::
# 55 "data/maps/SecludedRiver/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SecludedRiver_OnTransition
# 56 "data/maps/SecludedRiver/scripts.pory"
	.byte 0
# 57 "data/maps/SecludedRiver/scripts.pory"

# 58 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_OnTransition:
# 59 "data/maps/SecludedRiver/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 60 "data/maps/SecludedRiver/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 61 "data/maps/SecludedRiver/scripts.pory"
	end
# 62 "data/maps/SecludedRiver/scripts.pory"

# 63 "data/maps/SecludedRiver/scripts.pory"
.set LOCALID_RIVAL, 2
# 64 "data/maps/SecludedRiver/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 1
# 65 "data/maps/SecludedRiver/scripts.pory"

# 66 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_RivalTrigger1::
# 67 "data/maps/SecludedRiver/scripts.pory"
	setvar VAR_0x8008, 1
# 68 "data/maps/SecludedRiver/scripts.pory"
	goto SecludedRiver_EventScript_RivalScene
# 69 "data/maps/SecludedRiver/scripts.pory"
	end
# 70 "data/maps/SecludedRiver/scripts.pory"

# 71 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_RivalTrigger2::
# 72 "data/maps/SecludedRiver/scripts.pory"
	setvar VAR_0x8008, 2
# 73 "data/maps/SecludedRiver/scripts.pory"
	goto SecludedRiver_EventScript_RivalScene
# 74 "data/maps/SecludedRiver/scripts.pory"
	end
# 75 "data/maps/SecludedRiver/scripts.pory"

# 76 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_RivalTrigger3::
# 77 "data/maps/SecludedRiver/scripts.pory"
	setvar VAR_0x8008, 3
# 78 "data/maps/SecludedRiver/scripts.pory"
	goto SecludedRiver_EventScript_RivalScene
# 79 "data/maps/SecludedRiver/scripts.pory"
	end
# 80 "data/maps/SecludedRiver/scripts.pory"

# 81 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_RivalScene::
# 82 "data/maps/SecludedRiver/scripts.pory"
	lockall
# 83 "data/maps/SecludedRiver/scripts.pory"
	checkplayergender
# 84 "data/maps/SecludedRiver/scripts.pory"
	call_if_eq VAR_RESULT, MALE, SecludedRiver_EventScript_PlayMayMusic
# 85 "data/maps/SecludedRiver/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, SecludedRiver_EventScript_PlayBrendanMusic
# 86 "data/maps/SecludedRiver/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 87 "data/maps/SecludedRiver/scripts.pory"
	waitmovement 0
# 88 "data/maps/SecludedRiver/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 89 "data/maps/SecludedRiver/scripts.pory"
	waitmovement 0
# 90 "data/maps/SecludedRiver/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 91 "data/maps/SecludedRiver/scripts.pory"
	waitmovement 0
# 92 "data/maps/SecludedRiver/scripts.pory"
	delay 30
# 93 "data/maps/SecludedRiver/scripts.pory"
	call_if_eq VAR_0x8008, 1, SecludedRiver_EventScript_RivalApproachPlayer1
# 94 "data/maps/SecludedRiver/scripts.pory"
	call_if_eq VAR_0x8008, 2, SecludedRiver_EventScript_RivalApproachPlayer2
# 95 "data/maps/SecludedRiver/scripts.pory"
	call_if_eq VAR_0x8008, 3, SecludedRiver_EventScript_RivalApproachPlayer3
# 96 "data/maps/SecludedRiver/scripts.pory"
	checkplayergender
# 97 "data/maps/SecludedRiver/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecludedRiver_EventScript_MayBattle
# 98 "data/maps/SecludedRiver/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SecludedRiver_EventScript_BrendanBattle
# 99 "data/maps/SecludedRiver/scripts.pory"
	releaseall
# 100 "data/maps/SecludedRiver/scripts.pory"
	end
# 101 "data/maps/SecludedRiver/scripts.pory"

# 102 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_PlayMayMusic::
# 103 "data/maps/SecludedRiver/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 104 "data/maps/SecludedRiver/scripts.pory"
	return
# 105 "data/maps/SecludedRiver/scripts.pory"

# 106 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_PlayBrendanMusic::
# 107 "data/maps/SecludedRiver/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 108 "data/maps/SecludedRiver/scripts.pory"
	return
# 109 "data/maps/SecludedRiver/scripts.pory"

# 110 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_MayBattle::
# 111 "data/maps/SecludedRiver/scripts.pory"
	msgbox SecludedRiver_Text_MayLetsBattle, MSGBOX_DEFAULT
# 112 "data/maps/SecludedRiver/scripts.pory"
	switch VAR_STARTER_MON
# 113 "data/maps/SecludedRiver/scripts.pory"
	case 0, SecludedRiver_EventScript_MayBattleTreecko
# 114 "data/maps/SecludedRiver/scripts.pory"
	case 1, SecludedRiver_EventScript_MayBattleTorchic
# 115 "data/maps/SecludedRiver/scripts.pory"
	case 2, SecludedRiver_EventScript_MayBattleMudkip
# 116 "data/maps/SecludedRiver/scripts.pory"
	end
# 117 "data/maps/SecludedRiver/scripts.pory"

# 118 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_MayBattleTreecko::
# 119 "data/maps/SecludedRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, SecludedRiver_Text_MayDefeated
# 120 "data/maps/SecludedRiver/scripts.pory"
	goto SecludedRiver_EventScript_MayDefeated
# 121 "data/maps/SecludedRiver/scripts.pory"
	end
# 122 "data/maps/SecludedRiver/scripts.pory"

# 123 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_MayBattleTorchic::
# 124 "data/maps/SecludedRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, SecludedRiver_Text_MayDefeated
# 125 "data/maps/SecludedRiver/scripts.pory"
	goto SecludedRiver_EventScript_MayDefeated
# 126 "data/maps/SecludedRiver/scripts.pory"
	end
# 127 "data/maps/SecludedRiver/scripts.pory"

# 128 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_MayBattleMudkip::
# 129 "data/maps/SecludedRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, SecludedRiver_Text_MayDefeated
# 130 "data/maps/SecludedRiver/scripts.pory"
	goto SecludedRiver_EventScript_MayDefeated
# 131 "data/maps/SecludedRiver/scripts.pory"
	end
# 132 "data/maps/SecludedRiver/scripts.pory"

# 133 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_MayDefeated::
# 134 "data/maps/SecludedRiver/scripts.pory"
	msgbox SecludedRiver_Text_MayTakeThis, MSGBOX_DEFAULT
# 135 "data/maps/SecludedRiver/scripts.pory"
	call SecludedRiver_EventScript_GiveItemfinder
# 136 "data/maps/SecludedRiver/scripts.pory"
	msgbox SecludedRiver_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 137 "data/maps/SecludedRiver/scripts.pory"
	goto SecludedRiver_EventScript_RivalExit
# 138 "data/maps/SecludedRiver/scripts.pory"
	end
# 139 "data/maps/SecludedRiver/scripts.pory"

# 140 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_BrendanBattle::
# 141 "data/maps/SecludedRiver/scripts.pory"
	msgbox SecludedRiver_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 142 "data/maps/SecludedRiver/scripts.pory"
	switch VAR_STARTER_MON
# 143 "data/maps/SecludedRiver/scripts.pory"
	case 0, SecludedRiver_EventScript_BrendanBattleTreecko
# 144 "data/maps/SecludedRiver/scripts.pory"
	case 1, SecludedRiver_EventScript_BrendanBattleTorchic
# 145 "data/maps/SecludedRiver/scripts.pory"
	case 2, SecludedRiver_EventScript_BrendanBattleMudkip
# 146 "data/maps/SecludedRiver/scripts.pory"
	end
# 147 "data/maps/SecludedRiver/scripts.pory"

# 148 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_BrendanBattleTreecko::
# 149 "data/maps/SecludedRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, SecludedRiver_Text_BrendanDefeated
# 150 "data/maps/SecludedRiver/scripts.pory"
	goto SecludedRiver_EventScript_BrendanDefeated
# 151 "data/maps/SecludedRiver/scripts.pory"
	end
# 152 "data/maps/SecludedRiver/scripts.pory"

# 153 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_BrendanBattleTorchic::
# 154 "data/maps/SecludedRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, SecludedRiver_Text_BrendanDefeated
# 155 "data/maps/SecludedRiver/scripts.pory"
	goto SecludedRiver_EventScript_BrendanDefeated
# 156 "data/maps/SecludedRiver/scripts.pory"
	end
# 157 "data/maps/SecludedRiver/scripts.pory"

# 158 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_BrendanBattleMudkip::
# 159 "data/maps/SecludedRiver/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, SecludedRiver_Text_BrendanDefeated
# 160 "data/maps/SecludedRiver/scripts.pory"
	goto SecludedRiver_EventScript_BrendanDefeated
# 161 "data/maps/SecludedRiver/scripts.pory"
	end
# 162 "data/maps/SecludedRiver/scripts.pory"

# 163 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_BrendanDefeated::
# 164 "data/maps/SecludedRiver/scripts.pory"
	msgbox SecludedRiver_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 165 "data/maps/SecludedRiver/scripts.pory"
	call SecludedRiver_EventScript_GiveItemfinder
# 166 "data/maps/SecludedRiver/scripts.pory"
	msgbox SecludedRiver_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 167 "data/maps/SecludedRiver/scripts.pory"
	goto SecludedRiver_EventScript_RivalExit
# 168 "data/maps/SecludedRiver/scripts.pory"
	end
# 169 "data/maps/SecludedRiver/scripts.pory"

# 170 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_GiveItemfinder::
# 171 "data/maps/SecludedRiver/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 172 "data/maps/SecludedRiver/scripts.pory"
	return
# 173 "data/maps/SecludedRiver/scripts.pory"

# 174 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_RivalExit::
# 175 "data/maps/SecludedRiver/scripts.pory"
	closemessage
# 176 "data/maps/SecludedRiver/scripts.pory"
	call_if_eq VAR_0x8008, 1, SecludedRiver_EventScript_MoveRival1
# 177 "data/maps/SecludedRiver/scripts.pory"
	call_if_eq VAR_0x8008, 2, SecludedRiver_EventScript_MoveRival2
# 178 "data/maps/SecludedRiver/scripts.pory"
	call_if_eq VAR_0x8008, 3, SecludedRiver_EventScript_MoveRival3
# 179 "data/maps/SecludedRiver/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 180 "data/maps/SecludedRiver/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 181 "data/maps/SecludedRiver/scripts.pory"
	removeobject LOCALID_RIVAL
# 182 "data/maps/SecludedRiver/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 183 "data/maps/SecludedRiver/scripts.pory"
	delay 45
# 184 "data/maps/SecludedRiver/scripts.pory"
	call_if_eq VAR_0x8008, 1, SecludedRiver_EventScript_RivalExit1
# 185 "data/maps/SecludedRiver/scripts.pory"
	call_if_eq VAR_0x8008, 2, SecludedRiver_EventScript_RivalExit2
# 186 "data/maps/SecludedRiver/scripts.pory"
	call_if_eq VAR_0x8008, 3, SecludedRiver_EventScript_RivalExit3
# 187 "data/maps/SecludedRiver/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 188 "data/maps/SecludedRiver/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 189 "data/maps/SecludedRiver/scripts.pory"
	savebgm MUS_DUMMY
# 190 "data/maps/SecludedRiver/scripts.pory"
	fadedefaultbgm
# 191 "data/maps/SecludedRiver/scripts.pory"
	releaseall
# 192 "data/maps/SecludedRiver/scripts.pory"
	end
# 193 "data/maps/SecludedRiver/scripts.pory"

# 194 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_RivalApproachPlayer1::
# 195 "data/maps/SecludedRiver/scripts.pory"
	applymovement LOCALID_RIVAL, SecludedRiver_Movement_RivalApproachPlayer1
# 196 "data/maps/SecludedRiver/scripts.pory"
	waitmovement 0
# 197 "data/maps/SecludedRiver/scripts.pory"
	return
# 198 "data/maps/SecludedRiver/scripts.pory"

# 199 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_RivalApproachPlayer2::
# 200 "data/maps/SecludedRiver/scripts.pory"
	applymovement LOCALID_RIVAL, SecludedRiver_Movement_RivalApproachPlayer2
# 201 "data/maps/SecludedRiver/scripts.pory"
	waitmovement 0
# 202 "data/maps/SecludedRiver/scripts.pory"
	return
# 203 "data/maps/SecludedRiver/scripts.pory"

# 204 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_RivalApproachPlayer3::
# 205 "data/maps/SecludedRiver/scripts.pory"
	applymovement LOCALID_RIVAL, SecludedRiver_Movement_RivalApproachPlayer3
# 206 "data/maps/SecludedRiver/scripts.pory"
	waitmovement 0
# 207 "data/maps/SecludedRiver/scripts.pory"
	return
# 208 "data/maps/SecludedRiver/scripts.pory"

# 209 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_RivalExit1::
# 210 "data/maps/SecludedRiver/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, SecludedRiver_Movement_RivalExit1
# 211 "data/maps/SecludedRiver/scripts.pory"
	waitmovement 0
# 212 "data/maps/SecludedRiver/scripts.pory"
	return
# 213 "data/maps/SecludedRiver/scripts.pory"

# 214 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_RivalExit2::
# 215 "data/maps/SecludedRiver/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, SecludedRiver_Movement_RivalExit2
# 216 "data/maps/SecludedRiver/scripts.pory"
	waitmovement 0
# 217 "data/maps/SecludedRiver/scripts.pory"
	return
# 218 "data/maps/SecludedRiver/scripts.pory"

# 219 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_RivalExit3::
# 220 "data/maps/SecludedRiver/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, SecludedRiver_Movement_RivalExit3
# 221 "data/maps/SecludedRiver/scripts.pory"
	waitmovement 0
# 222 "data/maps/SecludedRiver/scripts.pory"
	return
# 223 "data/maps/SecludedRiver/scripts.pory"

# 224 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_MoveRival1::
# 225 "data/maps/SecludedRiver/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 23, 46
# 226 "data/maps/SecludedRiver/scripts.pory"
	return
# 227 "data/maps/SecludedRiver/scripts.pory"

# 228 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_MoveRival2::
# 229 "data/maps/SecludedRiver/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 23, 45
# 230 "data/maps/SecludedRiver/scripts.pory"
	return
# 231 "data/maps/SecludedRiver/scripts.pory"

# 232 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_EventScript_MoveRival3::
# 233 "data/maps/SecludedRiver/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 25, 44
# 234 "data/maps/SecludedRiver/scripts.pory"
	return
# 235 "data/maps/SecludedRiver/scripts.pory"

# 236 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_Movement_RivalApproachPlayer1:
# 237 "data/maps/SecludedRiver/scripts.pory"
	walk_right
# 238 "data/maps/SecludedRiver/scripts.pory"
	walk_down
# 239 "data/maps/SecludedRiver/scripts.pory"
	walk_in_place_faster_right
# 240 "data/maps/SecludedRiver/scripts.pory"
	step_end
# 241 "data/maps/SecludedRiver/scripts.pory"

# 242 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_Movement_RivalApproachPlayer2:
# 243 "data/maps/SecludedRiver/scripts.pory"
	walk_right
# 244 "data/maps/SecludedRiver/scripts.pory"
	step_end
# 245 "data/maps/SecludedRiver/scripts.pory"

# 246 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_Movement_RivalApproachPlayer3:
# 247 "data/maps/SecludedRiver/scripts.pory"
	walk_right
# 248 "data/maps/SecludedRiver/scripts.pory"
	walk_up
# 249 "data/maps/SecludedRiver/scripts.pory"
	walk_in_place_faster_right
# 250 "data/maps/SecludedRiver/scripts.pory"
	step_end
# 251 "data/maps/SecludedRiver/scripts.pory"

# 252 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_Movement_RivalExit1:
# 253 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 254 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 255 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 256 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 257 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 258 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 259 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 260 "data/maps/SecludedRiver/scripts.pory"
	step_end
# 261 "data/maps/SecludedRiver/scripts.pory"

# 262 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_Movement_RivalExit2:
# 263 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 264 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 265 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 266 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 267 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 268 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 269 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 270 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_right
# 271 "data/maps/SecludedRiver/scripts.pory"
	step_end
# 272 "data/maps/SecludedRiver/scripts.pory"

# 273 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_Movement_RivalExit3:
# 274 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 275 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 276 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 277 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 278 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 279 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 280 "data/maps/SecludedRiver/scripts.pory"
	walk_fast_left
# 281 "data/maps/SecludedRiver/scripts.pory"
	step_end
# 282 "data/maps/SecludedRiver/scripts.pory"

# 283 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_Text_MayLetsBattle:
# 284 "data/maps/SecludedRiver/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 285 "data/maps/SecludedRiver/scripts.pory"
	.string "While I was searching for other\n"
# 286 "data/maps/SecludedRiver/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 287 "data/maps/SecludedRiver/scripts.pory"
	.string "So…\n"
# 288 "data/maps/SecludedRiver/scripts.pory"
	.string "How about a little battle?$"
# 289 "data/maps/SecludedRiver/scripts.pory"

# 290 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_Text_MayDefeated:
# 291 "data/maps/SecludedRiver/scripts.pory"
	.string "Yikes!\n"
# 292 "data/maps/SecludedRiver/scripts.pory"
	.string "You're better than I expected!$"
# 293 "data/maps/SecludedRiver/scripts.pory"

# 294 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_Text_MayTakeThis:
# 295 "data/maps/SecludedRiver/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 296 "data/maps/SecludedRiver/scripts.pory"
	.string "training, too, haven't you?\p"
# 297 "data/maps/SecludedRiver/scripts.pory"
	.string "I think you deserve a reward!\n"
# 298 "data/maps/SecludedRiver/scripts.pory"
	.string "This is from me!$"
# 299 "data/maps/SecludedRiver/scripts.pory"

# 300 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_Text_MayExplainItemfinder:
# 301 "data/maps/SecludedRiver/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 302 "data/maps/SecludedRiver/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 303 "data/maps/SecludedRiver/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 304 "data/maps/SecludedRiver/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 305 "data/maps/SecludedRiver/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 306 "data/maps/SecludedRiver/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 307 "data/maps/SecludedRiver/scripts.pory"
	.string "harder for the next time.$"
# 308 "data/maps/SecludedRiver/scripts.pory"

# 309 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_Text_BrendanLetsBattle:
# 310 "data/maps/SecludedRiver/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 311 "data/maps/SecludedRiver/scripts.pory"
	.string "So this is where you were.\l"
# 312 "data/maps/SecludedRiver/scripts.pory"
	.string "How's it going?\p"
# 313 "data/maps/SecludedRiver/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 314 "data/maps/SecludedRiver/scripts.pory"
	.string "I'll check for you.$"
# 315 "data/maps/SecludedRiver/scripts.pory"

# 316 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_Text_BrendanDefeated:
# 317 "data/maps/SecludedRiver/scripts.pory"
	.string "Hmm…\n"
# 318 "data/maps/SecludedRiver/scripts.pory"
	.string "You're pretty good.$"
# 319 "data/maps/SecludedRiver/scripts.pory"

# 320 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_Text_BrendanTakeThis:
# 321 "data/maps/SecludedRiver/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 322 "data/maps/SecludedRiver/scripts.pory"
	.string "without me noticing…\p"
# 323 "data/maps/SecludedRiver/scripts.pory"
	.string "Good enough!\n"
# 324 "data/maps/SecludedRiver/scripts.pory"
	.string "Here, take this.$"
# 325 "data/maps/SecludedRiver/scripts.pory"

# 326 "data/maps/SecludedRiver/scripts.pory"
SecludedRiver_Text_BrendanExplainItemfinder:
# 327 "data/maps/SecludedRiver/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 328 "data/maps/SecludedRiver/scripts.pory"
	.string "Use it to root around for items that\n"
# 329 "data/maps/SecludedRiver/scripts.pory"
	.string "aren't visible.\p"
# 330 "data/maps/SecludedRiver/scripts.pory"
	.string "If it senses something, it emits\n"
# 331 "data/maps/SecludedRiver/scripts.pory"
	.string "a sound.\p"
# 332 "data/maps/SecludedRiver/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 333 "data/maps/SecludedRiver/scripts.pory"
	.string "POKéMON.$"

SecludedRiver_EventScript_SuicuneBattle_Text_0:
# 5 "data/maps/SecludedRiver/scripts.pory"
	.string "Suiui$"

Ranaway4_Text_0:
# 39 "data/maps/SecludedRiver/scripts.pory"
	.string "cune...$"
