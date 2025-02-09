WestMtChimney2_MapScripts::
# 2 "data/maps/WestMtChimney2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SpawnEntei
	.byte 0


SpawnEntei::
# 6 "data/maps/WestMtChimney2/scripts.pory"
	compare VAR_ENTEI, 2
	goto_if_eq SpawnEntei_1
# 14 "data/maps/WestMtChimney2/scripts.pory"
	compare VAR_ENTEI, 10
	goto_if_eq SpawnEntei_4
# 25 "data/maps/WestMtChimney2/scripts.pory"
	setflag FLAG_TEMP_1
# 26 "data/maps/WestMtChimney2/scripts.pory"
	setflag FLAG_TEMP_2
# 27 "data/maps/WestMtChimney2/scripts.pory"
	setflag FLAG_TEMP_3
# 28 "data/maps/WestMtChimney2/scripts.pory"
	setflag FLAG_TEMP_4
# 29 "data/maps/WestMtChimney2/scripts.pory"
	setflag FLAG_TEMP_5
	return

SpawnEntei_1:
# 8 "data/maps/WestMtChimney2/scripts.pory"
	clearflag FLAG_TEMP_1
# 9 "data/maps/WestMtChimney2/scripts.pory"
	setflag FLAG_TEMP_3
# 10 "data/maps/WestMtChimney2/scripts.pory"
	addobject 1
	return

SpawnEntei_4:
# 16 "data/maps/WestMtChimney2/scripts.pory"
	clearflag FLAG_TEMP_2
# 17 "data/maps/WestMtChimney2/scripts.pory"
	setflag FLAG_TEMP_1
# 18 "data/maps/WestMtChimney2/scripts.pory"
	setflag FLAG_TEMP_3
# 19 "data/maps/WestMtChimney2/scripts.pory"
	setflag FLAG_TEMP_4
# 20 "data/maps/WestMtChimney2/scripts.pory"
	setflag FLAG_TEMP_5
# 21 "data/maps/WestMtChimney2/scripts.pory"
	addobject 5
	return


ScareEntei1::
# 42 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 43 "data/maps/WestMtChimney2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkRight
# 44 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 45 "data/maps/WestMtChimney2/scripts.pory"
	delay 30
# 46 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 1, ScareEntei1a
# 47 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 1
# 48 "data/maps/WestMtChimney2/scripts.pory"
	msgbox ScareEntei1_Text_0
# 49 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 50 "data/maps/WestMtChimney2/scripts.pory"
	msgbox ScareEntei1_Text_1
# 51 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 52 "data/maps/WestMtChimney2/scripts.pory"
	msgbox ScareEntei1_Text_2
# 53 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 54 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 4, CourtneyChasesEntei1
# 55 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 4
# 56 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 16, AlinaBeatsGrunt2
# 57 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 16
# 58 "data/maps/WestMtChimney2/scripts.pory"
	msgbox ScareEntei1_Text_3
# 59 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 60 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 16, AlinaApproachPlayer4
# 61 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 16
# 62 "data/maps/WestMtChimney2/scripts.pory"
	msgbox ScareEntei1_Text_4
# 63 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 64 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 16, BackToFightingAlina
# 65 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 16
# 66 "data/maps/WestMtChimney2/scripts.pory"
	msgbox ScareEntei1_Text_5
# 67 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 68 "data/maps/WestMtChimney2/scripts.pory"
	setvar VAR_ENTEI, 3
# 69 "data/maps/WestMtChimney2/scripts.pory"
	removeobject 1
# 70 "data/maps/WestMtChimney2/scripts.pory"
	addobject 22
# 71 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


# 74 "data/maps/WestMtChimney2/scripts.pory"
WalkRight:
# 75 "data/maps/WestMtChimney2/scripts.pory"
	walk_right
# 75 "data/maps/WestMtChimney2/scripts.pory"
	walk_right
	step_end

# 78 "data/maps/WestMtChimney2/scripts.pory"
ScareEntei1a:
# 79 "data/maps/WestMtChimney2/scripts.pory"
	emote_exclamation_mark
# 80 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_up
# 80 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_up
# 80 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_up
# 80 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_up
# 80 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_up
# 81 "data/maps/WestMtChimney2/scripts.pory"
	jump_right
# 81 "data/maps/WestMtChimney2/scripts.pory"
	jump_right
