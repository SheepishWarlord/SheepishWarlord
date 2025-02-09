WestMtChimney_MapScripts::
	.byte 0


AlinasMtChimneyTest1::
# 4 "data/maps/WestMtChimney/scripts.pory"
	lockall
# 5 "data/maps/WestMtChimney/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 6 "data/maps/WestMtChimney/scripts.pory"
	waitmovement 1
# 7 "data/maps/WestMtChimney/scripts.pory"
	applymovement 1, AlinaApproachPlayer1
# 8 "data/maps/WestMtChimney/scripts.pory"
	waitmovement 1
# 9 "data/maps/WestMtChimney/scripts.pory"
	goto AlinaBattle2
	return


AlinasMtChimneyTest2::
# 13 "data/maps/WestMtChimney/scripts.pory"
	lockall
# 14 "data/maps/WestMtChimney/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 15 "data/maps/WestMtChimney/scripts.pory"
	waitmovement 1
# 16 "data/maps/WestMtChimney/scripts.pory"
	applymovement 1, AlinaApproachPlayer2
# 17 "data/maps/WestMtChimney/scripts.pory"
	waitmovement 1
# 18 "data/maps/WestMtChimney/scripts.pory"
	goto AlinaBattle2
	return


AlinasMtChimneyTest3::
# 22 "data/maps/WestMtChimney/scripts.pory"
	lockall
# 23 "data/maps/WestMtChimney/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 24 "data/maps/WestMtChimney/scripts.pory"
	waitmovement 1
# 25 "data/maps/WestMtChimney/scripts.pory"
	applymovement 1, AlinaApproachPlayer2
# 26 "data/maps/WestMtChimney/scripts.pory"
	waitmovement 1
# 27 "data/maps/WestMtChimney/scripts.pory"
	goto AlinaBattle2
	return


# 30 "data/maps/WestMtChimney/scripts.pory"
AlinaApproachPlayer1:
# 31 "data/maps/WestMtChimney/scripts.pory"
	walk_left
# 32 "data/maps/WestMtChimney/scripts.pory"
	walk_down
# 33 "data/maps/WestMtChimney/scripts.pory"
	face_left
	step_end

# 36 "data/maps/WestMtChimney/scripts.pory"
AlinaApproachPlayer2:
# 37 "data/maps/WestMtChimney/scripts.pory"
	walk_left
	step_end

# 40 "data/maps/WestMtChimney/scripts.pory"
AlinaApproachPlayer3:
# 41 "data/maps/WestMtChimney/scripts.pory"
	walk_left
# 42 "data/maps/WestMtChimney/scripts.pory"
	walk_up
# 43 "data/maps/WestMtChimney/scripts.pory"
	face_left
	step_end

AlinaBattle2::
# 47 "data/maps/WestMtChimney/scripts.pory"
	msgbox AlinaBattle2_Text_0
# 48 "data/maps/WestMtChimney/scripts.pory"
	waitmessage
# 49 "data/maps/WestMtChimney/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_4, AlinaBattle2Intro, AlinaBattle2Outro, AlinaMtChimneyTestConclusion
	return


AlinaMtChimneyTestConclusion::
# 61 "data/maps/WestMtChimney/scripts.pory"
	msgbox AlinaMtChimneyTestConclusion_Text_0
# 62 "data/maps/WestMtChimney/scripts.pory"
	waitmessage
# 63 "data/maps/WestMtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 64 "data/maps/WestMtChimney/scripts.pory"
	special HealPlayerParty
# 65 "data/maps/WestMtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 66 "data/maps/WestMtChimney/scripts.pory"
	waitmessage
# 67 "data/maps/WestMtChimney/scripts.pory"
	msgbox AlinaMtChimneyTestConclusion_Text_1
# 68 "data/maps/WestMtChimney/scripts.pory"
	waitmessage
# 69 "data/maps/WestMtChimney/scripts.pory"
	msgbox AlinaMtChimneyTestConclusion_Text_2
