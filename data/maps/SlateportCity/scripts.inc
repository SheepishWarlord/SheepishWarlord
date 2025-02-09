SlateportGiftMon::
# 2 "data/maps/SlateportCity/scripts.pory"
	lockall
# 3 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 4 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_SLATEPORT_GIFT, SlateportGiftMon_2
# 28 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportGiftMon_Text_4
SlateportGiftMon_1:
# 30 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 31 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end

SlateportGiftMon_2:
# 5 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportGiftMon_Text_0, MSGBOX_YESNO
# 6 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportGiftMon_5
# 23 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportGiftMon_Text_3
	goto SlateportGiftMon_1

SlateportGiftMon_5:
# 7 "data/maps/SlateportCity/scripts.pory"
	givemon SPECIES_KLINK, 10, item = ITEM_METAL_COAT
# 8 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SlateportGiftMon_8
# 13 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SlateportGiftMon_9
# 19 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportGiftMon_Text_2
	goto SlateportGiftMon_1

SlateportGiftMon_8:
# 9 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 10 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportGiftMon_Text_1
# 11 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_GIFT
	goto SlateportGiftMon_1

SlateportGiftMon_9:
# 14 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportGiftMon_Text_1
# 16 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_GIFT
	goto SlateportGiftMon_1


# 40 "data/maps/SlateportCity/scripts.pory"

# 41 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 42 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 43 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 44 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 45 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 46 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 47 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 48 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 49 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 50 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 51 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 52 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 53 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 54 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 55 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 56 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 57 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 58 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 59 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 60 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 61 "data/maps/SlateportCity/scripts.pory"

# 62 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 63 "data/maps/SlateportCity/scripts.pory"

# 64 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 65 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 66 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 67 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 68 "data/maps/SlateportCity/scripts.pory"

# 69 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 70 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 71 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 72 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 73 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 74 "data/maps/SlateportCity/scripts.pory"
	end
# 75 "data/maps/SlateportCity/scripts.pory"

# 76 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 77 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 78 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 79 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 80 "data/maps/SlateportCity/scripts.pory"
	return
# 81 "data/maps/SlateportCity/scripts.pory"

# 82 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 83 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 84 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 85 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 86 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 87 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 88 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 89 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 90 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 91 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 92 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 93 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 94 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 95 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 96 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 97 "data/maps/SlateportCity/scripts.pory"
	return
# 98 "data/maps/SlateportCity/scripts.pory"

# 99 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 100 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 101 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 102 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 103 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 104 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 105 "data/maps/SlateportCity/scripts.pory"
	return
# 106 "data/maps/SlateportCity/scripts.pory"

# 107 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 108 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 109 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 110 "data/maps/SlateportCity/scripts.pory"
	return
# 111 "data/maps/SlateportCity/scripts.pory"

# 112 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 113 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 114 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 115 "data/maps/SlateportCity/scripts.pory"

# 116 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 117 "data/maps/SlateportCity/scripts.pory"
	lockall
# 118 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 119 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 120 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 121 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 122 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 123 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 124 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 125 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 126 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 127 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 128 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 129 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 130 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 131 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 132 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 133 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 134 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 135 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 136 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 137 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 138 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 139 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 140 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 141 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 142 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 143 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 144 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 145 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 146 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 147 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 148 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 149 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 150 "data/maps/SlateportCity/scripts.pory"
	end
# 151 "data/maps/SlateportCity/scripts.pory"

# 152 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 153 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 154 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 155 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 156 "data/maps/SlateportCity/scripts.pory"
	step_end
# 157 "data/maps/SlateportCity/scripts.pory"

# 158 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 159 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 160 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 161 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 162 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 163 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 164 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 165 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 166 "data/maps/SlateportCity/scripts.pory"
	step_end
# 167 "data/maps/SlateportCity/scripts.pory"

# 168 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 169 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 170 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 171 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 172 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 173 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 174 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 175 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 176 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 177 "data/maps/SlateportCity/scripts.pory"
	step_end
# 178 "data/maps/SlateportCity/scripts.pory"

# 179 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 180 "data/maps/SlateportCity/scripts.pory"
	lock
# 181 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 182 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 183 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 184 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 185 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 186 "data/maps/SlateportCity/scripts.pory"
	release
# 187 "data/maps/SlateportCity/scripts.pory"
	end
# 188 "data/maps/SlateportCity/scripts.pory"