# 81 "data/maps/WestMtChimney2/scripts.pory"
	jump_right
# 81 "data/maps/WestMtChimney2/scripts.pory"
	jump_right
# 81 "data/maps/WestMtChimney2/scripts.pory"
	jump_right
# 82 "data/maps/WestMtChimney2/scripts.pory"
	face_down
	step_end

# 85 "data/maps/WestMtChimney2/scripts.pory"
CourtneyChasesEntei1:
# 86 "data/maps/WestMtChimney2/scripts.pory"
	walk_right
# 87 "data/maps/WestMtChimney2/scripts.pory"
	walk_down
# 87 "data/maps/WestMtChimney2/scripts.pory"
	walk_down
# 87 "data/maps/WestMtChimney2/scripts.pory"
	walk_down
# 88 "data/maps/WestMtChimney2/scripts.pory"
	walk_right
# 88 "data/maps/WestMtChimney2/scripts.pory"
	walk_right
# 88 "data/maps/WestMtChimney2/scripts.pory"
	walk_right
# 89 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 89 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 89 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 89 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 89 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 89 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 89 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 89 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 89 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 89 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 89 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 90 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 90 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 90 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 91 "data/maps/WestMtChimney2/scripts.pory"
	face_up
	step_end

# 94 "data/maps/WestMtChimney2/scripts.pory"
AlinaBeatsGrunt2:
# 95 "data/maps/WestMtChimney2/scripts.pory"
	walk_in_place_fast_right
# 95 "data/maps/WestMtChimney2/scripts.pory"
	walk_in_place_fast_right
# 95 "data/maps/WestMtChimney2/scripts.pory"
	walk_in_place_fast_right
# 95 "data/maps/WestMtChimney2/scripts.pory"
	walk_in_place_fast_right
	step_end

# 98 "data/maps/WestMtChimney2/scripts.pory"
AlinaApproachPlayer4:
# 99 "data/maps/WestMtChimney2/scripts.pory"
	face_left
	step_end

# 102 "data/maps/WestMtChimney2/scripts.pory"
BackToFightingAlina:
# 103 "data/maps/WestMtChimney2/scripts.pory"
	face_right
	step_end

AlinaWMtChimneyDialogue1::
# 107 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 108 "data/maps/WestMtChimney2/scripts.pory"
	faceplayer
# 109 "data/maps/WestMtChimney2/scripts.pory"
	msgbox AlinaWMtChimneyDialogue1_Text_0
# 110 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 111 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 16, FaceRight
# 112 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


# 115 "data/maps/WestMtChimney2/scripts.pory"
FaceRight:
# 116 "data/maps/WestMtChimney2/scripts.pory"
	face_right
	step_end

TeamMagmaWMtChimneyDialogue1::
# 120 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 121 "data/maps/WestMtChimney2/scripts.pory"
	msgbox TeamMagmaWMtChimneyDialogue1_Text_0
# 122 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 123 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


NurseMtChimney::
# 127 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 128 "data/maps/WestMtChimney2/scripts.pory"
	faceplayer
# 129 "data/maps/WestMtChimney2/scripts.pory"
	msgbox NurseMtChimney_Text_0
# 130 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 131 "data/maps/WestMtChimney2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 132 "data/maps/WestMtChimney2/scripts.pory"
	special HealPlayerParty
# 133 "data/maps/WestMtChimney2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 134 "data/maps/WestMtChimney2/scripts.pory"
	msgbox NurseMtChimney_Text_1
# 135 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 136 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


DontTurnBack::
# 140 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 141 "data/maps/WestMtChimney2/scripts.pory"
	msgbox DontTurnBack_Text_0
# 142 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 143 "data/maps/WestMtChimney2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkRight
# 144 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 145 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


ScareEntei2Setup1::
# 149 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 150 "data/maps/WestMtChimney2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScareEntei2Setup1a
# 151 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 152 "data/maps/WestMtChimney2/scripts.pory"
	goto ScareEntei2
	return


# 155 "data/maps/WestMtChimney2/scripts.pory"
ScareEntei2Setup1a:
# 156 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 156 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
	step_end

ScareEntei2Setup2::
# 160 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 161 "data/maps/WestMtChimney2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScareEntei2Setup2a
# 162 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 163 "data/maps/WestMtChimney2/scripts.pory"
	goto ScareEntei2
	return


