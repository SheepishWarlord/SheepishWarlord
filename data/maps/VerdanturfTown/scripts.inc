MovePlayertoWally1::
# 2 "data/maps/VerdanturfTown/scripts.pory"
	lockall
# 3 "data/maps/VerdanturfTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayertoWally1a
# 4 "data/maps/VerdanturfTown/scripts.pory"
	goto VerdanturfTown_EventScript_WallyFight
	return


# 7 "data/maps/VerdanturfTown/scripts.pory"
MovePlayertoWally1a:
# 8 "data/maps/VerdanturfTown/scripts.pory"
	walk_down
# 8 "data/maps/VerdanturfTown/scripts.pory"
	walk_down
# 8 "data/maps/VerdanturfTown/scripts.pory"
	walk_down
# 9 "data/maps/VerdanturfTown/scripts.pory"
	walk_right
	step_end

MovePlayertoWally2::
# 13 "data/maps/VerdanturfTown/scripts.pory"
	lockall
# 14 "data/maps/VerdanturfTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayertoWally2a
# 15 "data/maps/VerdanturfTown/scripts.pory"
	goto VerdanturfTown_EventScript_WallyFight
	return


# 18 "data/maps/VerdanturfTown/scripts.pory"
MovePlayertoWally2a:
# 19 "data/maps/VerdanturfTown/scripts.pory"
	walk_down
# 19 "data/maps/VerdanturfTown/scripts.pory"
	walk_down
# 20 "data/maps/VerdanturfTown/scripts.pory"
	walk_right
	step_end

MovePlayertoWally3::
# 24 "data/maps/VerdanturfTown/scripts.pory"
	lockall
# 25 "data/maps/VerdanturfTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayertoWally3a
# 26 "data/maps/VerdanturfTown/scripts.pory"
	goto VerdanturfTown_EventScript_WallyFight
	return


# 29 "data/maps/VerdanturfTown/scripts.pory"
MovePlayertoWally3a:
# 30 "data/maps/VerdanturfTown/scripts.pory"
	walk_right
# 30 "data/maps/VerdanturfTown/scripts.pory"
	walk_right
	step_end

MovePlayertoWally4::
# 34 "data/maps/VerdanturfTown/scripts.pory"
	lockall
# 35 "data/maps/VerdanturfTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayertoWally4a
# 36 "data/maps/VerdanturfTown/scripts.pory"
	goto VerdanturfTown_EventScript_WallyFight
	return


# 39 "data/maps/VerdanturfTown/scripts.pory"
MovePlayertoWally4a:
# 40 "data/maps/VerdanturfTown/scripts.pory"
	walk_up
# 40 "data/maps/VerdanturfTown/scripts.pory"
	walk_up
# 41 "data/maps/VerdanturfTown/scripts.pory"
	walk_right
	step_end

MovePlayertoWally5::
# 45 "data/maps/VerdanturfTown/scripts.pory"
	lockall
# 46 "data/maps/VerdanturfTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayertoWally5a
# 47 "data/maps/VerdanturfTown/scripts.pory"
	goto VerdanturfTown_EventScript_WallyFight
	return


# 50 "data/maps/VerdanturfTown/scripts.pory"
MovePlayertoWally5a:
# 51 "data/maps/VerdanturfTown/scripts.pory"
	walk_up
# 51 "data/maps/VerdanturfTown/scripts.pory"
	walk_up
# 51 "data/maps/VerdanturfTown/scripts.pory"
	walk_up
# 52 "data/maps/VerdanturfTown/scripts.pory"
	walk_right
	step_end

VerdanturfTown_EventScript_WallyFight::
# 57 "data/maps/VerdanturfTown/scripts.pory"
	lockall
# 58 "data/maps/VerdanturfTown/scripts.pory"
	applymovement 5, Face_LEFT
# 59 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_WallyFight_Text_0
# 60 "data/maps/VerdanturfTown/scripts.pory"
	waitmessage
# 61 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_WallyFight_Text_1
# 62 "data/maps/VerdanturfTown/scripts.pory"
	waitmessage
# 63 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_WallyFight_Text_2
# 64 "data/maps/VerdanturfTown/scripts.pory"
	waitmessage
# 65 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_WallyFight_Text_3
# 66 "data/maps/VerdanturfTown/scripts.pory"
	waitmessage
# 67 "data/maps/VerdanturfTown/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, Text_Wally_Mauville_Defeated
# 68 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_WallyFight_Text_4
# 69 "data/maps/VerdanturfTown/scripts.pory"
	waitmessage
