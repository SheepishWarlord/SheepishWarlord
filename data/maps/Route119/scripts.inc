Route119_EventScript_Phil::
# 2 "data/maps/Route119/scripts.pory"
	lock
# 3 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_Phil_Text_0, MSGBOX_YESNO
# 4 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route119_EventScript_Phil_2
# 7 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_PHIL, Route119_EventScript_Phil_Text_1, Route119_EventScript_Phil_Text_2, PidgeotiteGift
Route119_EventScript_Phil_1:
# 8 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_Phil_Text_3
# 9 "data/maps/Route119/scripts.pory"
	release
	end

Route119_EventScript_Phil_2:
# 5 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkDown2
	goto Route119_EventScript_Phil_1


PidgeotiteGift::
# 14 "data/maps/Route119/scripts.pory"
	msgbox PidgeotiteGift_Text_0
# 15 "data/maps/Route119/scripts.pory"
	giveitem ITEM_PIDGEOTITE
# 16 "data/maps/Route119/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 17 "data/maps/Route119/scripts.pory"
	msgbox PidgeotiteGift_Text_1
# 18 "data/maps/Route119/scripts.pory"
	waitmessage
# 19 "data/maps/Route119/scripts.pory"
	waitfanfare
# 20 "data/maps/Route119/scripts.pory"
	msgbox PidgeotiteGift_Text_2
# 21 "data/maps/Route119/scripts.pory"
	waitmessage
# 22 "data/maps/Route119/scripts.pory"
	release
	end


# 26 "data/maps/Route119/scripts.pory"
WalkDown2:
# 27 "data/maps/Route119/scripts.pory"
	walk_down
# 27 "data/maps/Route119/scripts.pory"
	walk_down
	step_end

# 30 "data/maps/Route119/scripts.pory"

# 31 "data/maps/Route119/scripts.pory"
.set LOCALID_RIVAL, 16
# 32 "data/maps/Route119/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 25
# 33 "data/maps/Route119/scripts.pory"
.set LOCALID_SCOTT, 43
# 34 "data/maps/Route119/scripts.pory"

# 35 "data/maps/Route119/scripts.pory"
Route119_MapScripts::
# 36 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route119_OnResume
# 37 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_OnTransition
# 38 "data/maps/Route119/scripts.pory"
	.byte 0
# 39 "data/maps/Route119/scripts.pory"

# 40 "data/maps/Route119/scripts.pory"
Route119_OnResume:
# 41 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_EventScript_TryRemoveKecleon
# 42 "data/maps/Route119/scripts.pory"
	end
# 43 "data/maps/Route119/scripts.pory"

# 44 "data/maps/Route119/scripts.pory"
Route119_EventScript_TryRemoveKecleon::
# 45 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 46 "data/maps/Route119/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 47 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
# 48 "data/maps/Route119/scripts.pory"
	return
# 49 "data/maps/Route119/scripts.pory"

# 50 "data/maps/Route119/scripts.pory"
Route119_OnTransition:
# 51 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 52 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 53 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_EventScript_MoveInstituteWorkersDownstairs
# 54 "data/maps/Route119/scripts.pory"
	special SetRoute119Weather
# 55 "data/maps/Route119/scripts.pory"
	end
# 56 "data/maps/Route119/scripts.pory"

# 57 "data/maps/Route119/scripts.pory"
Route119_EventScript_MoveInstituteWorkersDownstairs::
# 58 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 59 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
# 60 "data/maps/Route119/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
# 61 "data/maps/Route119/scripts.pory"
	return
# 62 "data/maps/Route119/scripts.pory"

# 63 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger1::
# 64 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 65 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 66 "data/maps/Route119/scripts.pory"
	end
# 67 "data/maps/Route119/scripts.pory"

# 68 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger2::
# 69 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 70 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 71 "data/maps/Route119/scripts.pory"
	end
# 72 "data/maps/Route119/scripts.pory"

# 73 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter::
# 74 "data/maps/Route119/scripts.pory"
	lockall
# 75 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 76 "data/maps/Route119/scripts.pory"
	checkplayergender
# 77 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route119_EventScript_PlayMayMusic
# 78 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route119_EventScript_PlayBrendanMusic
# 79 "data/maps/Route119/scripts.pory"
	delay 65