# 189 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 191 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 192 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 193 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 194 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 195 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 196 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 197 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 198 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 199 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 200 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 201 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 202 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 203 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PP_UP
# 204 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 205 "data/maps/SlateportCity/scripts.pory"
	release
# 206 "data/maps/SlateportCity/scripts.pory"
	end
# 207 "data/maps/SlateportCity/scripts.pory"

# 208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 209 "data/maps/SlateportCity/scripts.pory"
	lock
# 210 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 211 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 212 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 213 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 214 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 215 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 216 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 217 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 218 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 219 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 220 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 221 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 222 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 223 "data/maps/SlateportCity/scripts.pory"
	release
# 224 "data/maps/SlateportCity/scripts.pory"
	end
# 225 "data/maps/SlateportCity/scripts.pory"

# 226 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 227 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 228 "data/maps/SlateportCity/scripts.pory"
	release
# 229 "data/maps/SlateportCity/scripts.pory"
	end
# 230 "data/maps/SlateportCity/scripts.pory"

# 231 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 232 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 233 "data/maps/SlateportCity/scripts.pory"
	release
# 234 "data/maps/SlateportCity/scripts.pory"
	end
# 235 "data/maps/SlateportCity/scripts.pory"

# 236 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 237 "data/maps/SlateportCity/scripts.pory"
	lock
# 238 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 239 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 240 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 241 "data/maps/SlateportCity/scripts.pory"
	release
# 242 "data/maps/SlateportCity/scripts.pory"
	end
# 243 "data/maps/SlateportCity/scripts.pory"

# 244 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 245 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 246 "data/maps/SlateportCity/scripts.pory"
	release
# 247 "data/maps/SlateportCity/scripts.pory"
	end
# 248 "data/maps/SlateportCity/scripts.pory"

# 249 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 250 "data/maps/SlateportCity/scripts.pory"
	lock
# 251 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 252 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 253 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 254 "data/maps/SlateportCity/scripts.pory"
	release
# 255 "data/maps/SlateportCity/scripts.pory"
	end
# 256 "data/maps/SlateportCity/scripts.pory"

# 257 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 258 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 259 "data/maps/SlateportCity/scripts.pory"
	release
# 260 "data/maps/SlateportCity/scripts.pory"
	end
# 261 "data/maps/SlateportCity/scripts.pory"

# 262 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 263 "data/maps/SlateportCity/scripts.pory"
	lock
# 264 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 265 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 266 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 267 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 268 "data/maps/SlateportCity/scripts.pory"
	release
# 269 "data/maps/SlateportCity/scripts.pory"
	end
# 270 "data/maps/SlateportCity/scripts.pory"

# 271 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 272 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 273 "data/maps/SlateportCity/scripts.pory"
	release
# 274 "data/maps/SlateportCity/scripts.pory"
	end
# 275 "data/maps/SlateportCity/scripts.pory"

# 276 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 277 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 278 "data/maps/SlateportCity/scripts.pory"
	release
# 279 "data/maps/SlateportCity/scripts.pory"
	end
# 280 "data/maps/SlateportCity/scripts.pory"

# 281 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 282 "data/maps/SlateportCity/scripts.pory"
	lock
# 283 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 284 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 285 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 286 "data/maps/SlateportCity/scripts.pory"
	release
# 287 "data/maps/SlateportCity/scripts.pory"
	end
# 288 "data/maps/SlateportCity/scripts.pory"

# 289 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 290 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 291 "data/maps/SlateportCity/scripts.pory"
	release
# 292 "data/maps/SlateportCity/scripts.pory"
	end
# 293 "data/maps/SlateportCity/scripts.pory"

# 294 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 295 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 296 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 297 "data/maps/SlateportCity/scripts.pory"
	end
# 298 "data/maps/SlateportCity/scripts.pory"

# 299 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 300 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 301 "data/maps/SlateportCity/scripts.pory"
	end
# 302 "data/maps/SlateportCity/scripts.pory"

# 303 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 304 "data/maps/SlateportCity/scripts.pory"
	lock
# 305 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 306 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 307 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 308 "data/maps/SlateportCity/scripts.pory"
	release
# 309 "data/maps/SlateportCity/scripts.pory"
	end
# 310 "data/maps/SlateportCity/scripts.pory"

# 311 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 312 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 313 "data/maps/SlateportCity/scripts.pory"
	release
# 314 "data/maps/SlateportCity/scripts.pory"
	end
# 315 "data/maps/SlateportCity/scripts.pory"

