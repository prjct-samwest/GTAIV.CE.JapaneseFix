FnBegin 0 3
PushF 86
PushD 0
LocalVar
RefSet
PushF 274
PushD 1
LocalVar
RefSet
PushF 0.454
PushD 7
LocalVar
RefSet
PushF 0.044
PushD 8
LocalVar
RefSet
PushF 0.244
PushD 9
LocalVar
RefSet
PushF 0.074
PushD 10
LocalVar
RefSet
PushF 0.066
PushD 11
LocalVar
RefSet
PushF 0.094
PushD 12
LocalVar
RefSet
PushF 0.064
PushD 13
LocalVar
RefSet
PushF 0.093
PushD 14
LocalVar
RefSet
PushF 0.292
PushD 15
LocalVar
RefSet
PushF 0.289
PushD 16
LocalVar
RefSet
PushD 1
PushD 17
LocalVar
RefSet
PushD 1
PushD 21
LocalVar
RefSet
PushD 0
PushD 22
LocalVar
RefSet
PushString "ABILITY_STATS - script started...\n"
CallNative PRINTSTRING 1 0
PushF 0
PushD 23
LocalVar
RefSet
PushD 1
PushD 17
LocalVar
RefSet
PushD 0
PushD 25
LocalVar
RefSet
PushD 21
LocalVar
RefGet
JumpFalse @Label1
PushString "hud"
CallNative GET_TXD 1 1
PushD 26
LocalVar
RefSet
PushD 26
LocalVar
RefGet
PushString "grime"
CallNative GET_TEXTURE 2 1
PushD 27
LocalVar
RefSet

:Label1
Push 0x98BF
GlobalVar
RefGet
JumpFalse @Label2
Jump @Label3

:Label7
FnBegin 0 4
Var3
CallNative GET_GAME_TIMER 1 0
Var3
RefGet
PushS 11140
GlobalVar
RefGet
Sub
PushS 20000
CmpGt
JumpFalse @Label4
PushD 0
Var2
RefSet

:Label6
Var2
RefGet
PushD 2
CmpLt
JumpFalse @Label4
PushF 0
Var2
RefGet
PushD 1
PushS 11165
GlobalVar
ArrayRef
RefSet
PushF 0
Var2
RefGet
PushD 1
PushS 11168
GlobalVar
ArrayRef
RefSet
PushF 0
Var2
RefGet
PushD 1
PushS 11171
GlobalVar
ArrayRef
RefSet
PushF 0
Var2
RefGet
PushD 1
PushS 11174
GlobalVar
ArrayRef
RefSet
PushF 0
Var2
RefGet
PushD 1
PushS 11177
GlobalVar
ArrayRef
RefSet
Push 0x98BF
GlobalVar
RefGet
IsZero
JumpFalse @Label5
PushF 0
Var2
RefGet
PushD 1
PushS 11180
GlobalVar
ArrayRef
RefSet

:Label5
Var2
RefGet
PushD 1
Add
Var2
RefSet
Jump @Label6

:Label4
PushD 0
CallNative WAIT 1 0
PushString "ABILITY_STATS - script terminated. \n"
CallNative PRINTSTRING 1 0
PushD 0
PushS 11115
GlobalVar
RefSet
CallNative TERMINATE_THIS_SCRIPT 0 0
FnEnd 0 0

:Label3
Call @Label7

:Label2
PushS 11109
GlobalVar
RefGet
JumpFalse @Label8
PushS 11103
GlobalVar
RefGet
IsZero
JumpFalse @Label9
PushD 1
PushD 25
LocalVar
RefSet
PushD 1
PushS 11103
GlobalVar
RefSet
PushD 1
PushD 20
LocalVar
RefSet

:Label9
PushD 0
PushD 24
LocalVar
RefSet
Jump @Label10

:Label8
PushS 11110
GlobalVar
RefGet
JumpFalse @Label11
PushS 11104
GlobalVar
RefGet
IsZero
JumpFalse @Label12
PushD 1
PushS 11104
GlobalVar
RefSet

:Label12
PushD 0
PushD 24
LocalVar
RefSet
Jump @Label10

:Label11
PushS 11111
GlobalVar
RefGet
JumpFalse @Label13
PushS 11105
GlobalVar
RefGet
IsZero
JumpFalse @Label14
PushD 1
PushS 11105
GlobalVar
RefSet

:Label14
PushF 9999.9
PushD 23
LocalVar
RefSet
PushD 0
PushD 24
LocalVar
RefSet
Jump @Label10

:Label13
PushD 1
PushD 18
LocalVar
RefSet
PushD 1
PushD 20
LocalVar
RefSet
PushD 1
PushD 24
LocalVar
RefSet

:Label10
PushD 1
JumpFalse @Label15
PushD 0
PushS 11115
GlobalVar
RefSet
Push 0x98BF
GlobalVar
RefGet
IsZero
JumpFalse @Label16
Jump @Label17

:Label18
FnBegin 0 2
CallNative GET_PLAYER_ID 0 1
CallNative CONVERT_INT_TO_PLAYERINDEX 1 1
FnEnd 0 1

:Label17
Call @Label18
CallNative IS_PLAYER_PLAYING 1 1
JumpFalse @Label19
CallNative IS_MINIGAME_IN_PROGRESS 0 1
IsZero
Jump @Label20

:Label28
FnBegin 0 2
Call @Label18
CallNative IS_PLAYER_CONTROL_ON 1 1
IsZero
JumpFalse @Label21
CallNative ARE_WIDESCREEN_BORDERS_ACTIVE 0 1
Jump @Label22

:Label24
FnBegin 0 2
PushD 6
PushD 1
PushD 1
CallNative COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE 3 1
PushD 0
CmpGt
JumpFalse @Label23
PushD 1
FnEnd 0 1

:Label23
PushD 0
FnEnd 0 1

:Label22
Call @Label24
And
JumpFalse @Label25
PushD 1
FnEnd 0 1

:Label25
CallNative HAS_CUTSCENE_LOADED 0 1
JumpFalse @Label26
CallNative HAS_CUTSCENE_FINISHED 0 1
IsZero
JumpFalse @Label26
PushD 1
FnEnd 0 1

:Label26
CallNative IS_SCREEN_FADED_OUT 0 1
JumpFalse @Label21
PushD 1
FnEnd 0 1

:Label21
CallNative PLAYER_IS_INTERACTING_WITH_GARAGE 0 1
JumpFalse @Label27
PushD 1
FnEnd 0 1

