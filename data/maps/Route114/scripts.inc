EventScript_BlockWMtChimney::
# 2 "data/maps/Route114/scripts.pory"
	lockall
# 3 "data/maps/Route114/scripts.pory"
	msgbox EventScript_BlockWMtChimney_Text_0
# 4 "data/maps/Route114/scripts.pory"
	releaseall
	return


TeamMagmaonWMtChimney::
# 10 "data/maps/Route114/scripts.pory"
	lockall
# 11 "data/maps/Route114/scripts.pory"
	clearflag FLAG_TEMP_1
# 12 "data/maps/Route114/scripts.pory"
	applymovement 28, AlinaTellsPlayerMtChimney
# 13 "data/maps/Route114/scripts.pory"
	waitmovement 28
# 14 "data/maps/Route114/scripts.pory"
	msgbox TeamMagmaonWMtChimney_Text_0
# 15 "data/maps/Route114/scripts.pory"
	waitmessage
# 16 "data/maps/Route114/scripts.pory"
	msgbox TeamMagmaonWMtChimney_Text_1
# 17 "data/maps/Route114/scripts.pory"
	waitmessage
# 18 "data/maps/Route114/scripts.pory"
	applymovement 28, AlinaGoestoWMtChimney
# 19 "data/maps/Route114/scripts.pory"
	waitmovement 28
# 20 "data/maps/Route114/scripts.pory"
	removeobject 28
# 21 "data/maps/Route114/scripts.pory"
	setflag FLAG_TEMP_1
# 22 "data/maps/Route114/scripts.pory"
	releaseall
	return


# 25 "data/maps/Route114/scripts.pory"
AlinaTellsPlayerMtChimney:
# 26 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 26 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 26 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 26 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 26 "data/maps/Route114/scripts.pory"
	walk_fast_up
# 27 "data/maps/Route114/scripts.pory"
	emote_exclamation_mark
# 28 "data/maps/Route114/scripts.pory"
	face_up
	step_end

# 31 "data/maps/Route114/scripts.pory"
AlinaGoestoWMtChimney:
# 32 "data/maps/Route114/scripts.pory"
	walk_faster_down
# 32 "data/maps/Route114/scripts.pory"
	walk_faster_down
# 32 "data/maps/Route114/scripts.pory"
	walk_faster_down
# 32 "data/maps/Route114/scripts.pory"
	walk_faster_down
# 32 "data/maps/Route114/scripts.pory"
	walk_faster_down
# 32 "data/maps/Route114/scripts.pory"
	walk_faster_down
# 32 "data/maps/Route114/scripts.pory"
	walk_faster_down
	step_end

# 36 "data/maps/Route114/scripts.pory"

# 37 "data/maps/Route114/scripts.pory"
Route114_MapScripts::
# 38 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 39 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 40 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
# 41 "data/maps/Route114/scripts.pory"
	.byte 0
# 42 "data/maps/Route114/scripts.pory"

# 43 "data/maps/Route114/scripts.pory"
Route114_OnTransition:
# 44 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 45 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 46 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 47 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_METEOR_FALLS_STATE, 0, HideAlina
# 48 "data/maps/Route114/scripts.pory"
	end
# 49 "data/maps/Route114/scripts.pory"

# 50 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 51 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 52 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 53 "data/maps/Route114/scripts.pory"
	end
# 54 "data/maps/Route114/scripts.pory"

# 55 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 56 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 57 "data/maps/Route114/scripts.pory"
	.2byte 0
# 58 "data/maps/Route114/scripts.pory"

# 59 "data/maps/Route114/scripts.pory"
HideAlina:
# 60 "data/maps/Route114/scripts.pory"
	setflag FLAG_TEMP_1 	
# 61 "data/maps/Route114/scripts.pory"
	end
# 62 "data/maps/Route114/scripts.pory"

# 63 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 64 "data/maps/Route114/scripts.pory"
	lock
# 65 "data/maps/Route114/scripts.pory"
	faceplayer
# 66 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 67 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 68 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 69 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 70 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 71 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 72 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 73 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 74 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 75 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 76 "data/maps/Route114/scripts.pory"
	release
# 77 "data/maps/Route114/scripts.pory"
	end
# 78 "data/maps/Route114/scripts.pory"

# 79 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 80 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 81 "data/maps/Route114/scripts.pory"
	release
# 82 "data/maps/Route114/scripts.pory"
	end
# 83 "data/maps/Route114/scripts.pory"

# 84 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 85 "data/maps/Route114/scripts.pory"
	lock
# 86 "data/maps/Route114/scripts.pory"
	faceplayer
# 87 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 88 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 89 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM05
# 90 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 91 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 92 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 93 "data/maps/Route114/scripts.pory"
	release
# 94 "data/maps/Route114/scripts.pory"
	end
# 95 "data/maps/Route114/scripts.pory"

# 96 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 97 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 98 "data/maps/Route114/scripts.pory"
	release
# 99 "data/maps/Route114/scripts.pory"
	end
