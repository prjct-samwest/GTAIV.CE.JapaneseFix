FnBegin 0 12
PushF 0.454
PushD 0
LocalVar
RefSet
PushF 0.044
PushD 1
LocalVar
RefSet
PushF 0.244
PushD 2
LocalVar
RefSet
PushF 0.074
PushD 3
LocalVar
RefSet
PushF 0.066
PushD 4
LocalVar
RefSet
PushF 0.094
PushD 5
LocalVar
RefSet
PushF 0.064
PushD 6
LocalVar
RefSet
PushF 0.093
PushD 7
LocalVar
RefSet
PushF 0.292
PushD 8
LocalVar
RefSet
PushF 0.289
PushD 9
LocalVar
RefSet
PushD 0
PushD 10
LocalVar
RefSet
PushF 86
PushD 11
LocalVar
RefSet
PushF 274
PushD 12
LocalVar
RefSet
PushD 0
PushD 13
LocalVar
RefSet
PushD 0
PushD 14
LocalVar
RefSet
PushD 0
PushD 15
LocalVar
RefSet
PushD 0
PushD 16
LocalVar
RefSet
PushD -1
PushD 18
LocalVar
RefSet
PushF 15
PushS 130
LocalVar
RefSet
PushF 35
PushS 131
LocalVar
RefSet
PushF 16
PushS 132
LocalVar
RefSet
PushF 0
PushS 133
LocalVar
RefSet
PushF 1000
PushS 139
LocalVar
RefSet
PushF 7500
PushS 140
LocalVar
RefSet
PushD 1
PushS 149
LocalVar
RefSet
PushF 30
PushS 150
LocalVar
RefSet
PushF 30
PushS 151
LocalVar
RefSet
PushF 2
PushS 152
LocalVar
RefSet
PushF 0
PushS 162
LocalVar
RefSet
PushF 0
PushS 163
LocalVar
RefSet
PushD 1
PushS 175
LocalVar
RefSet
PushD 0
PushS 176
LocalVar
RefSet
PushD -1
PushS 177
LocalVar
RefSet
PushD 1
PushS 178
LocalVar
RefSet
PushD -1
PushS 179
LocalVar
RefSet
PushD -1
PushS 180
LocalVar
RefSet
PushF 15
PushS 181
LocalVar
RefSet
PushD 0
PushS 208
LocalVar
RefSet
Push 0x8BC9E607
PushS 209
LocalVar
RefSet
Push 0x7BBB45EA
PushS 210
LocalVar
RefSet
PushF 0.12
PushS 215
LocalVar
RefSet
PushF 0
PushS 226
LocalVar
RefSet
PushF 0
PushS 227
LocalVar
RefSet
PushD 0
PushS 228
LocalVar
RefSet
PushD 0
PushS 229
LocalVar
RefSet
PushD 0
PushS 230
LocalVar
RefSet
PushD 0
PushS 231
LocalVar
RefSet
PushD 0
PushS 232
LocalVar
RefSet
PushD 0
PushS 233
LocalVar
RefSet
PushD 0
PushS 269
LocalVar
RefSet
PushD 0
PushS 270
LocalVar
RefSet
NullObj
RefGet
PushS 271
LocalVar
RefSet
NullObj
RefGet
PushS 272
LocalVar
RefSet
CallNative THIS_SCRIPT_SHOULD_BE_SAVED 0 0
PushD 0
Var2
RefSet
PushD 0
Var3
RefSet
PushD 0
Var4
RefSet
PushD 0
Var5
RefSet
PushD 0
Var6
RefSet
PushD 0
Var7
RefSet
PushD 0
PushD 8
Var
RefSet
PushD 0
PushD 9
Var
RefSet
PushD 0
PushD 10
Var
RefSet

:Label219
PushD 1
JumpFalse @Label1
CallNative ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN 0 1
JumpFalse @Label2
PushD 0
PushD 8
Var
RefSet

:Label4
PushD 8
Var
RefGet
PushD 6
CmpLt
JumpFalse @Label3
PushD -1
PushD 8
Var
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 20
Add
RefSet
PushD 8
Var
RefGet
PushD 1
Add
PushD 8
Var
RefSet
Jump @Label4

:Label3
PushD 0
PushD 8
Var
RefSet

:Label6
PushD 8
Var
RefGet
PushD 5
CmpLt
JumpFalse @Label5
PushD -1
PushD 8
Var
RefGet
PushD 3
Push 0x9882
GlobalVar
ArrayRef
PushD 0
Add
RefSet
PushD 8
Var
RefGet
PushD 1
Add
PushD 8
Var
RefSet
Jump @Label6

:Label5
Jump @Label7

:Label10
FnBegin 0 3
PushD 0
Var2
RefSet
PushD 0
Var2
RefSet

:Label9
Var2
RefGet
PushD 5
CmpLt
JumpFalse @Label8
PushD -1
Var2
RefGet
PushD 3
PushS 234
LocalVar
ArrayRef
PushD 0
Add
RefSet
PushD 0
Var2
RefGet
PushD 3
PushS 234
LocalVar
ArrayRef
PushD 4
Add
RefSet
PushD 0
Var2
RefGet
PushD 3
PushS 234
LocalVar
ArrayRef
PushD 8
Add
RefSet
Var2
RefGet
PushD 1
Add
Var2
RefSet
Jump @Label9

:Label8
FnEnd 0 0

:Label7
Call @Label10
Jump @Label11

:Label14
FnBegin 0 3
PushD 0
Var2
RefSet
PushD 0
Var2
RefSet

:Label13
Var2
RefGet
PushD 6
CmpLt
JumpFalse @Label12
PushD -1
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 0
Add
RefSet
PushD 0
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 4
Add
RefSet
PushD 0
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 8
Add
RefSet
Var2
RefGet
PushD 1
Add
Var2
RefSet
Jump @Label13

:Label12
FnEnd 0 0

:Label11
Call @Label14
PushF 0
PushD 0
PushD 1
PushS 11180
GlobalVar
ArrayRef
RefSet
PushF 0
PushD 1
PushD 1
PushS 11180
GlobalVar
ArrayRef
RefSet
PushD 0
Var2
RefSet
PushD 0
Var3
RefSet
PushD 0
Var4
RefSet
PushD 0
Var5
RefSet
PushD 0
Var6
RefSet
PushD 0
PushD 8
Var
RefSet
PushD 0
PushD 9
Var
RefSet
PushD 0
PushD 10
Var
RefSet
PushD 0
PushS 269
LocalVar
RefSet
PushD 0
PushS 270
LocalVar
RefSet
PushD 0
Push 0x98BD
GlobalVar
RefSet
PushD 0
Push 0x98BE
GlobalVar
RefSet
PushD 0
Push 0x98BF
GlobalVar
RefSet
PushD 0
Push 0x98C0
GlobalVar
RefSet
PushD 0
Push 0x98C1
GlobalVar
RefSet

:Label2
Var2
RefGet
IsZero
Var4
RefGet
IsZero
And
JumpFalse @Label15
PushD 0
PushD 8
Var
RefSet

:Label17
PushD 8
Var
RefGet
PushD 6
CmpLt
JumpFalse @Label15
PushD 8
Var
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 20
Add
RefGet
PushD -2
CmpEq
JumpFalse @Label16
PushD 1
Var2
RefSet

