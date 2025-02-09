Route118_EventScript_StevenTrigger::
# 2 "data/maps/Route118/scripts.pory"
	playse SE_LEDGE
# 3 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenJumpLedge
# 4 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 5 "data/maps/Route118/scripts.pory"
	delay 30
# 6 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
# 7 "data/maps/Route118/scripts.pory"
	closemessage
# 8 "data/maps/Route118/scripts.pory"
	giveitem ITEM_MEGA_RING
# 9 "data/maps/Route118/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 10 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_StevenTrigger_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/Route118/scripts.pory"
	waitfanfare
# 12 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_NORMAN_5, Route118_EventScript_StevenTrigger_Text_1, Route118_EventScript_StevenTrigger_Text_2, Route118_EventScript_StevenTrigger4
# 13 "data/maps/Route118/scripts.pory"
	releaseall
	end


Route118_EventScript_StevenTrigger4::
# 18 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_StevenTrigger4_Text_0
# 19 "data/maps/Route118/scripts.pory"
	giveitem ITEM_METAGROSSITE
# 20 "data/maps/Route118/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 21 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_StevenTrigger4_Text_1, MSGBOX_AUTOCLOSE
# 22 "data/maps/Route118/scripts.pory"
	waitfanfare
# 23 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_StevenTrigger4_Text_2
# 24 "data/maps/Route118/scripts.pory"
	waitmessage
# 25 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_StevenTrigger4_Text_3
# 26 "data/maps/Route118/scripts.pory"
	waitmessage
# 27 "data/maps/Route118/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq Route118_EventScript_StevenTrigger4_2
# 28 "data/maps/Route118/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route118_EventScript_StevenTrigger4_3
# 29 "data/maps/Route118/scripts.pory"
	call Route118_EventScript_StevenExit2
Route118_EventScript_StevenTrigger4_1:
# 30 "data/maps/Route118/scripts.pory"
	setvar VAR_ROUTE118_STATE, 1
# 31 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_STEVEN
# 32 "data/maps/Route118/scripts.pory"
	releaseall
	end

Route118_EventScript_StevenTrigger4_2:
# 27 "data/maps/Route118/scripts.pory"
	call Route118_EventScript_StevenExit0
	goto Route118_EventScript_StevenTrigger4_1

Route118_EventScript_StevenTrigger4_3:
# 28 "data/maps/Route118/scripts.pory"
	call Route118_EventScript_StevenExit1
	goto Route118_EventScript_StevenTrigger4_1


Route118_EventScript_GoodRodFisherman::
# 37 "data/maps/Route118/scripts.pory"
	lock
# 38 "data/maps/Route118/scripts.pory"
	faceplayer
# 39 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_GoodRodFisherman_Text_0
# 40 "data/maps/Route118/scripts.pory"
	waitmessage
# 41 "data/maps/Route118/scripts.pory"
	release
	end


# 46 "data/maps/Route118/scripts.pory"

# 47 "data/maps/Route118/scripts.pory"
.set LOCALID_STEVEN, 19
# 48 "data/maps/Route118/scripts.pory"

# 49 "data/maps/Route118/scripts.pory"
Route118_MapScripts::
# 50 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_OnTransition
# 51 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route118_OnLoad
# 52 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route118_OnFrame
# 53 "data/maps/Route118/scripts.pory"
	.byte 0
# 54 "data/maps/Route118/scripts.pory"

# 55 "data/maps/Route118/scripts.pory"
Route118_OnTransition:
# 56 "data/maps/Route118/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 57 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 58 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_StartGroudonWeather
# 59 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_StartGroudonWeather
# 60 "data/maps/Route118/scripts.pory"
	end
# 61 "data/maps/Route118/scripts.pory"

# 62 "data/maps/Route118/scripts.pory"
Route118_OnLoad:
# 63 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_EventScript_PlaceTilesRoute118East
# 64 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_EventScript_PlaceTilesRoute118West
# 65 "data/maps/Route118/scripts.pory"
	end
# 66 "data/maps/Route118/scripts.pory"

# 67 "data/maps/Route118/scripts.pory"
Route118_OnFrame:
# 68 "data/maps/Route118/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 69 "data/maps/Route118/scripts.pory"
	.2byte 0
# 70 "data/maps/Route118/scripts.pory"

# 71 "data/maps/Route118/scripts.pory"

# 72 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceiveGoodRod::
# 73 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
# 74 "data/maps/Route118/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 75 "data/maps/Route118/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 76 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
# 77 "data/maps/Route118/scripts.pory"
	release
# 78 "data/maps/Route118/scripts.pory"
	end
# 79 "data/maps/Route118/scripts.pory"

# 80 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeclineGoodRod::
# 81 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 82 "data/maps/Route118/scripts.pory"
	release