# 80 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalEnter1
# 81 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalEnter2
# 82 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 83 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route119/scripts.pory"
	delay 30
# 85 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 86 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 87 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 88 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL
# 89 "data/maps/Route119/scripts.pory"
	delay 30
# 90 "data/maps/Route119/scripts.pory"
	checkplayergender
# 91 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route119_EventScript_BattleMay
# 92 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route119_EventScript_BattleBrendan
# 93 "data/maps/Route119/scripts.pory"
	releaseall
# 94 "data/maps/Route119/scripts.pory"
	end
# 95 "data/maps/Route119/scripts.pory"

# 96 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayMayMusic::
# 97 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 98 "data/maps/Route119/scripts.pory"
	return
# 99 "data/maps/Route119/scripts.pory"

# 100 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayBrendanMusic::
# 101 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 102 "data/maps/Route119/scripts.pory"
	return
# 103 "data/maps/Route119/scripts.pory"

# 104 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay::
# 105 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayIntro, MSGBOX_DEFAULT
# 106 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 107 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleMayTreecko
# 108 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleMayTorchic
# 109 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleMayMudkip
# 110 "data/maps/Route119/scripts.pory"
	end
# 111 "data/maps/Route119/scripts.pory"

# 112 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTreecko::
# 113 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_Text_MayDefeat
# 114 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 115 "data/maps/Route119/scripts.pory"
	end
# 116 "data/maps/Route119/scripts.pory"

# 117 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTorchic::
# 118 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_Text_MayDefeat
# 119 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 120 "data/maps/Route119/scripts.pory"
	end
# 121 "data/maps/Route119/scripts.pory"

# 122 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayMudkip::
# 123 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_Text_MayDefeat
# 124 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 125 "data/maps/Route119/scripts.pory"
	end
# 126 "data/maps/Route119/scripts.pory"

# 127 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedMay::
# 128 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayPresentForYou, MSGBOX_DEFAULT
# 129 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 130 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayExplainFly, MSGBOX_DEFAULT
# 131 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 132 "data/maps/Route119/scripts.pory"
	end
# 133 "data/maps/Route119/scripts.pory"

# 134 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan::
# 135 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIntro, MSGBOX_DEFAULT
# 136 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 137 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleBrendanTreecko
# 138 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleBrendanTorchic
# 139 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleBrendanMudkip
# 140 "data/maps/Route119/scripts.pory"
	end
# 141 "data/maps/Route119/scripts.pory"

# 142 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTreecko::
# 143 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_Text_BrendanDefeat
# 144 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 145 "data/maps/Route119/scripts.pory"
	end
# 146 "data/maps/Route119/scripts.pory"

# 147 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTorchic::
# 148 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_Text_BrendanDefeat
# 149 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 150 "data/maps/Route119/scripts.pory"
	end
# 151 "data/maps/Route119/scripts.pory"

# 152 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanMudkip::
# 153 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_Text_BrendanDefeat
# 154 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 155 "data/maps/Route119/scripts.pory"
	end
# 156 "data/maps/Route119/scripts.pory"

# 157 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedBrendan::
# 158 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIllGiveYouThis, MSGBOX_DEFAULT
# 159 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 160 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanExplainFly, MSGBOX_DEFAULT
# 161 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 162 "data/maps/Route119/scripts.pory"
	end
# 163 "data/maps/Route119/scripts.pory"

# 164 "data/maps/Route119/scripts.pory"
Route119_EventScript_GiveFlyHM::
# 165 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM02
# 166 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 167 "data/maps/Route119/scripts.pory"
	return
# 168 "data/maps/Route119/scripts.pory"

# 169 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive::
# 170 "data/maps/Route119/scripts.pory"
	closemessage
# 171 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 172 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 173 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL
# 174 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 175 "data/maps/Route119/scripts.pory"
	delay 30
# 176 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalExit1
# 177 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalExit2
# 178 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 179 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 180 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 181 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 182 "data/maps/Route119/scripts.pory"
	delay 60
# 183 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetScottPos1
# 184 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetScottPos2
# 185 "data/maps/Route119/scripts.pory"
	addobject LOCALID_SCOTT
# 186 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottEnter
# 187 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 189 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ScottWayToGoBeSeeingYou, MSGBOX_DEFAULT
# 190 "data/maps/Route119/scripts.pory"
	closemessage
