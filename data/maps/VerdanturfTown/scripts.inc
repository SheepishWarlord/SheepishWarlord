MovePlayertoWally1::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayertoWally1a
	goto VerdanturfTown_EventScript_WallyFight
	return


MovePlayertoWally1a:
	walk_down
	walk_down
	walk_down
	walk_right
	step_end

MovePlayertoWally2::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayertoWally2a
	goto VerdanturfTown_EventScript_WallyFight
	return


MovePlayertoWally2a:
	walk_down
	walk_down
	walk_right
	step_end

MovePlayertoWally3::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayertoWally3a
	goto VerdanturfTown_EventScript_WallyFight
	return


MovePlayertoWally3a:
	walk_right
	walk_right
	step_end

MovePlayertoWally4::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayertoWally4a
	goto VerdanturfTown_EventScript_WallyFight
	return


MovePlayertoWally4a:
	walk_up
	walk_up
	walk_right
	step_end

MovePlayertoWally5::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayertoWally5a
	goto VerdanturfTown_EventScript_WallyFight
	return


MovePlayertoWally5a:
	walk_up
	walk_up
	walk_up
	walk_right
	step_end

VerdanturfTown_EventScript_WallyFight::
	lockall
	applymovement 5, Face_LEFT
	msgbox VerdanturfTown_EventScript_WallyFight_Text_0
	waitmessage
	msgbox VerdanturfTown_EventScript_WallyFight_Text_1
	waitmessage
	msgbox VerdanturfTown_EventScript_WallyFight_Text_2
	waitmessage
	msgbox VerdanturfTown_EventScript_WallyFight_Text_3
	waitmessage
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, Text_Wally_Mauville_Defeated
	msgbox VerdanturfTown_EventScript_WallyFight_Text_4
	waitmessage
	msgbox VerdanturfTown_EventScript_WallyFight_Text_5
	applymovement 5, WallyRunsAway1
	waitmovement 5
	delay 20
	applymovement 5, WallyRunsAway2
	waitmovement 5
	removeobject 5
	setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
	setvar VAR_VERDANTURF_TOWN_STATE, 1
	releaseall
	return


Face_LEFT:
	face_left
	step_end

WallyRunsAway1:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	face_right
	face_right
	face_right
	face_right
	step_end

WallyRunsAway2:
	face_left
	face_left
	face_left
	face_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

.set LOCALID_TWIN, 2

VerdanturfTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
	.byte 0

VerdanturfTown_OnTransition:
	setflag FLAG_VISITED_VERDANTURF_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	end

VerdanturfTown_EventScript_Twin::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_TwinTunnelOpen::
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_Man::
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Camper::
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_BoyTunnelOpen::
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_TownSign::
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_WandasHouseSign::
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_BattleTentSign::
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_RusturfTunnelSign::
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
	end

VerdanturfTown_Text_ManTryingToDigTunnel:
	.string "My papa told me.\p"
	.string "He says this tunnel is full of\n"
	.string "timid POKéMON.\p"
	.string "They get all scared of loud noise and\n"
	.string "make a big uproar.\p"
	.string "So they had to stop the big tunnel\n"
	.string "project.\p"
	.string "But there's one man. He's trying to dig\n"
	.string "the tunnel by himself!$"

VerdanturfTown_Text_ManDugTunnelForLove:
	.string "There was a man who dug a tunnel for\n"
	.string "a lady he loved.\p"
	.string "I don't really get it, but hey!$"

VerdanturfTown_Text_AirCleanHere:
	.string "The way the winds blow, volcanic ash\n"
	.string "is never blown in this direction.\p"
	.string "The air is clean and delicious here.\n"
	.string "Living here should do wonders for even\l"
	.string "frail and sickly people.$"

VerdanturfTown_Text_MakeBattleTentDebut:
	.string "My POKéMON and I, we've been riding\n"
	.string "a hot winning streak.\p"
	.string "So I decided to make my BATTLE TENT\n"
	.string "debut in this town.$"

VerdanturfTown_Text_GuyTryingToBustThroughCave:
	.string "Did you see the cave next to the\n"
	.string "POKéMON MART?\p"
	.string "There's a guy in there who's trying to\n"
	.string "bust up boulders so he can bust out\l"
	.string "through to the other side.\p"
	.string "It'd be great if we could go through…\n"
	.string "It'll make it easy to visit RUSTBORO.$"

VerdanturfTown_Text_EasyToGetToRustboroNow:
	.string "That cave next to the POKéMON MART\n"
	.string "is now a tunnel to the other side.\p"
	.string "It's great--it's easy to go shop for\n"
	.string "new DEVON products in RUSTBORO now.$"

VerdanturfTown_Text_TownSign:
	.string "VERDANTURF TOWN\p"
	.string "“The windswept highlands with the\n"
	.string "sweet fragrance of grass.”$"

VerdanturfTown_Text_WandasHouse:
	.string "WANDA'S HOUSE$"

VerdanturfTown_Text_BattleTentSign:
	.string "BATTLE TENT VERDANTURF SITE\n"
	.string "“Feast Your Eyes on Battles!”$"

VerdanturfTown_Text_RusturfTunnelSign:
	.string "RUSTURF TUNNEL\n"
	.string "“Linking RUSTBORO and VERDANTURF\p"
	.string "“The tunnel project has been\n"
	.string "canceled.”$"

VerdanturfTown_EventScript_WallyFight_Text_0:
	.string "(Wally) Hey, {PLAYER}, how have you\n"
	.string "been? I've been hanging around here,\l"
	.string "training I guess.$"

VerdanturfTown_EventScript_WallyFight_Text_1:
	.string "I dunno, I wanna go out and adventure,\n"
	.string "like you. I've been working up the\l"
	.string "courage to go to Mauville and challenge\l"
	.string "the gym leader there.$"

VerdanturfTown_EventScript_WallyFight_Text_2:
	.string "My uncle says I shouldn't be leaving,\n"
	.string "that it's too dangerous. But... I just\l"
	.string "can't get past the prospect of\l"
	.string "adventure.$"

VerdanturfTown_EventScript_WallyFight_Text_3:
	.string "I guess I just need a push to leave.\n"
	.string "Would you battle me? I want to feel the\l"
	.string "thrill of battle, even just once.$"

VerdanturfTown_EventScript_WallyFight_Text_4:
	.string "huh... I won't lie to you, I expected to\n"
	.string "win. I've been training so hard, and yet\l"
	.string "it still wasn't enough...$"

VerdanturfTown_EventScript_WallyFight_Text_5:
	.string "I think I'll stay in Verdanturf for now...\n"
	.string "thanks, {PLAYER}, at least I know you\l"
	.string "weren't holding back.$"

Text_Wally_Mauville_Defeated::
	.string "...$"