# 83 "data/maps/Route118/scripts.pory"
	end
# 84 "data/maps/Route118/scripts.pory"

# 85 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceivedGoodRod::
# 86 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
# 87 "data/maps/Route118/scripts.pory"
	release
# 88 "data/maps/Route118/scripts.pory"
	end
# 89 "data/maps/Route118/scripts.pory"

# 90 "data/maps/Route118/scripts.pory"
Route118_EventScript_Girl::
# 91 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
# 92 "data/maps/Route118/scripts.pory"
	end
# 93 "data/maps/Route118/scripts.pory"

# 94 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSignMauville::
# 95 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
# 96 "data/maps/Route118/scripts.pory"
	end
# 97 "data/maps/Route118/scripts.pory"

# 98 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSign119::
# 99 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
# 100 "data/maps/Route118/scripts.pory"
	end
# 101 "data/maps/Route118/scripts.pory"

# 102 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger0::
# 103 "data/maps/Route118/scripts.pory"
	lockall
# 104 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 0
# 105 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 106 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 107 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge0
# 108 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 110 "data/maps/Route118/scripts.pory"
	end
# 111 "data/maps/Route118/scripts.pory"

# 112 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger1::
# 113 "data/maps/Route118/scripts.pory"
	lockall
# 114 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 1
# 115 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 116 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 118 "data/maps/Route118/scripts.pory"
	end
# 119 "data/maps/Route118/scripts.pory"

# 120 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger2::
# 121 "data/maps/Route118/scripts.pory"
	lockall
# 122 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 2
# 123 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 124 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge2
# 126 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 128 "data/maps/Route118/scripts.pory"
	end
# 129 "data/maps/Route118/scripts.pory"

# 130 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit0::
# 131 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 132 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit0
# 133 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route118/scripts.pory"
	return
# 135 "data/maps/Route118/scripts.pory"

# 136 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit1::
# 137 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 138 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit1
# 139 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route118/scripts.pory"
	return
# 141 "data/maps/Route118/scripts.pory"

# 142 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit2::
# 143 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 144 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit2
# 145 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route118/scripts.pory"
	return
# 147 "data/maps/Route118/scripts.pory"

# 148 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenExit:
# 149 "data/maps/Route118/scripts.pory"
	delay_16
# 150 "data/maps/Route118/scripts.pory"
	walk_in_place_faster_right
# 151 "data/maps/Route118/scripts.pory"
	step_end
# 152 "data/maps/Route118/scripts.pory"

# 153 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge0:
# 154 "data/maps/Route118/scripts.pory"
	walk_left
# 155 "data/maps/Route118/scripts.pory"
	step_end
# 156 "data/maps/Route118/scripts.pory"

# 157 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge2:
# 158 "data/maps/Route118/scripts.pory"
	walk_right
# 159 "data/maps/Route118/scripts.pory"
	step_end
# 160 "data/maps/Route118/scripts.pory"

# 161 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenJumpLedge:
# 162 "data/maps/Route118/scripts.pory"
	jump_2_down
# 163 "data/maps/Route118/scripts.pory"
	delay_16
# 164 "data/maps/Route118/scripts.pory"
	walk_down
# 165 "data/maps/Route118/scripts.pory"
	step_end
# 166 "data/maps/Route118/scripts.pory"

# 167 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit0:
# 168 "data/maps/Route118/scripts.pory"
	walk_right
# 169 "data/maps/Route118/scripts.pory"
	walk_right
# 170 "data/maps/Route118/scripts.pory"
	walk_right
# 171 "data/maps/Route118/scripts.pory"
	walk_right
# 172 "data/maps/Route118/scripts.pory"
	walk_right
# 173 "data/maps/Route118/scripts.pory"
	walk_right
# 174 "data/maps/Route118/scripts.pory"
	walk_right
# 175 "data/maps/Route118/scripts.pory"
	walk_right
# 176 "data/maps/Route118/scripts.pory"
	walk_right
# 177 "data/maps/Route118/scripts.pory"
	walk_right
# 178 "data/maps/Route118/scripts.pory"
	step_end
# 179 "data/maps/Route118/scripts.pory"

# 180 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit1:
# 181 "data/maps/Route118/scripts.pory"
	walk_right
# 182 "data/maps/Route118/scripts.pory"
	walk_right
# 183 "data/maps/Route118/scripts.pory"
	walk_right
# 184 "data/maps/Route118/scripts.pory"
	walk_right
# 185 "data/maps/Route118/scripts.pory"
	walk_right
# 186 "data/maps/Route118/scripts.pory"
	walk_right
# 187 "data/maps/Route118/scripts.pory"
	walk_right
# 188 "data/maps/Route118/scripts.pory"
	walk_right
# 189 "data/maps/Route118/scripts.pory"
	walk_right