# 191 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_ScottExit1
# 192 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_ScottExit2
# 193 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_SCOTT
# 194 "data/maps/Route119/scripts.pory"
	releaseall
# 195 "data/maps/Route119/scripts.pory"
	end
# 196 "data/maps/Route119/scripts.pory"

# 197 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos1::
# 198 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 27, 25
# 199 "data/maps/Route119/scripts.pory"
	return
# 200 "data/maps/Route119/scripts.pory"

# 201 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos2::
# 202 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 28, 25
# 203 "data/maps/Route119/scripts.pory"
	return
# 204 "data/maps/Route119/scripts.pory"

# 205 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit1::
# 206 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit1
# 207 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 208 "data/maps/Route119/scripts.pory"
	return
# 209 "data/maps/Route119/scripts.pory"

# 210 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit2::
# 211 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit2
# 212 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route119/scripts.pory"
	return
# 214 "data/maps/Route119/scripts.pory"

# 215 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter1::
# 216 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
# 217 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route119/scripts.pory"
	return
# 219 "data/maps/Route119/scripts.pory"

# 220 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter2::
# 221 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
# 222 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 223 "data/maps/Route119/scripts.pory"
	return
# 224 "data/maps/Route119/scripts.pory"

# 225 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit1::
# 226 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
# 227 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
# 228 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 229 "data/maps/Route119/scripts.pory"
	return
# 230 "data/maps/Route119/scripts.pory"

# 231 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit2::
# 232 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
# 233 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
# 234 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route119/scripts.pory"
	return
# 236 "data/maps/Route119/scripts.pory"

# 237 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos1::
# 238 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 25, 32
# 239 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 25, 32
# 240 "data/maps/Route119/scripts.pory"
	return
# 241 "data/maps/Route119/scripts.pory"

# 242 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos2::
# 243 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 26, 32
# 244 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 26, 32
# 245 "data/maps/Route119/scripts.pory"
	return
# 246 "data/maps/Route119/scripts.pory"

# 247 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit1:
# 248 "data/maps/Route119/scripts.pory"
	delay_16
# 249 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_right
# 250 "data/maps/Route119/scripts.pory"
	delay_8
# 251 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 252 "data/maps/Route119/scripts.pory"
	step_end
# 253 "data/maps/Route119/scripts.pory"

# 254 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit2:
# 255 "data/maps/Route119/scripts.pory"
	delay_16
# 256 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_left
# 257 "data/maps/Route119/scripts.pory"
	delay_8
# 258 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 259 "data/maps/Route119/scripts.pory"
	step_end
# 260 "data/maps/Route119/scripts.pory"

# 261 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter1:
# 262 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 263 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 264 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 265 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 266 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 267 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 268 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 269 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 270 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 271 "data/maps/Route119/scripts.pory"
	step_end
# 272 "data/maps/Route119/scripts.pory"

# 273 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter2:
# 274 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 275 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 276 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 277 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 278 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 279 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 280 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 281 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 282 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 283 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 284 "data/maps/Route119/scripts.pory"
	step_end
# 285 "data/maps/Route119/scripts.pory"

# 286 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit1:
# 287 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 288 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 289 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 290 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 291 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 292 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 293 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 294 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 295 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 296 "data/maps/Route119/scripts.pory"
	step_end
# 297 "data/maps/Route119/scripts.pory"

# 298 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit2:
# 299 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 300 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 301 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 302 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 303 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 304 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 305 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 306 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 307 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 308 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 309 "data/maps/Route119/scripts.pory"
	step_end
# 310 "data/maps/Route119/scripts.pory"

# 311 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottEnter:
# 312 "data/maps/Route119/scripts.pory"
	walk_down
# 313 "data/maps/Route119/scripts.pory"
	walk_down
# 314 "data/maps/Route119/scripts.pory"
	walk_down
# 315 "data/maps/Route119/scripts.pory"
	walk_down
# 316 "data/maps/Route119/scripts.pory"
	walk_left
# 317 "data/maps/Route119/scripts.pory"
	walk_left
# 318 "data/maps/Route119/scripts.pory"
	walk_down
# 319 "data/maps/Route119/scripts.pory"
	step_end
# 320 "data/maps/Route119/scripts.pory"