:Label27
PushD 0
FnEnd 0 1

:Label20
Call @Label28
IsZero
And
PushS 10974
GlobalVar
PushD 0
Add
RefGet
IsZero
And
CallNative IS_AUTO_SAVE_IN_PROGRESS 0 1
IsZero
And
JumpFalse @Label19
Var2
CallNative GET_FRAME_TIME 1 0
Var2
RefGet
PushF 1000
MulF
Var2
RefSet
PushD 23
LocalVar
RefGet
Var2
RefGet
AddF
PushD 23
LocalVar
RefSet
PushD 24
LocalVar
RefGet
Switch 0:@Label29 1:@Label30
Jump @Label19

:Label29
PushD 7
CallNative IS_FONT_LOADED 1 1
IsZero
JumpFalse @Label31
PushD 7
CallNative LOAD_TEXT_FONT 1 0
Jump @Label32

:Label31
Push 0x9765
GlobalVar
RefGet
IsZero
JumpFalse @Label32
PushS 11109
GlobalVar
RefGet
PushS 11094
GlobalVar
RefGet
Or
JumpFalse @Label33
PushD 23
LocalVar
RefGet
PushF 3000
CmpGtF
JumpFalse @Label34
Jump @Label35

:Label43
FnBegin 0 2
CallNative IS_MESSAGE_BEING_DISPLAYED 0 1
Jump @Label36

:Label38
FnBegin 0 2
PushS 94
GlobalVar
PushD 0
Add
RefGet
PushS 1007
CmpEq
PushS 94
GlobalVar
PushD 0
Add
RefGet
PushS 1008
CmpEq
Or
JumpFalse @Label37
PushD 1
FnEnd 0 1

:Label37
PushD 0
FnEnd 0 1

:Label36
Call @Label38
Or
Jump @Label39

:Label41
FnBegin 0 2
PushS 558
GlobalVar
RefGet
PushD 9
CmpEq
JumpFalse @Label40
PushD 0
FnEnd 0 1

:Label40
PushD 1
FnEnd 0 1

:Label39
Call @Label41
Or
CallNative IS_HELP_MESSAGE_BEING_DISPLAYED 0 1
Or
JumpFalse @Label42
PushD 1
FnEnd 0 1

:Label42
PushD 0
FnEnd 0 1

:Label35
Call @Label43
IsZero
JumpFalse @Label34
PushF 0
PushD 23
LocalVar
RefSet
PushD 1
PushD 24
LocalVar
RefSet

:Label34
Jump @Label32

:Label33
PushS 11110
GlobalVar
RefGet
PushS 11111
GlobalVar
RefGet
Or
JumpFalse @Label44
PushD 23
LocalVar
RefGet
PushF 500
CmpGtF
JumpFalse @Label45
Call @Label43
IsZero
JumpFalse @Label45
PushF 0
PushD 23
LocalVar
RefSet
PushD 1
PushD 24
LocalVar
RefSet

:Label45
Jump @Label32

:Label44
Call @Label43
IsZero
JumpFalse @Label32
PushF 0
PushD 23
LocalVar
RefSet
PushD 1
PushD 24
LocalVar
RefSet

:Label32
Jump @Label19

:Label30
PushD 7
CallNative IS_FONT_LOADED 1 1
IsZero
JumpFalse @Label46
PushD 7
CallNative LOAD_TEXT_FONT 1 0
Jump @Label47

:Label46
Call @Label43
IsZero
JumpFalse @Label48
PushD 25
LocalVar
RefGet
Switch 0:@Label49 1:@Label50 2:@Label51 3:@Label52 4:@Label53 63:@Label54
Jump @Label48

:Label49
Jump @Label48

:Label50
PushString "BB_STAT_H1"
CallNative PRINT_HELP 1 0
PushS 99
PushD 25
LocalVar
RefSet
Jump @Label48

:Label51
PushD 0
PushD 25
LocalVar
RefSet
Jump @Label48

:Label52
PushD 0
PushD 25
LocalVar
RefSet
Jump @Label48

:Label53
PushD 0
PushD 25
LocalVar
RefSet
Jump @Label48

:Label54
PushD 0
PushD 25
LocalVar
RefSet
Jump @Label48

:Label48
PushD 17
LocalVar
RefGet
JumpFalse @Label55
PushD 25
LocalVar
RefGet
PushD 0
CmpEq
IsZero
JumpFalse @Label56
PushF 0
PushD 23
LocalVar
RefSet

:Label56
PushD 23
LocalVar
RefGet
PushF 7000
CmpLtF
PushD 19
LocalVar
RefGet
Or
JumpFalse @Label57
PushD 25
LocalVar
RefGet
PushD 0
CmpEq
JumpFalse @Label58
CallNative IS_SCREEN_FADING 0 1
IsZero
Push 0x9765
GlobalVar
RefGet
IsZero
And
JumpFalse @Label58
PushD 20
LocalVar
RefGet
JumpFalse @Label59
Jump @Label60

:Label148
FnBegin 0 17
PushF 0
PushD 8
Var
RefSet
CallNative GET_CURRENT_LANGUAGE 0 1
PushD 16
Var
RefSet
PushD 16
Var
RefGet
Switch 0:@Label61 6:@Label62 3:@Label62 1:@Label63 2:@Label64 4:@Label65 5:@Label66
Jump @Label67

:Label61
Jump @Label68

:Label70
FnBegin 0 2
CallNative GET_IS_HIDEF 0 1
CallNative GET_IS_WIDESCREEN 0 1
Or
JumpFalse @Label69
PushD 15
LocalVar
RefGet
FnEnd 0 1

:Label69
PushD 16
LocalVar
RefGet
FnEnd 0 1

:Label68
Call @Label70
PushD 12
Var
RefSet
PushF 0.137
PushD 13
Var
RefSet
PushF 0.21
PushD 14
Var
RefSet
PushF 0.145
PushD 15
Var
RefSet
Jump @Label67

:Label62
PushF 0.357
PushD 12
Var
RefSet
PushF 0.145
PushD 13
Var
RefSet
PushF 0.246
PushD 14
Var
RefSet
PushF 0.203
PushD 15
Var
RefSet
Jump @Label67

:Label63
PushF 0.325
PushD 12
Var
RefSet
PushF 0.168
PushD 13
Var
RefSet
PushF 0.242
PushD 14
Var
RefSet
PushF 0.145
PushD 15
Var
RefSet
Jump @Label67

