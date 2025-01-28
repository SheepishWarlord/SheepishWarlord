AbandonedShip_Rooms2_1F_EventScript_Garrison::
# 2 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	lock
# 3 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_EventScript_Garrison_Text_0, MSGBOX_YESNO
# 4 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq AbandonedShip_Rooms2_1F_EventScript_Garrison_2
# 8 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_PHIL, AbandonedShip_Rooms2_1F_EventScript_Garrison_Text_1, AbandonedShip_Rooms2_1F_EventScript_Garrison_Text_2, SteelixiteGift
# 9 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_EventScript_Garrison_Text_3
# 10 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
	end

AbandonedShip_Rooms2_1F_EventScript_Garrison_2:
# 5 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
	end


SteelixiteGift::
# 15 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox SteelixiteGift_Text_0
# 16 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	giveitem ITEM_STEELIXITE
# 17 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox SteelixiteGift_Text_1
# 19 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	waitmessage
# 20 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	waitfanfare
# 21 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox SteelixiteGift_Text_2
# 22 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	waitmessage
# 23 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
	end


# 27 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 28 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_MapScripts::
# 29 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.byte 0
# 30 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 31 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Dan::
# 32 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanIntro, AbandonedShip_Rooms2_1F_Text_DanDefeat, AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterDan
# 33 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 34 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_DanRematch
# 35 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_DEFAULT
# 36 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 37 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 38 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 39 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterDan::
# 40 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT  @ Kira speaks for both when registering KiraAndDan
# 41 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 42 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 43 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 44 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 45 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_DanRematch::
# 46 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanRematchIntro, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat, AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons
# 47 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostRematch, MSGBOX_AUTOCLOSE
# 48 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 49 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 50 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Kira::
# 51 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraIntro, AbandonedShip_Rooms2_1F_Text_KiraDefeat, AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterKira
# 52 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 53 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_KiraRematch
# 54 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_DEFAULT
# 55 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 56 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 57 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 58 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterKira::
# 59 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
# 60 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 61 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 62 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 63 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 64 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_KiraRematch::
# 65 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraRematchIntro, AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat, AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons
# 66 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostRematch, MSGBOX_AUTOCLOSE
# 67 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 68 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 69 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Jani::
# 70 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_JaniIntro, AbandonedShip_Rooms2_1F_Text_JaniDefeat
# 71 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 73 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 74 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanIntro:
# 75 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: While searching for treasures,\n"
# 76 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we discovered a TRAINER!$"
# 77 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 78 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanDefeat:
# 79 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We couldn't win even though\n"
# 80 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we worked together…$"
# 81 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 82 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostBattle:
# 83 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We can't find any treasures…\n"
# 84 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I wonder if someone got them already?$"
# 85 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 86 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons:
# 87 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You don't even have two POKéMON.\n"
# 88 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "You can't expect to beat us like that.$"
# 89 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 90 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraIntro:
# 91 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh?\n"
# 92 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We were searching for treasures.\l"
# 93 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "But we discovered a TRAINER instead!$"
# 94 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 95 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraDefeat:
# 96 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Ooh, so strong!$"
# 97 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 98 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostBattle:
# 99 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Where could the treasures be?\p"
# 100 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I've already decided what I'm buying\n"
# 101 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "when we find the treasures!$"
# 102 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 103 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons:
# 104 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you don't have two POKéMON?\n"
# 105 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We'll have to battle some other time!$"
# 106 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 107 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRegister:
# 108 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you make me so angry!\n"
# 109 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I'm going to register you for that!$"
# 110 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 111 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchIntro:
# 112 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We've been searching for\n"
# 113 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "treasures all this time.\p"
# 114 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Our POKéMON have grown stronger, too.\n"
# 115 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Let us show you, okay?$"
# 116 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 117 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchDefeat:
# 118 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You're strong, as usual!$"
# 119 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 120 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostRematch:
# 121 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We can't find any treasures,\n"
# 122 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we lose at POKéMON…\p"
# 123 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I want to go home… But if I say that,\n"
# 124 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "she gets all angry with me…$"
# 125 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 126 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons:
# 127 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You don't even have two POKéMON.\n"
# 128 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "You can't expect to beat us like that.$"
# 129 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 130 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchIntro:
# 131 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh? We meet again!\p"
# 132 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Just like us, you still haven't given up\n"
# 133 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "searching for treasures, have you?\p"
# 134 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Want to make it so the loser has\n"
# 135 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "to give up searching?$"
# 136 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 137 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat:
# 138 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, we lost again…$"
# 139 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 140 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostRematch:
# 141 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: We're not leaving until we raise\n"
# 142 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "our POKéMON some more and we find\l"
# 143 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "the treasures here!$"
# 144 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 145 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons:
# 146 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you don't have two POKéMON?\n"
# 147 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We'll have to battle some other time!$"
# 148 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 149 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniIntro:
# 150 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I'm not good at swimming,\n"
# 151 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "but I am good at battles!$"
# 152 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 153 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniDefeat:
# 154 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Oops.\n"
# 155 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "That didn't go very well.$"
# 156 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 157 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniPostBattle:
# 158 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Walking around barefoot in this ship\n"
# 159 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "is kind of gross.$"
# 160 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 161 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonIntro:
# 162 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Strength and compassion…\n"
# 163 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Those are a TRAINER's treasures!$"
# 164 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 165 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonDefeat:
# 166 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Ah, there is something about you\n"
# 167 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "that sparkles.$"
# 168 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 169 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle:
# 170 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "In a cabin somewhere on board,\n"
# 171 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I saw something sparkle.$"

AbandonedShip_Rooms2_1F_EventScript_Garrison_Text_0:
# 3 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "You look like a strong trainer. I am a\n"
	.string "strong trainer. I guard the Steelixite,\l"
	.string "do you wish to gain access to Mega\l"
	.string "Steelix?$"

AbandonedShip_Rooms2_1F_EventScript_Garrison_Text_1:
# 8 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Best of luck in this endeavor!$"

AbandonedShip_Rooms2_1F_EventScript_Garrison_Text_2:
# 8 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Congratulations! You can now wield Mega\n"
	.string "Steelix!$"

AbandonedShip_Rooms2_1F_EventScript_Garrison_Text_3:
# 9 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Good job!$"

SteelixiteGift_Text_0:
# 15 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Here is the Steelixite, as promised.$"

SteelixiteGift_Text_1:
# 18 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "{PLAYER} obtained the Steelixite!$"

SteelixiteGift_Text_2:
# 21 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I hope your Steelix enjoys the power of\n"
	.string "Mega Evolution!$"