# 321 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit1:
# 322 "data/maps/Route119/scripts.pory"
	walk_up
# 323 "data/maps/Route119/scripts.pory"
	walk_right
# 324 "data/maps/Route119/scripts.pory"
	walk_right
# 325 "data/maps/Route119/scripts.pory"
	walk_up
# 326 "data/maps/Route119/scripts.pory"
	walk_up
# 327 "data/maps/Route119/scripts.pory"
	walk_up
# 328 "data/maps/Route119/scripts.pory"
	walk_up
# 329 "data/maps/Route119/scripts.pory"
	walk_up
# 330 "data/maps/Route119/scripts.pory"
	step_end
# 331 "data/maps/Route119/scripts.pory"

# 332 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit2:
# 333 "data/maps/Route119/scripts.pory"
	walk_up
# 334 "data/maps/Route119/scripts.pory"
	walk_right
# 335 "data/maps/Route119/scripts.pory"
	walk_up
# 336 "data/maps/Route119/scripts.pory"
	walk_up
# 337 "data/maps/Route119/scripts.pory"
	walk_up
# 338 "data/maps/Route119/scripts.pory"
	walk_up
# 339 "data/maps/Route119/scripts.pory"
	walk_up
# 340 "data/maps/Route119/scripts.pory"
	step_end
# 341 "data/maps/Route119/scripts.pory"

# 342 "data/maps/Route119/scripts.pory"
Route119_EventScript_CyclingTriathleteM::
# 343 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
# 344 "data/maps/Route119/scripts.pory"
	end
# 345 "data/maps/Route119/scripts.pory"

# 346 "data/maps/Route119/scripts.pory"
Route119_EventScript_RouteSignFortree::
# 347 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
# 348 "data/maps/Route119/scripts.pory"
	end
# 349 "data/maps/Route119/scripts.pory"

# 350 "data/maps/Route119/scripts.pory"
Route119_EventScript_WeatherInstituteSign::
# 351 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
# 352 "data/maps/Route119/scripts.pory"
	end
# 353 "data/maps/Route119/scripts.pory"

# 354 "data/maps/Route119/scripts.pory"
Route119_EventScript_Brent::
# 355 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 356 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
# 357 "data/maps/Route119/scripts.pory"
	end
# 358 "data/maps/Route119/scripts.pory"

# 359 "data/maps/Route119/scripts.pory"
Route119_EventScript_Donald::
# 360 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DONALD, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat
# 361 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
# 362 "data/maps/Route119/scripts.pory"
	end
# 363 "data/maps/Route119/scripts.pory"

# 364 "data/maps/Route119/scripts.pory"
Route119_EventScript_Taylor::
# 365 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 366 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 367 "data/maps/Route119/scripts.pory"
	end
# 368 "data/maps/Route119/scripts.pory"

# 369 "data/maps/Route119/scripts.pory"
Route119_EventScript_Doug::
# 370 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DOUG, Route119_Text_DougIntro, Route119_Text_DougDefeat
# 371 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 372 "data/maps/Route119/scripts.pory"
	end
# 373 "data/maps/Route119/scripts.pory"

# 374 "data/maps/Route119/scripts.pory"
Route119_EventScript_Greg::
# 375 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 376 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
# 377 "data/maps/Route119/scripts.pory"
	end
# 378 "data/maps/Route119/scripts.pory"

# 379 "data/maps/Route119/scripts.pory"
Route119_EventScript_Kent::
# 380 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 381 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 382 "data/maps/Route119/scripts.pory"
	end
# 383 "data/maps/Route119/scripts.pory"

# 384 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson::
# 385 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
# 386 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 387 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchJackson
# 388 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
# 389 "data/maps/Route119/scripts.pory"
	release
# 390 "data/maps/Route119/scripts.pory"
	end
# 391 "data/maps/Route119/scripts.pory"

# 392 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterJackson::
# 393 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 394 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 395 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 396 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
# 397 "data/maps/Route119/scripts.pory"
	release
# 398 "data/maps/Route119/scripts.pory"
	end
# 399 "data/maps/Route119/scripts.pory"

# 400 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchJackson::
# 401 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 402 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
# 403 "data/maps/Route119/scripts.pory"
	end
# 404 "data/maps/Route119/scripts.pory"