# 166 "data/maps/WestMtChimney2/scripts.pory"
ScareEntei2Setup2a:
# 167 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 167 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 168 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 168 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
	step_end

ScareEntei2Setup3::
# 172 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 173 "data/maps/WestMtChimney2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScareEntei2Setup3a
# 174 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 175 "data/maps/WestMtChimney2/scripts.pory"
	goto ScareEntei2
	return


# 178 "data/maps/WestMtChimney2/scripts.pory"
ScareEntei2Setup3a:
# 179 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 179 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 179 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 180 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 180 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
	step_end

ScareEntei2Setup4::
# 184 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 185 "data/maps/WestMtChimney2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScareEntei2Setup4a
# 186 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 187 "data/maps/WestMtChimney2/scripts.pory"
	goto ScareEntei2
	return


# 190 "data/maps/WestMtChimney2/scripts.pory"
ScareEntei2Setup4a:
# 191 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 191 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 191 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 191 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 192 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 192 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
	step_end

ScareEntei2Setup5::
# 196 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 197 "data/maps/WestMtChimney2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ScareEntei2Setup5a
# 198 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 199 "data/maps/WestMtChimney2/scripts.pory"
	goto ScareEntei2
	return


# 202 "data/maps/WestMtChimney2/scripts.pory"
ScareEntei2Setup5a:
# 203 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 203 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 203 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 203 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 203 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 204 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 204 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
	step_end

ScareEntei2::
# 208 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 209 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 17, RoxannesBattling
# 210 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 17
# 211 "data/maps/WestMtChimney2/scripts.pory"
	msgbox ScareEntei2_Text_0
# 212 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 213 "data/maps/WestMtChimney2/scripts.pory"
	delay 30
# 214 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 22, ScareEntei2a
# 215 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 22
# 216 "data/maps/WestMtChimney2/scripts.pory"
	removeobject 22
# 217 "data/maps/WestMtChimney2/scripts.pory"
	addobject 20
# 218 "data/maps/WestMtChimney2/scripts.pory"
	clearflag FLAG_TEMP_3
# 219 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 4, FaceDown
# 220 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 4
# 221 "data/maps/WestMtChimney2/scripts.pory"
	msgbox ScareEntei2_Text_1
# 222 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 223 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 4, CourtneyChasesEntei2
# 224 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 4
# 225 "data/maps/WestMtChimney2/scripts.pory"
	removeobject 4
# 226 "data/maps/WestMtChimney2/scripts.pory"
	addobject 19
# 227 "data/maps/WestMtChimney2/scripts.pory"
	setvar VAR_ENTEI, 4
# 228 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


# 231 "data/maps/WestMtChimney2/scripts.pory"
RoxannesBattling:
# 232 "data/maps/WestMtChimney2/scripts.pory"
	walk_in_place_left
# 232 "data/maps/WestMtChimney2/scripts.pory"
	walk_in_place_left
# 232 "data/maps/WestMtChimney2/scripts.pory"
	walk_in_place_left
# 232 "data/maps/WestMtChimney2/scripts.pory"
	walk_in_place_left
	step_end

# 235 "data/maps/WestMtChimney2/scripts.pory"
ScareEntei2a:
# 236 "data/maps/WestMtChimney2/scripts.pory"
	emote_exclamation_mark
# 237 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_right
# 237 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_right
# 237 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_right
# 237 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_right
# 237 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_right
# 237 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_right
# 237 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_right
# 238 "data/maps/WestMtChimney2/scripts.pory"
	jump_down
# 238 "data/maps/WestMtChimney2/scripts.pory"
	jump_down
# 238 "data/maps/WestMtChimney2/scripts.pory"
	jump_down
# 238 "data/maps/WestMtChimney2/scripts.pory"
	jump_down
# 238 "data/maps/WestMtChimney2/scripts.pory"
	jump_down
	step_end

# 241 "data/maps/WestMtChimney2/scripts.pory"
FaceDown:
# 242 "data/maps/WestMtChimney2/scripts.pory"
	face_down
	step_end

# 245 "data/maps/WestMtChimney2/scripts.pory"
CourtneyChasesEntei2:
# 246 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 247 "data/maps/WestMtChimney2/scripts.pory"
	walk_right
# 247 "data/maps/WestMtChimney2/scripts.pory"
	walk_right