# 316 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 317 "data/maps/SlateportCity/scripts.pory"
	lock
# 318 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 319 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 320 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 321 "data/maps/SlateportCity/scripts.pory"
	release
# 322 "data/maps/SlateportCity/scripts.pory"
	end
# 323 "data/maps/SlateportCity/scripts.pory"

# 324 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 325 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 326 "data/maps/SlateportCity/scripts.pory"
	release
# 327 "data/maps/SlateportCity/scripts.pory"
	end
# 328 "data/maps/SlateportCity/scripts.pory"

# 329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 330 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 331 "data/maps/SlateportCity/scripts.pory"
	end
# 332 "data/maps/SlateportCity/scripts.pory"

# 333 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 334 "data/maps/SlateportCity/scripts.pory"
	lockall
# 335 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 336 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 337 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 338 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 339 "data/maps/SlateportCity/scripts.pory"
	end
# 340 "data/maps/SlateportCity/scripts.pory"

# 341 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 342 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 343 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 344 "data/maps/SlateportCity/scripts.pory"
	end
# 345 "data/maps/SlateportCity/scripts.pory"

# 346 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 347 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 348 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 349 "data/maps/SlateportCity/scripts.pory"
	end
# 350 "data/maps/SlateportCity/scripts.pory"

# 351 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 352 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 353 "data/maps/SlateportCity/scripts.pory"
	end
# 354 "data/maps/SlateportCity/scripts.pory"

# 355 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 356 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 357 "data/maps/SlateportCity/scripts.pory"
	end
# 358 "data/maps/SlateportCity/scripts.pory"

# 359 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 360 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 361 "data/maps/SlateportCity/scripts.pory"
	end
# 362 "data/maps/SlateportCity/scripts.pory"

# 363 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 364 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 365 "data/maps/SlateportCity/scripts.pory"
	end
# 366 "data/maps/SlateportCity/scripts.pory"

# 367 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 368 "data/maps/SlateportCity/scripts.pory"
	lockall
# 369 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 370 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 371 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 372 "data/maps/SlateportCity/scripts.pory"
	end
# 373 "data/maps/SlateportCity/scripts.pory"

# 374 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 375 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 376 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 377 "data/maps/SlateportCity/scripts.pory"
	end
# 378 "data/maps/SlateportCity/scripts.pory"

# 379 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 380 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 381 "data/maps/SlateportCity/scripts.pory"
	end
# 382 "data/maps/SlateportCity/scripts.pory"

# 383 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 384 "data/maps/SlateportCity/scripts.pory"
	lock
# 385 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 386 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 387 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 388 "data/maps/SlateportCity/scripts.pory"
	release
# 389 "data/maps/SlateportCity/scripts.pory"
	end
# 390 "data/maps/SlateportCity/scripts.pory"

# 391 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 392 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 393 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 394 "data/maps/SlateportCity/scripts.pory"
	release
# 395 "data/maps/SlateportCity/scripts.pory"
	end
# 396 "data/maps/SlateportCity/scripts.pory"

# 397 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 398 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 399 "data/maps/SlateportCity/scripts.pory"
	end
# 400 "data/maps/SlateportCity/scripts.pory"

# 401 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 402 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 403 "data/maps/SlateportCity/scripts.pory"
	end
# 404 "data/maps/SlateportCity/scripts.pory"

# 405 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 406 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 407 "data/maps/SlateportCity/scripts.pory"
	end
# 408 "data/maps/SlateportCity/scripts.pory"

# 409 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 410 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 411 "data/maps/SlateportCity/scripts.pory"
	end
# 412 "data/maps/SlateportCity/scripts.pory"

# 413 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 414 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 415 "data/maps/SlateportCity/scripts.pory"
	end
# 416 "data/maps/SlateportCity/scripts.pory"

# 417 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 418 "data/maps/SlateportCity/scripts.pory"
	lock
# 419 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 420 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 421 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 422 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 423 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 424 "data/maps/SlateportCity/scripts.pory"
	release
# 425 "data/maps/SlateportCity/scripts.pory"
	end
# 426 "data/maps/SlateportCity/scripts.pory"

# 427 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 428 "data/maps/SlateportCity/scripts.pory"
	lock
# 429 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 430 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 431 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 432 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 433 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 434 "data/maps/SlateportCity/scripts.pory"
	release
# 435 "data/maps/SlateportCity/scripts.pory"
	end
# 436 "data/maps/SlateportCity/scripts.pory"