# 405 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine::
# 406 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
# 407 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 408 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchCatherine
# 409 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
# 410 "data/maps/Route119/scripts.pory"
	release
# 411 "data/maps/Route119/scripts.pory"
	end
# 412 "data/maps/Route119/scripts.pory"

# 413 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterCatherine::
# 414 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 415 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 416 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 417 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
# 418 "data/maps/Route119/scripts.pory"
	release
# 419 "data/maps/Route119/scripts.pory"
	end
# 420 "data/maps/Route119/scripts.pory"

# 421 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchCatherine::
# 422 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 423 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
# 424 "data/maps/Route119/scripts.pory"
	end
# 425 "data/maps/Route119/scripts.pory"

# 426 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hugh::
# 427 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 428 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
# 429 "data/maps/Route119/scripts.pory"
	end
# 430 "data/maps/Route119/scripts.pory"

# 431 "data/maps/Route119/scripts.pory"

# 432 "data/maps/Route119/scripts.pory"

# 433 "data/maps/Route119/scripts.pory"
Route119_EventScript_Yasu::
# 434 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_YASU, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 435 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
# 436 "data/maps/Route119/scripts.pory"
	end
# 437 "data/maps/Route119/scripts.pory"

# 438 "data/maps/Route119/scripts.pory"
Route119_EventScript_Takashi::
# 439 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAKASHI, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 440 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 441 "data/maps/Route119/scripts.pory"
	end
# 442 "data/maps/Route119/scripts.pory"

# 443 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hideo::
# 444 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 445 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
# 446 "data/maps/Route119/scripts.pory"
	end
# 447 "data/maps/Route119/scripts.pory"

# 448 "data/maps/Route119/scripts.pory"
Route119_EventScript_Chris::
# 449 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 450 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
# 451 "data/maps/Route119/scripts.pory"
	end
# 452 "data/maps/Route119/scripts.pory"

# 453 "data/maps/Route119/scripts.pory"
Route119_EventScript_Fabian::
# 454 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 455 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
# 456 "data/maps/Route119/scripts.pory"
	end
# 457 "data/maps/Route119/scripts.pory"

# 458 "data/maps/Route119/scripts.pory"
Route119_EventScript_Dayton::
# 459 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DAYTON, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 460 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
# 461 "data/maps/Route119/scripts.pory"
	end
# 462 "data/maps/Route119/scripts.pory"

# 463 "data/maps/Route119/scripts.pory"
Route119_EventScript_Rachel::
# 464 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 465 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
# 466 "data/maps/Route119/scripts.pory"
	end
# 467 "data/maps/Route119/scripts.pory"

# 468 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt1::
# 469 "data/maps/Route119/scripts.pory"
	lock
# 470 "data/maps/Route119/scripts.pory"
	faceplayer
# 471 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 472 "data/maps/Route119/scripts.pory"
	closemessage
# 473 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 474 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 475 "data/maps/Route119/scripts.pory"
	release
# 476 "data/maps/Route119/scripts.pory"
	end
# 477 "data/maps/Route119/scripts.pory"

# 478 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt2::
# 479 "data/maps/Route119/scripts.pory"
	lock
# 480 "data/maps/Route119/scripts.pory"
	faceplayer
# 481 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 482 "data/maps/Route119/scripts.pory"
	closemessage
# 483 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 484 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 485 "data/maps/Route119/scripts.pory"
	release
# 486 "data/maps/Route119/scripts.pory"
	end
# 487 "data/maps/Route119/scripts.pory"

# 488 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy1::
# 489 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
# 490 "data/maps/Route119/scripts.pory"
	end
# 491 "data/maps/Route119/scripts.pory"

# 492 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy2::
# 493 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
# 494 "data/maps/Route119/scripts.pory"
	end
# 495 "data/maps/Route119/scripts.pory"

# 496 "data/maps/Route119/scripts.pory"
Route119_EventScript_TrainerTipsDecoration::
# 497 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
# 498 "data/maps/Route119/scripts.pory"
	end
# 499 "data/maps/Route119/scripts.pory"

# 500 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottWonAtFortreeGymCall::
# 501 "data/maps/Route119/scripts.pory"
	lockall
# 502 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 503 "data/maps/Route119/scripts.pory"
	waitmessage