# 248 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 248 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 248 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 248 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 248 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 248 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
# 249 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_right
# 249 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_right
# 249 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_right
# 249 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_right
# 250 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 250 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 250 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 250 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 250 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 250 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 251 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 252 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 252 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 252 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 252 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 252 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 252 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 252 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 252 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 252 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 252 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 253 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 253 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 253 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 253 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 253 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 253 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 253 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 254 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 254 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 254 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 254 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
	step_end

RoxanneWMtChimneyDialogue::
# 258 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 259 "data/maps/WestMtChimney2/scripts.pory"
	msgbox RoxanneWMtChimneyDialogue_Text_0
# 260 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 261 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


TeamMagmaWMtChimneyDialogue2::
# 265 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 266 "data/maps/WestMtChimney2/scripts.pory"
	msgbox TeamMagmaWMtChimneyDialogue2_Text_0
# 267 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 268 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


TeamMagmaWMtChimneyDialogue3::
# 272 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 273 "data/maps/WestMtChimney2/scripts.pory"
	msgbox TeamMagmaWMtChimneyDialogue3_Text_0
# 274 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 275 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


TeamMagmaWMtChimneyDialogue4::
# 279 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 280 "data/maps/WestMtChimney2/scripts.pory"
	msgbox TeamMagmaWMtChimneyDialogue4_Text_0
# 281 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 282 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


ScareEntei3::
# 286 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 287 "data/maps/WestMtChimney2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUp
# 288 "data/maps/WestMtChimney2/scripts.pory"
	delay 30
# 289 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 20, ScareEntei3a
# 290 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 20
# 291 "data/maps/WestMtChimney2/scripts.pory"
	removeobject 20
# 292 "data/maps/WestMtChimney2/scripts.pory"
	setflag FLAG_TEMP_3
# 293 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 19, FaceDown
# 294 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 19
# 295 "data/maps/WestMtChimney2/scripts.pory"
	msgbox ScareEntei3_Text_0
# 296 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 297 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 19, CourtneyChasesEntei3
# 298 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 19
# 299 "data/maps/WestMtChimney2/scripts.pory"
	removeobject 19
# 300 "data/maps/WestMtChimney2/scripts.pory"
	addobject 23
# 301 "data/maps/WestMtChimney2/scripts.pory"
	clearflag 23
# 302 "data/maps/WestMtChimney2/scripts.pory"
	setvar VAR_ENTEI, 5
# 303 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


# 306 "data/maps/WestMtChimney2/scripts.pory"
WalkUp:
# 307 "data/maps/WestMtChimney2/scripts.pory"
	walk_up
	step_end

# 310 "data/maps/WestMtChimney2/scripts.pory"
ScareEntei3a:
# 311 "data/maps/WestMtChimney2/scripts.pory"
	emote_exclamation_mark
# 312 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_up
# 312 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_up
# 312 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_up
# 312 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_up
# 312 "data/maps/WestMtChimney2/scripts.pory"
	jump_2_up
	step_end

# 315 "data/maps/WestMtChimney2/scripts.pory"
CourtneyChasesEntei3:
# 316 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 317 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_up
# 317 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_up
# 317 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_up
# 317 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_up
# 317 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_up
# 318 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_left
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 319 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_up
# 320 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_right
# 320 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_right
# 320 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_right
# 320 "data/maps/WestMtChimney2/scripts.pory"
	walk_faster_right
# 321 "data/maps/WestMtChimney2/scripts.pory"
	face_left
	step_end

HelpMePlayer::
# 325 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 326 "data/maps/WestMtChimney2/scripts.pory"
	faceplayer
# 327 "data/maps/WestMtChimney2/scripts.pory"
	msgbox HelpMePlayer_Text_0
# 328 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 18, FaceUp
# 329 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


MultiWithNorman::
# 333 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 334 "data/maps/WestMtChimney2/scripts.pory"
	msgbox MultiWithNorman_Text_0
# 335 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 336 "data/maps/WestMtChimney2/scripts.pory"
	msgbox MultiWithNorman_Text_1
# 337 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 338 "data/maps/WestMtChimney2/scripts.pory"
	msgbox MultiWithNorman_Text_2
# 339 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 340 "data/maps/WestMtChimney2/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_FLANNERY_4, IDonWannaLose, TRAINER_FLANNERY_5, ILost, TRAINER_NORMAN_3
# 341 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 12, WalkLeftFaceDown
# 342 "data/maps/WestMtChimney2/scripts.pory"
	msgbox MultiWithNorman_Text_3