# 437 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 438 "data/maps/SlateportCity/scripts.pory"
	lock
# 439 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 440 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 441 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 442 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 443 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 444 "data/maps/SlateportCity/scripts.pory"
	release
# 445 "data/maps/SlateportCity/scripts.pory"
	end
# 446 "data/maps/SlateportCity/scripts.pory"

# 447 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 448 "data/maps/SlateportCity/scripts.pory"
	lock
# 449 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 450 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 451 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 452 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 453 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 454 "data/maps/SlateportCity/scripts.pory"
	release
# 455 "data/maps/SlateportCity/scripts.pory"
	end
# 456 "data/maps/SlateportCity/scripts.pory"

# 457 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 458 "data/maps/SlateportCity/scripts.pory"
	lock
# 459 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 460 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 461 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 462 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 463 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 464 "data/maps/SlateportCity/scripts.pory"
	release
# 465 "data/maps/SlateportCity/scripts.pory"
	end
# 466 "data/maps/SlateportCity/scripts.pory"

# 467 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 468 "data/maps/SlateportCity/scripts.pory"
	lock
# 469 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 470 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 471 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 472 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 473 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 474 "data/maps/SlateportCity/scripts.pory"
	release
# 475 "data/maps/SlateportCity/scripts.pory"
	end
# 476 "data/maps/SlateportCity/scripts.pory"

# 477 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 478 "data/maps/SlateportCity/scripts.pory"
	lock
# 479 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 480 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 481 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 482 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 483 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 484 "data/maps/SlateportCity/scripts.pory"
	release
# 485 "data/maps/SlateportCity/scripts.pory"
	end
# 486 "data/maps/SlateportCity/scripts.pory"

# 487 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 488 "data/maps/SlateportCity/scripts.pory"
	lock
# 489 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 490 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 491 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 492 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 493 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 494 "data/maps/SlateportCity/scripts.pory"
	release
# 495 "data/maps/SlateportCity/scripts.pory"
	end
# 496 "data/maps/SlateportCity/scripts.pory"

# 497 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 498 "data/maps/SlateportCity/scripts.pory"
	lock
# 499 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 500 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 501 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 502 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 503 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 504 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 505 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 506 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 507 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 508 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 509 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 510 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 511 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 512 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 513 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 514 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 515 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 516 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 517 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 518 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 520 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 521 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 522 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 523 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 524 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 525 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 526 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 527 "data/maps/SlateportCity/scripts.pory"
	release
# 528 "data/maps/SlateportCity/scripts.pory"
	end
# 529 "data/maps/SlateportCity/scripts.pory"

# 530 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 531 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 532 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 533 "data/maps/SlateportCity/scripts.pory"
	step_end
# 534 "data/maps/SlateportCity/scripts.pory"

# 535 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 536 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 537 "data/maps/SlateportCity/scripts.pory"
	end
# 538 "data/maps/SlateportCity/scripts.pory"

# 539 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 540 "data/maps/SlateportCity/scripts.pory"
	lock
# 541 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 542 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 543 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 544 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 545 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/SlateportCity/scripts.pory"
	release
# 547 "data/maps/SlateportCity/scripts.pory"
	end
# 548 "data/maps/SlateportCity/scripts.pory"

# 549 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 550 "data/maps/SlateportCity/scripts.pory"
	lock
# 551 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 552 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 553 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 554 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 555 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 556 "data/maps/SlateportCity/scripts.pory"
	release
# 557 "data/maps/SlateportCity/scripts.pory"
	end
# 558 "data/maps/SlateportCity/scripts.pory"

# 559 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 560 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 561 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 562 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 563 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 564 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 565 "data/maps/SlateportCity/scripts.pory"
	release
# 566 "data/maps/SlateportCity/scripts.pory"
	end
# 567 "data/maps/SlateportCity/scripts.pory"

# 568 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 569 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 570 "data/maps/SlateportCity/scripts.pory"
	release
# 571 "data/maps/SlateportCity/scripts.pory"
	end
# 572 "data/maps/SlateportCity/scripts.pory"

# 573 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 574 "data/maps/SlateportCity/scripts.pory"
	lock
# 575 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 576 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 577 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 578 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 579 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 580 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 581 "data/maps/SlateportCity/scripts.pory"
	release
# 582 "data/maps/SlateportCity/scripts.pory"
	end
# 583 "data/maps/SlateportCity/scripts.pory"

