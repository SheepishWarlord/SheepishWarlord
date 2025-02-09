LavaridgeTown_EventScript_EggWoman::
# 2 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 3 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 4 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_EggWoman_2
LavaridgeTown_EventScript_EggWoman_1:
# 5 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 6 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_EventScript_EggWoman_5
LavaridgeTown_EventScript_EggWoman_4:
# 7 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 8 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq LavaridgeTown_EventScript_EggWoman_8
LavaridgeTown_EventScript_EggWoman_7:
# 9 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 10 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 11 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 12 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ReceivedTheEgg
# 13 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 14 "data/maps/LavaridgeTown/scripts.pory"
	random 19
# 15 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt LavaridgeTown_EventScript_EggWoman_11
# 18 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt LavaridgeTown_EventScript_EggWoman_77
LavaridgeTown_EventScript_EggWoman_75:
# 21 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt LavaridgeTown_EventScript_EggWoman_74
LavaridgeTown_EventScript_EggWoman_72:
# 24 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt LavaridgeTown_EventScript_EggWoman_71
LavaridgeTown_EventScript_EggWoman_69:
# 27 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_lt LavaridgeTown_EventScript_EggWoman_68
LavaridgeTown_EventScript_EggWoman_66:
# 30 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt LavaridgeTown_EventScript_EggWoman_65
LavaridgeTown_EventScript_EggWoman_63:
# 33 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_lt LavaridgeTown_EventScript_EggWoman_62
LavaridgeTown_EventScript_EggWoman_60:
# 36 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_lt LavaridgeTown_EventScript_EggWoman_59
LavaridgeTown_EventScript_EggWoman_57:
# 39 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_lt LavaridgeTown_EventScript_EggWoman_56
LavaridgeTown_EventScript_EggWoman_54:
# 42 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_lt LavaridgeTown_EventScript_EggWoman_53
LavaridgeTown_EventScript_EggWoman_51:
# 45 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 12
	goto_if_lt LavaridgeTown_EventScript_EggWoman_50
LavaridgeTown_EventScript_EggWoman_48:
# 48 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 13
	goto_if_lt LavaridgeTown_EventScript_EggWoman_47
LavaridgeTown_EventScript_EggWoman_45:
# 51 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_lt LavaridgeTown_EventScript_EggWoman_44
LavaridgeTown_EventScript_EggWoman_42:
# 54 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_lt LavaridgeTown_EventScript_EggWoman_41
LavaridgeTown_EventScript_EggWoman_39:
# 57 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 16
	goto_if_lt LavaridgeTown_EventScript_EggWoman_38
LavaridgeTown_EventScript_EggWoman_36:
# 60 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 17
	goto_if_lt LavaridgeTown_EventScript_EggWoman_35
LavaridgeTown_EventScript_EggWoman_33:
# 63 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 18
	goto_if_lt LavaridgeTown_EventScript_EggWoman_32
LavaridgeTown_EventScript_EggWoman_30:
# 66 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 19
	goto_if_lt LavaridgeTown_EventScript_EggWoman_29
LavaridgeTown_EventScript_EggWoman_10:
# 69 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_2:
# 4 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_ReceivedEgg
	goto LavaridgeTown_EventScript_EggWoman_1

LavaridgeTown_EventScript_EggWoman_5:
# 6 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_DeclineEgg
	goto LavaridgeTown_EventScript_EggWoman_4

LavaridgeTown_EventScript_EggWoman_8:
# 8 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_NoRoomForEgg
	goto LavaridgeTown_EventScript_EggWoman_7

LavaridgeTown_EventScript_EggWoman_11:
# 16 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PICHU
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_12:
# 19 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CLEFFA
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_13:
# 22 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_IGGLYBUFF
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_14:
# 25 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOGEPI
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_15:
# 28 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TYROGUE
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_16:
# 31 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SMOOCHUM
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_17:
# 34 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_ELEKID
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_18:
# 37 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MAGBY
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_19:
# 40 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_AZURILL
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_20:
# 43 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_21:
# 46 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BUDEW
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_22:
# 49 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CHINGLING
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_23:
# 52 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BONSLY
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_24:
# 55 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MIME_JR
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_25:
# 58 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_HAPPINY
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_26:
# 61 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MUNCHLAX
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_27:
# 64 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_RIOLU
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_28:
# 67 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MANTYKE
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_29:
# 66 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 17
	goto_if_gt LavaridgeTown_EventScript_EggWoman_28
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_32:
# 63 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 16
	goto_if_gt LavaridgeTown_EventScript_EggWoman_27
	goto LavaridgeTown_EventScript_EggWoman_30