# 343 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 344 "data/maps/WestMtChimney2/scripts.pory"
	setvar VAR_ENTEI, 6
# 345 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


IDonWannaLosea::
# 349 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 350 "data/maps/WestMtChimney2/scripts.pory"
	faceplayer
# 351 "data/maps/WestMtChimney2/scripts.pory"
	msgbox IDonWannaLosea_Text_0
# 352 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 353 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


ILosta::
# 357 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 358 "data/maps/WestMtChimney2/scripts.pory"
	faceplayer
# 359 "data/maps/WestMtChimney2/scripts.pory"
	msgbox ILosta_Text_0
# 360 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 361 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


NormanDialogueWMtChimney::
# 365 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 366 "data/maps/WestMtChimney2/scripts.pory"
	faceplayer
# 367 "data/maps/WestMtChimney2/scripts.pory"
	msgbox NormanDialogueWMtChimney_Text_0
# 368 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 369 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


IWontMove::
# 373 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 374 "data/maps/WestMtChimney2/scripts.pory"
	msgbox IWontMove_Text_0
# 375 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


# 386 "data/maps/WestMtChimney2/scripts.pory"
WalkLeftFaceDown:
# 387 "data/maps/WestMtChimney2/scripts.pory"
	walk_left
# 388 "data/maps/WestMtChimney2/scripts.pory"
	face_down
	step_end

CourtneyBattleWMtChimney::
# 392 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 393 "data/maps/WestMtChimney2/scripts.pory"
	msgbox CourtneyBattleWMtChimney_Text_0
# 394 "data/maps/WestMtChimney2/scripts.pory"
	trainerbattle_single TRAINER_NORMAN_4, CourtneyBattleWMtChimney_Text_1, CourtneyBattleWMtChimney_Text_2, ScareEntei4
	return


ScareEntei4::
# 398 "data/maps/WestMtChimney2/scripts.pory"
	delay 30
# 399 "data/maps/WestMtChimney2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 400 "data/maps/WestMtChimney2/scripts.pory"
	removeobject 5
# 401 "data/maps/WestMtChimney2/scripts.pory"
	playmoncry SPECIES_ENTEI, CRY_MODE_ENCOUNTER
# 402 "data/maps/WestMtChimney2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 403 "data/maps/WestMtChimney2/scripts.pory"
	msgbox ScareEntei4_Text_0
# 404 "data/maps/WestMtChimney2/scripts.pory"
	setvar VAR_ENTEI, 7
# 405 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


WMtChimneyGrunt1::
# 409 "data/maps/WestMtChimney2/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_5, WMtChimneyGrunt1_Text_0, WMtChimneyGrunt1_Text_1
# 410 "data/maps/WestMtChimney2/scripts.pory"
	msgbox WMtChimneyGrunt1_Text_2, MSGBOX_AUTOCLOSE
# 411 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
	end


WMtChimneyGrunt2::
# 416 "data/maps/WestMtChimney2/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_3, WMtChimneyGrunt1_Text_0, WMtChimneyGrunt2_Text_0
# 417 "data/maps/WestMtChimney2/scripts.pory"
	msgbox WMtChimneyGrunt2_Text_1, MSGBOX_AUTOCLOSE
# 418 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
	end


WMtChimneyGrunt3::
# 423 "data/maps/WestMtChimney2/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_4, WMtChimneyGrunt1_Text_0, WMtChimneyGrunt3_Text_0
# 424 "data/maps/WestMtChimney2/scripts.pory"
	msgbox WMtChimneyGrunt3_Text_1, MSGBOX_AUTOCLOSE
# 425 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
	end


WMtChimneyGrunt4::
# 430 "data/maps/WestMtChimney2/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_5, WMtChimneyGrunt1_Text_0, WMtChimneyGrunt4_Text_0
# 431 "data/maps/WestMtChimney2/scripts.pory"
	msgbox WMtChimneyGrunt4_Text_1, MSGBOX_AUTOCLOSE
# 432 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
	end


WMtChimneyGrunt5::
# 437 "data/maps/WestMtChimney2/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_3, WMtChimneyGrunt1_Text_0, WMtChimneyGrunt5_Text_0
# 438 "data/maps/WestMtChimney2/scripts.pory"
	msgbox WMtChimneyGrunt5_Text_1, MSGBOX_AUTOCLOSE
# 439 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
	end