:Label64
PushF 0.301
PushD 12
Var
RefSet
PushF 0.145
PushD 13
Var
RefSet
PushF 0.218
PushD 14
Var
RefSet
PushF 0.145
PushD 15
Var
RefSet
Jump @Label67

:Label65
PushF 0.358
PushD 12
Var
RefSet
PushF 0.137
PushD 13
Var
RefSet
PushF 0.242
PushD 14
Var
RefSet
PushF 0.207
PushD 15
Var
RefSet
Jump @Label67

:Label66
PushF 0.372
PushD 12
Var
RefSet
PushF 0.208
PushD 13
Var
RefSet
PushF 0.28
PushD 14
Var
RefSet
PushF 0.145
PushD 15
Var
RefSet
Jump @Label67

:Label67
Jump @Label71

:Label76
FnBegin 0 2
CallNative GET_IS_HIDEF 0 1
Jump @Label72

:Label74
FnBegin 0 4
CallNative IS_HELP_MESSAGE_BEING_DISPLAYED 0 1
JumpFalse @Label73
Var2
Var3
CallNative GET_HELP_MESSAGE_BOX_SIZE 2 0
Var3
RefGet
PushF 0
CmpGtF
JumpFalse @Label73
PushD 1
FnEnd 0 1

:Label73
PushD 0
FnEnd 0 1

:Label72
Call @Label74
Or
JumpFalse @Label75
PushD 13
LocalVar
RefGet
FnEnd 0 1

:Label75
PushD 14
LocalVar
RefGet
FnEnd 0 1

:Label71
Call @Label76
PushD 10
Var
RefSet
PushD 10
Var
RefGet
Jump @Label77

:Label79
FnBegin 0 4
Call @Label74
JumpFalse @Label78
Var2
Var3
CallNative GET_HELP_MESSAGE_BOX_SIZE 2 0
Var3
RefGet
PushF 0.013
PushF 3
MulF
SubF
Var3
RefSet
Var3
RefGet
FnEnd 0 1

:Label78
PushF 0
FnEnd 0 1

:Label77
Call @Label79
AddF
PushD 10
Var
RefSet
PushD 2
CallNative SET_WIDESCREEN_FORMAT 1 0
PushD 0
PushD 1
PushS 11129
GlobalVar
ArrayRef
RefGet
IsZero
PushD 1
PushD 1
PushS 11129
GlobalVar
ArrayRef
RefGet
IsZero
Or
JumpFalse @Label80
PushF 0.256
PushD 7
LocalVar
RefSet
PushD 1
PushD 11
Var
RefSet

:Label80
PushD 1
CallNative SET_SPRITES_DRAW_BEFORE_FADE 1 0
Var6
Var7
CallNative GET_TIME_OF_DAY 2 0
Var6
RefGet
PushD 6
CmpGe
Var6
RefGet
PushD 20
CmpLe
And
JumpFalse @Label81
PushD 21
LocalVar
RefGet
IsZero
JumpFalse @Label82
PushD 22
LocalVar
RefGet
IsZero
JumpFalse @Label83
Jump @Label84

:Label87
FnBegin 0 2
CallNative GET_IS_HIDEF 0 1
JumpFalse @Label85
PushD 11
LocalVar
RefGet
FnEnd 0 1

:Label85
CallNative GET_IS_WIDESCREEN 0 1
JumpFalse @Label86
PushD 12
LocalVar
RefGet
PushF 0.002
SubF
FnEnd 0 1

:Label86
PushD 12
LocalVar
RefGet
FnEnd 0 1

:Label84
Call @Label87
Call @Label70
PushF 0.5
MulF
AddF
PushD 10
Var
RefGet
PushF 0.013
SubF
PushD 7
LocalVar
RefGet
PushF 0.5
MulF
AddF
PushD 12
Var
RefGet
PushD 7
LocalVar
RefGet
PushD 0
PushD 0
PushD 0
PushS 115
CallNative DRAW_RECT 8 0
Jump @Label88

:Label83
Call @Label87
PushD 10
Var
RefGet
PushF 0.013
SubF
PushD 12
Var
RefGet
PushD 7
LocalVar
RefGet
PushS 115
CallNative DRAW_CURVED_WINDOW 5 0

:Label88
Jump @Label81

:Label82
PushD 11
Var
RefGet
IsZero
JumpFalse @Label89
PushD 27
LocalVar
RefGet
Call @Label87
PushD 12
Var
RefGet
PushF 0.5
MulF
AddF
PushD 10
Var
RefGet
PushF 0.013
SubF
PushD 7
LocalVar
RefGet
PushF 0.5
MulF
PushF 0.5
MulF
AddF
PushD 12
Var
RefGet
PushD 7
LocalVar
RefGet
PushF 0.5
MulF
PushF 0
PushD 0
PushD 0
PushD 0
PushS 128
CallNative DRAW_SPRITE 10 0
PushD 27
LocalVar
RefGet
Call @Label87
PushD 12
Var
RefGet
PushF 0.5
MulF
AddF
PushD 10
Var
RefGet
PushF 0.013
SubF
PushD 7
LocalVar
RefGet
PushF 0.5
MulF
PushF 1.5
MulF
AddF
PushD 12
Var
RefGet
PushD 7
LocalVar
RefGet
PushF 0.5
MulF
PushF 0
PushD 0
PushD 0
PushD 0
PushS 128
CallNative DRAW_SPRITE 10 0
Jump @Label81

:Label89
PushD 27
LocalVar
RefGet
Call @Label87
PushD 12
Var
RefGet
PushF 0.5
MulF
AddF
PushD 10
Var
RefGet
PushF 0.013
SubF
PushD 7
LocalVar
RefGet
PushF 0.5
MulF
AddF
PushD 12
Var
RefGet
PushD 7
LocalVar
RefGet
PushF 0
PushD 0
PushD 0
PushD 0
PushS 128
CallNative DRAW_SPRITE 10 0

:Label81
PushD 0
CallNative SET_SPRITES_DRAW_BEFORE_FADE 1 0
Jump @Label90