LavaridgeTown_EventScript_EggWoman_35:
# 60 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_gt LavaridgeTown_EventScript_EggWoman_26
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_38:
# 57 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_gt LavaridgeTown_EventScript_EggWoman_25
	goto LavaridgeTown_EventScript_EggWoman_36

LavaridgeTown_EventScript_EggWoman_41:
# 54 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 13
	goto_if_gt LavaridgeTown_EventScript_EggWoman_24
	goto LavaridgeTown_EventScript_EggWoman_39

LavaridgeTown_EventScript_EggWoman_44:
# 51 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 12
	goto_if_gt LavaridgeTown_EventScript_EggWoman_23
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_47:
# 48 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_gt LavaridgeTown_EventScript_EggWoman_22
	goto LavaridgeTown_EventScript_EggWoman_45

LavaridgeTown_EventScript_EggWoman_50:
# 45 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_gt LavaridgeTown_EventScript_EggWoman_21
	goto LavaridgeTown_EventScript_EggWoman_48

LavaridgeTown_EventScript_EggWoman_53:
# 42 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_gt LavaridgeTown_EventScript_EggWoman_20
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_56:
# 39 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_gt LavaridgeTown_EventScript_EggWoman_19
	goto LavaridgeTown_EventScript_EggWoman_54

LavaridgeTown_EventScript_EggWoman_59:
# 36 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_gt LavaridgeTown_EventScript_EggWoman_18
	goto LavaridgeTown_EventScript_EggWoman_57

LavaridgeTown_EventScript_EggWoman_62:
# 33 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_gt LavaridgeTown_EventScript_EggWoman_17
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_65:
# 30 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_gt LavaridgeTown_EventScript_EggWoman_16
	goto LavaridgeTown_EventScript_EggWoman_63

LavaridgeTown_EventScript_EggWoman_68:
# 27 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_gt LavaridgeTown_EventScript_EggWoman_15
	goto LavaridgeTown_EventScript_EggWoman_66

LavaridgeTown_EventScript_EggWoman_71:
# 24 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_gt LavaridgeTown_EventScript_EggWoman_14
	goto LavaridgeTown_EventScript_EggWoman_69

LavaridgeTown_EventScript_EggWoman_74:
# 21 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt LavaridgeTown_EventScript_EggWoman_13
	goto LavaridgeTown_EventScript_EggWoman_72

LavaridgeTown_EventScript_EggWoman_77:
# 18 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt LavaridgeTown_EventScript_EggWoman_12
	goto LavaridgeTown_EventScript_EggWoman_75


# 73 "data/maps/LavaridgeTown/scripts.pory"

# 74 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 7
# 75 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL, 8
# 76 "data/maps/LavaridgeTown/scripts.pory"

# 77 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts::
# 78 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 79 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
# 80 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 81 "data/maps/LavaridgeTown/scripts.pory"

# 82 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition:
# 83 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 84 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 85 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 86 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 87 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 88 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_CheckSetRivalPos
# 89 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_HideMapNamePopup
# 90 "data/maps/LavaridgeTown/scripts.pory"
	end
# 91 "data/maps/LavaridgeTown/scripts.pory"

# 92 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 93 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 94 "data/maps/LavaridgeTown/scripts.pory"
	return
# 95 "data/maps/LavaridgeTown/scripts.pory"

# 96 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos::
# 97 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 98 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
# 99 "data/maps/LavaridgeTown/scripts.pory"
	return
# 100 "data/maps/LavaridgeTown/scripts.pory"

# 101 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 102 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 11, 9
# 103 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 9, 8
# 104 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 105 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 106 "data/maps/LavaridgeTown/scripts.pory"
	return
# 107 "data/maps/LavaridgeTown/scripts.pory"

# 108 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 109 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 110 "data/maps/LavaridgeTown/scripts.pory"
	return
# 111 "data/maps/LavaridgeTown/scripts.pory"

# 112 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 113 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 114 "data/maps/LavaridgeTown/scripts.pory"
	return
# 115 "data/maps/LavaridgeTown/scripts.pory"

# 116 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame:
# 117 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
# 118 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 119 "data/maps/LavaridgeTown/scripts.pory"

# 120 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 121 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 122 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 123 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
# 124 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
# 125 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 126 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 127 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
# 128 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
# 129 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
# 130 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
# 131 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 132 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveGoGoggles
# 133 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveGoGoggles
# 134 "data/maps/LavaridgeTown/scripts.pory"
	end