# 504 "data/maps/Route119/scripts.pory"
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
# 505 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 506 "data/maps/Route119/scripts.pory"
	releaseall
# 507 "data/maps/Route119/scripts.pory"
	end
# 508 "data/maps/Route119/scripts.pory"

# 509 "data/maps/Route119/scripts.pory"
Route119_Text_MayIntro:
# 510 "data/maps/Route119/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 511 "data/maps/Route119/scripts.pory"
	.string "Where were you? I was looking for you!\p"
# 512 "data/maps/Route119/scripts.pory"
	.string "How much stronger have you gotten?\n"
# 513 "data/maps/Route119/scripts.pory"
	.string "Let me check for you!\p"
# 514 "data/maps/Route119/scripts.pory"
	.string "Ready with your POKéMON?\n"
# 515 "data/maps/Route119/scripts.pory"
	.string "Of course you are! Go!$"
# 516 "data/maps/Route119/scripts.pory"

# 517 "data/maps/Route119/scripts.pory"
Route119_Text_MayDefeat:
# 518 "data/maps/Route119/scripts.pory"
	.string "Achah!\n"
# 519 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}, you're strong!\p"
# 520 "data/maps/Route119/scripts.pory"
	.string "I was worried that you might be\n"
# 521 "data/maps/Route119/scripts.pory"
	.string "struggling with your training.$"
# 522 "data/maps/Route119/scripts.pory"

# 523 "data/maps/Route119/scripts.pory"
Route119_Text_MayPresentForYou:
# 524 "data/maps/Route119/scripts.pory"
	.string "MAY: But I had absolutely nothing to\n"
# 525 "data/maps/Route119/scripts.pory"
	.string "worry about! Keep it up!\p"
# 526 "data/maps/Route119/scripts.pory"
	.string "And, here! I have a present for you.$"
# 527 "data/maps/Route119/scripts.pory"

# 528 "data/maps/Route119/scripts.pory"
Route119_Text_MayExplainFly:
# 529 "data/maps/Route119/scripts.pory"
	.string "MAY: Use FLY, and your POKéMON will\n"
# 530 "data/maps/Route119/scripts.pory"
	.string "instantly carry you to any town you've\l"
# 531 "data/maps/Route119/scripts.pory"
	.string "already visited.\p"
# 532 "data/maps/Route119/scripts.pory"
	.string "But, to use FLY, you have to get\n"
# 533 "data/maps/Route119/scripts.pory"
	.string "the GYM BADGE from FORTREE CITY.\l"
# 534 "data/maps/Route119/scripts.pory"
	.string "That's important, so don't forget.\p"
# 535 "data/maps/Route119/scripts.pory"
	.string "You should FLY home and visit\n"
# 536 "data/maps/Route119/scripts.pory"
	.string "LITTLEROOT for a change.\p"
# 537 "data/maps/Route119/scripts.pory"
	.string "I bet your mom's worried about you,\n"
# 538 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 539 "data/maps/Route119/scripts.pory"
	.string "Well, let's meet again somewhere!$"
# 540 "data/maps/Route119/scripts.pory"

# 541 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIntro:
# 542 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: {PLAYER}! So this is where\n"
# 543 "data/maps/Route119/scripts.pory"
	.string "you've been looking for POKéMON?\p"
# 544 "data/maps/Route119/scripts.pory"
	.string "Let me see how good you got.\n"
# 545 "data/maps/Route119/scripts.pory"
	.string "I'll test you!\p"
# 546 "data/maps/Route119/scripts.pory"
	.string "Now!\n"
# 547 "data/maps/Route119/scripts.pory"
	.string "It's a battle, so battle!$"
# 548 "data/maps/Route119/scripts.pory"

# 549 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanDefeat:
# 550 "data/maps/Route119/scripts.pory"
	.string "Hmm…\n"
# 551 "data/maps/Route119/scripts.pory"
	.string "You've gotten pretty darn decent.$"
# 552 "data/maps/Route119/scripts.pory"

# 553 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIllGiveYouThis:
# 554 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: I'd say you're good enough\n"
# 555 "data/maps/Route119/scripts.pory"
	.string "to search for POKéMON anywhere.\p"
# 556 "data/maps/Route119/scripts.pory"
	.string "Here, I'll give you this.\n"