:Label91
FnBegin 0 2
PushD 1
CallNative SET_TEXT_DRAW_BEFORE_FADE 1 0
PushD 1
CallNative SET_TEXT_PROPORTIONAL 1 0
PushF 0
PushF 1
CallNative SET_TEXT_WRAP 2 0
PushD 1
CallNative SET_TEXT_JUSTIFY 1 0
PushD 0
CallNative SET_TEXT_CENTRE 1 0
PushD 0
CallNative SET_TEXT_RIGHT_JUSTIFY 1 0
PushD 0
CallNative SET_TEXT_BACKGROUND 1 0
PushD 0
PushD 0
PushD 0
PushD 0
PushS 128
CallNative SET_TEXT_DROPSHADOW 5 0
PushD 1
PushD 0
PushD 0
PushD 0
PushS 128
CallNative SET_TEXT_EDGE 5 0
PushD 0
CallNative SET_TEXT_FONT 1 0
CallNative IS_JAPANESE_VERSION 0 1
JumpFalse @Label91_01
PushD 2
CallNative SET_TEXT_FONT 1 0
Jump @Label91_02
:Label91_01

:Label91_02
FnEnd 0 0

:Label90
Call @Label91
CallNative IS_JAPANESE_VERSION 0 1
IsZero
JumpFalse @Label90_01
PushD 7
CallNative SET_TEXT_FONT 1 0
:Label90_01
PushD 1
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.284
PushF 0.455
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushF -0.004
AddF
PushString "BB_TITLE_01"
CallNative DISPLAY_TEXT 3 0
PushD 1
CallNative SET_SPRITES_DRAW_BEFORE_FADE 1 0
PushD 1
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Call @Label87
PushD 12
Var
RefGet
PushF 0.5
MulF
AddF
PushD 10
Var
RefGet
PushF -0.004
AddF
PushF 0.037
AddF
PushD 12
Var
RefGet
PushF 0.01
SubF
PushF 0.01
SubF
PushF 2
PushF 0.0015
MulF
AddF
PushF 0.002
PushF 2
PushF 0.0015
MulF
AddF
PushD 0
PushD 0
PushD 0
PushS 128
CallNative DRAW_RECT 8 0
Call @Label87
PushD 12
Var
RefGet
PushF 0.5
MulF
AddF
PushD 10
Var
RefGet
PushF -0.004
AddF
PushF 0.037
AddF
PushD 12
Var
RefGet
PushF 0.01
SubF
PushF 0.01
SubF
PushF 0.002
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative DRAW_RECT 8 0
PushD 0
CallNative SET_SPRITES_DRAW_BEFORE_FADE 1 0
PushD 0
PushD 1
PushS 11129
GlobalVar
ArrayRef
RefGet
JumpFalse @Label92
Call @Label91
PushD 7
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushD 8
LocalVar
RefGet
AddF
PushString "BB_TITLE_02"
CallNative DISPLAY_TEXT 3 0
Call @Label91
PushD 1
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushD 8
LocalVar
RefGet
AddF
PushF 0.027
PushF 1
MulF
AddF
PushString "BB_MAX_HEALTH"
CallNative DISPLAY_TEXT 3 0
Call @Label87
PushD 14
Var
RefGet
AddF
PushD 10
Var
RefGet
PushD 8
LocalVar
RefGet
AddF
PushF 0.027
PushF 1
MulF
AddF
PushF 0.013
PushD 15
Var
RefGet
PushF 200
PushF 1000
PushD 0
PushD 1
PushS 11144
GlobalVar
ArrayRef
RefGet
PushD 0
PushD 1
PushS 11165
GlobalVar
ArrayRef
RefGet
PushD 0
PushD 0
Jump @Label93

:Label108
FnBegin 10 22
Var4
RefGet
PushF 0
CmpGtF
Var5
RefGet
PushF 0
CmpGtF
And
JumpFalse @Label94
Var4
RefGet
Var5
RefGet
CmpEqF
JumpFalse @Label94
PushF 0
Var4
RefSet
PushF 1
Var5
RefSet
PushF 1
Var6
RefSet
PushF 0
Var7
RefSet

:Label94
PushD 1
CallNative SET_SPRITES_DRAW_BEFORE_FADE 1 0
PushD 2
PushD 16
Var
PushD 17
Var
PushD 18
Var
PushD 19
Var
CallNative GET_HUD_COLOUR 5 0
Var0
RefGet
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
Var3
RefGet
PushF 2
PushF 0.0015
MulF
AddF
Var2
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushD 16
Var
RefGet
PushD 17
Var
RefGet
PushD 18
Var
RefGet
PushS 255
CallNative DRAW_RECT 8 0
PushS 66
PushD 16
Var
PushD 17
Var
PushD 18
Var
PushD 19
Var
CallNative GET_HUD_COLOUR 5 0
Var0
RefGet
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
Var3
RefGet
Var2
RefGet
PushD 16
Var
RefGet
PushD 17
Var
RefGet
PushD 18
Var
RefGet
PushD 19
Var
RefGet
CallNative DRAW_RECT 8 0
PushD 1
PushD 16
Var
PushD 17
Var
PushD 18
Var
PushD 19
Var
CallNative GET_HUD_COLOUR 5 0
Var6
RefGet
Var4
RefGet
SubF
PushD 12
Var
RefSet
PushD 12
Var
RefGet
Var5
RefGet
Var4
RefGet
SubF
DivF
PushD 12
Var
RefSet
Var0
RefGet
Var3
RefGet
PushF 0.5
MulF
SubF
PushD 12
Var
RefGet
Var3
RefGet
MulF
PushF 0.5
MulF
AddF
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
PushD 12
Var
RefGet
Var3
RefGet
MulF
Var2
RefGet
PushD 16
Var
RefGet
PushD 17
Var
RefGet
PushD 18
Var
RefGet
PushD 19
Var
RefGet
CallNative DRAW_RECT 8 0
PushD 7
PushD 16
Var
PushD 17
Var
PushD 18
Var
PushD 19
Var
CallNative GET_HUD_COLOUR 5 0
Var7
RefGet
Var6
RefGet
Var4
RefGet
SubF
CmpGtF
JumpFalse @Label95
Var6
RefGet
Var4
RefGet
SubF
Var7
RefSet

:Label95
Var7
RefGet
PushD 13
Var
RefSet
PushD 13
Var
RefGet
Var5
RefGet
Var4
RefGet
SubF
DivF
PushD 13
Var
RefSet
PushD 13
Var
RefGet
Var3
RefGet
MulF
PushD 14
Var
RefSet
PushD 14
Var
RefGet
PushF 0
CmpGtF
JumpFalse @Label96
PushD 14
Var
RefGet
PushF 7.5
PushF 0.0001
MulF
CmpLtF
JumpFalse @Label96
PushF 7.5
PushF 0.0001
MulF
PushD 14
Var
RefSet