OopsWeLost::
# 444 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 445 "data/maps/WestMtChimney2/scripts.pory"
	msgbox OopsWeLost_Text_0
# 446 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


MaxiesAhead::
# 450 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 451 "data/maps/WestMtChimney2/scripts.pory"
	addobject 21
# 452 "data/maps/WestMtChimney2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Face_LEFT
# 453 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 21, AlinaHealsPlayer
# 454 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 455 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 21
# 456 "data/maps/WestMtChimney2/scripts.pory"
	msgbox MaxiesAhead_Text_0
# 457 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 458 "data/maps/WestMtChimney2/scripts.pory"
	special HealPlayerParty
# 459 "data/maps/WestMtChimney2/scripts.pory"
	msgbox MaxiesAhead_Text_1
# 460 "data/maps/WestMtChimney2/scripts.pory"
	waitmessage
# 461 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 21, AlinaWalksAwayMtChimney
# 462 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 21
# 463 "data/maps/WestMtChimney2/scripts.pory"
	removeobject 21
# 464 "data/maps/WestMtChimney2/scripts.pory"
	setflag FLAG_TEMP_3
# 465 "data/maps/WestMtChimney2/scripts.pory"
	setvar VAR_ENTEI, 8
# 466 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


# 469 "data/maps/WestMtChimney2/scripts.pory"
AlinaWalksAwayMtChimney:
# 470 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_left
# 470 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_left
# 470 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_left
# 470 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_left
# 470 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_left
# 470 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_left
# 470 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_left
# 470 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_left
	step_end

# 473 "data/maps/WestMtChimney2/scripts.pory"
AlinaHealsPlayer:
# 474 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 474 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 474 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 474 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 474 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 475 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_down
# 476 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 476 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 476 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 476 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
# 476 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_right
	step_end

CourtneyLost::
# 480 "data/maps/WestMtChimney2/scripts.pory"
	lockall
# 481 "data/maps/WestMtChimney2/scripts.pory"
	faceplayer
# 482 "data/maps/WestMtChimney2/scripts.pory"
	msgbox CourtneyLost_Text_0
# 483 "data/maps/WestMtChimney2/scripts.pory"
	releaseall
	return


MoveGrunt::
# 487 "data/maps/WestMtChimney2/scripts.pory"
	lock
# 488 "data/maps/WestMtChimney2/scripts.pory"
	applymovement 12, MoveGrunta
# 489 "data/maps/WestMtChimney2/scripts.pory"
	waitmovement 12
# 490 "data/maps/WestMtChimney2/scripts.pory"
	release
	return


# 493 "data/maps/WestMtChimney2/scripts.pory"
MoveGrunta:
# 494 "data/maps/WestMtChimney2/scripts.pory"
	walk_fast_left
# 495 "data/maps/WestMtChimney2/scripts.pory"
	face_down
	step_end

ScareEntei1_Text_0:
# 48 "data/maps/WestMtChimney2/scripts.pory"
	.string "Alina: Cool! You got it to flee. Wait...\n"
	.string "should we really feel good about\l"
	.string "scaring it? Anyway, Team Magma is\l"
	.string "vicious, and the further up the\l"
	.string "mountain it goes, the more difficult for\l"
	.string "them to trap it!$"

ScareEntei1_Text_1:
# 50 "data/maps/WestMtChimney2/scripts.pory"
	.string "Courtney: Will you little bugs stop\n"
	.string "messing with out plans? You do know we\l"
	.string "are bettering Hoenn if we complete our\l"
	.string "quest, right?$"

ScareEntei1_Text_2:
# 52 "data/maps/WestMtChimney2/scripts.pory"
	.string "Regardless, up the mountain I go. I was\n"
	.string "supposed to be on the ground team...$"

ScareEntei1_Text_3:
# 58 "data/maps/WestMtChimney2/scripts.pory"
	.string "Alina: Nice! Two down, still so many more\n"
	.string "to go!$"

ScareEntei1_Text_4:
# 62 "data/maps/WestMtChimney2/scripts.pory"
	.string "I've gotta finish a few things here and\n"
	.string "get healed up. I think Roxanne and\l"
	.string "Norman are on this side of the mountain.\l"
	.string "I dunno who's on the other side,\l"
	.string "presumably some other helpful people!$"