:Label16
PushD 8
Var
RefGet
PushD 1
Add
PushD 8
Var
RefSet
Jump @Label17

:Label15
Var3
RefGet
IsZero
Var4
RefGet
IsZero
And
JumpFalse @Label18
PushD 0
PushD 3
Push 0x9882
GlobalVar
ArrayRef
PushD 0
Add
RefGet
PushD -1
CmpEq
IsZero
JumpFalse @Label18
PushD 1
Var3
RefSet

:Label18
Jump @Label19

:Label21
FnBegin 0 2
PushString "ability_backup"
CallNative GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT 1 1
PushD 0
CmpGt
JumpFalse @Label20
PushD 1
FnEnd 0 1

:Label20
PushD 0
FnEnd 0 1

:Label19
Call @Label21
JumpFalse @Label22
Push 0x98BE
GlobalVar
RefGet
JumpFalse @Label22
PushD 1
PushS 269
LocalVar
RefSet

:Label22
Push 0x98C0
GlobalVar
RefGet
JumpFalse @Label23
PushD 0
PushF 1
PushD 1
Jump @Label24

:Label74
FnBegin 3 10
Var0
RefGet
PushD 1
PushS 11081
GlobalVar
ArrayRef
RefGet
CallNative IS_CHAR_INJURED 1 1
IsZero
Var2
RefGet
Or
JumpFalse @Label25
Var0
RefGet
PushD 0
CmpEq
JumpFalse @Label26
PushF 20
Var5
RefSet
Jump @Label27

:Label26
PushF 20
Var5
RefSet

:Label27
Var0
RefGet
PushD 1
PushS 11141
GlobalVar
ArrayRef
RefGet
PushF 100
Var5
RefGet
SubF
PushF 10
DivF
Var1
RefGet
MulF
AddF
Var7
RefSet
Var7
RefGet
PushF 100
CmpGtF
JumpFalse @Label28
PushF 100
Var7
RefSet

:Label28
Var7
RefGet
Var0
RefGet
PushD 1
PushS 11141
GlobalVar
ArrayRef
RefGet
SubF
Var0
RefGet
PushD 1
PushS 11180
GlobalVar
ArrayRef
RefSet
Var7
RefGet
Var0
RefGet
PushD 1
PushS 11141
GlobalVar
ArrayRef
RefSet
Var0
RefGet
PushD 1
PushS 11141
GlobalVar
ArrayRef
RefGet
Var5
RefGet
SubF
PushF 100
Var5
RefGet
SubF
DivF
PushD 8
Var
RefSet
PushF 1
NegF
PushD 8
Var
RefGet
PushF 1
SubF
PushD 8
Var
RefGet
PushF 1
SubF
MulF
MulF
PushF 1
AddF
PushD 9
Var
RefSet
Var0
RefGet
PushD 0
CmpEq
JumpFalse @Label29
PushF 350
Var5
RefSet
Jump @Label30

:Label29
PushF 475
Var5
RefSet

:Label30
PushF 1000
Var5
RefGet
SubF
PushD 8
Var
RefGet
MulF
Var5
RefGet
AddF
Var7
RefSet
Var7
RefGet
PushF 1000
CmpGtF
JumpFalse @Label31
PushF 1000
Var7
RefSet

:Label31
Var7
RefGet
Var0
RefGet
PushD 1
PushS 11144
GlobalVar
ArrayRef
RefGet
SubF
Var0
RefGet
PushD 1
PushS 11165
GlobalVar
ArrayRef
RefSet
Var7
RefGet
Var0
RefGet
PushD 1
PushS 11144
GlobalVar
ArrayRef
RefSet
Var0
RefGet
PushD 0
CmpEq
JumpFalse @Label32
PushF 0
Var5
RefSet
Jump @Label33

:Label32
PushF 0
Var5
RefSet

:Label33
PushF 13
Var5
RefGet
SubF
PushD 8
Var
RefGet
MulF
Var5
RefGet
AddF
Var7
RefSet
Var7
RefGet
PushF 13
CmpGtF
JumpFalse @Label34
PushF 13
Var7
RefSet

:Label34
Var7
RefGet
Var0
RefGet
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefGet
SubF
Var0
RefGet
PushD 1
PushS 11168
GlobalVar
ArrayRef
RefSet
Var7
RefGet
Var0
RefGet
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefSet
Var0
RefGet
PushD 0
CmpEq
JumpFalse @Label35
PushF 38
Var5
RefSet
Jump @Label36

:Label35
PushF 28
Var5
RefSet

:Label36
PushF 100
Var5
RefGet
SubF
PushD 9
Var
RefGet
MulF
Var5
RefGet
AddF
Var7
RefSet
Var7
RefGet
PushF 100
CmpGtF
JumpFalse @Label37
PushF 100
Var7
RefSet

:Label37
Var7
RefGet
Var0
RefGet
PushD 1
PushS 11150
GlobalVar
ArrayRef
RefGet
SubF
Var0
RefGet
PushD 1
PushS 11171
GlobalVar
ArrayRef
RefSet
Var7
RefGet
Var0
RefGet
PushD 1
PushS 11150
GlobalVar
ArrayRef
RefSet
Var0
RefGet
PushD 0
CmpEq
JumpFalse @Label38
PushF 33
Var5
RefSet
Jump @Label39

:Label38
PushF 23
Var5
RefSet

:Label39
PushF 100
Var5
RefGet
SubF
PushD 9
Var
RefGet
MulF
Var5
RefGet
AddF
Var7
RefSet
Var7
RefGet
PushF 100
CmpGtF
JumpFalse @Label40
PushF 100
Var7
RefSet

:Label40
Var7
RefGet
Var0
RefGet
PushD 1
PushS 11153
GlobalVar
ArrayRef
RefGet
SubF
Var0
RefGet
PushD 1
PushS 11174
GlobalVar
ArrayRef
RefSet
Var7
RefGet
Var0
RefGet
PushD 1
PushS 11153
GlobalVar
ArrayRef
RefSet
Var0
RefGet
PushD 0
CmpEq
JumpFalse @Label41
PushF 1
Var5
RefSet
Jump @Label42

:Label41
PushF 1
Var5
RefSet

:Label42
PushF 5
Var5
RefGet
SubF
PushD 8
Var
RefGet
MulF
Var5
RefGet
AddF
Var7
RefSet
Var7
RefGet
PushF 5
CmpGtF
JumpFalse @Label43
PushF 5
Var7
RefSet

:Label43
Var7
RefGet
Var0
RefGet
PushD 1
PushS 11156
GlobalVar
ArrayRef
RefGet
SubF
Var0
RefGet
PushD 1
PushS 11177
GlobalVar
ArrayRef
RefSet
Var7
RefGet
Var0
RefGet
PushD 1
PushS 11156
GlobalVar
ArrayRef
RefSet
PushD 0
PushD 1
PushS 11141
GlobalVar
ArrayRef
RefGet
PushF 100
CmpGeF
PushD 1
PushD 1
PushS 11141
GlobalVar
ArrayRef
RefGet
PushF 100
CmpGeF
And
JumpFalse @Label44
PushS 55
CallNative AWARD_ACHIEVEMENT 1 1
Pop

