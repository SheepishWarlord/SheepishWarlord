FallarborGiftMon::
	lockall
	faceplayer
	goto_if_unset FLAG_FALLARBOR_GIFT, FallarborGiftMon_2
	msgbox FallarborGiftMon_Text_4
FallarborGiftMon_1:
	waitmessage
	releaseall
	end

FallarborGiftMon_2:
	msgbox FallarborGiftMon_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq FallarborGiftMon_5
	msgbox FallarborGiftMon_Text_3
	goto FallarborGiftMon_1

FallarborGiftMon_5:
	givemon SPECIES_TEDDIURSA, 10, item = ITEM_FLAME_ORB
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FallarborGiftMon_8
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq FallarborGiftMon_9
	msgbox FallarborGiftMon_Text_2
	goto FallarborGiftMon_1

FallarborGiftMon_8:
	playfanfare MUS_OBTAIN_ITEM
	msgbox FallarborGiftMon_Text_1
	setflag FLAG_FALLARBOR_GIFT
	goto FallarborGiftMon_1

FallarborGiftMon_9:
	playfanfare MUS_OBTAIN_ITEM
	msgbox FallarborGiftMon_Text_1
	setflag FLAG_FALLARBOR_GIFT
	goto FallarborGiftMon_1


FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
	.byte 0

FallarborTown_OnTransition:
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	clearflag FLAG_CONTEST_SKETCH_CREATED
	end

FallarborTown_EventScript_ExpertM::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_ExpertMNormal::
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_Girl::
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
	end

FallarborTown_EventScript_Gentleman::
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
	end

FallarborTown_EventScript_Azurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_EventScript_BattleTentSign::
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_TownSign::
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_MoveTutorSign::
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
	end

FallarborTown_Text_ShadyCharactersCozmosHome:
	.string "Something's happening,\n"
	.string "and I don't like it!\p"
	.string "I've seen shady characters wandering\n"
	.string "in and out of PROF. COZMO's home…$"

FallarborTown_Text_RegionKnownForMeteors:
	.string "This region's been known for meteors\n"
	.string "since the olden days.\p"
	.string "They say METEOR FALLS was gouged out\n"
	.string "by a falling meteorite long ago.$"

FallarborTown_Text_MyPreciousAzurill:
	.string "See! Take a look!\n"
	.string "This is my precious AZURILL!\p"
	.string "It's slick and smooth and plushy, too!$"

FallarborTown_Text_Azurill:
	.string "AZURILL: Rooreelooo.$"

FallarborTown_Text_HaveYouChallengedFlannery:
	.string "Have you already challenged FLANNERY,\n"
	.string "the LEADER of LAVARIDGE GYM?\p"
	.string "The girl's grandfather was famous.\n"
	.string "He was one of the ELITE FOUR in the\l"
	.string "POKéMON LEAGUE at one point.\p"
	.string "It wouldn't surprise me to see FLANNERY\n"
	.string "become a great TRAINER in her own\l"
	.string "right.$"

FallarborTown_Text_BattleTentSign:
	.string "BATTLE TENT FALLARBOR SITE\n"
	.string "“May the Greatest Teams Gather!”$"

FallarborTown_Text_TownSign:
	.string "FALLARBOR TOWN\n"
	.string "“A farm community with small gardens.”$"

FallarborTown_Text_MoveTutorSign:
	.string "MOVE TUTOR'S HOUSE\n"
	.string "“New moves taught to POKéMON.”$"

FallarborGiftMon_Text_0:
	.string "Hey, I hate to ask you, but you seem\n"
	.string "like the travelling type. My POKéMON\l"
	.string "doesn't like the air here. Could you\l"
	.string "bring it with you on your travels away\l"
	.string "from here?$"

FallarborGiftMon_Text_1:
	.string "Received Teddiursa$"

FallarborGiftMon_Text_2:
	.string "There's no room!$"

FallarborGiftMon_Text_3:
	.string "Ahh, I see, you're to good for my\n"
	.string "Teddiursa, are you?$"

FallarborGiftMon_Text_4:
	.string "Thank you! I hope Teddiursa does well!$"