# 135 "data/maps/LavaridgeTown/scripts.pory"

# 136 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveGoGoggles::
# 137 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 138 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 139 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 140 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 141 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 142 "data/maps/LavaridgeTown/scripts.pory"
	end
# 143 "data/maps/LavaridgeTown/scripts.pory"

# 144 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveGoGoggles::
# 145 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 146 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 147 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 148 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 149 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 150 "data/maps/LavaridgeTown/scripts.pory"
	end
# 151 "data/maps/LavaridgeTown/scripts.pory"

# 152 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit::
# 153 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 154 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 155 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 156 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 157 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
# 158 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
# 159 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 160 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 161 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 162 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 163 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 164 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 165 "data/maps/LavaridgeTown/scripts.pory"
	end
# 166 "data/maps/LavaridgeTown/scripts.pory"

# 167 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic::
# 168 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 169 "data/maps/LavaridgeTown/scripts.pory"
	return
# 170 "data/maps/LavaridgeTown/scripts.pory"

# 171 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic::
# 172 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 173 "data/maps/LavaridgeTown/scripts.pory"
	return
# 174 "data/maps/LavaridgeTown/scripts.pory"

# 175 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer::
# 176 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 177 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 178 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 179 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 180 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 181 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 182 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 183 "data/maps/LavaridgeTown/scripts.pory"
	return
# 184 "data/maps/LavaridgeTown/scripts.pory"

# 185 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop::
# 186 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 187 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 188 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 189 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 190 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 191 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 192 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 193 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 194 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 195 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 196 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 197 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 198 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 199 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 200 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 201 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 202 "data/maps/LavaridgeTown/scripts.pory"
	return
# 203 "data/maps/LavaridgeTown/scripts.pory"

# 204 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1::
# 205 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 206 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 207 "data/maps/LavaridgeTown/scripts.pory"
	return
# 208 "data/maps/LavaridgeTown/scripts.pory"

# 209 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2::
# 210 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 211 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 212 "data/maps/LavaridgeTown/scripts.pory"
	return
# 213 "data/maps/LavaridgeTown/scripts.pory"

# 214 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1::
# 215 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 216 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 217 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 218 "data/maps/LavaridgeTown/scripts.pory"
	return
# 219 "data/maps/LavaridgeTown/scripts.pory"

# 220 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2::
# 221 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 222 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 223 "data/maps/LavaridgeTown/scripts.pory"
	return
# 224 "data/maps/LavaridgeTown/scripts.pory"

# 225 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 226 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 227 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 228 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 229 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 230 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 231 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 232 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 233 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 234 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 235 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 236 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 237 "data/maps/LavaridgeTown/scripts.pory"

# 238 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 239 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 240 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 241 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 242 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 243 "data/maps/LavaridgeTown/scripts.pory"

# 244 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 245 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 246 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 247 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 248 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 249 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 250 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 251 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 252 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 253 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 254 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 255 "data/maps/LavaridgeTown/scripts.pory"

# 256 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
# 257 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 258 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 259 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 260 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 261 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 262 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 263 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 264 "data/maps/LavaridgeTown/scripts.pory"

# 265 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 266 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 267 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 268 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 269 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 270 "data/maps/LavaridgeTown/scripts.pory"

# 271 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 272 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 273 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 274 "data/maps/LavaridgeTown/scripts.pory"

# 275 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 276 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 277 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 278 "data/maps/LavaridgeTown/scripts.pory"
	end
# 279 "data/maps/LavaridgeTown/scripts.pory"

# 280 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 281 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 282 "data/maps/LavaridgeTown/scripts.pory"
	end
# 283 "data/maps/LavaridgeTown/scripts.pory"

# 284 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 285 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 286 "data/maps/LavaridgeTown/scripts.pory"
	end
# 287 "data/maps/LavaridgeTown/scripts.pory"

# 288 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 289 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 290 "data/maps/LavaridgeTown/scripts.pory"
	end
# 291 "data/maps/LavaridgeTown/scripts.pory"

# 292 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 293 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 294 "data/maps/LavaridgeTown/scripts.pory"
	end
# 295 "data/maps/LavaridgeTown/scripts.pory"

# 296 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 297 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 298 "data/maps/LavaridgeTown/scripts.pory"
	end
# 299 "data/maps/LavaridgeTown/scripts.pory"

# 300 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 301 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 302 "data/maps/LavaridgeTown/scripts.pory"
	end