:Label96
Var0
RefGet
Var3
RefGet
PushF 0.5
MulF
SubF
PushD 12
Var
RefGet
Var3
RefGet
MulF
AddF
PushD 13
Var
RefGet
Var3
RefGet
MulF
PushF 0.5
MulF
SubF
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
PushD 14
Var
RefGet
Var2
RefGet
PushD 16
Var
RefGet
PushD 17
Var
RefGet
PushD 18
Var
RefGet
PushD 19
Var
RefGet
CallNative DRAW_RECT 8 0
PushString "hud"
CallNative GET_TXD 1 1
PushD 20
Var
RefSet
PushD 20
Var
RefGet
PushString "bardirts"
CallNative GET_TEXTURE 2 1
PushD 21
Var
RefSet
PushD 9
Var
RefGet
IsZero
JumpFalse @Label97
PushD 8
Var
RefGet
Switch 0:@Label98 1:@Label99 2:@Label100
Jump @Label101

:Label98
PushD 21
Var
RefGet
Var0
RefGet
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
Var3
RefGet
PushF 2
PushF 0.0015
MulF
AddF
Var2
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 0
PushD 0
PushD 0
PushD 0
PushS 160
CallNative DRAW_SPRITE 10 0
Jump @Label102

:Label99
PushD 21
Var
RefGet
Var0
RefGet
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
Var3
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 1
NegF
MulF
Var2
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 0
PushD 0
PushD 0
PushD 0
PushS 160
CallNative DRAW_SPRITE 10 0
Jump @Label102

:Label100
PushD 21
Var
RefGet
Var0
RefGet
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
Var3
RefGet
PushF 2
PushF 0.0015
MulF
AddF
Var2
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 1
NegF
MulF
PushF 0
PushD 0
PushD 0
PushD 0
PushS 160
CallNative DRAW_SPRITE 10 0
Jump @Label102

:Label101
PushD 21
Var
RefGet
Var0
RefGet
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
Var3
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 1
NegF
MulF
Var2
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 1
NegF
MulF
PushF 0
PushD 0
PushD 0
PushD 0
PushS 160
CallNative DRAW_SPRITE 10 0
Jump @Label102

:Label102
Jump @Label103

:Label97
PushD 8
Var
RefGet
Switch 0:@Label104 1:@Label105 2:@Label106
Jump @Label107

:Label104
Var3
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 0.5
MulF
PushD 15
Var
RefSet
PushD 21
Var
RefGet
Var0
RefGet
PushD 15
Var
RefGet
PushF 0.5
MulF
SubF
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
PushD 15
Var
RefGet
Var2
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 0
PushD 0
PushD 0
PushD 0
PushS 160
CallNative DRAW_SPRITE 10 0
PushD 21
Var
RefGet
Var0
RefGet
PushD 15
Var
RefGet
PushF 0.5
MulF
AddF
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
PushD 15
Var
RefGet
Var2
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 0
PushD 0
PushD 0
PushD 0
PushS 160
CallNative DRAW_SPRITE 10 0
Jump @Label103

:Label105
Var3
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 1
NegF
MulF
PushF 0.5
MulF
PushD 15
Var
RefSet
PushD 21
Var
RefGet
Var0
RefGet
PushD 15
Var
RefGet
PushF 0.5
MulF
SubF
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
PushD 15
Var
RefGet
Var2
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 0
PushD 0
PushD 0
PushD 0
PushS 160
CallNative DRAW_SPRITE 10 0
PushD 21
Var
RefGet
Var0
RefGet
PushD 15
Var
RefGet
PushF 0.5
MulF
AddF
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
PushD 15
Var
RefGet
Var2
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 0
PushD 0
PushD 0
PushD 0
PushS 160
CallNative DRAW_SPRITE 10 0
Jump @Label103

:Label106
Var3
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 0.5
MulF
PushD 15
Var
RefSet
PushD 21
Var
RefGet
Var0
RefGet
PushD 15
Var
RefGet
PushF 0.5
MulF
SubF
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
PushD 15
Var
RefGet
Var2
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 1
NegF
MulF
PushF 0
PushD 0
PushD 0
PushD 0
PushS 160
CallNative DRAW_SPRITE 10 0
PushD 21
Var
RefGet
Var0
RefGet
PushD 15
Var
RefGet
PushF 0.5
MulF
AddF
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
PushD 15
Var
RefGet
Var2
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 1
NegF
MulF
PushF 0
PushD 0
PushD 0
PushD 0
PushS 160
CallNative DRAW_SPRITE 10 0
Jump @Label103

:Label107
Var3
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 1
NegF
MulF
PushF 0.5
MulF
PushD 15
Var
RefSet
PushD 21
Var
RefGet
Var0
RefGet
PushD 15
Var
RefGet
PushF 0.5
MulF
SubF
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
PushD 15
Var
RefGet
Var2
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 1
NegF
MulF
PushF 0
PushD 0
PushD 0
PushD 0
PushS 160
CallNative DRAW_SPRITE 10 0
PushD 21
Var
RefGet
Var0
RefGet
PushD 15
Var
RefGet
PushF 0.5
MulF
AddF
Var1
RefGet
Var2
RefGet
PushF 0.5
MulF
AddF
PushF 0.003
AddF
PushD 15
Var
RefGet
Var2
RefGet
PushF 2
PushF 0.0015
MulF
AddF
PushF 1
NegF
MulF
PushF 0
PushD 0
PushD 0
PushD 0
PushS 160
CallNative DRAW_SPRITE 10 0
Jump @Label103

:Label103
PushD 0
CallNative SET_SPRITES_DRAW_BEFORE_FADE 1 0
FnEnd 10 0