# 70 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_WallyFight_Text_5
# 71 "data/maps/VerdanturfTown/scripts.pory"
	applymovement 5, WallyRunsAway1
# 72 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 5
# 73 "data/maps/VerdanturfTown/scripts.pory"
	delay 20
# 74 "data/maps/VerdanturfTown/scripts.pory"
	applymovement 5, WallyRunsAway2
# 75 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 5
# 76 "data/maps/VerdanturfTown/scripts.pory"
	removeobject 5
# 77 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
# 78 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_VERDANTURF_TOWN_STATE, 1
# 79 "data/maps/VerdanturfTown/scripts.pory"
	releaseall
	return


# 86 "data/maps/VerdanturfTown/scripts.pory"
Face_LEFT:
# 87 "data/maps/VerdanturfTown/scripts.pory"
	face_left
	step_end

# 90 "data/maps/VerdanturfTown/scripts.pory"
WallyRunsAway1:
# 91 "data/maps/VerdanturfTown/scripts.pory"
	walk_up
# 92 "data/maps/VerdanturfTown/scripts.pory"
	walk_left
# 92 "data/maps/VerdanturfTown/scripts.pory"
	walk_left
# 92 "data/maps/VerdanturfTown/scripts.pory"
	walk_left
# 92 "data/maps/VerdanturfTown/scripts.pory"
	walk_left
# 93 "data/maps/VerdanturfTown/scripts.pory"
	face_right
# 93 "data/maps/VerdanturfTown/scripts.pory"
	face_right
# 93 "data/maps/VerdanturfTown/scripts.pory"
	face_right
# 93 "data/maps/VerdanturfTown/scripts.pory"
	face_right
	step_end

# 96 "data/maps/VerdanturfTown/scripts.pory"
WallyRunsAway2:
# 97 "data/maps/VerdanturfTown/scripts.pory"
	face_left
# 97 "data/maps/VerdanturfTown/scripts.pory"
	face_left
# 97 "data/maps/VerdanturfTown/scripts.pory"
	face_left
# 97 "data/maps/VerdanturfTown/scripts.pory"
	face_left
# 98 "data/maps/VerdanturfTown/scripts.pory"
	walk_fast_left
# 98 "data/maps/VerdanturfTown/scripts.pory"
	walk_fast_left
# 98 "data/maps/VerdanturfTown/scripts.pory"
	walk_fast_left
# 98 "data/maps/VerdanturfTown/scripts.pory"
	walk_fast_left
# 98 "data/maps/VerdanturfTown/scripts.pory"
	walk_fast_left
# 98 "data/maps/VerdanturfTown/scripts.pory"
	walk_fast_left
# 98 "data/maps/VerdanturfTown/scripts.pory"
	walk_fast_left
# 98 "data/maps/VerdanturfTown/scripts.pory"
	walk_fast_left
# 98 "data/maps/VerdanturfTown/scripts.pory"
	walk_fast_left
# 98 "data/maps/VerdanturfTown/scripts.pory"
	walk_fast_left
	step_end

# 103 "data/maps/VerdanturfTown/scripts.pory"

# 104 "data/maps/VerdanturfTown/scripts.pory"
.set LOCALID_TWIN, 2
# 105 "data/maps/VerdanturfTown/scripts.pory"

# 106 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_MapScripts::
# 107 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
# 108 "data/maps/VerdanturfTown/scripts.pory"
	.byte 0
# 109 "data/maps/VerdanturfTown/scripts.pory"

# 110 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnTransition:
# 111 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 112 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 113 "data/maps/VerdanturfTown/scripts.pory"
	end
# 114 "data/maps/VerdanturfTown/scripts.pory"

# 115 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Twin::
# 116 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 117 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 118 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
# 119 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
# 120 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 121 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 122 "data/maps/VerdanturfTown/scripts.pory"
	release
# 123 "data/maps/VerdanturfTown/scripts.pory"
	end
# 124 "data/maps/VerdanturfTown/scripts.pory"

# 125 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TwinTunnelOpen::
# 126 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
# 127 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 128 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 129 "data/maps/VerdanturfTown/scripts.pory"
	release
# 130 "data/maps/VerdanturfTown/scripts.pory"
	end
# 131 "data/maps/VerdanturfTown/scripts.pory"

# 132 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Man::
# 133 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
# 134 "data/maps/VerdanturfTown/scripts.pory"
	end
# 135 "data/maps/VerdanturfTown/scripts.pory"