:Label44
PushS 168
PushD 0
PushD 1
PushS 11141
GlobalVar
ArrayRef
RefGet
CallNative SET_FLOAT_STAT 2 0
PushS 169
PushD 1
PushD 1
PushS 11141
GlobalVar
ArrayRef
RefGet
CallNative SET_FLOAT_STAT 2 0
Var0
RefGet
Jump @Label45

:Label72
FnBegin 1 4
Var0
RefGet
PushD 1
PushS 11081
GlobalVar
ArrayRef
RefGet
CallNative IS_CHAR_INJURED 1 1
IsZero
JumpFalse @Label46
Var0
RefGet
PushD 1
PushS 11081
GlobalVar
ArrayRef
RefGet
Var0
RefGet
PushD 1
PushS 11144
GlobalVar
ArrayRef
RefGet
CallNative FLOOR 1 1
CallNative SET_CHAR_MAX_HEALTH 2 0
Var0
RefGet
PushD 1
PushS 11081
GlobalVar
ArrayRef
RefGet
Var3
CallNative GET_CHAR_HEALTH 2 0
Var3
RefGet
Var0
RefGet
PushD 1
PushS 11165
GlobalVar
ArrayRef
RefGet
CallNative FLOOR 1 1
Add
Var3
RefSet
Var0
RefGet
PushD 1
PushS 11081
GlobalVar
ArrayRef
RefGet
Var3
RefGet
CallNative SET_CHAR_HEALTH 2 0
Var0
RefGet
PushD 1
PushS 11081
GlobalVar
ArrayRef
RefGet
Var0
RefGet
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefGet
Var0
RefGet
Jump @Label47

:Label56
FnBegin 2 4
Var1
RefGet
Switch 0:@Label48 1:@Label49
Jump @Label48

:Label48
Var0
RefGet
PushF 1
CmpLtF
JumpFalse @Label50
PushString "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned PISTOL \n"
CallNative PRINTSTRING 1 0
PushD 7
FnEnd 2 1
Jump @Label51

:Label50
Var0
RefGet
PushF 3
CmpLtF
JumpFalse @Label52
PushString "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned EPISODIC_7 \n"
CallNative PRINTSTRING 1 0
PushD 27
FnEnd 2 1
Jump @Label51

:Label52
PushString "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned UZI \n"
CallNative PRINTSTRING 1 0
PushD 12
FnEnd 2 1

:Label51
Jump @Label53

:Label49
Var0
RefGet
PushF 3
CmpLtF
JumpFalse @Label54
PushString "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned PISTOL \n"
CallNative PRINTSTRING 1 0
PushD 7
FnEnd 2 1
Jump @Label55

:Label54
PushString "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned EPISODIC 6 \n"
CallNative PRINTSTRING 1 0
PushD 26
FnEnd 2 1

:Label55
Jump @Label53

:Label53
PushString "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - returned default value \n"
CallNative PRINTSTRING 1 0
PushD 7
FnEnd 2 1

:Label47
Call @Label56
PushS 30000
PushD 0
CallNative GIVE_WEAPON_TO_CHAR 4 0
Var0
RefGet
PushD 1
PushS 11081
GlobalVar
ArrayRef
RefGet
Var0
RefGet
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefGet
Var0
RefGet
Jump @Label57

:Label71
FnBegin 2 4
Var1
RefGet
Switch 0:@Label58 1:@Label59
Jump @Label58

:Label58
Var0
RefGet
PushF 1
CmpLtF
JumpFalse @Label60
PushD 7
FnEnd 2 1
Jump @Label61

:Label60
Var0
RefGet
PushF 3
CmpLtF
JumpFalse @Label62
PushD 27
FnEnd 2 1
Jump @Label61

:Label62
Var0
RefGet
PushF 8
CmpLtF
JumpFalse @Label63
PushD 12
FnEnd 2 1
Jump @Label61

:Label63
Var0
RefGet
PushF 13
CmpLtF
JumpFalse @Label64
PushD 14
FnEnd 2 1
Jump @Label61

:Label64
PushD 15
FnEnd 2 1

:Label61
Jump @Label65

:Label59
Var0
RefGet
PushF 1
CmpLtF
JumpFalse @Label66
PushD 7
FnEnd 2 1
Jump @Label67

:Label66
Var0
RefGet
PushF 3
CmpLtF
JumpFalse @Label68
PushD 10
FnEnd 2 1
Jump @Label67

:Label68
Var0
RefGet
PushF 8
CmpLtF
JumpFalse @Label69
PushD 26
FnEnd 2 1
Jump @Label67

:Label69
Var0
RefGet
PushF 13
CmpLtF
JumpFalse @Label70
PushD 11
FnEnd 2 1
Jump @Label67

:Label70
PushD 22
FnEnd 2 1

:Label67
Jump @Label65

:Label65
PushD 7
FnEnd 2 1

:Label57
Call @Label71
PushS 30000
PushD 0
CallNative GIVE_WEAPON_TO_CHAR 4 0
Var0
RefGet
PushD 1
PushS 11081
GlobalVar
ArrayRef
RefGet
Var0
RefGet
PushD 1
PushS 11147
GlobalVar
ArrayRef
RefGet
Var0
RefGet
Call @Label71
PushD 0
CallNative SET_CURRENT_CHAR_WEAPON 3 0
Var0
RefGet
PushD 1
PushS 11081
GlobalVar
ArrayRef
RefGet
Var0
RefGet
PushD 1
PushS 11150
GlobalVar
ArrayRef
RefGet
CallNative FLOOR 1 1
CallNative SET_CHAR_ACCURACY 2 0
Var0
RefGet
PushD 1
PushS 11081
GlobalVar
ArrayRef
RefGet
Var0
RefGet
PushD 1
PushS 11153
GlobalVar
ArrayRef
RefGet
CallNative FLOOR 1 1
CallNative SET_CHAR_SHOOT_RATE 2 0
Var0
RefGet
PushD 1
PushS 11081
GlobalVar
ArrayRef
RefGet
Var0
RefGet
PushD 1
PushS 11156
GlobalVar
ArrayRef
RefGet
CallNative SET_CHAR_FIRE_DAMAGE_MULTIPLIER 2 0

:Label46
FnEnd 1 0

:Label45
Call @Label72
PushD 1
Var0
RefGet
PushD 1
PushS 11129
GlobalVar
ArrayRef
RefSet
PushS 11140
GlobalVar
CallNative GET_GAME_TIMER 1 0
Jump @Label73

:Label25
PushF 0
Var0
RefGet
PushD 1
PushS 11165
GlobalVar
ArrayRef
RefSet
PushF 0
Var0
RefGet
PushD 1
PushS 11168
GlobalVar
ArrayRef
RefSet
PushF 0
Var0
RefGet
PushD 1
PushS 11171
GlobalVar
ArrayRef
RefSet
PushF 0
Var0
RefGet
PushD 1
PushS 11174
GlobalVar
ArrayRef
RefSet
PushF 0
Var0
RefGet
PushD 1
PushS 11177
GlobalVar
ArrayRef
RefSet
PushD 0
Var0
RefGet
PushD 1
PushS 11129
GlobalVar
ArrayRef
RefSet

:Label73
FnEnd 3 0

:Label24
Call @Label74
PushD 0
Push 0x98C0
GlobalVar
RefSet