# 190 "data/maps/Route118/scripts.pory"
	step_end
# 191 "data/maps/Route118/scripts.pory"

# 192 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit2:
# 193 "data/maps/Route118/scripts.pory"
	walk_right
# 194 "data/maps/Route118/scripts.pory"
	walk_right
# 195 "data/maps/Route118/scripts.pory"
	walk_right
# 196 "data/maps/Route118/scripts.pory"
	walk_right
# 197 "data/maps/Route118/scripts.pory"
	walk_right
# 198 "data/maps/Route118/scripts.pory"
	walk_right
# 199 "data/maps/Route118/scripts.pory"
	walk_right
# 200 "data/maps/Route118/scripts.pory"
	walk_right
# 201 "data/maps/Route118/scripts.pory"
	step_end
# 202 "data/maps/Route118/scripts.pory"

# 203 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose::
# 204 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
# 205 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 206 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchRose
# 207 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
# 208 "data/maps/Route118/scripts.pory"
	release
# 209 "data/maps/Route118/scripts.pory"
	end
# 210 "data/maps/Route118/scripts.pory"

# 211 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterRose::
# 212 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 213 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 214 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 215 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 216 "data/maps/Route118/scripts.pory"
	release
# 217 "data/maps/Route118/scripts.pory"
	end
# 218 "data/maps/Route118/scripts.pory"

# 219 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchRose::
# 220 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 221 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
# 222 "data/maps/Route118/scripts.pory"
	end
# 223 "data/maps/Route118/scripts.pory"

# 224 "data/maps/Route118/scripts.pory"
Route118_EventScript_Barny::
# 225 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
# 226 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 227 "data/maps/Route118/scripts.pory"
	end
# 228 "data/maps/Route118/scripts.pory"

# 229 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade::
# 230 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
# 231 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/Route118/scripts.pory"
	end
# 233 "data/maps/Route118/scripts.pory"

# 234 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton::
# 235 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
# 236 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 237 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchDalton
# 238 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 239 "data/maps/Route118/scripts.pory"
	release
# 240 "data/maps/Route118/scripts.pory"
	end
# 241 "data/maps/Route118/scripts.pory"

# 242 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton::
# 243 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 244 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 245 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 246 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 247 "data/maps/Route118/scripts.pory"
	release
# 248 "data/maps/Route118/scripts.pory"
	end
# 249 "data/maps/Route118/scripts.pory"

# 250 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton::
# 251 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 252 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 253 "data/maps/Route118/scripts.pory"
	end
# 254 "data/maps/Route118/scripts.pory"

# 255 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry::
# 256 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 257 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 258 "data/maps/Route118/scripts.pory"
	end
# 259 "data/maps/Route118/scripts.pory"

# 260 "data/maps/Route118/scripts.pory"
Route118_EventScript_Chester::
# 261 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
# 262 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 263 "data/maps/Route118/scripts.pory"
	end
# 264 "data/maps/Route118/scripts.pory"

# 265 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre::
# 266 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
# 267 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 268 "data/maps/Route118/scripts.pory"
	end
# 269 "data/maps/Route118/scripts.pory"

# 270 "data/maps/Route118/scripts.pory"
Route118_Text_StevenQuestions:
# 271 "data/maps/Route118/scripts.pory"
	.string "STEVEN: Hi, {PLAYER}{KUN}!\p"
# 272 "data/maps/Route118/scripts.pory"
	.string "It's me, STEVEN!\n"
# 273 "data/maps/Route118/scripts.pory"
	.string "We met in the cave near DEWFORD.\p"
# 274 "data/maps/Route118/scripts.pory"
	.string "Have you met many kinds of POKéMON\n"
# 275 "data/maps/Route118/scripts.pory"
	.string "since I last saw you?\p"
# 276 "data/maps/Route118/scripts.pory"
	.string "There are many, many kinds of POKéMON\n"
# 277 "data/maps/Route118/scripts.pory"
	.string "in this wide world of ours.\p"
# 278 "data/maps/Route118/scripts.pory"
	.string "If you wanted to raise only your\n"
# 279 "data/maps/Route118/scripts.pory"
	.string "favorites, that's fine.\p"
# 280 "data/maps/Route118/scripts.pory"
	.string "Perhaps you find it more fun to raise\n"
# 281 "data/maps/Route118/scripts.pory"
	.string "all sorts of POKéMON.\p"
# 282 "data/maps/Route118/scripts.pory"
	.string "As a TRAINER of POKéMON,\n"
# 283 "data/maps/Route118/scripts.pory"
	.string "what do you think?\p"
# 284 "data/maps/Route118/scripts.pory"
	.string "Of course, it's not any of my business.\p"
# 285 "data/maps/Route118/scripts.pory"
	.string "It would be nice if we were to meet\n"