# 70 "data/maps/WestMtChimney/scripts.pory"
	waitmessage
# 71 "data/maps/WestMtChimney/scripts.pory"
	applymovement 1, AlinaChargesForward
# 72 "data/maps/WestMtChimney/scripts.pory"
	waitmovement 1
# 73 "data/maps/WestMtChimney/scripts.pory"
	setvar VAR_ENTEI, 1
# 74 "data/maps/WestMtChimney/scripts.pory"
	releaseall
	return


# 77 "data/maps/WestMtChimney/scripts.pory"
AlinaChargesForward:
# 78 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 78 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 78 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 78 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 78 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 78 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 78 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 78 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 79 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_down
# 79 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_down
# 79 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_down
# 79 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_down
# 79 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_down
# 79 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_down
# 79 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_down
# 79 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_down
	step_end

TriggerEntei1::
# 83 "data/maps/WestMtChimney/scripts.pory"
	lockall
# 84 "data/maps/WestMtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TriggerEntei11
# 85 "data/maps/WestMtChimney/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 86 "data/maps/WestMtChimney/scripts.pory"
	goto TriggerEnteiOutside
	return


# 89 "data/maps/WestMtChimney/scripts.pory"
TriggerEntei11:
# 90 "data/maps/WestMtChimney/scripts.pory"
	walk_right
# 91 "data/maps/WestMtChimney/scripts.pory"
	walk_up
# 92 "data/maps/WestMtChimney/scripts.pory"
	walk_right
	step_end

TriggerEntei2::
# 96 "data/maps/WestMtChimney/scripts.pory"
	lockall
# 97 "data/maps/WestMtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TriggerEntei21
# 98 "data/maps/WestMtChimney/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 99 "data/maps/WestMtChimney/scripts.pory"
	goto TriggerEnteiOutside
	return


# 102 "data/maps/WestMtChimney/scripts.pory"
TriggerEntei21:
# 103 "data/maps/WestMtChimney/scripts.pory"
	walk_right
# 104 "data/maps/WestMtChimney/scripts.pory"
	walk_right
	step_end

TriggerEntei3::
# 108 "data/maps/WestMtChimney/scripts.pory"
	lockall
# 109 "data/maps/WestMtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TriggerEntei31
# 110 "data/maps/WestMtChimney/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 111 "data/maps/WestMtChimney/scripts.pory"
	goto TriggerEnteiOutside
	return


# 114 "data/maps/WestMtChimney/scripts.pory"
TriggerEntei31:
# 115 "data/maps/WestMtChimney/scripts.pory"
	walk_right
# 116 "data/maps/WestMtChimney/scripts.pory"
	walk_down
# 117 "data/maps/WestMtChimney/scripts.pory"
	walk_right
	step_end

TriggerEnteiOutside::
# 121 "data/maps/WestMtChimney/scripts.pory"
	msgbox TriggerEnteiOutside_Text_0
# 122 "data/maps/WestMtChimney/scripts.pory"
	waitmessage
# 123 "data/maps/WestMtChimney/scripts.pory"
	msgbox TriggerEnteiOutside_Text_1
# 124 "data/maps/WestMtChimney/scripts.pory"
	waitmessage
# 125 "data/maps/WestMtChimney/scripts.pory"
	applymovement 2, EnteiRuns1
# 126 "data/maps/WestMtChimney/scripts.pory"
	waitmovement 2
# 127 "data/maps/WestMtChimney/scripts.pory"
	removeobject 2
# 128 "data/maps/WestMtChimney/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 129 "data/maps/WestMtChimney/scripts.pory"
	waitmovement 4
# 130 "data/maps/WestMtChimney/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 131 "data/maps/WestMtChimney/scripts.pory"
	waitmovement 3
# 132 "data/maps/WestMtChimney/scripts.pory"
	msgbox TriggerEnteiOutside_Text_2
# 133 "data/maps/WestMtChimney/scripts.pory"
	applymovement 4, GruntsRunAway1
