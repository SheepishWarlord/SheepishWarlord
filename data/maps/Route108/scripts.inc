Route108_EventScript_Carolina::
	lock
	msgbox Route108_EventScript_Carolina_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route108_EventScript_Carolina_2
	trainerbattle_single TRAINER_CAROLINA, Route108_EventScript_Carolina_Text_1, Route108_EventScript_Carolina_Text_2, ManectiteGift
	msgbox Route108_EventScript_Carolina_Text_3
	release
	end

Route108_EventScript_Carolina_2:
	release
	end


ManectiteGift::
	msgbox ManectiteGift_Text_0
	giveitem ITEM_MANECTITE
	playfanfare MUS_OBTAIN_ITEM
	msgbox ManectiteGift_Text_1
	waitmessage
	waitfanfare
	msgbox ManectiteGift_Text_2
	waitmessage
	release
	end


Route108_MapScripts::
	.byte 0

Route108_EventScript_Jerome::
	trainerbattle_single TRAINER_JEROME, Route108_Text_JeromeIntro, Route108_Text_JeromeDefeated
	msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Matthew::
	trainerbattle_single TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Tara::
	trainerbattle_single TRAINER_TARA, Route108_Text_TaraIntro, Route108_Text_TaraDefeated
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Missy::
	trainerbattle_single TRAINER_MISSY, Route108_Text_MissyIntro, Route108_Text_MissyDefeated
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Cory::
	trainerbattle_single TRAINER_CORY_1, Route108_Text_CoryIntro, Route108_Text_CoryDefeated, Route108_EventScript_CoryRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route108_EventScript_CoryRematch
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
	release
	end

Route108_EventScript_CoryRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CORY_1
	release
	end

Route108_EventScript_CoryRematch::
	trainerbattle_rematch TRAINER_CORY_1, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Carolina_Text_0:
	.string "You look like a strong trainer. I am a\n"
	.string "strong trainer. I guard the Manectite,\l"
	.string "do you wish to gain access to Mega\l"
	.string "Manectric?$"

Route108_EventScript_Carolina_Text_1:
	.string "Best of luck in this endeavor!$"

Route108_EventScript_Carolina_Text_2:
	.string "Congratulations! You can now wield Mega\n"
	.string "Manectric!$"

Route108_EventScript_Carolina_Text_3:
	.string "Good job!$"

ManectiteGift_Text_0:
	.string "Here is the Manectite, as promised.$"

ManectiteGift_Text_1:
	.string "{PLAYER} obtained the Manectite!$"

ManectiteGift_Text_2:
	.string "I hope your Manectric enjoys the power\n"
	.string "of Mega Evolution!$"
