Route108_EventScript_Carolina::
# 2 "data/maps/Route108/scripts.pory"
	lock
# 3 "data/maps/Route108/scripts.pory"
	msgbox Route108_EventScript_Carolina_Text_0, MSGBOX_YESNO
# 4 "data/maps/Route108/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route108_EventScript_Carolina_2
# 8 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_CAROLINA, Route108_EventScript_Carolina_Text_1, Route108_EventScript_Carolina_Text_2, ManectiteGift
# 9 "data/maps/Route108/scripts.pory"
	msgbox Route108_EventScript_Carolina_Text_3
# 10 "data/maps/Route108/scripts.pory"
	release
	end

Route108_EventScript_Carolina_2:
# 5 "data/maps/Route108/scripts.pory"
	release
	end


ManectiteGift::
# 15 "data/maps/Route108/scripts.pory"
	msgbox ManectiteGift_Text_0
# 16 "data/maps/Route108/scripts.pory"
	giveitem ITEM_MANECTITE
# 17 "data/maps/Route108/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/Route108/scripts.pory"
	msgbox ManectiteGift_Text_1
# 19 "data/maps/Route108/scripts.pory"
	waitmessage
# 20 "data/maps/Route108/scripts.pory"
	waitfanfare
# 21 "data/maps/Route108/scripts.pory"
	msgbox ManectiteGift_Text_2
# 22 "data/maps/Route108/scripts.pory"
	waitmessage
# 23 "data/maps/Route108/scripts.pory"
	release
	end


# 28 "data/maps/Route108/scripts.pory"

# 29 "data/maps/Route108/scripts.pory"
Route108_MapScripts::
# 30 "data/maps/Route108/scripts.pory"
	.byte 0
# 31 "data/maps/Route108/scripts.pory"

# 32 "data/maps/Route108/scripts.pory"
Route108_EventScript_Jerome::
# 33 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_JEROME, Route108_Text_JeromeIntro, Route108_Text_JeromeDefeated
# 34 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/Route108/scripts.pory"
	end
# 36 "data/maps/Route108/scripts.pory"

# 37 "data/maps/Route108/scripts.pory"
Route108_EventScript_Matthew::
# 38 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated
# 39 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
# 40 "data/maps/Route108/scripts.pory"
	end
# 41 "data/maps/Route108/scripts.pory"

# 42 "data/maps/Route108/scripts.pory"
Route108_EventScript_Tara::
# 43 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_TARA, Route108_Text_TaraIntro, Route108_Text_TaraDefeated
# 44 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/Route108/scripts.pory"
	end
# 46 "data/maps/Route108/scripts.pory"

# 47 "data/maps/Route108/scripts.pory"
Route108_EventScript_Missy::
# 48 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_MISSY, Route108_Text_MissyIntro, Route108_Text_MissyDefeated
# 49 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/Route108/scripts.pory"
	end
# 51 "data/maps/Route108/scripts.pory"

# 52 "data/maps/Route108/scripts.pory"
Route108_EventScript_Cory::
# 53 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_CORY_1, Route108_Text_CoryIntro, Route108_Text_CoryDefeated, Route108_EventScript_CoryRegisterMatchCallAfterBattle
# 54 "data/maps/Route108/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 55 "data/maps/Route108/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route108_EventScript_CoryRematch
# 56 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
# 57 "data/maps/Route108/scripts.pory"
	release
# 58 "data/maps/Route108/scripts.pory"
	end
# 59 "data/maps/Route108/scripts.pory"

# 60 "data/maps/Route108/scripts.pory"
Route108_EventScript_CoryRegisterMatchCallAfterBattle::
# 61 "data/maps/Route108/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 62 "data/maps/Route108/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
# 64 "data/maps/Route108/scripts.pory"
	register_matchcall TRAINER_CORY_1
# 65 "data/maps/Route108/scripts.pory"
	release
# 66 "data/maps/Route108/scripts.pory"
	end
# 67 "data/maps/Route108/scripts.pory"

# 68 "data/maps/Route108/scripts.pory"
Route108_EventScript_CoryRematch::
# 69 "data/maps/Route108/scripts.pory"
	trainerbattle_rematch TRAINER_CORY_1, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
# 70 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route108/scripts.pory"
	end

Route108_EventScript_Carolina_Text_0:
# 3 "data/maps/Route108/scripts.pory"
	.string "You look like a strong trainer. I am a\n"
	.string "strong trainer. I guard the Manectite,\l"
	.string "do you wish to gain access to Mega\l"
	.string "Manectric?$"

Route108_EventScript_Carolina_Text_1:
# 8 "data/maps/Route108/scripts.pory"
	.string "Best of luck in this endeavor!$"

Route108_EventScript_Carolina_Text_2:
# 8 "data/maps/Route108/scripts.pory"
	.string "Congratulations! You can now wield Mega\n"
	.string "Manectric!$"

Route108_EventScript_Carolina_Text_3:
# 9 "data/maps/Route108/scripts.pory"
	.string "Good job!$"

ManectiteGift_Text_0:
# 15 "data/maps/Route108/scripts.pory"
	.string "Here is the Manectite, as promised.$"

ManectiteGift_Text_1:
# 18 "data/maps/Route108/scripts.pory"
	.string "{PLAYER} obtained the Manectite!$"

ManectiteGift_Text_2:
# 21 "data/maps/Route108/scripts.pory"
	.string "I hope your Manectric enjoys the power\n"
	.string "of Mega Evolution!$"