# 136 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Camper::
# 137 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
# 138 "data/maps/VerdanturfTown/scripts.pory"
	end
# 139 "data/maps/VerdanturfTown/scripts.pory"

# 140 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Boy::
# 141 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 142 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 143 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
# 144 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
# 145 "data/maps/VerdanturfTown/scripts.pory"
	release
# 146 "data/maps/VerdanturfTown/scripts.pory"
	end
# 147 "data/maps/VerdanturfTown/scripts.pory"

# 148 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BoyTunnelOpen::
# 149 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
# 150 "data/maps/VerdanturfTown/scripts.pory"
	release
# 151 "data/maps/VerdanturfTown/scripts.pory"
	end
# 152 "data/maps/VerdanturfTown/scripts.pory"

# 153 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TownSign::
# 154 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
# 155 "data/maps/VerdanturfTown/scripts.pory"
	end
# 156 "data/maps/VerdanturfTown/scripts.pory"

# 157 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WandasHouseSign::
# 158 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
# 159 "data/maps/VerdanturfTown/scripts.pory"
	end
# 160 "data/maps/VerdanturfTown/scripts.pory"

# 161 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BattleTentSign::
# 162 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
# 163 "data/maps/VerdanturfTown/scripts.pory"
	end
# 164 "data/maps/VerdanturfTown/scripts.pory"

# 165 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_RusturfTunnelSign::
# 166 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
# 167 "data/maps/VerdanturfTown/scripts.pory"
	end
# 168 "data/maps/VerdanturfTown/scripts.pory"

# 169 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManTryingToDigTunnel:
# 170 "data/maps/VerdanturfTown/scripts.pory"
	.string "My papa told me.\p"
# 171 "data/maps/VerdanturfTown/scripts.pory"
	.string "He says this tunnel is full of\n"
# 172 "data/maps/VerdanturfTown/scripts.pory"
	.string "timid POKéMON.\p"
# 173 "data/maps/VerdanturfTown/scripts.pory"
	.string "They get all scared of loud noise and\n"
# 174 "data/maps/VerdanturfTown/scripts.pory"
	.string "make a big uproar.\p"
# 175 "data/maps/VerdanturfTown/scripts.pory"
	.string "So they had to stop the big tunnel\n"
# 176 "data/maps/VerdanturfTown/scripts.pory"
	.string "project.\p"
# 177 "data/maps/VerdanturfTown/scripts.pory"
	.string "But there's one man. He's trying to dig\n"
# 178 "data/maps/VerdanturfTown/scripts.pory"
	.string "the tunnel by himself!$"
# 179 "data/maps/VerdanturfTown/scripts.pory"

# 180 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManDugTunnelForLove:
# 181 "data/maps/VerdanturfTown/scripts.pory"
	.string "There was a man who dug a tunnel for\n"
# 182 "data/maps/VerdanturfTown/scripts.pory"
	.string "a lady he loved.\p"
# 183 "data/maps/VerdanturfTown/scripts.pory"
	.string "I don't really get it, but hey!$"
# 184 "data/maps/VerdanturfTown/scripts.pory"

# 185 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_AirCleanHere:
# 186 "data/maps/VerdanturfTown/scripts.pory"
	.string "The way the winds blow, volcanic ash\n"
# 187 "data/maps/VerdanturfTown/scripts.pory"
	.string "is never blown in this direction.\p"
# 188 "data/maps/VerdanturfTown/scripts.pory"
	.string "The air is clean and delicious here.\n"
# 189 "data/maps/VerdanturfTown/scripts.pory"
	.string "Living here should do wonders for even\l"
# 190 "data/maps/VerdanturfTown/scripts.pory"
	.string "frail and sickly people.$"
# 191 "data/maps/VerdanturfTown/scripts.pory"

# 192 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_MakeBattleTentDebut:
# 193 "data/maps/VerdanturfTown/scripts.pory"
	.string "My POKéMON and I, we've been riding\n"
# 194 "data/maps/VerdanturfTown/scripts.pory"
	.string "a hot winning streak.\p"
# 195 "data/maps/VerdanturfTown/scripts.pory"
	.string "So I decided to make my BATTLE TENT\n"
# 196 "data/maps/VerdanturfTown/scripts.pory"
	.string "debut in this town.$"
# 197 "data/maps/VerdanturfTown/scripts.pory"

# 198 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_GuyTryingToBustThroughCave:
# 199 "data/maps/VerdanturfTown/scripts.pory"
	.string "Did you see the cave next to the\n"