:Label23
Push 0x98C1
GlobalVar
RefGet
JumpFalse @Label75
PushD 1
PushF 1
PushD 1
Call @Label74
PushD 0
Push 0x98C1
GlobalVar
RefSet

:Label75
Push 0x98BD
GlobalVar
RefGet
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
Push 0x9765
GlobalVar
RefGet
IsZero
And
JumpFalse @Label76
PushD 0
Push 0x98BD
GlobalVar
RefSet
Var2
RefGet
Var3
RefGet
Or
JumpFalse @Label76
Jump @Label77

:Label109
FnBegin 0 5
PushD 0
Var2
RefSet
PushD 0
Var3
RefSet
PushD 0
Var4
RefSet

:Label108
Var4
RefGet
PushD 6
CmpLt
JumpFalse @Label78
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 20
Add
RefGet
PushD -2
CmpEq
JumpFalse @Label79
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 16
Add
RefGet
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 0
Add
RefSet
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 0
Add
RefGet
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 4
Add
RefSet
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 12
Add
RefGet
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 8
Add
RefSet
PushD -1
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 20
Add
RefSet
Var2
RefGet
PushD 1
Add
Var2
RefSet
Jump @Label80

:Label79
PushS 269
LocalVar
RefGet
JumpFalse @Label80
PushD 0
Var3
RefSet
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 16
Add
RefGet
Jump @Label81

:Label102
FnBegin 1 8
Var0
RefGet
Jump @Label82

:Label100
FnBegin 1 9
PushD 30
Var3
RefSet
PushString "RECLOST_"
Var4
StrCpy
MulF
Var0
RefGet
PushD 0
CmpLt
Var0
RefGet
Var3
RefGet
CmpGe
Or
JumpFalse @Label83
PushString "Return_Recurring_Lost_Name_From_NameID: NameID out of range"
CallNative SCRIPT_ASSERT 1 0
PushD 4
Var4
ArrayExplode
FnEnd 1 4

:Label83
Var0
RefGet
PushD 8
Var
RefSet
PushD 8
Var
RefGet
PushS 40
CmpGe
JumpFalse @Label84
PushString "Return_Recurring_Lost_Name_From_NameID: more than 40 Lost Member names?"
CallNative SCRIPT_ASSERT 1 0
PushD 4
Var4
ArrayExplode
FnEnd 1 4

:Label84
PushD 8
Var
RefGet
PushD 30
CmpGe
JumpFalse @Label85
PushString "3"
Var4
StrCat
MulF
PushD 8
Var
RefGet
PushD 30
Sub
PushD 8
Var
RefSet

:Label85
PushD 8
Var
RefGet
PushD 20
CmpGe
JumpFalse @Label86
PushString "2"
Var4
StrCat
MulF
PushD 8
Var
RefGet
PushD 20
Sub
PushD 8
Var
RefSet

:Label86
PushD 8
Var
RefGet
PushD 10
CmpGe
JumpFalse @Label87
PushString "1"
Var4
StrCat
MulF
PushD 8
Var
RefGet
PushD 10
Sub
PushD 8
Var
RefSet

:Label87
PushD 8
Var
RefGet
Switch 0:@Label88 1:@Label89 2:@Label90 3:@Label91 4:@Label92 5:@Label93 6:@Label94 7:@Label95 8:@Label96 9:@Label97
Jump @Label98

:Label88
PushString "0"
Var4
StrCat
MulF
Jump @Label99

:Label89
PushString "1"
Var4
StrCat
MulF
Jump @Label99

:Label90
PushString "2"
Var4
StrCat
MulF
Jump @Label99

:Label91
PushString "3"
Var4
StrCat
MulF
Jump @Label99

:Label92
PushString "4"
Var4
StrCat
MulF
Jump @Label99

:Label93
PushString "5"
Var4
StrCat
MulF
Jump @Label99

:Label94
PushString "6"
Var4
StrCat
MulF
Jump @Label99

:Label95
PushString "7"
Var4
StrCat
MulF
Jump @Label99

:Label96
PushString "8"
Var4
StrCat
MulF
Jump @Label99

:Label97
PushString "9"
Var4
StrCat
MulF
Jump @Label99

:Label98
PushString "Return_Recurring_Lost_Name_From_NameID: array position not in range 0 - 9"
CallNative SCRIPT_ASSERT 1 0

:Label99
PushD 4
Var4
ArrayExplode
FnEnd 1 4

:Label82
Call @Label100
PushD 4
Var3
ArrayImplode
Var3
CallNative GET_STRING_FROM_TEXT_FILE 1 1
Var7
RefSet
Var7
RefGet
PushString "Terry"
CallNative COMPARE_STRING 2 1
JumpFalse @Label101
PushD 1
FnEnd 1 1

:Label101
PushD 0
FnEnd 1 1

:Label81
Call @Label102
PushD 0
PushD 1
PushS 11084
GlobalVar
ArrayRef
RefGet
CallNative IS_CHAR_INJURED 1 1
IsZero
And
JumpFalse @Label103
PushD 1
Var3
RefSet

:Label103
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 16
Add
RefGet
Jump @Label104

:Label106
FnBegin 1 8
Var0
RefGet
Call @Label100
PushD 4
Var3
ArrayImplode
Var3
CallNative GET_STRING_FROM_TEXT_FILE 1 1
Var7
RefSet
Var7
RefGet
PushString "Clay"
CallNative COMPARE_STRING 2 1
JumpFalse @Label105
PushD 1
FnEnd 1 1

:Label105
PushD 0
FnEnd 1 1

:Label104
Call @Label106
PushD 1
PushD 1
PushS 11084
GlobalVar
ArrayRef
RefGet
CallNative IS_CHAR_INJURED 1 1
IsZero
And
JumpFalse @Label107
PushD 1
Var3
RefSet

:Label107
Var3
RefGet
JumpFalse @Label80
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 16
Add
RefGet
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 0
Add
RefSet
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 12
Add
RefGet
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 8
Add
RefSet
PushD 1
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 4
Add
RefSet
PushD -1
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 20
Add
RefSet
Var2
RefGet
PushD 1
Add
Var2
RefSet

:Label80
Var4
RefGet
PushD 1
Add
Var4
RefSet
Jump @Label108

:Label78
Var2
RefGet
FnEnd 0 1

:Label77
Call @Label109
PushD 10
Var
RefSet
Jump @Label110

:Label118
FnBegin 0 4
PushD 0
Var2
RefSet
PushD 0
Var3
RefSet

:Label113
Var3
RefGet
PushD 5
CmpLt
JumpFalse @Label111
Var3
RefGet
PushD 3
Push 0x9882
GlobalVar
ArrayRef
PushD 0
Add
RefGet
PushD -1
CmpEq
IsZero
JumpFalse @Label112
Var3
RefGet
PushD 3
Push 0x9882
GlobalVar
ArrayRef
PushD 0
Add
RefGet
Var2
RefGet
PushD 3
PushS 234
LocalVar
ArrayRef
PushD 0
Add
RefSet
Var3
RefGet
PushD 3
Push 0x9882
GlobalVar
ArrayRef
PushD 4
Add
RefGet
Var2
RefGet
PushD 3
PushS 234
LocalVar
ArrayRef
PushD 4
Add
RefSet
Var3
RefGet
PushD 3
Push 0x9882
GlobalVar
ArrayRef
PushD 8
Add
RefGet
Var2
RefGet
PushD 3
PushS 234
LocalVar
ArrayRef
PushD 8
Add
RefSet
Var2
RefGet
PushD 1
Add
Var2
RefSet