# 134 "data/maps/WestMtChimney/scripts.pory"
	waitmovement 4
# 135 "data/maps/WestMtChimney/scripts.pory"
	applymovement 3, GruntsRunAway2
# 136 "data/maps/WestMtChimney/scripts.pory"
	waitmovement 3
# 137 "data/maps/WestMtChimney/scripts.pory"
	msgbox TriggerEnteiOutside_Text_3
# 138 "data/maps/WestMtChimney/scripts.pory"
	applymovement 5, GruntsRunAway2
# 139 "data/maps/WestMtChimney/scripts.pory"
	waitmovement 5
# 140 "data/maps/WestMtChimney/scripts.pory"
	setvar VAR_ENTEI, 2
# 141 "data/maps/WestMtChimney/scripts.pory"
	releaseall
	return


# 144 "data/maps/WestMtChimney/scripts.pory"
EnteiRuns1:
# 145 "data/maps/WestMtChimney/scripts.pory"
	jump_in_place_down
# 146 "data/maps/WestMtChimney/scripts.pory"
	jump_2_right
# 146 "data/maps/WestMtChimney/scripts.pory"
	jump_2_right
# 146 "data/maps/WestMtChimney/scripts.pory"
	jump_2_right
# 146 "data/maps/WestMtChimney/scripts.pory"
	jump_2_right
	step_end

# 149 "data/maps/WestMtChimney/scripts.pory"
GruntsRunAway1:
# 150 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_down
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 151 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
	step_end

# 154 "data/maps/WestMtChimney/scripts.pory"
GruntsRunAway2:
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
# 155 "data/maps/WestMtChimney/scripts.pory"
	walk_faster_right
	step_end

AlinaBattle2_Text_0:
# 47 "data/maps/WestMtChimney/scripts.pory"
	.string "Alina: Good, you came! Now... I'm sorry,\n"
	.string "but I have to be sure you're just as\l"
	.string "formidable as before, it's battle time!$"

AlinaMtChimneyTestConclusion_Text_0:
# 61 "data/maps/WestMtChimney/scripts.pory"
	.string "Alina: Here, I'll heal your party for you\n"
	.string "after that battle$"

AlinaMtChimneyTestConclusion_Text_1:
# 67 "data/maps/WestMtChimney/scripts.pory"
	.string "There! All healed up and ready to go!\n"
	.string "This time, Team Magma has decided to\l"
	.string "both try and explode the volcano and\l"
	.string "capture the legendary POKéMON Entei.\l"
	.string "I'm sure I don't have to explain why\l"
	.string "them accomplishing either of these\l"
	.string "would be disastrous!$"

AlinaMtChimneyTestConclusion_Text_2:
# 69 "data/maps/WestMtChimney/scripts.pory"
	.string "Now, we can go without worrying too\n"
	.string "much, don't worry there's already a\l"
	.string "nurse onsite to help us.$"

TriggerEnteiOutside_Text_0:
# 121 "data/maps/WestMtChimney/scripts.pory"
	.string "Alina: Hah! One down... a lot to go!$"

TriggerEnteiOutside_Text_1:
# 123 "data/maps/WestMtChimney/scripts.pory"
	.string "Grunt: This is bad...at least we found\n"
	.string "Entei.$"

TriggerEnteiOutside_Text_2:
# 132 "data/maps/WestMtChimney/scripts.pory"
	.string "Ahhhh! I had to open my big mouth! Let's\n"
	.string "go!$"

TriggerEnteiOutside_Text_3:
# 137 "data/maps/WestMtChimney/scripts.pory"
	.string "Alina: Hey! Get back here!$"

AlinaBattle2Intro::
# 52 "data/maps/WestMtChimney/scripts.pory"
	.string "Alright, for our sake, I hope you're\n"
	.string "good.$"

AlinaBattle2Outro::
# 56 "data/maps/WestMtChimney/scripts.pory"
	.string "Whew, I mean I wanna win, but having\n"
	.string "strong backup is better!$"