ScareEntei1_Text_5:
# 66 "data/maps/WestMtChimney2/scripts.pory"
	.string "Nonetheless, I'll catch up with you\n"
	.string "later, for now, you'd better chase down\l"
	.string "Entei and Courtney.$"

AlinaWMtChimneyDialogue1_Text_0:
# 109 "data/maps/WestMtChimney2/scripts.pory"
	.string "I know you're trying to help, nut don't\n"
	.string "distract me.$"

TeamMagmaWMtChimneyDialogue1_Text_0:
# 121 "data/maps/WestMtChimney2/scripts.pory"
	.string "Could you not distract me, I'm tryyying\n"
	.string "to find a way to pummel your friend with\l"
	.string "my fainted party.$"

NurseMtChimney_Text_0:
# 129 "data/maps/WestMtChimney2/scripts.pory"
	.string "Whew, you all are doing some tough work!\n"
	.string "I'm happy to stay back and play\l"
	.string "support. Let me fix up your team.$"

NurseMtChimney_Text_1:
# 134 "data/maps/WestMtChimney2/scripts.pory"
	.string "There, now you can get back to... doing\n"
	.string "your thing or whatever.$"

DontTurnBack_Text_0:
# 141 "data/maps/WestMtChimney2/scripts.pory"
	.string "I can't turn back now! I have to finish\n"
	.string "this!$"

ScareEntei2_Text_0:
# 211 "data/maps/WestMtChimney2/scripts.pory"
	.string "Roxanne: Hey, I remember you,\n"
	.string "{PLAYER}, right? I'm a little busy with\l"
	.string "this one right now, could you handle\l"
	.string "that?$"

ScareEntei2_Text_1:
# 221 "data/maps/WestMtChimney2/scripts.pory"
	.string "Why is that thing so scared of you\n"
	.string "specifically? We had it almost cornered\l"
	.string "down the mountain, then you showed up!\l"
	.string "I swear, if I climb this mountain more\l"
	.string "and you scare it away again...$"

RoxanneWMtChimneyDialogue_Text_0:
# 259 "data/maps/WestMtChimney2/scripts.pory"
	.string "Why is this guy so tough?$"

TeamMagmaWMtChimneyDialogue2_Text_0:
# 266 "data/maps/WestMtChimney2/scripts.pory"
	.string "Hmmph, I'm soo tough!$"

TeamMagmaWMtChimneyDialogue3_Text_0:
# 273 "data/maps/WestMtChimney2/scripts.pory"
	.string "Wow, kid, you're really playing with fire,\n"
	.string "metaphorically and literally.$"

TeamMagmaWMtChimneyDialogue4_Text_0:
# 280 "data/maps/WestMtChimney2/scripts.pory"
	.string "Wow, Courtney must really be feeling\n"
	.string "nice today, normally she'd smoke you\l"
	.string "after messing with her once or twice.\l"
	.string "Maybe she's more tolerant to failed\l"
	.string "plans than to whoopie cushions?$"

ScareEntei3_Text_0:
# 295 "data/maps/WestMtChimney2/scripts.pory"
	.string "Courtney: AGAIN?! NOT ONLY DO YOU KEEP\n"
	.string "SCARING ENTEI AWAY, YOU KEEP MAKING ME\l"
	.string "AND MY TEAM CLIMB THIS DUMB MOUNTAIN.\l"
	.string "MESS WITH US ONE MORE TIME, I DARE YOU!$"

HelpMePlayer_Text_0:
# 327 "data/maps/WestMtChimney2/scripts.pory"
	.string "These grunts won't let me through!$"

MultiWithNorman_Text_0:
# 334 "data/maps/WestMtChimney2/scripts.pory"
	.string "Norman: You two grunts, let me through!$"

MultiWithNorman_Text_1:
# 336 "data/maps/WestMtChimney2/scripts.pory"
	.string "Grunt: No.$"

MultiWithNorman_Text_2:
# 338 "data/maps/WestMtChimney2/scripts.pory"
	.string "{PLAYER}, you wanna help me beat\n"
	.string "these grunts?$"

MultiWithNorman_Text_3:
# 342 "data/maps/WestMtChimney2/scripts.pory"
	.string "Norman: Whew... That battle really took\n"
	.string "my party down, maybe I should get back\l"
	.string "to training. I'll need you to continue\l"
	.string "the climb to help Entei.$"

IDonWannaLosea_Text_0:
# 351 "data/maps/WestMtChimney2/scripts.pory"
	.string "I didn't wanna lose...$"