# 584 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 585 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 586 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 587 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 588 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 589 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 590 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 591 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 592 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 593 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 594 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 595 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 596 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 597 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 598 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 599 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 600 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 601 "data/maps/SlateportCity/scripts.pory"
	release
# 602 "data/maps/SlateportCity/scripts.pory"
	end
# 603 "data/maps/SlateportCity/scripts.pory"

# 604 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 605 "data/maps/SlateportCity/scripts.pory"
	lock
# 606 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 607 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 608 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 609 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 610 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 611 "data/maps/SlateportCity/scripts.pory"
	release
# 612 "data/maps/SlateportCity/scripts.pory"
	end
# 613 "data/maps/SlateportCity/scripts.pory"

# 614 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 615 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 616 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM10  @ Hidden Power
# 617 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM43  @ Secret Power
# 618 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 619 "data/maps/SlateportCity/scripts.pory"
	release
# 620 "data/maps/SlateportCity/scripts.pory"
	end
# 621 "data/maps/SlateportCity/scripts.pory"

# 622 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 623 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 624 "data/maps/SlateportCity/scripts.pory"
	lockall
# 625 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 626 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 627 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 628 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 629 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 630 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 631 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 632 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 633 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 634 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 635 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 636 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 637 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 638 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 640 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 641 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 642 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 643 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 645 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 646 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 647 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 648 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 649 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 650 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 651 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 652 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 653 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 654 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 656 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 657 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 658 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 659 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 660 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 661 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 662 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 663 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 664 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 665 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 666 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 667 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 668 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 669 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 670 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 671 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 672 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 673 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 674 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 675 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 676 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 677 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 678 "data/maps/SlateportCity/scripts.pory"
	end
# 679 "data/maps/SlateportCity/scripts.pory"

# 680 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 681 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 682 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 683 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 684 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 685 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 686 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 687 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 688 "data/maps/SlateportCity/scripts.pory"
	step_end
# 689 "data/maps/SlateportCity/scripts.pory"

# 690 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 691 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 692 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 693 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 694 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 695 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 696 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 697 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 698 "data/maps/SlateportCity/scripts.pory"
	step_end
# 699 "data/maps/SlateportCity/scripts.pory"

# 700 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 701 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 702 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 703 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 704 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 705 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 706 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 707 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 708 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 709 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 710 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 711 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 712 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 713 "data/maps/SlateportCity/scripts.pory"
	step_end
# 714 "data/maps/SlateportCity/scripts.pory"

# 715 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 716 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 717 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 718 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 719 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 720 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 721 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 722 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 723 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 724 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 725 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 726 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 727 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 728 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 729 "data/maps/SlateportCity/scripts.pory"
	step_end
# 730 "data/maps/SlateportCity/scripts.pory"

# 731 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 732 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 733 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 734 "data/maps/SlateportCity/scripts.pory"
	step_end
# 735 "data/maps/SlateportCity/scripts.pory"

# 736 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 737 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 738 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 739 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 740 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 741 "data/maps/SlateportCity/scripts.pory"
	step_end
# 742 "data/maps/SlateportCity/scripts.pory"

# 743 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 744 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 745 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 746 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 747 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 748 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 749 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 750 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 751 "data/maps/SlateportCity/scripts.pory"
	step_end
# 752 "data/maps/SlateportCity/scripts.pory"

# 753 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 754 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 755 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 756 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 757 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 758 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 759 "data/maps/SlateportCity/scripts.pory"
	step_end
# 760 "data/maps/SlateportCity/scripts.pory"

# 761 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 762 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 763 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 764 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 765 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 766 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 767 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 768 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 769 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 770 "data/maps/SlateportCity/scripts.pory"
	step_end
# 771 "data/maps/SlateportCity/scripts.pory"

# 772 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 773 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 774 "data/maps/SlateportCity/scripts.pory"
	end
# 775 "data/maps/SlateportCity/scripts.pory"

# 776 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 777 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 778 "data/maps/SlateportCity/scripts.pory"
	end
# 779 "data/maps/SlateportCity/scripts.pory"

# 780 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 781 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 782 "data/maps/SlateportCity/scripts.pory"
	end
# 783 "data/maps/SlateportCity/scripts.pory"

# 784 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 785 "data/maps/SlateportCity/scripts.pory"
	lock
# 786 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 787 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 788 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 789 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 790 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 791 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 792 "data/maps/SlateportCity/scripts.pory"
	release
# 793 "data/maps/SlateportCity/scripts.pory"
	end