:Label112
Var3
RefGet
PushD 1
Add
Var3
RefSet
Jump @Label113

:Label111
Jump @Label114

:Label117
FnBegin 0 3
PushD 0
Var2
RefSet
PushD 0
Var2
RefSet

:Label116
Var2
RefGet
PushD 5
CmpLt
JumpFalse @Label115
PushD -1
Var2
RefGet
PushD 3
Push 0x9882
GlobalVar
ArrayRef
PushD 0
Add
RefSet
PushD 0
Var2
RefGet
PushD 3
Push 0x9882
GlobalVar
ArrayRef
PushD 4
Add
RefSet
PushD 0
Var2
RefGet
PushD 3
Push 0x9882
GlobalVar
ArrayRef
PushD 8
Add
RefSet
Var2
RefGet
PushD 1
Add
Var2
RefSet
Jump @Label116

:Label115
FnEnd 0 0

:Label114
Call @Label117
Var2
RefGet
FnEnd 0 1

:Label110
Call @Label118
PushD 9
Var
RefSet
PushD 1
Var4
RefSet
Jump @Label119

:Label121
FnBegin 0 4
PushD 0
Var2
RefSet
PushD 0
Var3
RefSet
Var2
Var3
CallNative GET_TIME_OF_DAY 2 0
Var2
RefGet
PushD 6
CmpLt
Var2
RefGet
PushD 20
CmpGe
Or
JumpFalse @Label120
PushD 0
FnEnd 0 1

:Label120
PushD 1
FnEnd 0 1

:Label119
Call @Label121
PushS 233
LocalVar
RefSet
PushD 12
PushD 1
PushS 15728
GlobalVar
ArrayRef
RefGet
PushS 270
LocalVar
RefSet
PushD 0
CallNative SETTIMERA 1 0

:Label76
PushD 0
Push 0x98BF
GlobalVar
RefSet
Var4
RefGet
JumpFalse @Label122
CallNative TIMERA 0 1
PushS 8000
CmpGt
PushD 11
PushD 1
PushS 15728
GlobalVar
ArrayRef
RefGet
And
JumpFalse @Label123
PushD 0
Var4
RefSet
PushD 0
Var6
RefSet
PushD 0
Var2
RefSet
PushD 0
Var3
RefSet
PushD 0
PushS 269
LocalVar
RefSet
PushD 0
PushD 10
Var
RefSet
PushD 0
PushD 9
Var
RefSet
Call @Label10
Call @Label14
PushF 0
PushD 0
PushD 1
PushS 11180
GlobalVar
ArrayRef
RefSet
PushF 0
PushD 1
PushD 1
PushS 11180
GlobalVar
ArrayRef
RefSet
PushD 0
Push 0x98BE
GlobalVar
RefSet
PushD 0
PushD 12
PushD 1
PushS 15728
GlobalVar
ArrayRef
RefSet
PushS 272
LocalVar
RefGet
NullObj
RefGet
CmpEq
IsZero
JumpFalse @Label124
PushD 0
CallNative WAIT 1 0
PushS 272
LocalVar
RefGet
CallNative RELEASE_TEXTURE 1 0

:Label124
NullObj
RefGet
PushS 271
LocalVar
RefSet
NullObj
RefGet
PushS 272
LocalVar
RefSet
Jump @Label122

:Label123
PushD 1
Var6
RefSet
PushF 1
PushS 227
LocalVar
RefSet
PushD 10
Var
RefGet
PushD 9
Var
RefGet
Jump @Label125

:Label190
FnBegin 2 6
PushS 270
LocalVar
RefGet
IsZero
JumpFalse @Label126
CallNative IS_HELP_MESSAGE_BEING_DISPLAYED 0 1
JumpFalse @Label126
FnEnd 2 0

:Label126
CallNative IS_SCREEN_FADING 0 1
JumpFalse @Label127
FnEnd 2 0

:Label127
Var0
RefGet
Var1
RefGet
Add
Var4
RefSet
PushD 0
Var5
RefSet
Var4
RefGet
PushD 0
CmpEq
JumpFalse @Label128
FnEnd 2 0

:Label128
Jump @Label129

:Label134
FnBegin 0 2
CallNative GET_IS_HIDEF 0 1
Jump @Label130

:Label132
FnBegin 0 4
CallNative IS_HELP_MESSAGE_BEING_DISPLAYED 0 1
JumpFalse @Label131
Var2
Var3
CallNative GET_HELP_MESSAGE_BOX_SIZE 2 0
Var3
RefGet
PushF 0
CmpGtF
JumpFalse @Label131
PushD 1
FnEnd 0 1

:Label131
PushD 0
FnEnd 0 1

:Label130
Call @Label132
Or
JumpFalse @Label133
PushD 6
LocalVar
RefGet
FnEnd 0 1

:Label133
PushD 7
LocalVar
RefGet
FnEnd 0 1

:Label129
Call @Label134
PushS 226
LocalVar
RefSet
PushS 270
LocalVar
RefGet
JumpFalse @Label135
PushS 226
LocalVar
RefGet
Jump @Label136

:Label138
FnBegin 0 4
Call @Label132
JumpFalse @Label137
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

:Label137
PushF 0
FnEnd 0 1

:Label136
Call @Label138
AddF
PushS 226
LocalVar
RefSet

:Label135
PushD 1
CallNative SET_SPRITES_DRAW_BEFORE_FADE 1 0
PushD 1
CallNative SET_TEXT_DRAW_BEFORE_FADE 1 0
Var4
RefGet
Jump @Label139

:Label150
FnBegin 1 5
PushD 2
CallNative SET_WIDESCREEN_FORMAT 1 0
PushS 233
LocalVar
RefGet
IsZero
JumpFalse @Label140
FnEnd 1 0

:Label140
PushS 271
LocalVar
RefGet
NullObj
RefGet
CmpEq
JumpFalse @Label141
PushString "hud"
CallNative GET_TXD 1 1
PushS 271
LocalVar
RefSet
PushS 271
LocalVar
RefGet
PushString "grime"
CallNative GET_TEXTURE 2 1
PushS 272
LocalVar
RefSet

:Label141
Var0
RefGet
ToF
PushF 0.027
MulF
PushF 0.013
AddF
Var3
RefSet
PushD 0
ToF
Var4
RefSet
Call @Label134
PushF 0.013
PushF 0.76
MulF
SubF
Var3
RefGet
PushF 2
DivF
AddF
Var4
RefSet
PushS 270
LocalVar
RefGet
JumpFalse @Label142
Var4
RefGet
Call @Label138
AddF
Var4
RefSet

:Label142
PushS 272
LocalVar
RefGet
Jump @Label143

:Label146
FnBegin 0 2
CallNative GET_IS_HIDEF 0 1
JumpFalse @Label144
PushD 4
LocalVar
RefGet
FnEnd 0 1

:Label144
CallNative GET_IS_WIDESCREEN 0 1
JumpFalse @Label145
PushD 5
LocalVar
RefGet
PushF 0.002
SubF
FnEnd 0 1

