FallarborGiftMon::
# 2 "data/maps/FallarborTown/scripts.pory"
	lockall
# 3 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 4 "data/maps/FallarborTown/scripts.pory"
	goto_if_unset FLAG_FALLARBOR_GIFT, FallarborGiftMon_2
# 28 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborGiftMon_Text_4
FallarborGiftMon_1:
# 30 "data/maps/FallarborTown/scripts.pory"
	waitmessage
# 31 "data/maps/FallarborTown/scripts.pory"
	releaseall
	end

FallarborGiftMon_2:
# 5 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborGiftMon_Text_0, MSGBOX_YESNO
# 6 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallarborGiftMon_5
# 23 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborGiftMon_Text_3
	goto FallarborGiftMon_1

FallarborGiftMon_5:
# 7 "data/maps/FallarborTown/scripts.pory"
	givemon SPECIES_TEDDIURSA, 10, item = ITEM_FLAME_ORB
# 8 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FallarborGiftMon_8
# 13 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq FallarborGiftMon_9
# 19 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborGiftMon_Text_2
	goto FallarborGiftMon_1

FallarborGiftMon_8:
# 9 "data/maps/FallarborTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 10 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborGiftMon_Text_1
# 11 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_FALLARBOR_GIFT
	goto FallarborGiftMon_1

FallarborGiftMon_9:
# 14 "data/maps/FallarborTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborGiftMon_Text_1
# 16 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_FALLARBOR_GIFT
	goto FallarborGiftMon_1


# 35 "data/maps/FallarborTown/scripts.pory"

# 36 "data/maps/FallarborTown/scripts.pory"
FallarborTown_MapScripts::
# 37 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
# 38 "data/maps/FallarborTown/scripts.pory"
	.byte 0
# 39 "data/maps/FallarborTown/scripts.pory"

# 40 "data/maps/FallarborTown/scripts.pory"
FallarborTown_OnTransition:
# 41 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 42 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 43 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
# 44 "data/maps/FallarborTown/scripts.pory"
	end
# 45 "data/maps/FallarborTown/scripts.pory"

# 46 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM::
# 47 "data/maps/FallarborTown/scripts.pory"
	lock
# 48 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 49 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
# 50 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 51 "data/maps/FallarborTown/scripts.pory"
	release
# 52 "data/maps/FallarborTown/scripts.pory"
	end
# 53 "data/maps/FallarborTown/scripts.pory"

# 54 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal::
# 55 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 56 "data/maps/FallarborTown/scripts.pory"
	release
# 57 "data/maps/FallarborTown/scripts.pory"
	end
# 58 "data/maps/FallarborTown/scripts.pory"

# 59 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl::
# 60 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 61 "data/maps/FallarborTown/scripts.pory"
	end
# 62 "data/maps/FallarborTown/scripts.pory"

# 63 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman::
# 64 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 65 "data/maps/FallarborTown/scripts.pory"
	end
# 66 "data/maps/FallarborTown/scripts.pory"

# 67 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill::
# 68 "data/maps/FallarborTown/scripts.pory"
	lock
# 69 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 70 "data/maps/FallarborTown/scripts.pory"
	waitse
# 71 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 72 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 73 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 74 "data/maps/FallarborTown/scripts.pory"
	release
# 75 "data/maps/FallarborTown/scripts.pory"
	end
# 76 "data/maps/FallarborTown/scripts.pory"

# 77 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign::
# 78 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 79 "data/maps/FallarborTown/scripts.pory"
	end
# 80 "data/maps/FallarborTown/scripts.pory"

# 81 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign::
# 82 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 83 "data/maps/FallarborTown/scripts.pory"
	end
# 84 "data/maps/FallarborTown/scripts.pory"

# 85 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign::
# 86 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 87 "data/maps/FallarborTown/scripts.pory"
	end
# 88 "data/maps/FallarborTown/scripts.pory"

# 89 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome:
# 90 "data/maps/FallarborTown/scripts.pory"
	.string "Something's happening,\n"
# 91 "data/maps/FallarborTown/scripts.pory"
	.string "and I don't like it!\p"
# 92 "data/maps/FallarborTown/scripts.pory"
	.string "I've seen shady characters wandering\n"