# 557 "data/maps/Route119/scripts.pory"
	.string "Try it out.$"
# 558 "data/maps/Route119/scripts.pory"

# 559 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanExplainFly:
# 560 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: Use FLY, and your POKéMON\n"
# 561 "data/maps/Route119/scripts.pory"
	.string "instantly carries you to any town\l"
# 562 "data/maps/Route119/scripts.pory"
	.string "you've already visited.\p"
# 563 "data/maps/Route119/scripts.pory"
	.string "But you need the FORTREE GYM BADGE \n"
# 564 "data/maps/Route119/scripts.pory"
	.string "to do that.\p"
# 565 "data/maps/Route119/scripts.pory"
	.string "Anyway, I have to move along.$"
# 566 "data/maps/Route119/scripts.pory"

# 567 "data/maps/Route119/scripts.pory"
Route119_Text_ScottWayToGoBeSeeingYou:
# 568 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hahahah!\n"
# 569 "data/maps/Route119/scripts.pory"
	.string "Way to go, {PLAYER}{KUN}!\p"
# 570 "data/maps/Route119/scripts.pory"
	.string "I just passed by a TRAINER riding\n"
# 571 "data/maps/Route119/scripts.pory"
	.string "a BIKE.\p"
# 572 "data/maps/Route119/scripts.pory"
	.string "You just beat that TRAINER, didn't you?\n"
# 573 "data/maps/Route119/scripts.pory"
	.string "It was pretty obvious that you did.\p"
# 574 "data/maps/Route119/scripts.pory"
	.string "The kid looked really upset with\n"
# 575 "data/maps/Route119/scripts.pory"
	.string "a face all red from anger.\p"
# 576 "data/maps/Route119/scripts.pory"
	.string "I sure seem to run into you often.\n"
# 577 "data/maps/Route119/scripts.pory"
	.string "Are you off to FORTREE GYM next?\p"
# 578 "data/maps/Route119/scripts.pory"
	.string "I expect that you'll do well at the GYM.\n"
# 579 "data/maps/Route119/scripts.pory"
	.string "Well, I'll be seeing you!$"
# 580 "data/maps/Route119/scripts.pory"

# 581 "data/maps/Route119/scripts.pory"

# 582 "data/maps/Route119/scripts.pory"
Route119_Text_ScottYouWonAtFortreeGym:
# 583 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 584 "data/maps/Route119/scripts.pory"
	.string "… … … … … Beep!\p"
# 585 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hiya, {PLAYER}{KUN}, it's me!\p"
# 586 "data/maps/Route119/scripts.pory"
	.string "Just as I thought, you won at\n"
# 587 "data/maps/Route119/scripts.pory"
	.string "the FORTREE GYM.\p"
# 588 "data/maps/Route119/scripts.pory"
	.string "Your strength…\n"
# 589 "data/maps/Route119/scripts.pory"
	.string "Perhaps you really are the TRAINER\l"
# 590 "data/maps/Route119/scripts.pory"
	.string "that I've been searching for.\p"
# 591 "data/maps/Route119/scripts.pory"
	.string "Remember, you have a fan in me.\n"
# 592 "data/maps/Route119/scripts.pory"
	.string "I'll be cheering from the sidelines.\l"
# 593 "data/maps/Route119/scripts.pory"
	.string "Keep up the great work!\p"
# 594 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 595 "data/maps/Route119/scripts.pory"
	.string "… … … … … Click!$"
# 596 "data/maps/Route119/scripts.pory"

# 597 "data/maps/Route119/scripts.pory"
Route119_Text_StayAwayFromWeatherInstitute:
# 598 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\p"
# 599 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Stay away from the WEATHER\n"
# 600 "data/maps/Route119/scripts.pory"
	.string "INSTITUTE. It's not safe.$"
# 601 "data/maps/Route119/scripts.pory"

# 602 "data/maps/Route119/scripts.pory"
Route119_Text_DontGoNearWeatherInstitute:
# 603 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\p"
# 604 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Please don't go near the\n"
# 605 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE.$"
# 606 "data/maps/Route119/scripts.pory"

# 607 "data/maps/Route119/scripts.pory"
Route119_Text_ThoughtFlyByCatchingBirdMons:
# 608 "data/maps/Route119/scripts.pory"
	.string "I thought you FLY by catching a whole\n"