# 303 "data/maps/LavaridgeTown/scripts.pory"

# 304 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 305 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 306 "data/maps/LavaridgeTown/scripts.pory"
	end
# 307 "data/maps/LavaridgeTown/scripts.pory"

# 308 "data/maps/LavaridgeTown/scripts.pory"

# 309 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ReceivedEgg::
# 310 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 311 "data/maps/LavaridgeTown/scripts.pory"
	release
# 312 "data/maps/LavaridgeTown/scripts.pory"
	end
# 313 "data/maps/LavaridgeTown/scripts.pory"

# 314 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_NoRoomForEgg::
# 315 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 316 "data/maps/LavaridgeTown/scripts.pory"
	release
# 317 "data/maps/LavaridgeTown/scripts.pory"
	end
# 318 "data/maps/LavaridgeTown/scripts.pory"

# 319 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_DeclineEgg::
# 320 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
# 321 "data/maps/LavaridgeTown/scripts.pory"
	release
# 322 "data/maps/LavaridgeTown/scripts.pory"
	end
# 323 "data/maps/LavaridgeTown/scripts.pory"

# 324 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 325 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 326 "data/maps/LavaridgeTown/scripts.pory"
	end
# 327 "data/maps/LavaridgeTown/scripts.pory"

# 328 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 329 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 330 "data/maps/LavaridgeTown/scripts.pory"
	end
# 331 "data/maps/LavaridgeTown/scripts.pory"

# 332 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 333 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 334 "data/maps/LavaridgeTown/scripts.pory"
	end
# 335 "data/maps/LavaridgeTown/scripts.pory"

# 336 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis:
# 337 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}! Long time no see!\p"
# 338 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? While I visited the hot springs,\n"
# 339 "data/maps/LavaridgeTown/scripts.pory"
	.string "you got the LAVARIDGE GYM BADGE.\p"
# 340 "data/maps/LavaridgeTown/scripts.pory"
	.string "You must have collected\n"
# 341 "data/maps/LavaridgeTown/scripts.pory"
	.string "good POKéMON…\l"
# 342 "data/maps/LavaridgeTown/scripts.pory"
	.string "No, I believe you raised some.\p"
# 343 "data/maps/LavaridgeTown/scripts.pory"
	.string "I guess it would be okay for you to\n"
# 344 "data/maps/LavaridgeTown/scripts.pory"
	.string "have this.$"
# 345 "data/maps/LavaridgeTown/scripts.pory"

# 346 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
# 347 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: With those GO-GOGGLES, you'll\n"
# 348 "data/maps/LavaridgeTown/scripts.pory"
	.string "have no trouble getting through the\l"
# 349 "data/maps/LavaridgeTown/scripts.pory"
	.string "desert near ROUTE 111.\p"
# 350 "data/maps/LavaridgeTown/scripts.pory"
	.string "But, wow, {PLAYER}{KUN}…\n"
# 351 "data/maps/LavaridgeTown/scripts.pory"
	.string "Challenging GYMS…\p"
# 352 "data/maps/LavaridgeTown/scripts.pory"
	.string "You're trying hard because you don't\n"
# 353 "data/maps/LavaridgeTown/scripts.pory"
	.string "want to lose to me, I bet!\p"
# 354 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
# 355 "data/maps/LavaridgeTown/scripts.pory"
	.string "your dad in PETALBURG GYM.\p"
# 356 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you again!$"
# 357 "data/maps/LavaridgeTown/scripts.pory"

# 358 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
# 359 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: {PLAYER}, hey, it's been a while.\n"
# 360 "data/maps/LavaridgeTown/scripts.pory"
	.string "How's it going?\p"
# 361 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hmm…\n"
# 362 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's a decent collection of BADGES.\p"
# 363 "data/maps/LavaridgeTown/scripts.pory"
	.string "All right, then.\n"
# 364 "data/maps/LavaridgeTown/scripts.pory"
	.string "You may as well have this.$"
# 365 "data/maps/LavaridgeTown/scripts.pory"

# 366 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
# 367 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: Keep those with you if you're\n"
# 368 "data/maps/LavaridgeTown/scripts.pory"
	.string "planning on going into that desert near\l"
# 369 "data/maps/LavaridgeTown/scripts.pory"
	.string "ROUTE 111.\p"
# 370 "data/maps/LavaridgeTown/scripts.pory"
	.string "There should be some POKéMON that\n"
# 371 "data/maps/LavaridgeTown/scripts.pory"
	.string "are exclusively desert-dwellers.\l"