# 100 "data/maps/Route114/scripts.pory"

# 101 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 102 "data/maps/Route114/scripts.pory"
	lock
# 103 "data/maps/Route114/scripts.pory"
	faceplayer
# 104 "data/maps/Route114/scripts.pory"
	waitse
# 105 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 106 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 107 "data/maps/Route114/scripts.pory"
	waitmoncry
# 108 "data/maps/Route114/scripts.pory"
	release
# 109 "data/maps/Route114/scripts.pory"
	end
# 110 "data/maps/Route114/scripts.pory"

# 111 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 112 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 113 "data/maps/Route114/scripts.pory"
	end
# 114 "data/maps/Route114/scripts.pory"

# 115 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 116 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 117 "data/maps/Route114/scripts.pory"
	end
# 118 "data/maps/Route114/scripts.pory"

# 119 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 120 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 121 "data/maps/Route114/scripts.pory"
	end
# 122 "data/maps/Route114/scripts.pory"

# 123 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 124 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 125 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/Route114/scripts.pory"
	end
# 127 "data/maps/Route114/scripts.pory"

# 128 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 129 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 130 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route114/scripts.pory"
	end
# 132 "data/maps/Route114/scripts.pory"

# 133 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 134 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 135 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route114/scripts.pory"
	end
# 137 "data/maps/Route114/scripts.pory"

# 138 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 139 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 140 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route114/scripts.pory"
	end
# 142 "data/maps/Route114/scripts.pory"

# 143 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 144 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 145 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 146 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 147 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 148 "data/maps/Route114/scripts.pory"
	release
# 149 "data/maps/Route114/scripts.pory"
	end
# 150 "data/maps/Route114/scripts.pory"

# 151 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 152 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 153 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 154 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 155 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 156 "data/maps/Route114/scripts.pory"
	release
# 157 "data/maps/Route114/scripts.pory"
	end
# 158 "data/maps/Route114/scripts.pory"

# 159 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 160 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 161 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 162 "data/maps/Route114/scripts.pory"
	end
# 163 "data/maps/Route114/scripts.pory"

# 164 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 165 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 166 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 167 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 168 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 169 "data/maps/Route114/scripts.pory"
	release
# 170 "data/maps/Route114/scripts.pory"
	end
# 171 "data/maps/Route114/scripts.pory"

# 172 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 173 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 174 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 175 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 176 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 177 "data/maps/Route114/scripts.pory"
	release
# 178 "data/maps/Route114/scripts.pory"
	end
# 179 "data/maps/Route114/scripts.pory"

# 180 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 181 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 182 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 183 "data/maps/Route114/scripts.pory"
	end
# 184 "data/maps/Route114/scripts.pory"

# 185 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 186 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 187 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/Route114/scripts.pory"
	end
# 189 "data/maps/Route114/scripts.pory"

# 190 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 191 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 192 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 193 "data/maps/Route114/scripts.pory"
	end
# 194 "data/maps/Route114/scripts.pory"

# 195 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 196 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 197 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/Route114/scripts.pory"
	end
# 199 "data/maps/Route114/scripts.pory"

# 200 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 201 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 202 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/Route114/scripts.pory"
	end
# 204 "data/maps/Route114/scripts.pory"

# 205 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina::
# 206 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 207 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route114/scripts.pory"
	end
# 209 "data/maps/Route114/scripts.pory"

# 210 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 211 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 212 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route114/scripts.pory"
	end
# 214 "data/maps/Route114/scripts.pory"

# 215 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 216 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 217 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route114/scripts.pory"
	end
# 219 "data/maps/Route114/scripts.pory"

# 220 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 221 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 222 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 223 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 224 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 225 "data/maps/Route114/scripts.pory"

# 226 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 227 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 228 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 229 "data/maps/Route114/scripts.pory"

# 230 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 231 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 232 "data/maps/Route114/scripts.pory"

# 233 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 234 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 235 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 236 "data/maps/Route114/scripts.pory"

# 237 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 238 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 239 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 240 "data/maps/Route114/scripts.pory"

# 241 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 242 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"

EventScript_BlockWMtChimney_Text_0:
# 3 "data/maps/Route114/scripts.pory"
	.string "Nothing's goin' on here, I promise!$"

TeamMagmaonWMtChimney_Text_0:
# 14 "data/maps/Route114/scripts.pory"
	.string "Alina: Hey! It's you again! I don't know\n"
	.string "why I'm acting surprised, I was told\l"
	.string "you'd be around here. Anyway, we have a\l"
	.string "really, REALLY big problem. Team Magma's\l"
	.string "plotting on both the top and cliffs of\l"
	.string "Mt. Chimney.$"

TeamMagmaonWMtChimney_Text_1:
# 16 "data/maps/Route114/scripts.pory"
	.string "Alina: There was a grunt stationed to\n"
	.string "guard the bridge to West Mt. Chimney,\l"
	.string "but I took care of them already, either\l"
	.string "way, we need to go.$"