# 794 "data/maps/SlateportCity/scripts.pory"

# 795 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 796 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 797 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 798 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 799 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 800 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 801 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 802 "data/maps/SlateportCity/scripts.pory"
	end
# 803 "data/maps/SlateportCity/scripts.pory"

# 804 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 805 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 806 "data/maps/SlateportCity/scripts.pory"
	release
# 807 "data/maps/SlateportCity/scripts.pory"
	end
# 808 "data/maps/SlateportCity/scripts.pory"

# 809 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 810 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 811 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 812 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 813 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 814 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 815 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 816 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 817 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 818 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 819 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 820 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 821 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 822 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 823 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 824 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 825 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 826 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 827 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 828 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 829 "data/maps/SlateportCity/scripts.pory"
	end
# 830 "data/maps/SlateportCity/scripts.pory"

# 831 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 832 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 833 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 834 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 835 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 836 "data/maps/SlateportCity/scripts.pory"
	end
# 837 "data/maps/SlateportCity/scripts.pory"

# 838 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 839 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 840 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 841 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 842 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 843 "data/maps/SlateportCity/scripts.pory"
	end
# 844 "data/maps/SlateportCity/scripts.pory"

# 845 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 846 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 847 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 848 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 849 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 850 "data/maps/SlateportCity/scripts.pory"
	end
# 851 "data/maps/SlateportCity/scripts.pory"

# 852 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 853 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 854 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 855 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 856 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 857 "data/maps/SlateportCity/scripts.pory"
	end
# 858 "data/maps/SlateportCity/scripts.pory"

# 859 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 860 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 861 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 862 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 863 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 864 "data/maps/SlateportCity/scripts.pory"
	end
# 865 "data/maps/SlateportCity/scripts.pory"

# 866 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 867 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 868 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 869 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 870 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 871 "data/maps/SlateportCity/scripts.pory"
	end
# 872 "data/maps/SlateportCity/scripts.pory"

# 873 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 874 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 875 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 876 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 877 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 878 "data/maps/SlateportCity/scripts.pory"
	end
# 879 "data/maps/SlateportCity/scripts.pory"

# 880 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 881 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 882 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 883 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 884 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 885 "data/maps/SlateportCity/scripts.pory"
	end
# 886 "data/maps/SlateportCity/scripts.pory"

# 887 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 888 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 889 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 890 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 891 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 892 "data/maps/SlateportCity/scripts.pory"
	end
# 893 "data/maps/SlateportCity/scripts.pory"

# 894 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 895 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 896 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 897 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 898 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 899 "data/maps/SlateportCity/scripts.pory"
	end
# 900 "data/maps/SlateportCity/scripts.pory"

# 901 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 902 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 903 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 904 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 905 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 906 "data/maps/SlateportCity/scripts.pory"
	end
# 907 "data/maps/SlateportCity/scripts.pory"

# 908 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 909 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 910 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 911 "data/maps/SlateportCity/scripts.pory"
	release
# 912 "data/maps/SlateportCity/scripts.pory"
	end
# 913 "data/maps/SlateportCity/scripts.pory"

# 914 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 915 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 916 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 917 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 918 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 919 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 920 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 921 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 922 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 923 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 924 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 925 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 926 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 927 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 928 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 929 "data/maps/SlateportCity/scripts.pory"
	release
# 930 "data/maps/SlateportCity/scripts.pory"
	end
# 931 "data/maps/SlateportCity/scripts.pory"

# 932 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 933 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 934 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 935 "data/maps/SlateportCity/scripts.pory"
	release
# 936 "data/maps/SlateportCity/scripts.pory"
	end
# 937 "data/maps/SlateportCity/scripts.pory"

# 938 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 939 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 940 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 941 "data/maps/SlateportCity/scripts.pory"
	end
# 942 "data/maps/SlateportCity/scripts.pory"

# 943 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 944 "data/maps/SlateportCity/scripts.pory"
	lockall
# 945 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 946 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 947 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 948 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 949 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 950 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 951 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 952 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 953 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 954 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 955 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 956 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 957 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 958 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 959 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 960 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 961 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 962 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 963 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 964 "data/maps/SlateportCity/scripts.pory"
	end
# 965 "data/maps/SlateportCity/scripts.pory"

# 966 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 967 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 968 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 969 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 970 "data/maps/SlateportCity/scripts.pory"
	step_end
# 971 "data/maps/SlateportCity/scripts.pory"