ILosta_Text_0:
# 359 "data/maps/WestMtChimney2/scripts.pory"
	.string "I can't believe I lost. Why did you have\n"
	.string "to beat me?$"

NormanDialogueWMtChimney_Text_0:
# 367 "data/maps/WestMtChimney2/scripts.pory"
	.string "Norman: I'm beat! You go on ahead.$"

IWontMove_Text_0:
# 374 "data/maps/WestMtChimney2/scripts.pory"
	.string "I. Won't. Move.$"

CourtneyBattleWMtChimney_Text_0:
# 393 "data/maps/WestMtChimney2/scripts.pory"
	.string "Courtney: YOU! YOU!!! YOU WILL NOT RUIN\n"
	.string "ME AGAIN!$"

CourtneyBattleWMtChimney_Text_1:
# 394 "data/maps/WestMtChimney2/scripts.pory"
	.string "I SHALL PUMMEL YOU!$"

CourtneyBattleWMtChimney_Text_2:
# 394 "data/maps/WestMtChimney2/scripts.pory"
	.string "It's over.. at least this part is...$"

ScareEntei4_Text_0:
# 403 "data/maps/WestMtChimney2/scripts.pory"
	.string "Courtney: I don't even care anymore. I\n"
	.string "don't get it, how did I lose? How did I\l"
	.string "fail? Why?$"

WMtChimneyGrunt1_Text_0:
# 409 "data/maps/WestMtChimney2/scripts.pory"
	.string "I'll stop you!$"

WMtChimneyGrunt1_Text_1:
# 409 "data/maps/WestMtChimney2/scripts.pory"
	.string "I didn't stop you...$"

WMtChimneyGrunt1_Text_2:
# 410 "data/maps/WestMtChimney2/scripts.pory"
	.string "What was I doing again?$"

WMtChimneyGrunt2_Text_0:
# 416 "data/maps/WestMtChimney2/scripts.pory"
	.string "No wonder Entei flees...$"

WMtChimneyGrunt2_Text_1:
# 417 "data/maps/WestMtChimney2/scripts.pory"
	.string "Courtney's definitely not ahead of\n"
	.string "here...$"

WMtChimneyGrunt3_Text_0:
# 423 "data/maps/WestMtChimney2/scripts.pory"
	.string "Gollee you're stong!$"

WMtChimneyGrunt3_Text_1:
# 424 "data/maps/WestMtChimney2/scripts.pory"
	.string "What should I do for fun today? Oh\n"
	.string "right, I'm supposed to be mad at you.\l"
	.string "Grr.$"

WMtChimneyGrunt4_Text_0:
# 430 "data/maps/WestMtChimney2/scripts.pory"
	.string "Or maybe I won't!$"

WMtChimneyGrunt4_Text_1:
# 431 "data/maps/WestMtChimney2/scripts.pory"
	.string "I think you might be strong enough to\n"
	.string "beat Courtney. Or maybe you aren't.$"

WMtChimneyGrunt5_Text_0:
# 437 "data/maps/WestMtChimney2/scripts.pory"
	.string "At least I'm not last...$"

WMtChimneyGrunt5_Text_1:
# 438 "data/maps/WestMtChimney2/scripts.pory"
	.string "Don't go up ahead, I'll get in\n"
	.string "trouble...Maybe.$"

OopsWeLost_Text_0:
# 445 "data/maps/WestMtChimney2/scripts.pory"
	.string "Oops, we lost!$"

MaxiesAhead_Text_0:
# 456 "data/maps/WestMtChimney2/scripts.pory"
	.string "Alina: The leader of Team Magma, Maxie,\n"
	.string "lies ahead. I can't go with you, I'm\l"
	.string "under strict orders from Norman to help\l"
	.string "secure Entei. Good luck, I'll help you\l"
	.string "out a little$"

MaxiesAhead_Text_1:
# 459 "data/maps/WestMtChimney2/scripts.pory"
	.string "There. I hope I helped a little.$"

CourtneyLost_Text_0:
# 482 "data/maps/WestMtChimney2/scripts.pory"
	.string "...$"

IDonWannaLose::
# 378 "data/maps/WestMtChimney2/scripts.pory"
	.string "I don't wanna lose!$"

ILost::
# 382 "data/maps/WestMtChimney2/scripts.pory"
	.string "I lost...$"