# 200 "data/maps/VerdanturfTown/scripts.pory"
	.string "POKéMON MART?\p"
# 201 "data/maps/VerdanturfTown/scripts.pory"
	.string "There's a guy in there who's trying to\n"
# 202 "data/maps/VerdanturfTown/scripts.pory"
	.string "bust up boulders so he can bust out\l"
# 203 "data/maps/VerdanturfTown/scripts.pory"
	.string "through to the other side.\p"
# 204 "data/maps/VerdanturfTown/scripts.pory"
	.string "It'd be great if we could go through…\n"
# 205 "data/maps/VerdanturfTown/scripts.pory"
	.string "It'll make it easy to visit RUSTBORO.$"
# 206 "data/maps/VerdanturfTown/scripts.pory"

# 207 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_EasyToGetToRustboroNow:
# 208 "data/maps/VerdanturfTown/scripts.pory"
	.string "That cave next to the POKéMON MART\n"
# 209 "data/maps/VerdanturfTown/scripts.pory"
	.string "is now a tunnel to the other side.\p"
# 210 "data/maps/VerdanturfTown/scripts.pory"
	.string "It's great--it's easy to go shop for\n"
# 211 "data/maps/VerdanturfTown/scripts.pory"
	.string "new DEVON products in RUSTBORO now.$"
# 212 "data/maps/VerdanturfTown/scripts.pory"

# 213 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_TownSign:
# 214 "data/maps/VerdanturfTown/scripts.pory"
	.string "VERDANTURF TOWN\p"
# 215 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The windswept highlands with the\n"
# 216 "data/maps/VerdanturfTown/scripts.pory"
	.string "sweet fragrance of grass.”$"
# 217 "data/maps/VerdanturfTown/scripts.pory"

# 218 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_WandasHouse:
# 219 "data/maps/VerdanturfTown/scripts.pory"
	.string "WANDA'S HOUSE$"
# 220 "data/maps/VerdanturfTown/scripts.pory"

# 221 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_BattleTentSign:
# 222 "data/maps/VerdanturfTown/scripts.pory"
	.string "BATTLE TENT VERDANTURF SITE\n"
# 223 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Feast Your Eyes on Battles!”$"
# 224 "data/maps/VerdanturfTown/scripts.pory"

# 225 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_RusturfTunnelSign:
# 226 "data/maps/VerdanturfTown/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 227 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 228 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The tunnel project has been\n"
# 229 "data/maps/VerdanturfTown/scripts.pory"
	.string "canceled.”$"

VerdanturfTown_EventScript_WallyFight_Text_0:
# 59 "data/maps/VerdanturfTown/scripts.pory"
	.string "(Wally) Hey, {PLAYER}, how have you\n"
	.string "been? I've been hanging around here,\l"
	.string "training I guess.$"

VerdanturfTown_EventScript_WallyFight_Text_1:
# 61 "data/maps/VerdanturfTown/scripts.pory"
	.string "I dunno, I wanna go out and adventure,\n"
	.string "like you. I've been working up the\l"
	.string "courage to go to Mauville and challenge\l"
	.string "the gym leader there.$"

VerdanturfTown_EventScript_WallyFight_Text_2:
# 63 "data/maps/VerdanturfTown/scripts.pory"
	.string "My uncle says I shouldn't be leaving,\n"
	.string "that it's too dangerous. But... I just\l"
	.string "can't get past the prospect of\l"
	.string "adventure.$"

VerdanturfTown_EventScript_WallyFight_Text_3:
# 65 "data/maps/VerdanturfTown/scripts.pory"
	.string "I guess I just need a push to leave.\n"
	.string "Would you battle me? I want to feel the\l"
	.string "thrill of battle, even just once.$"

VerdanturfTown_EventScript_WallyFight_Text_4:
# 68 "data/maps/VerdanturfTown/scripts.pory"
	.string "huh... I won't lie to you, I expected to\n"
	.string "win. I've been training so hard, and yet\l"
	.string "it still wasn't enough...$"

VerdanturfTown_EventScript_WallyFight_Text_5:
# 70 "data/maps/VerdanturfTown/scripts.pory"
	.string "I think I'll stay in Verdanturf for now...\n"
	.string "thanks, {PLAYER}, at least I know you\l"
	.string "weren't holding back.$"

Text_Wally_Mauville_Defeated::
# 82 "data/maps/VerdanturfTown/scripts.pory"
	.string "...$"