# 609 "data/maps/Route119/scripts.pory"
	.string "flock of BIRD POKéMON, and then\l"
# 610 "data/maps/Route119/scripts.pory"
	.string "hanging on to them somehow.\p"
# 611 "data/maps/Route119/scripts.pory"
	.string "But it turns out there's an HM move\n"
# 612 "data/maps/Route119/scripts.pory"
	.string "called FLY!\p"
# 613 "data/maps/Route119/scripts.pory"
	.string "I wish I'd known about that a long\n"
# 614 "data/maps/Route119/scripts.pory"
	.string "time ago…$"
# 615 "data/maps/Route119/scripts.pory"

# 616 "data/maps/Route119/scripts.pory"
Route119_Text_TallGrassSnaresBikeTires:
# 617 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
# 618 "data/maps/Route119/scripts.pory"
	.string "It's a no-go…\p"
# 619 "data/maps/Route119/scripts.pory"
	.string "The tall grass snares BIKE tires.\n"
# 620 "data/maps/Route119/scripts.pory"
	.string "There's no way you can cycle here.$"
# 621 "data/maps/Route119/scripts.pory"

# 622 "data/maps/Route119/scripts.pory"
Route119_Text_CanYourMonMakeSecretBase:
# 623 "data/maps/Route119/scripts.pory"
	.string "Can your POKéMON use its SECRET POWER\n"
# 624 "data/maps/Route119/scripts.pory"
	.string "on a big pile of grass and make a\l"
# 625 "data/maps/Route119/scripts.pory"
	.string "SECRET BASE?$"
# 626 "data/maps/Route119/scripts.pory"

# 627 "data/maps/Route119/scripts.pory"
Route119_Text_RouteSignFortree:
# 628 "data/maps/Route119/scripts.pory"
	.string "ROUTE 119\n"
# 629 "data/maps/Route119/scripts.pory"
	.string "{RIGHT_ARROW} FORTREE CITY$"
# 630 "data/maps/Route119/scripts.pory"

# 631 "data/maps/Route119/scripts.pory"
Route119_Text_WeatherInstitute:
# 632 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE$"
# 633 "data/maps/Route119/scripts.pory"

# 634 "data/maps/Route119/scripts.pory"
Route119_Text_TrainerTipsDecoration:
# 635 "data/maps/Route119/scripts.pory"
	.string "TRAINER TIPS\p"
# 636 "data/maps/Route119/scripts.pory"
	.string "Up to sixteen decorations and\n"
# 637 "data/maps/Route119/scripts.pory"
	.string "furniture items can be placed in\l"
# 638 "data/maps/Route119/scripts.pory"
	.string "a SECRET BASE.\p"
# 639 "data/maps/Route119/scripts.pory"
	.string "Pick your favorite items and create\n"
# 640 "data/maps/Route119/scripts.pory"
	.string "your very own SECRET BASE exactly the\l"
# 641 "data/maps/Route119/scripts.pory"
	.string "way you want.$"

Route119_EventScript_Phil_Text_0:
# 3 "data/maps/Route119/scripts.pory"
	.string "You look like a strong trainer. I am a\n"
	.string "strong trainer. I guard the Pidgeotite,\l"
	.string "do you wish to gain access to Mega\l"
	.string "Pidgeot?$"

Route119_EventScript_Phil_Text_1:
# 7 "data/maps/Route119/scripts.pory"
	.string "Best of luck in this endeavor!$"

Route119_EventScript_Phil_Text_2:
# 7 "data/maps/Route119/scripts.pory"
	.string "Congratulations! You can now wield Mega\n"
	.string "Pidgeot!$"

Route119_EventScript_Phil_Text_3:
# 8 "data/maps/Route119/scripts.pory"
	.string "Good job!$"

PidgeotiteGift_Text_0:
# 14 "data/maps/Route119/scripts.pory"
	.string "Here is the Pidgeotite, as promised.$"

PidgeotiteGift_Text_1:
# 17 "data/maps/Route119/scripts.pory"
	.string "{PLAYER} obtained the Pidgeotite!$"

PidgeotiteGift_Text_2:
# 20 "data/maps/Route119/scripts.pory"
	.string "I hope your Pidgeot enjoys the power of\n"
	.string "Mega Evolution!$"