# 93 "data/maps/FallarborTown/scripts.pory"
	.string "in and out of PROF. COZMO's home…$"
# 94 "data/maps/FallarborTown/scripts.pory"

# 95 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors:
# 96 "data/maps/FallarborTown/scripts.pory"
	.string "This region's been known for meteors\n"
# 97 "data/maps/FallarborTown/scripts.pory"
	.string "since the olden days.\p"
# 98 "data/maps/FallarborTown/scripts.pory"
	.string "They say METEOR FALLS was gouged out\n"
# 99 "data/maps/FallarborTown/scripts.pory"
	.string "by a falling meteorite long ago.$"
# 100 "data/maps/FallarborTown/scripts.pory"

# 101 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill:
# 102 "data/maps/FallarborTown/scripts.pory"
	.string "See! Take a look!\n"
# 103 "data/maps/FallarborTown/scripts.pory"
	.string "This is my precious AZURILL!\p"
# 104 "data/maps/FallarborTown/scripts.pory"
	.string "It's slick and smooth and plushy, too!$"
# 105 "data/maps/FallarborTown/scripts.pory"

# 106 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill:
# 107 "data/maps/FallarborTown/scripts.pory"
	.string "AZURILL: Rooreelooo.$"
# 108 "data/maps/FallarborTown/scripts.pory"

# 109 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery:
# 110 "data/maps/FallarborTown/scripts.pory"
	.string "Have you already challenged FLANNERY,\n"
# 111 "data/maps/FallarborTown/scripts.pory"
	.string "the LEADER of LAVARIDGE GYM?\p"
# 112 "data/maps/FallarborTown/scripts.pory"
	.string "The girl's grandfather was famous.\n"
# 113 "data/maps/FallarborTown/scripts.pory"
	.string "He was one of the ELITE FOUR in the\l"
# 114 "data/maps/FallarborTown/scripts.pory"
	.string "POKéMON LEAGUE at one point.\p"
# 115 "data/maps/FallarborTown/scripts.pory"
	.string "It wouldn't surprise me to see FLANNERY\n"
# 116 "data/maps/FallarborTown/scripts.pory"
	.string "become a great TRAINER in her own\l"
# 117 "data/maps/FallarborTown/scripts.pory"
	.string "right.$"
# 118 "data/maps/FallarborTown/scripts.pory"

# 119 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign:
# 120 "data/maps/FallarborTown/scripts.pory"
	.string "BATTLE TENT FALLARBOR SITE\n"
# 121 "data/maps/FallarborTown/scripts.pory"
	.string "“May the Greatest Teams Gather!”$"
# 122 "data/maps/FallarborTown/scripts.pory"

# 123 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign:
# 124 "data/maps/FallarborTown/scripts.pory"
	.string "FALLARBOR TOWN\n"
# 125 "data/maps/FallarborTown/scripts.pory"
	.string "“A farm community with small gardens.”$"
# 126 "data/maps/FallarborTown/scripts.pory"

# 127 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign:
# 128 "data/maps/FallarborTown/scripts.pory"
	.string "MOVE TUTOR'S HOUSE\n"
# 129 "data/maps/FallarborTown/scripts.pory"
	.string "“New moves taught to POKéMON.”$"

FallarborGiftMon_Text_0:
# 5 "data/maps/FallarborTown/scripts.pory"
	.string "Hey, I hate to ask you, but you seem\n"
	.string "like the travelling type. My POKéMON\l"
	.string "doesn't like the air here. Could you\l"
	.string "bring it with you on your travels away\l"
	.string "from here?$"

FallarborGiftMon_Text_1:
# 10 "data/maps/FallarborTown/scripts.pory"
	.string "Received Teddiursa$"

FallarborGiftMon_Text_2:
# 19 "data/maps/FallarborTown/scripts.pory"
	.string "There's no room!$"

FallarborGiftMon_Text_3:
# 23 "data/maps/FallarborTown/scripts.pory"
	.string "Ahh, I see, you're to good for my\n"
	.string "Teddiursa, are you?$"

FallarborGiftMon_Text_4:
# 28 "data/maps/FallarborTown/scripts.pory"
	.string "Thank you! I hope Teddiursa does well!$"