:Label145
PushD 5
LocalVar
RefGet
FnEnd 0 1

:Label143
Call @Label146
Jump @Label147

:Label149
FnBegin 0 2
CallNative GET_IS_HIDEF 0 1
CallNative GET_IS_WIDESCREEN 0 1
Or
JumpFalse @Label148
PushD 8
LocalVar
RefGet
FnEnd 0 1

:Label148
PushD 9
LocalVar
RefGet
FnEnd 0 1

:Label147
Call @Label149_NEW
PushD 2
ToF
DivF
AddF
Var4
RefGet
Call @Label149_NEW
Var3
RefGet
PushF 0
PushD 0
PushD 0
PushD 0
PushS 128
CallNative DRAW_SPRITE 10 0
FnEnd 1 0

:Label139
Call @Label150
PushD 0
PushS 232
LocalVar
RefSet
PushD 0
Var5
RefSet

:Label186
Var5
RefGet
Var0
RefGet
CmpLt
JumpFalse @Label151
Var5
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
Jump @Label152

:Label184
FnBegin 1 13
Var0
RefGet
PushD 0
Add
RefGet
Var3
RefSet
Var3
RefGet
Call @Label100_NEW
PushD 4
Var4
ArrayImplode
Jump @Label153

:Label154
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
FnEnd 0 0

:Label153
Call @Label154_NEW
PushD 7
PushS 228
LocalVar
PushS 229
LocalVar
PushS 230
LocalVar
PushS 231
LocalVar
CallNative GET_HUD_COLOUR 5 0
PushS 228
LocalVar
RefGet
PushS 229
LocalVar
RefGet
PushS 230
LocalVar
RefGet
PushS 231
LocalVar
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
Jump @Label155

:Label157
FnBegin 0 2
CallNative GET_IS_HIDEF 0 1
JumpFalse @Label156
PushF 0.076
FnEnd 0 1

:Label156
PushF 0.104
FnEnd 0 1

:Label155
Call @Label157
PushS 226
LocalVar
RefGet
Var4
CallNative DISPLAY_TEXT 3 0
PushS 227
LocalVar
RefGet
PushD 8
Var
RefSet
PushD 0
PushD 9
Var
RefSet
PushF 0
PushD 10
Var
RefSet
PushF 0
PushD 11
Var
RefSet
Var0
RefGet
PushD 4
Add
RefGet
JumpFalse @Label158
Var3
RefGet
Call @Label102
JumpFalse @Label159
PushD 0
PushD 1
PushS 11141
GlobalVar
ArrayRef
RefGet
PushD 10
Var
RefSet
PushF 100
PushD 11
Var
RefSet
PushD 0
PushD 1
PushS 11180
GlobalVar
ArrayRef
RefGet
PushD 8
Var
RefSet
Jump @Label160

:Label159
Var3
RefGet
Call @Label106
JumpFalse @Label161
PushD 1
PushD 1
PushS 11141
GlobalVar
ArrayRef
RefGet
PushD 10
Var
RefSet
PushF 100
PushD 11
Var
RefSet
PushD 1
PushD 1
PushS 11180
GlobalVar
ArrayRef
RefGet
PushD 8
Var
RefSet
Jump @Label160

:Label161
Var0
RefGet
PushD 8
Add
RefGet
PushD 9
Var
RefSet
PushD 9
Var
RefGet
CallNative TO_FLOAT 1 1
PushD 10
Var
RefSet
PushD 10
Var
RefGet
PushF 7
CmpGtF
JumpFalse @Label162
PushF 7
PushD 10
Var
RefSet
PushF 0
PushD 8
Var
RefSet

:Label162
PushF 7
PushD 11
Var
RefSet

:Label160
Call @Label146
Call @SET_LABEL_WIDTH
AddF
PushS 226
LocalVar
RefGet
PushF 0.013
PushF 0.203
PushF 0
PushD 11
Var
RefGet
PushD 10
Var
RefGet
PushD 8
Var
RefGet
PushS 232
LocalVar
RefGet
PushD 1
Jump @Label163

:Label178
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
JumpFalse @Label164
Var4
RefGet
Var5
RefGet
CmpEqF
JumpFalse @Label164
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

:Label164
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
JumpFalse @Label165
Var6
RefGet
Var4
RefGet
SubF
Var7
RefSet

:Label165
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
JumpFalse @Label166
PushD 14
Var
RefGet
PushF 7.5
PushF 0.0001
MulF
CmpLtF
JumpFalse @Label166
PushF 7.5
PushF 0.0001
MulF
PushD 14
Var
RefSet

:Label166
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
JumpFalse @Label167
PushD 8
Var
RefGet
Switch 0:@Label168 1:@Label169 2:@Label170
Jump @Label171

:Label168
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
Jump @Label172

:Label169
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
Jump @Label172

:Label170
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
Jump @Label172

:Label171
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
Jump @Label172

:Label172
Jump @Label173

:Label167
PushD 8
Var
RefGet
Switch 0:@Label174 1:@Label175 2:@Label176
Jump @Label177

:Label174
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
Jump @Label173

:Label175
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
Jump @Label173

:Label176
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
Jump @Label173

:Label177
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
Jump @Label173

:Label173
PushD 0
CallNative SET_SPRITES_DRAW_BEFORE_FADE 1 0
FnEnd 10 0

:Label163
Call @Label178
Jump @Label179

:Label158
Call @Label146
Call @SET_LABEL_WIDTH
AddF
PushF 0.203
PushF 2
DivF
SubF
PushD 12
Var
RefSet
Var3
RefGet
Jump @Label180

:Label182
FnBegin 1 8
Var0
RefGet
Call @Label100
PushD 4
Var3
ArrayImplode
Var3
CallNative GET_STRING_FROM_TEXT_FILE 1 1
Var7
RefSet
Var7
RefGet
PushString "Billy"
CallNative COMPARE_STRING 2 1
JumpFalse @Label181
PushD 1
FnEnd 1 1

:Label181
PushD 0
FnEnd 1 1

:Label180
Call @Label182
JumpFalse @Label183
Call @Label154_NEW
PushD 4
PushS 228
LocalVar
PushS 229
LocalVar
PushS 230
LocalVar
PushS 231
LocalVar
CallNative GET_HUD_COLOUR 5 0
PushS 228
LocalVar
RefGet
PushS 229
LocalVar
RefGet
PushS 230
LocalVar
RefGet
PushS 231
LocalVar
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
PushD 12
Var
RefGet
PushS 226
LocalVar
RefGet
PushString "RECLOST_BUST"
CallNative DISPLAY_TEXT 3 0
Jump @Label179

:Label183
Call @Label154_NEW
PushD 4
PushS 228
LocalVar
PushS 229
LocalVar
PushS 230
LocalVar
PushS 231
LocalVar
CallNative GET_HUD_COLOUR 5 0
PushS 228
LocalVar
RefGet
PushS 229
LocalVar
RefGet
PushS 230
LocalVar
RefGet
PushS 231
LocalVar
RefGet
CallNative SET_TEXT_COLOUR 4 0
PushF 0.207
PushF 0.329
CallNative SET_TEXT_SCALE 2 0
PushD 12
Var
RefGet
PushS 226
LocalVar
RefGet
PushString "RECLOST_DEC"
CallNative DISPLAY_TEXT 3 0