:Label93
Call @Label108
Call @Label91
PushD 1
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushD 8
LocalVar
RefGet
AddF
PushF 0.027
PushF 2
MulF
AddF
PushString "BB_ACCURACY"
CallNative DISPLAY_TEXT 3 0
Call @Label87
PushD 14
Var
RefGet
AddF
PushD 10
Var
RefGet
PushD 8
LocalVar
RefGet
AddF
PushF 0.027
PushF 2
MulF
AddF
PushF 0.013
PushD 15
Var
RefGet
PushF 0
PushF 100
PushD 0
PushD 1
PushS 11150
GlobalVar
ArrayRef
RefGet
PushD 0
PushD 1
PushS 11171
GlobalVar
ArrayRef
RefGet
PushD 1
PushD 0
Call @Label108
Call @Label91
PushD 1
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushD 8
LocalVar
RefGet
AddF
PushF 0.027
PushF 3
MulF
AddF
PushString "BB_SHOOTRATE"
CallNative DISPLAY_TEXT 3 0
Call @Label87
PushD 14
Var
RefGet
AddF
PushD 10
Var
RefGet
PushD 8
LocalVar
RefGet
AddF
PushF 0.027
PushF 3
MulF
AddF
PushF 0.013
PushD 15
Var
RefGet
PushF 0
PushF 100
PushD 0
PushD 1
PushS 11153
GlobalVar
ArrayRef
RefGet
PushD 0
PushD 1
PushS 11174
GlobalVar
ArrayRef
RefGet
PushD 2
PushD 0
Call @Label108
Call @Label91
PushD 1
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushD 8
LocalVar
RefGet
AddF
PushF 0.027
PushF 4
MulF
AddF
PushString "BB_WEAPONLEVEL"
CallNative DISPLAY_TEXT 3 0
Call @Label87
PushD 14
Var
RefGet
AddF
PushD 10
Var
RefGet
PushD 8
LocalVar
RefGet
AddF
PushF 0.027
PushF 4
MulF
AddF
PushF 0.013
PushD 15
Var
RefGet
PushD 0
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefGet
Jump @Label109

:Label115
FnBegin 1 3
Var0
RefGet
PushF 1
CmpLtF
JumpFalse @Label110
PushF 0
FnEnd 1 1
Jump @Label111

:Label110
Var0
RefGet
PushF 3
CmpLtF
JumpFalse @Label112
PushF 1
FnEnd 1 1
Jump @Label111

:Label112
Var0
RefGet
PushF 8
CmpLtF
JumpFalse @Label113
PushF 3
FnEnd 1 1
Jump @Label111

:Label113
Var0
RefGet
PushF 13
CmpLtF
JumpFalse @Label114
PushF 8
FnEnd 1 1
Jump @Label111

:Label114
PushF 13
FnEnd 1 1

:Label111
PushF 0
FnEnd 1 1

:Label109
Call @Label115
PushD 0
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefGet
Jump @Label116

:Label121
FnBegin 1 3
Var0
RefGet
PushF 1
CmpLtF
JumpFalse @Label117
PushF 1
FnEnd 1 1
Jump @Label118

:Label117
Var0
RefGet
PushF 3
CmpLtF
JumpFalse @Label119
PushF 3
FnEnd 1 1
Jump @Label118

:Label119
Var0
RefGet
PushF 8
CmpLtF
JumpFalse @Label120
PushF 8
FnEnd 1 1
Jump @Label118

:Label120
PushF 13
FnEnd 1 1

:Label118
PushF 0
FnEnd 1 1

:Label116
Call @Label121
PushD 0
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefGet
PushD 0
PushD 1
PushS 11168
GlobalVar
ArrayRef
RefGet
PushD 3
PushD 0
Call @Label108
Call @Label91
PushD 1
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushD 8
LocalVar
RefGet
AddF
PushF 0.027
PushF 5
MulF
AddF
PushString "BB_CURRWEAP"
CallNative DISPLAY_TEXT 3 0
Call @Label91
PushD 7
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushD 13
Var
RefGet
AddF
PushD 10
Var
RefGet
PushD 8
LocalVar
RefGet
AddF
PushF 0.027
PushF 5
MulF
AddF
PushD 0
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefGet
PushD 0
Jump @Label122

:Label133
FnBegin 2 4
Var1
RefGet
PushD 1
CmpLt
JumpFalse @Label123
Var0
RefGet
PushF 1
CmpLtF
JumpFalse @Label124
PushString "BB_WEAP1"
FnEnd 2 1
Jump @Label125

:Label124
Var0
RefGet
PushF 3
CmpLtF
JumpFalse @Label126
PushString "BB_WEAP2"
FnEnd 2 1
Jump @Label125

:Label126
Var0
RefGet
PushF 8
CmpLtF
JumpFalse @Label127
PushString "BB_WEAP3"
FnEnd 2 1
Jump @Label125

:Label127
Var0
RefGet
PushF 13
CmpLtF
JumpFalse @Label128
PushString "BB_WEAP4"
FnEnd 2 1
Jump @Label125

:Label128
PushString "BB_WEAP5"
FnEnd 2 1

:Label125
Jump @Label122

:Label123
Var0
RefGet
PushF 1
CmpLtF
JumpFalse @Label129
PushString "BB_WEAP1"
FnEnd 2 1
Jump @Label122

:Label129
Var0
RefGet
PushF 3
CmpLtF
JumpFalse @Label130
PushString "BB_WEAP6"
FnEnd 2 1
Jump @Label122

:Label130
Var0
RefGet
PushF 8
CmpLtF
JumpFalse @Label131
PushString "BB_WEAP7"
FnEnd 2 1
Jump @Label122

:Label131
Var0
RefGet
PushF 13
CmpLtF
JumpFalse @Label132
PushString "BB_WEAP8"
FnEnd 2 1
Jump @Label122

:Label132
PushString "BB_WEAP9"
FnEnd 2 1

:Label122
Call @Label133
CallNative DISPLAY_TEXT 3 0
Call @Label91
PushD 1
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushD 8
LocalVar
RefGet
AddF
PushF 0.027
PushF 6
MulF
AddF
PushString "BB_NEXTWEAP"
CallNative DISPLAY_TEXT 3 0
Call @Label91
PushD 7
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushD 13
Var
RefGet
AddF
PushD 10
Var
RefGet
PushD 8
LocalVar
RefGet
AddF
PushF 0.027
PushF 6
MulF
AddF
PushD 0
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefGet
PushD 0
Jump @Label134

:Label145
FnBegin 2 4
Var1
RefGet
PushD 1
CmpLt
JumpFalse @Label135
Var0
RefGet
PushF 1
CmpLtF
JumpFalse @Label136
PushString "BB_WEAP2"
FnEnd 2 1
Jump @Label137

:Label136
Var0
RefGet
PushF 3
CmpLtF
JumpFalse @Label138
PushString "BB_WEAP3"
FnEnd 2 1
Jump @Label137