# 372 "data/maps/LavaridgeTown/scripts.pory"
	.string "You might look around for those.\p"
# 373 "data/maps/LavaridgeTown/scripts.pory"
	.string "As for me…\n"
# 374 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'm considering challenging NORMAN,\l"
# 375 "data/maps/LavaridgeTown/scripts.pory"
	.string "the GYM LEADER of PETALBURG.\p"
# 376 "data/maps/LavaridgeTown/scripts.pory"
	.string "Unlike you, {PLAYER}, your dad looks like\n"
# 377 "data/maps/LavaridgeTown/scripts.pory"
	.string "he really is tough.\p"
# 378 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you around!$"
# 379 "data/maps/LavaridgeTown/scripts.pory"

# 380 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt:
# 381 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an EGG.\p"
# 382 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'd hoped to hatch it by covering it in\n"
# 383 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot sand by the hot springs.\l"
# 384 "data/maps/LavaridgeTown/scripts.pory"
	.string "But that doesn't seem to be enough…\p"
# 385 "data/maps/LavaridgeTown/scripts.pory"
	.string "I've heard it would be best if it were\n"
# 386 "data/maps/LavaridgeTown/scripts.pory"
	.string "kept together with POKéMON and\l"
# 387 "data/maps/LavaridgeTown/scripts.pory"
	.string "carried about.\p"
# 388 "data/maps/LavaridgeTown/scripts.pory"
	.string "You are a TRAINER, yes?\n"
# 389 "data/maps/LavaridgeTown/scripts.pory"
	.string "And your POKéMON radiate vitality.\p"
# 390 "data/maps/LavaridgeTown/scripts.pory"
	.string "So, what say you?\n"
# 391 "data/maps/LavaridgeTown/scripts.pory"
	.string "Will you take this EGG to hatch?$"
# 392 "data/maps/LavaridgeTown/scripts.pory"

# 393 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
# 394 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 395 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here EGG!$"
# 396 "data/maps/LavaridgeTown/scripts.pory"

# 397 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg:
# 398 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the EGG.$"
# 399 "data/maps/LavaridgeTown/scripts.pory"

# 400 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg:
# 401 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many POKéMON.\n"
# 402 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this EGG…$"
# 403 "data/maps/LavaridgeTown/scripts.pory"

# 404 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen:
# 405 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 406 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 407 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this EGG, I will be here.$"
# 408 "data/maps/LavaridgeTown/scripts.pory"

# 409 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
# 410 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an EGG will be found at\n"
# 411 "data/maps/LavaridgeTown/scripts.pory"
	.string "the POKéMON DAY CARE.\p"
# 412 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 413 "data/maps/LavaridgeTown/scripts.pory"

# 414 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 415 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 416 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 417 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 418 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 419 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 420 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 421 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 422 "data/maps/LavaridgeTown/scripts.pory"

# 423 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 424 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 425 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 426 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 427 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 428 "data/maps/LavaridgeTown/scripts.pory"
	.string "A POKéMON nipped my backside!$"
# 429 "data/maps/LavaridgeTown/scripts.pory"

# 430 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 431 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 432 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 433 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 434 "data/maps/LavaridgeTown/scripts.pory"

# 435 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 436 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 437 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 438 "data/maps/LavaridgeTown/scripts.pory"
	.string "GYM LEADER like FLANNERY.$"
# 439 "data/maps/LavaridgeTown/scripts.pory"

# 440 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 441 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put POKéMON in hot springs,\n"
# 442 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 443 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 444 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 445 "data/maps/LavaridgeTown/scripts.pory"

# 446 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 447 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 448 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 449 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 450 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 451 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 452 "data/maps/LavaridgeTown/scripts.pory"

# 453 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 454 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN\p"
# 455 "data/maps/LavaridgeTown/scripts.pory"
	.string "“POKéMON CENTER HOT SPRINGS\n"
# 456 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 457 "data/maps/LavaridgeTown/scripts.pory"

# 458 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 459 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\n"
# 460 "data/maps/LavaridgeTown/scripts.pory"
	.string "LEADER: FLANNERY\l"
# 461 "data/maps/LavaridgeTown/scripts.pory"
	.string "“One with a fiery passion that burns!”$"
# 462 "data/maps/LavaridgeTown/scripts.pory"

# 463 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 464 "data/maps/LavaridgeTown/scripts.pory"
	.string "POKéMON HERB SHOP\n"
# 465 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Bitter taste--better cure!”$"