# 972 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 973 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 974 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 975 "data/maps/SlateportCity/scripts.pory"
	step_end
# 976 "data/maps/SlateportCity/scripts.pory"

# 977 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 978 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 979 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 980 "data/maps/SlateportCity/scripts.pory"
	step_end
# 981 "data/maps/SlateportCity/scripts.pory"

# 982 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 983 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 984 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 985 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 986 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 987 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 988 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 989 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 990 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 991 "data/maps/SlateportCity/scripts.pory"
	step_end
# 992 "data/maps/SlateportCity/scripts.pory"

# 993 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 994 "data/maps/SlateportCity/scripts.pory"
	lockall
# 995 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 996 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 997 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 998 "data/maps/SlateportCity/scripts.pory"
	end
# 999 "data/maps/SlateportCity/scripts.pory"

# 1000 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 1001 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 1002 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1003 "data/maps/SlateportCity/scripts.pory"

# 1004 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 1005 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 1006 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 1007 "data/maps/SlateportCity/scripts.pory"

# 1008 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 1009 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 1010 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 1011 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 1012 "data/maps/SlateportCity/scripts.pory"

# 1013 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 1014 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 1015 "data/maps/SlateportCity/scripts.pory"

# 1016 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 1017 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 1018 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 1019 "data/maps/SlateportCity/scripts.pory"

# 1020 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 1021 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 1022 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 1023 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 1024 "data/maps/SlateportCity/scripts.pory"

# 1025 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1026 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1028 "data/maps/SlateportCity/scripts.pory"

# 1029 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1031 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1032 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 1033 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1034 "data/maps/SlateportCity/scripts.pory"

# 1035 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1036 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1037 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1038 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1039 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1040 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1041 "data/maps/SlateportCity/scripts.pory"

# 1042 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1043 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1044 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1045 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1046 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1047 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1048 "data/maps/SlateportCity/scripts.pory"

# 1049 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1050 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1051 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1052 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1053 "data/maps/SlateportCity/scripts.pory"

# 1054 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1055 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1056 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1057 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1058 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1059 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1060 "data/maps/SlateportCity/scripts.pory"

# 1061 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1062 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1064 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1065 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1066 "data/maps/SlateportCity/scripts.pory"

# 1067 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1069 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1070 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1071 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1072 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1073 "data/maps/SlateportCity/scripts.pory"

# 1074 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1075 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1076 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1077 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1078 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1079 "data/maps/SlateportCity/scripts.pory"

# 1080 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1081 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1082 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1083 "data/maps/SlateportCity/scripts.pory"

# 1084 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1085 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1088 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1089 "data/maps/SlateportCity/scripts.pory"

# 1090 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1092 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1093 "data/maps/SlateportCity/scripts.pory"

# 1094 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1095 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1096 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1097 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1098 "data/maps/SlateportCity/scripts.pory"

# 1099 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1100 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1101 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1102 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1103 "data/maps/SlateportCity/scripts.pory"

# 1104 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1105 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1106 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1108 "data/maps/SlateportCity/scripts.pory"

# 1109 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1111 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1112 "data/maps/SlateportCity/scripts.pory"

# 1113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1116 "data/maps/SlateportCity/scripts.pory"

# 1117 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1118 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1120 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1121 "data/maps/SlateportCity/scripts.pory"

# 1122 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1123 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1124 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1125 "data/maps/SlateportCity/scripts.pory"

# 1126 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1127 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1128 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1129 "data/maps/SlateportCity/scripts.pory"

# 1130 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1133 "data/maps/SlateportCity/scripts.pory"

# 1134 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1135 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1138 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1139 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1140 "data/maps/SlateportCity/scripts.pory"

# 1141 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1144 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1145 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1146 "data/maps/SlateportCity/scripts.pory"

# 1147 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1149 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1152 "data/maps/SlateportCity/scripts.pory"

# 1153 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1157 "data/maps/SlateportCity/scripts.pory"

# 1158 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1159 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1163 "data/maps/SlateportCity/scripts.pory"

# 1164 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1165 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1167 "data/maps/SlateportCity/scripts.pory"

# 1168 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1169 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1170 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1172 "data/maps/SlateportCity/scripts.pory"

# 1173 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1174 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1178 "data/maps/SlateportCity/scripts.pory"

# 1179 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1185 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1186 "data/maps/SlateportCity/scripts.pory"

# 1187 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1190 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1192 "data/maps/SlateportCity/scripts.pory"