:Label179
FnEnd 1 0

:Label152
Call @Label184
PushS 226
LocalVar
RefGet
PushF 0.027
AddF
PushS 226
LocalVar
RefSet
PushS 232
LocalVar
RefGet
PushD 1
Add
PushS 232
LocalVar
RefSet
PushS 232
LocalVar
RefGet
PushD 4
CmpGe
JumpFalse @Label185
PushD 0
PushS 232
LocalVar
RefSet

:Label185
Var5
RefGet
PushD 1
Add
Var5
RefSet
Jump @Label186

:Label151
PushD 0
Var5
RefSet

:Label189
Var5
RefGet
Var1
RefGet
CmpLt
JumpFalse @Label187
Var5
RefGet
PushD 3
PushS 234
LocalVar
ArrayRef
Call @Label184
PushS 226
LocalVar
RefGet
PushF 0.027
AddF
PushS 226
LocalVar
RefSet
PushS 232
LocalVar
RefGet
PushD 1
Add
PushS 232
LocalVar
RefSet
PushS 232
LocalVar
RefGet
PushD 4
CmpGe
JumpFalse @Label188
PushD 0
PushS 232
LocalVar
RefSet

:Label188
Var5
RefGet
PushD 1
Add
Var5
RefSet
Jump @Label189

:Label187
PushD 0
CallNative SET_SPRITES_DRAW_BEFORE_FADE 1 0
PushD 0
CallNative SET_TEXT_DRAW_BEFORE_FADE 1 0
FnEnd 2 0

:Label125
Call @Label190
PushD 1
Push 0x98BF
GlobalVar
RefSet

:Label122
CallNative IS_USING_CONTROLLER 0 1
PushD 0
PushD 9
CallNative IS_BUTTON_JUST_PRESSED 2 1
And
CallNative IS_USING_CONTROLLER 0 1
IsZero
PushD 2
PushS 99
CallNative IS_CONTROL_JUST_PRESSED 2 1
And
Or
PushD 11
Var
RefSet
Var5
RefGet
IsZero
Var6
RefGet
IsZero
And
Push 0x98BE
GlobalVar
RefGet
And
PushS 11115
GlobalVar
RefGet
IsZero
And
JumpFalse @Label191
PushD 11
Var
RefGet
JumpFalse @Label192
PushD 1
Var5
RefSet
PushD 0
PushD 11
Var
RefSet
Call @Label121
PushS 233
LocalVar
RefSet
PushD 0
CallNative SETTIMERA 1 0

:Label192
Jump @Label193

:Label191
Var6
RefGet
JumpFalse @Label193
PushD 0
Var5
RefSet

:Label193
Var5
RefGet
JumpFalse @Label194
PushD 0
Var7
RefSet
Jump @Label195

:Label196
FnBegin 0 3
CallNative GET_PLAYER_ID 0 1
CallNative CONVERT_INT_TO_PLAYERINDEX 1 1
Var2
CallNative GET_PLAYER_CHAR 2 0
Var2
RefGet
FnEnd 0 1

:Label195
Call @Label196
CallNative IS_CHAR_DEAD 1 1
IsZero
JumpFalse @Label197
Jump @Label198

:Label199
FnBegin 0 2
CallNative GET_PLAYER_ID 0 1
CallNative CONVERT_INT_TO_PLAYERINDEX 1 1
FnEnd 0 1

:Label198
Call @Label199
CallNative IS_PLAYER_CONTROL_ON 1 1
JumpFalse @Label197
PushD 1
Var7
RefSet

:Label197
CallNative TIMERA 0 1
PushS 5000
CmpGt
PushD 11
Var
RefGet
Or
CallNative IS_MINIGAME_IN_PROGRESS 0 1
Or
Jump @Label200

:Label202
FnBegin 0 2
PushS 558
GlobalVar
RefGet
PushD 9
CmpEq
JumpFalse @Label201
PushD 0
FnEnd 0 1

:Label201
PushD 1
FnEnd 0 1

:Label200
Call @Label202
Or
Call @Label199
CallNative IS_PLAYER_PLAYING 1 1
IsZero
Or
Var7
RefGet
IsZero
Or
Push 0x98BE
GlobalVar
RefGet
IsZero
Or
JumpFalse @Label203
PushD 0
PushD 10
Var
RefSet
PushD 0
PushD 9
Var
RefSet
PushD 0
Var5
RefSet
PushD 0
PushD 11
Var
RefSet
Call @Label10
Call @Label14
PushF 0
PushD 0
PushD 1
PushS 11180
GlobalVar
ArrayRef
RefSet
PushF 0
PushD 1
PushD 1
PushS 11180
GlobalVar
ArrayRef
RefSet
PushS 272
LocalVar
RefGet
NullObj
RefGet
CmpEq
IsZero
JumpFalse @Label204
PushD 0
CallNative WAIT 1 0
PushS 272
LocalVar
RefGet
CallNative RELEASE_TEXTURE 1 0

:Label204
NullObj
RefGet
PushS 271
LocalVar
RefSet
NullObj
RefGet
PushS 272
LocalVar
RefSet
Jump @Label194

:Label203
PushF 0
PushS 227
LocalVar
RefSet
Jump @Label205

:Label212
FnBegin 0 5
PushD 0
Var2
RefSet
PushD 0
Var3
RefSet
PushD 0
Var4
RefSet

:Label211
Var4
RefGet
PushD 6
CmpLt
JumpFalse @Label206
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 4
Add
RefGet
JumpFalse @Label207
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 16
Add
RefGet
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 0
Add
RefSet
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 0
Add
RefGet
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 4
Add
RefSet
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 12
Add
RefGet
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 8
Add
RefSet
Var2
RefGet
PushD 1
Add
Var2
RefSet
Jump @Label208

:Label207
PushS 269
LocalVar
RefGet
JumpFalse @Label208
PushD 0
Var3
RefSet
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 16
Add
RefGet
Call @Label102
PushD 0
PushD 1
PushS 11084
GlobalVar
ArrayRef
RefGet
CallNative IS_CHAR_INJURED 1 1
IsZero
And
JumpFalse @Label209
PushD 1
Var3
RefSet

:Label209
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 16
Add
RefGet
Call @Label106
PushD 1
PushD 1
PushS 11084
GlobalVar
ArrayRef
RefGet
CallNative IS_CHAR_INJURED 1 1
IsZero
And
JumpFalse @Label210
PushD 1
Var3
RefSet

:Label210
Var3
RefGet
JumpFalse @Label208
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 16
Add
RefGet
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 0
Add
RefSet
PushD 1
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 4
Add
RefSet
Var4
RefGet
PushD 7
Push 0x9892
GlobalVar
ArrayRef
PushD 12
Add
RefGet
Var2
RefGet
PushD 3
PushS 250
LocalVar
ArrayRef
PushD 8
Add
RefSet
Var2
RefGet
PushD 1
Add
Var2
RefSet

:Label208
Var4
RefGet
PushD 1
Add
Var4
RefSet
Jump @Label211

:Label206
Var2
RefGet
FnEnd 0 1

:Label205
Call @Label212
PushD 10
Var
RefSet
Jump @Label213

:Label217
FnBegin 0 4
PushD 0
Var2
RefSet
PushD 0
Var3
RefSet