:Label138
Var0
RefGet
PushF 8
CmpLtF
JumpFalse @Label139
PushString "BB_WEAP4"
FnEnd 2 1
Jump @Label137

:Label139
Var0
RefGet
PushF 13
CmpLtF
JumpFalse @Label140
PushString "BB_WEAP5"
FnEnd 2 1
Jump @Label137

:Label140
PushString "BB_GOTTOPWEAP"
FnEnd 2 1

:Label137
Jump @Label134

:Label135
Var0
RefGet
PushF 1
CmpLtF
JumpFalse @Label141
PushString "BB_WEAP6"
FnEnd 2 1
Jump @Label134

:Label141
Var0
RefGet
PushF 3
CmpLtF
JumpFalse @Label142
PushString "BB_WEAP7"
FnEnd 2 1
Jump @Label134

:Label142
Var0
RefGet
PushF 8
CmpLtF
JumpFalse @Label143
PushString "BB_WEAP8"
FnEnd 2 1
Jump @Label134

:Label143
Var0
RefGet
PushF 13
CmpLtF
JumpFalse @Label144
PushString "BB_WEAP9"
FnEnd 2 1
Jump @Label134

:Label144
PushString "BB_GOTTOPWEAP"
FnEnd 2 1

:Label134
Call @Label145
CallNative DISPLAY_TEXT 3 0
PushD 1
PushS 11115
GlobalVar
RefSet

:Label92
PushD 1
PushD 1
PushS 11129
GlobalVar
ArrayRef
RefGet
JumpFalse @Label146
PushD 11
Var
RefGet
JumpFalse @Label147
PushD 8
LocalVar
RefGet
PushD 9
LocalVar
RefSet

:Label147
Call @Label91
PushD 7
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushD 9
LocalVar
RefGet
AddF
PushString "BB_TITLE_03"
CallNative DISPLAY_TEXT 3 0
Call @Label91
PushD 1
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushD 9
LocalVar
RefGet
AddF
PushF 0.027
PushF 1
MulF
AddF
PushString "BB_MAX_HEALTH"
CallNative DISPLAY_TEXT 3 0
Call @Label87
PushD 14
Var
RefGet
AddF
PushD 10
Var
RefGet
PushD 9
LocalVar
RefGet
AddF
PushF 0.027
PushF 1
MulF
AddF
PushF 0.013
PushD 15
Var
RefGet
PushF 200
PushF 1000
PushD 1
PushD 1
PushS 11144
GlobalVar
ArrayRef
RefGet
PushD 1
PushD 1
PushS 11165
GlobalVar
ArrayRef
RefGet
PushD 0
PushD 0
Call @Label108
Call @Label91
PushD 1
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushD 9
LocalVar
RefGet
AddF
PushF 0.027
PushF 2
MulF
AddF
PushString "BB_ACCURACY"
CallNative DISPLAY_TEXT 3 0
Call @Label87
PushD 14
Var
RefGet
AddF
PushD 10
Var
RefGet
PushD 9
LocalVar
RefGet
AddF
PushF 0.027
PushF 2
MulF
AddF
PushF 0.013
PushD 15
Var
RefGet
PushF 0
PushF 100
PushD 1
PushD 1
PushS 11150
GlobalVar
ArrayRef
RefGet
PushD 1
PushD 1
PushS 11171
GlobalVar
ArrayRef
RefGet
PushD 1
PushD 0
Call @Label108
Call @Label91
PushD 1
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushD 9
LocalVar
RefGet
AddF
PushF 0.027
PushF 3
MulF
AddF
PushString "BB_SHOOTRATE"
CallNative DISPLAY_TEXT 3 0
Call @Label87
PushD 14
Var
RefGet
AddF
PushD 10
Var
RefGet
PushD 9
LocalVar
RefGet
AddF
PushF 0.027
PushF 3
MulF
AddF
PushF 0.013
PushD 15
Var
RefGet
PushF 0
PushF 100
PushD 1
PushD 1
PushS 11153
GlobalVar
ArrayRef
RefGet
PushD 1
PushD 1
PushS 11174
GlobalVar
ArrayRef
RefGet
PushD 2
PushD 0
Call @Label108
Call @Label91
PushD 1
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushD 9
LocalVar
RefGet
AddF
PushF 0.027
PushF 4
MulF
AddF
PushString "BB_WEAPONLEVEL"
CallNative DISPLAY_TEXT 3 0
Call @Label87
PushD 14
Var
RefGet
AddF
PushD 10
Var
RefGet
PushD 9
LocalVar
RefGet
AddF
PushF 0.027
PushF 4
MulF
AddF
PushF 0.013
PushD 15
Var
RefGet
PushD 1
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefGet
Call @Label115
PushD 1
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefGet
Call @Label121
PushD 1
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefGet
PushD 1
PushD 1
PushS 11168
GlobalVar
ArrayRef
RefGet
PushD 3
PushD 0
Call @Label108
Call @Label91
PushD 1
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushD 9
LocalVar
RefGet
AddF
PushF 0.027
PushF 5
MulF
AddF
PushString "BB_CURRWEAP"
CallNative DISPLAY_TEXT 3 0
Call @Label91
PushD 7
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushD 13
Var
RefGet
AddF
PushD 10
Var
RefGet
PushD 9
LocalVar
RefGet
AddF
PushF 0.027
PushF 5
MulF
AddF
PushD 1
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefGet
PushD 3
Call @Label133
CallNative DISPLAY_TEXT 3 0
Call @Label91
PushD 1
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 10
Var
RefGet
PushD 9
LocalVar
RefGet
AddF
PushF 0.027
PushF 6
MulF
AddF
PushString "BB_NEXTWEAP"
CallNative DISPLAY_TEXT 3 0
Call @Label91
PushD 7
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushD 13
Var
RefGet
AddF
PushD 10
Var
RefGet
PushD 9
LocalVar
RefGet
AddF
PushF 0.027
PushF 6
MulF
AddF
PushD 1
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefGet
PushD 1
Call @Label145
CallNative DISPLAY_TEXT 3 0
PushD 1
PushS 11115
GlobalVar
RefSet

:Label146
FnEnd 0 0

:Label60
Call @Label148
PushD 0
CallNative SET_TEXT_DRAW_BEFORE_FADE 1 0
Jump @Label58

:Label59
Push 0x98BE
GlobalVar
RefGet
JumpFalse @Label149
PushD 0
PushD 17
LocalVar
RefSet
Jump @Label58

:Label149
Jump @Label150