# 1193 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1196 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1198 "data/maps/SlateportCity/scripts.pory"

# 1199 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1204 "data/maps/SlateportCity/scripts.pory"

# 1205 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1209 "data/maps/SlateportCity/scripts.pory"

# 1210 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1213 "data/maps/SlateportCity/scripts.pory"

# 1214 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1217 "data/maps/SlateportCity/scripts.pory"

# 1218 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1221 "data/maps/SlateportCity/scripts.pory"

# 1222 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1225 "data/maps/SlateportCity/scripts.pory"

# 1226 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1229 "data/maps/SlateportCity/scripts.pory"

# 1230 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1236 "data/maps/SlateportCity/scripts.pory"

# 1237 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1241 "data/maps/SlateportCity/scripts.pory"

# 1242 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1251 "data/maps/SlateportCity/scripts.pory"

# 1252 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1262 "data/maps/SlateportCity/scripts.pory"

# 1263 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1265 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1268 "data/maps/SlateportCity/scripts.pory"

# 1269 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1273 "data/maps/SlateportCity/scripts.pory"

# 1274 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1277 "data/maps/SlateportCity/scripts.pory"

# 1278 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1279 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1281 "data/maps/SlateportCity/scripts.pory"

# 1282 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1284 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1286 "data/maps/SlateportCity/scripts.pory"

# 1287 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1292 "data/maps/SlateportCity/scripts.pory"

# 1293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1296 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1298 "data/maps/SlateportCity/scripts.pory"

# 1299 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1300 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1302 "data/maps/SlateportCity/scripts.pory"

# 1303 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1307 "data/maps/SlateportCity/scripts.pory"

# 1308 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1312 "data/maps/SlateportCity/scripts.pory"

# 1313 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1316 "data/maps/SlateportCity/scripts.pory"

# 1317 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1323 "data/maps/SlateportCity/scripts.pory"

# 1324 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1328 "data/maps/SlateportCity/scripts.pory"

# 1329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1332 "data/maps/SlateportCity/scripts.pory"

# 1333 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1334 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1338 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1347 "data/maps/SlateportCity/scripts.pory"

# 1348 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1356 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1358 "data/maps/SlateportCity/scripts.pory"

# 1359 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1362 "data/maps/SlateportCity/scripts.pory"

# 1363 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1364 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1366 "data/maps/SlateportCity/scripts.pory"

# 1367 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1370 "data/maps/SlateportCity/scripts.pory"

# 1371 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1372 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1374 "data/maps/SlateportCity/scripts.pory"

# 1375 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1376 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1378 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1379 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1380 "data/maps/SlateportCity/scripts.pory"

# 1381 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1382 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1383 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1384 "data/maps/SlateportCity/scripts.pory"

# 1385 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1386 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1387 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1388 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1389 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1390 "data/maps/SlateportCity/scripts.pory"

# 1391 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1392 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1393 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1394 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1395 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1397 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1398 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1399 "data/maps/SlateportCity/scripts.pory"

# 1400 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1401 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1403 "data/maps/SlateportCity/scripts.pory"

# 1404 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1405 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1406 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1407 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1408 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1409 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1410 "data/maps/SlateportCity/scripts.pory"

# 1411 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1412 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1413 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1414 "data/maps/SlateportCity/scripts.pory"

# 1415 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1416 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1417 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1418 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1419 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1420 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1421 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1422 "data/maps/SlateportCity/scripts.pory"

# 1423 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1424 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1425 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1426 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1427 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1428 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1429 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1430 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1431 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1432 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"

SlateportGiftMon_Text_0:
# 5 "data/maps/SlateportCity/scripts.pory"
	.string "Hello! Boy have I got the thing for you!\n"
	.string "Do you want this POKéMON?$"

SlateportGiftMon_Text_1:
# 10 "data/maps/SlateportCity/scripts.pory"
	.string "Received Klink$"

SlateportGiftMon_Text_2:
# 19 "data/maps/SlateportCity/scripts.pory"
	.string "There's no room!$"

SlateportGiftMon_Text_3:
# 23 "data/maps/SlateportCity/scripts.pory"
	.string "Makes sense. I'm just trying to get rid\n"
	.string "of it.$"

SlateportGiftMon_Text_4:
# 28 "data/maps/SlateportCity/scripts.pory"
	.string "Nice, now that thing can stop ruining my\n"
	.string "artwork. Erm... I mean take care of Klink\l"
	.string "for me!$"