:Label216
Var2
RefGet
PushD 13
CmpLt
JumpFalse @Label214
Var2
RefGet
PushD 7
Push 0x9819
GlobalVar
ArrayRef
PushD 4
Add
RefGet
JumpFalse @Label215
Var2
RefGet
PushD 7
Push 0x9819
GlobalVar
ArrayRef
PushD 16
Add
RefGet
Var3
RefGet
PushD 3
PushS 234
LocalVar
ArrayRef
PushD 0
Add
RefSet
Var2
RefGet
PushD 7
Push 0x9819
GlobalVar
ArrayRef
PushD 0
Add
RefGet
Var3
RefGet
PushD 3
PushS 234
LocalVar
ArrayRef
PushD 4
Add
RefSet
Var2
RefGet
PushD 7
Push 0x9819
GlobalVar
ArrayRef
PushD 12
Add
RefGet
Var3
RefGet
PushD 3
PushS 234
LocalVar
ArrayRef
PushD 8
Add
RefSet
Var3
RefGet
PushD 1
Add
Var3
RefSet

:Label215
Var2
RefGet
PushD 1
Add
Var2
RefSet
Jump @Label216

:Label214
Var3
RefGet
FnEnd 0 1

:Label213
Call @Label217
PushD 9
Var
RefSet
PushD 0
PushS 270
LocalVar
RefSet
PushD 10
Var
RefGet
PushD 9
Var
RefGet
Call @Label190
PushD 10
Var
RefGet
PushD 9
Var
RefGet
Add
PushD 0
CmpGt
JumpFalse @Label218
PushD 1
Push 0x98BF
GlobalVar
RefSet
Jump @Label194

:Label218
PushD 0
Var5
RefSet
PushD 0
CallNative SETTIMERA 1 0

:Label194
PushD 0
CallNative WAIT 1 0
Jump @Label219

:Label1
FnEnd 0 0


//==================================================
// ADD FOR GTAIV.IV.JapaneseFix
//==================================================

//------------------------------
// SET_TEXT_FONT
//------------------------------

:Label154_NEW
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
JumpFalse @Label154_NEW_01
PushD 2
CallNative SET_TEXT_FONT 1 0
:Label154_NEW_01
FnEnd 0 0


//------------------------------
// SET_GANG_MEMBER_LABEL_WIDTH
//------------------------------

:SET_LABEL_WIDTH
FnBegin 0 2
CallNative IS_JAPANESE_VERSION 0 1
JumpFalse @SET_LABEL_WIDTH_01
PushF 0.205
FnEnd 0 1

:SET_LABEL_WIDTH_01
PushF 0.175
FnEnd 0 1


//------------------------------
// SET_GANG_MEMBER_BG_WIDTH
//------------------------------

:Label149_NEW
FnBegin 0 2
CallNative IS_JAPANESE_VERSION 0 1
JumpFalse @Label149_NEW_01
CallNative GET_IS_HIDEF 0 1
CallNative GET_IS_WIDESCREEN 0 1
Or
JumpFalse @Label149_NEW_02
PushF 0.322
FnEnd 0 1

:Label149_NEW_02
PushF 0.319
FnEnd 0 1

:Label149_NEW_01
CallNative GET_IS_HIDEF 0 1
CallNative GET_IS_WIDESCREEN 0 1
Or
JumpFalse @Label149_NEW_03
PushD 8
LocalVar
RefGet
FnEnd 0 1

:Label149_NEW_03
PushD 9
LocalVar
RefGet
FnEnd 0 1


//------------------------------
// SET_GANG_MEMBER_LABEL
//------------------------------

:Label100_NEW
FnBegin 1 9
PushD 30
Var3
RefSet
PushString "RECLOST_"
Var4
StrCpy
MulF
Var0
RefGet
PushD 0
CmpLt
Var0
RefGet
Var3
RefGet
CmpGe
Or
JumpFalse @Label83_NEW
PushString "Return_Recurring_Lost_Name_From_NameID: NameID out of range"
CallNative SCRIPT_ASSERT 1 0
PushD 4
Var4
ArrayExplode
FnEnd 1 4

:Label83_NEW
Var0
RefGet
PushD 8
Var
RefSet
PushD 8
Var
RefGet
PushS 40
CmpGe
JumpFalse @Label84_NEW
PushString "Return_Recurring_Lost_Name_From_NameID: more than 40 Lost Member names?"
CallNative SCRIPT_ASSERT 1 0
PushD 4
Var4
ArrayExplode
FnEnd 1 4

:Label84_NEW
PushD 8
Var
RefGet
PushD 30
CmpGe
JumpFalse @Label85_NEW
PushString "3"
Var4
StrCat
MulF
PushD 8
Var
RefGet
PushD 30
Sub
PushD 8
Var
RefSet

:Label85_NEW
PushD 8
Var
RefGet
PushD 20
CmpGe
JumpFalse @Label86_NEW
PushString "2"
Var4
StrCat
MulF
PushD 8
Var
RefGet
PushD 20
Sub
PushD 8
Var
RefSet

:Label86_NEW
PushD 8
Var
RefGet
PushD 10
CmpGe
JumpFalse @Label87_NEW
PushString "1"
Var4
StrCat
MulF
PushD 8
Var
RefGet
PushD 10
Sub
PushD 8
Var
RefSet

:Label87_NEW
PushD 8
Var
RefGet
Switch 0:@Label88_NEW 1:@Label89_NEW 2:@Label90_NEW 3:@Label91_NEW 4:@Label92_NEW 5:@Label93_NEW 6:@Label94_NEW 7:@Label95_NEW 8:@Label96_NEW 9:@Label97_NEW
Jump @Label98_NEW

:Label88_NEW
PushString "0"
Var4
StrCat
MulF
Jump @Label99_NEW

:Label89_NEW
PushString "1"
Var4
StrCat
MulF
Jump @Label99_NEW

:Label90_NEW
PushString "2"
Var4
StrCat
MulF
Jump @Label99_NEW

:Label91_NEW
PushString "3"
Var4
StrCat
MulF
Jump @Label99_NEW

:Label92_NEW
PushString "4"
Var4
StrCat
MulF
Jump @Label99_NEW

:Label93_NEW
PushString "5"
Var4
StrCat
MulF
Jump @Label99_NEW

:Label94_NEW
PushString "6"
Var4
StrCat
MulF
Jump @Label99_NEW

:Label95_NEW
PushString "7"
Var4
StrCat
MulF
Jump @Label99_NEW

:Label96_NEW
PushString "8"
Var4
StrCat
MulF
Jump @Label99_NEW

:Label97_NEW
PushString "9"
Var4
StrCat
MulF
Jump @Label99_NEW

:Label98_NEW
PushString "Return_Recurring_Lost_Name_From_NameID: array position not in range 0 - 9"
CallNative SCRIPT_ASSERT 1 0

:Label99_NEW
CallNative IS_JAPANESE_VERSION 0 1
JumpFalse @Label100_NEW_01
Var0
RefGet
PushD 24
CmpEq
Var0
RefGet
PushD 26
CmpEq
Or
Var0
RefGet
PushD 27
CmpEq
Or
JumpFalse @Label100_NEW_01
PushString "_JP"
Var4
StrCat
MulF

:Label100_NEW_01
PushD 4
Var4
ArrayExplode
FnEnd 1 4