# 286 "data/maps/Route118/scripts.pory"
	.string "again somewhere.$"
# 287 "data/maps/Route118/scripts.pory"
	.string "For now, here's a quick present\n"
# 288 "data/maps/Route118/scripts.pory"
	.string "Let's battle to test it out!$"
# 289 "data/maps/Route118/scripts.pory"

# 290 "data/maps/Route118/scripts.pory"

# 291 "data/maps/Route118/scripts.pory"
Route118_Text_YouAgreeGoodRodIsGood:
# 292 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 293 "data/maps/Route118/scripts.pory"
	.string "A GOOD ROD is really good!\p"
# 294 "data/maps/Route118/scripts.pory"
	.string "Wouldn't you agree?$"
# 295 "data/maps/Route118/scripts.pory"

# 296 "data/maps/Route118/scripts.pory"
Route118_Text_IdenticalMindsTakeThis:
# 297 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 298 "data/maps/Route118/scripts.pory"
	.string "We're of identical minds!\p"
# 299 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 300 "data/maps/Route118/scripts.pory"
	.string "Take this GOOD ROD!$"
# 301 "data/maps/Route118/scripts.pory"

# 302 "data/maps/Route118/scripts.pory"
Route118_Text_TryYourLuckFishing:
# 303 "data/maps/Route118/scripts.pory"
	.string "Wherever there's water, try your luck\n"
# 304 "data/maps/Route118/scripts.pory"
	.string "at fishing.$"
# 305 "data/maps/Route118/scripts.pory"

# 306 "data/maps/Route118/scripts.pory"
Route118_Text_DontYouLikeToFish:
# 307 "data/maps/Route118/scripts.pory"
	.string "Don't you like to fish?$"
# 308 "data/maps/Route118/scripts.pory"

# 309 "data/maps/Route118/scripts.pory"
Route118_Text_TryCatchingMonWithGoodRod:
# 310 "data/maps/Route118/scripts.pory"
	.string "Try catching all sorts of POKéMON\n"
# 311 "data/maps/Route118/scripts.pory"
	.string "with your GOOD ROD.$"
# 312 "data/maps/Route118/scripts.pory"

# 313 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf:
# 314 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
# 315 "data/maps/Route118/scripts.pory"
	.string "cross rivers and the sea if you have\l"
# 316 "data/maps/Route118/scripts.pory"
	.string "a POKéMON that knows SURF.\p"
# 317 "data/maps/Route118/scripts.pory"
	.string "POKéMON can be counted on to do so\n"
# 318 "data/maps/Route118/scripts.pory"
	.string "much!$"
# 319 "data/maps/Route118/scripts.pory"

# 320 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville:
# 321 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
# 322 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} MAUVILLE CITY$"
# 323 "data/maps/Route118/scripts.pory"

# 324 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119:
# 325 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
# 326 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} ROUTE 119$"

Route118_EventScript_StevenTrigger_Text_0:
# 10 "data/maps/Route118/scripts.pory"
	.string "{PLAYER} obtained the Mega Ring!$"

Route118_EventScript_StevenTrigger_Text_1:
# 12 "data/maps/Route118/scripts.pory"
	.string "Let's do this!$"

Route118_EventScript_StevenTrigger_Text_2:
# 12 "data/maps/Route118/scripts.pory"
	.string "Great job!$"

Route118_EventScript_StevenTrigger4_Text_0:
# 18 "data/maps/Route118/scripts.pory"
	.string "You did great! I hate to shower you with\n"
	.string "gifts, but here's something as a thanks\l"
	.string "for your help of Mt. Chimney.$"

Route118_EventScript_StevenTrigger4_Text_1:
# 21 "data/maps/Route118/scripts.pory"
	.string "{PLAYER} obtained the Metagrossite!$"

Route118_EventScript_StevenTrigger4_Text_2:
# 23 "data/maps/Route118/scripts.pory"
	.string "Just like myself, there will be a lot of\n"
	.string "trainers across the region who guard\l"
	.string "the Mega Evolution stones. If you want\l"
	.string "to Mega Evolve more of you're POKéMON,\l"
	.string "you'll have to beat them.$"

Route118_EventScript_StevenTrigger4_Text_3:
# 25 "data/maps/Route118/scripts.pory"
	.string "Oh! Also, I may have an opportunity for\n"
	.string "you later, but that's all I can say for\l"
	.string "certain. For now, farewell {PLAYER}!$"

Route118_EventScript_GoodRodFisherman_Text_0:
# 39 "data/maps/Route118/scripts.pory"
	.string "Hello. I had a good rod, but I lost it\n"
	.string "when exploring North of Rustboro. I was\l"
	.string "knocked out, but when I came back, my\l"
	.string "good rod was missing. I wonder where it\l"
	.string "went?$"