:Label160
FnBegin 0 12
PushF 0
PushD 9
Var
RefSet
PushD 0
PushD 1
PushS 11129
GlobalVar
ArrayRef
RefGet
IsZero
PushD 1
PushD 1
PushS 11129
GlobalVar
ArrayRef
RefGet
IsZero
Or
JumpFalse @Label151
PushD 1
PushD 8
Var
RefSet

:Label151
PushD 0
PushD 1
PushS 11129
GlobalVar
ArrayRef
RefGet
PushD 1
PushD 1
PushS 11129
GlobalVar
ArrayRef
RefGet
Or
JumpFalse @Label152
Call @Label76
PushD 11
Var
RefSet
PushD 11
Var
RefGet
Call @Label79
AddF
PushD 11
Var
RefSet
PushD 2
CallNative SET_WIDESCREEN_FORMAT 1 0
PushD 8
Var
RefGet
JumpFalse @Label153
PushF 0.046
PushD 10
LocalVar
RefSet

:Label153
PushD 1
CallNative SET_SPRITES_DRAW_BEFORE_FADE 1 0
Var6
Var7
CallNative GET_TIME_OF_DAY 2 0
Var6
RefGet
PushD 6
CmpGe
Var6
RefGet
PushD 20
CmpLe
And
JumpFalse @Label154
PushD 27
LocalVar
RefGet
Call @Label87
Call @Label70
PushF 0.5
MulF
AddF
PushD 11
Var
RefGet
PushF 0.013
SubF
PushD 10
LocalVar
RefGet
PushF 0.5
MulF
AddF
Call @Label70
PushD 10
LocalVar
RefGet
PushF 0
PushD 0
PushD 0
PushD 0
PushS 128
CallNative DRAW_SPRITE 10 0

:Label154
PushD 0
CallNative SET_SPRITES_DRAW_BEFORE_FADE 1 0
PushD 0
PushD 1
PushS 11129
GlobalVar
ArrayRef
RefGet
JumpFalse @Label155
Call @Label91
PushD 7
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Call @Label87
PushF 0.01
AddF
PushD 11
Var
RefGet
PushF 0.001
AddF
PushString "BB_TITLE_02"
CallNative DISPLAY_TEXT 3 0
Call @Label87
PushF 0.175
AddF
PushD 11
Var
RefGet
PushF 0.001
AddF
PushF 0.013
PushF 0.203
PushF 0
PushF 100
PushD 0
PushD 1
PushS 11141
GlobalVar
ArrayRef
RefGet
PushD 0
PushD 1
PushS 11180
GlobalVar
ArrayRef
RefGet
PushD 0
PushD 1
Call @Label108

:Label155
PushD 1
PushD 1
PushS 11129
GlobalVar
ArrayRef
RefGet
JumpFalse @Label156
Call @Label91
PushD 7
Var2
Var3
Var4
Var5
CallNative GET_HUD_COLOUR 5 0
Var2
RefGet
Var3
RefGet
Var4
RefGet
Var5
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
PushD 0
PushD 1
PushS 11129
GlobalVar
ArrayRef
RefGet
JumpFalse @Label157
Call @Label87
PushF 0.01
AddF
PushD 11
Var
RefGet
PushF 0.001
AddF
PushF 0.027
AddF
PushString "BB_TITLE_03"
CallNative DISPLAY_TEXT 3 0
Jump @Label158

:Label157
Call @Label87
PushF 0.01
AddF
PushD 11
Var
RefGet
PushF 0.001
AddF
PushString "BB_TITLE_03"
CallNative DISPLAY_TEXT 3 0

:Label158
PushD 0
PushD 1
PushS 11129
GlobalVar
ArrayRef
RefGet
JumpFalse @Label159
Call @Label87
PushF 0.175
AddF
PushD 11
Var
RefGet
PushF 0.001
AddF
PushF 0.027
AddF
PushF 0.013
PushF 0.203
PushF 0
PushF 100
PushD 1
PushD 1
PushS 11141
GlobalVar
ArrayRef
RefGet
PushD 1
PushD 1
PushS 11180
GlobalVar
ArrayRef
RefGet
PushD 1
PushD 1
Call @Label108
Jump @Label156

:Label159
Call @Label87
PushF 0.175
AddF
PushD 11
Var
RefGet
PushF 0.001
AddF
PushF 0.013
PushF 0.203
PushF 0
PushF 100
PushD 1
PushD 1
PushS 11141
GlobalVar
ArrayRef
RefGet
PushD 1
PushD 1
PushS 11180
GlobalVar
ArrayRef
RefGet
PushD 1
PushD 1
Call @Label108

:Label156
PushD 1
PushS 11115
GlobalVar
RefSet

:Label152
FnEnd 0 0

:Label150
Call @Label160
PushD 0
CallNative SET_TEXT_DRAW_BEFORE_FADE 1 0

:Label58
Jump @Label55

:Label57
PushD 0
PushD 17
LocalVar
RefSet

:Label55
PushD 17
LocalVar
RefGet
PushD 25
LocalVar
RefGet
PushD 0
CmpEq
And
JumpFalse @Label161
PushD 18
LocalVar
RefGet
JumpFalse @Label162
CallNative IS_USING_CONTROLLER 0 1
PushD 0
PushD 9
CallNative IS_BUTTON_PRESSED 2 1
IsZero
And
CallNative IS_USING_CONTROLLER 0 1
IsZero
PushD 2
PushS 99
CallNative IS_CONTROL_PRESSED 2 1
IsZero
And
Or
JumpFalse @Label163
PushD 0
PushD 18
LocalVar
RefSet

:Label163
Jump @Label161

:Label162
CallNative IS_USING_CONTROLLER 0 1
PushD 0
PushD 9
CallNative IS_BUTTON_PRESSED 2 1
And
CallNative IS_USING_CONTROLLER 0 1
IsZero
PushD 2
PushS 99
CallNative IS_CONTROL_PRESSED 2 1
And
Or
JumpFalse @Label161
PushD 1
PushD 18
LocalVar
RefSet
PushD 0
PushD 17
LocalVar
RefSet

:Label161
PushD 17
LocalVar
RefGet
IsZero
JumpFalse @Label47
Call @Label7

:Label47
Jump @Label19

:Label19
Jump @Label164

:Label16
Call @Label7

:Label164
PushD 0
CallNative WAIT 1 0
Jump @Label10

:Label15
FnEnd 0 0
