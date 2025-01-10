FnBegin 0 12
PushF 86
PushD 0
LocalVar
RefSet
PushF 274
PushD 1
LocalVar
RefSet
PushD 0
PushD 24
LocalVar
RefSet
PushS 946
GlobalVar
RefGet
JumpFalse @Label1
PushD 6
PushD 6
LocalVar
RefSet
Jump @Label2

:Label1
PushD 3
PushD 6
LocalVar
RefSet

:Label2
PushD 0
PushS 43
LocalVar
RefSet
PushD 0
CallNative REGISTER_SCRIPT_WITH_AUDIO 1 0
CallNative GET_CURRENT_LANGUAGE 0 1
PushD 25
LocalVar
RefSet
PushString "EMAILE"
PushD 4
LocalVar
StrCpy
CmpEq
CallNative GET_CURRENT_EPISODE 0 1
PushD 4
LocalVar
StrCatI
CmpEq
PushD 4
LocalVar
PushD 1
CallNative LOAD_ADDITIONAL_TEXT 2 0
PushD 0
CallNative ALLOW_THIS_SCRIPT_TO_BE_PAUSED 1 0
PushString "E"
PushD 2
LocalVar
StrCpy
CmpEq
CallNative GET_CURRENT_EPISODE 0 1
PushD 2
LocalVar
StrCatI
CmpEq
PushString "EML"
PushD 4
LocalVar
StrCpy
CmpEq
CallNative GET_CURRENT_EPISODE 0 1
PushD 4
LocalVar
StrCatI
CmpEq
PushD -1
PushD 9
LocalVar
RefSet
PushS 860
GlobalVar
PushS 40
Add
RefGet
PushD -1
CmpEq
JumpFalse @Label3
Jump @Label4

:Label9
FnBegin 0 4
PushD 0
Var3
RefSet
PushD 0
Var2
RefSet

:Label8
Var2
RefGet
PushS 39
CmpLe
JumpFalse @Label5
PushD 0
PushD 1
Var2
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 0
Add
ArrayRef
RefGet
PushD -1
CmpNe
JumpFalse @Label6
Var3
RefGet
PushD 1
Add
Var3
RefSet
Jump @Label7

:Label6
PushS 40
Var2
RefSet

:Label7
Var2
RefGet
PushD 1
Add
Var2
RefSet
Jump @Label8

:Label5
Var3
RefGet
FnEnd 0 1

:Label4
Call @Label9
PushD 13
LocalVar
RefSet
Jump @Label10

:Label3
Jump @Label11

:Label16
FnBegin 0 4
PushD 0
Var3
RefSet
PushD 0
Var2
RefSet

:Label15
Var2
RefGet
PushD 2
CmpLe
JumpFalse @Label12
PushD 0
PushD 1
Var2
RefGet
PushD 10
PushS 1372
GlobalVar
ArrayRef
PushD 0
Add
ArrayRef
RefGet
PushD -1
CmpNe
JumpFalse @Label13
Var3
RefGet
PushD 1
Add
Var3
RefSet
Jump @Label14

:Label13
PushD 3
Var2
RefSet

:Label14
Var2
RefGet
PushD 1
Add
Var2
RefSet
Jump @Label15

:Label12
Var3
RefGet
FnEnd 0 1

:Label11
Call @Label16
PushD 13
LocalVar
RefSet

:Label10
PushD 13
LocalVar
RefGet
PushD 0
CmpNe
JumpFalse @Label17
PushD 13
LocalVar
RefGet
PushD 1
Sub
PushD 12
LocalVar
RefSet
Jump @Label18

:Label17
PushD 0
PushD 12
LocalVar
RefSet

:Label18
PushD 0
PushS 860
GlobalVar
PushD 8
Add
RefSet
PushD 0
PushS 860
GlobalVar
PushD 12
Add
RefSet
PushD 0
Jump @Label19

:Label146
FnBegin 1 3
CallNative DELETE_ALL_HTML_SCRIPT_OBJECTS 0 0
Jump @Label20

:Label55
FnBegin 0 6
PushS 860
GlobalVar
PushS 40
Add
RefGet
PushD -1
CmpEq
JumpFalse @Label21
Call @Label9
PushD 13
LocalVar
RefSet
Jump @Label22

:Label42
FnBegin 0 4
PushD 0
Var3
RefSet
PushD 0
Var2
RefSet

:Label41
Var2
RefGet
PushS 39
CmpLe
JumpFalse @Label23
PushD 4
PushD 10
Var2
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Jump @Label24

:Label39
FnBegin 11 13
Var0
RefGet
Switch 0:@Label25 1:@Label26 2:@Label27 3:@Label28 4:@Label29 5:@Label30 6:@Label31 8:@Label32 9:@Label33 B:@Label34 C:@Label35 D:@Label36 E:@Label37
Jump @Label38

:Label25
PushD 1
PushD 1
Var1
PushD 0
Add
ArrayRef
RefGet
PushD 14
PushD 23
CallNative GET_BITS_IN_RANGE 3 1
FnEnd 11 1
Jump @Label38

:Label26
PushD 0
PushD 1
Var1
PushD 0
Add
ArrayRef
RefGet
PushD 0
PushD 13
CallNative GET_BITS_IN_RANGE 3 1
FnEnd 11 1
Jump @Label38

:Label27
PushD 0
PushD 1
Var1
PushD 0
Add
ArrayRef
RefGet
PushD 14
PushD 27
CallNative GET_BITS_IN_RANGE 3 1
FnEnd 11 1
Jump @Label38

:Label28
PushD 1
PushD 1
Var1
PushD 0
Add
ArrayRef
RefGet
PushD 0
PushD 13
CallNative GET_BITS_IN_RANGE 3 1
FnEnd 11 1
Jump @Label38

:Label29
PushD 2
PushD 1
Var1
PushD 0
Add
ArrayRef
RefGet
PushD 22
PushD 25
CallNative GET_BITS_IN_RANGE 3 1
FnEnd 11 1
Jump @Label38

:Label30
PushD 0
PushD 1
Var1
PushD 0
Add
ArrayRef
RefGet
PushD 28
PushD 31
CallNative GET_BITS_IN_RANGE 3 1
FnEnd 11 1
Jump @Label38

:Label31
PushD 2
PushD 1
Var1
PushD 0
Add
ArrayRef
RefGet
PushD 0
PushD 15
CallNative GET_BITS_IN_RANGE 3 1
FnEnd 11 1
Jump @Label38

:Label32
PushD 2
PushD 1
Var1
PushD 0
Add
ArrayRef
RefGet
PushD 16
PushD 18
CallNative GET_BITS_IN_RANGE 3 1
FnEnd 11 1
Jump @Label38

:Label33
PushD 2
PushD 1
Var1
PushD 0
Add
ArrayRef
RefGet
PushD 19
PushD 21
CallNative GET_BITS_IN_RANGE 3 1
FnEnd 11 1
Jump @Label38

:Label34
PushD 1
PushD 1
Var1
PushD 0
Add
ArrayRef
RefGet
PushD 27
PushD 31
CallNative GET_BITS_IN_RANGE 3 1
FnEnd 11 1
Jump @Label38

:Label35
PushD 2
PushD 1
Var1
PushD 0
Add
ArrayRef
RefGet
PushD 29
PushD 31
CallNative GET_BITS_IN_RANGE 3 1
FnEnd 11 1
Jump @Label38

:Label36
PushD 1
PushD 1
Var1
PushD 0
Add
ArrayRef
RefGet
PushD 24
PushD 26
CallNative GET_BITS_IN_RANGE 3 1
FnEnd 11 1
Jump @Label38

:Label37
PushD 2
PushD 1
Var1
PushD 0
Add
ArrayRef
RefGet
PushD 26
PushD 28
CallNative GET_BITS_IN_RANGE 3 1
FnEnd 11 1
Jump @Label38

:Label38
PushD -1
FnEnd 11 1

:Label24
Call @Label39
PushD 0
CmpEq
JumpFalse @Label40
Var3
RefGet
PushD 1
Add
Var3
RefSet

:Label40
Var2
RefGet
PushD 1
Add
Var2
RefSet
Jump @Label41

:Label23
Var3
RefGet
FnEnd 0 1

:Label22
Call @Label42
PushD 14
LocalVar
RefSet
Jump @Label43

:Label21
Call @Label16
PushD 13
LocalVar
RefSet
Jump @Label44

:Label48
FnBegin 0 4
PushD 0
Var3
RefSet
PushD 0
Var2
RefSet

:Label47
Var2
RefGet
PushD 2
CmpLe
JumpFalse @Label45
PushD 4
PushD 10
Var2
RefGet
PushD 10
PushS 1372
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushD 0
CmpEq
JumpFalse @Label46
Var3
RefGet
PushD 1
Add
Var3
RefSet

:Label46
Var2
RefGet
PushD 1
Add
Var2
RefSet
Jump @Label47

:Label45
Var3
RefGet
FnEnd 0 1

:Label44
Call @Label48
PushD 14
LocalVar
RefSet

:Label43
PushString "emailBottomInfo"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 10
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushD 10
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<td width="128" ><span class="title_text">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 0
PushD 1
PushS 39
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 0
Add
ArrayRef
RefGet
PushD -1
CmpNe
JumpFalse @Label49
PushString "INBOX"
Var2
StrCpy
MulF
PushD 2
LocalVar
Var2
StrCat
MulF
PushString "_FULL"
Var2
StrCat
MulF
PushD 10
PushD 1
PushD 26
LocalVar
ArrayRef
Var2
PushD -1
Jump @Label50

:Label53
FnBegin 3 9
Var2
RefGet
Var5
IntToStr
MulF
Var2
RefGet
PushD -1
CmpNe
JumpFalse @Label51
Var0
RefGet
RefGet
PushString "<a href=""
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
Var5
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
PushString "">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label51
Var0
RefGet
RefGet
PushString "<text name=""
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
Var1
RefGet
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
PushString "" />"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var2
RefGet
PushD -1
CmpNe
JumpFalse @Label52
Var0
RefGet
RefGet
PushString "</a>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label52
FnEnd 3 0

:Label50
Call @Label53
Jump @Label54

:Label49
PushD 13
LocalVar
RefGet
Var2
IntToStr
MulF
PushD 10
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
Var2
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "&nbsp;"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushString "INBOX"
Var2
StrCpy
MulF
PushD 2
LocalVar
Var2
StrCat
MulF
PushString "_EMAILS"
Var2
StrCat
MulF
PushD 10
PushD 1
PushD 26
LocalVar
ArrayRef
Var2
PushD -1
Call @Label53

:Label54
PushD 10
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</span></td>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 14
LocalVar
RefGet
Var2
IntToStr
MulF
PushD 10
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<td width="128" ><span class="title_text">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
Var2
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "&nbsp;"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushString "INBOX"
Var2
StrCpy
MulF
PushD 2
LocalVar
Var2
StrCat
MulF
PushString "_UNREAD"
Var2
StrCat
MulF
PushD 10
PushD 1
PushD 26
LocalVar
ArrayRef
Var2
PushD -1
Call @Label53
PushD 10
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</span></td>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
FnEnd 0 0

:Label20
Call @Label55
PushD 9
LocalVar
RefGet
PushD -1
CmpNe
JumpFalse @Label56
PushS 860
GlobalVar
PushS 40
Add
RefGet
PushD -1
CmpEq
JumpFalse @Label57
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Jump @Label58

:Label102
FnBegin 10 34
PushString "emailMainWindow"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushString "emailMainWindow2"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 8
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushString "emailMainWindow3"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 9
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushD 24
LocalVar
RefGet
Switch 0:@Label59 2:@Label59 1:@Label60
Jump @Label61

:Label59
PushD 9
LocalVar
RefGet
PushD -1
CmpNe
JumpFalse @Label62
PushD 24
LocalVar
RefGet
Switch 0:@Label63 2:@Label64
Jump @Label65

:Label63
PushD 2
PushD 2
LocalVar
ArrayExplode
PushD 2
PushD 4
PushD 16
Var
StrVarCpy
PushD 2
PushD 2
LocalVar
ArrayExplode
PushD 2
PushD 4
PushD 20
Var
StrVarCpy
PushD 5
PushD 10
Var0
ArrayExplode
Call @Label39
Switch 4:@Label66 5:@Label67
Jump @Label68

:Label66
PushString "INTPP"
PushD 16
Var
StrCat
MulF
PushString "OUTPP"
PushD 20
Var
StrCat
MulF
Jump @Label69

:Label67
PushString "INTPF"
PushD 16
Var
StrCat
MulF
PushString "OUTPF"
PushD 20
Var
StrCat
MulF
Jump @Label69

:Label68
PushString "INTN"
PushD 16
Var
StrCat
MulF
PushString "OUTN"
PushD 20
Var
StrCat
MulF

:Label69
PushD 12
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushS 32
Var
RefSet
PushD 14
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushS 33
Var
RefSet
PushD 12
Var
PushD 16
Var
PushD 15
LocalVar
RefGet
PushD 8
PushD 10
Var0
ArrayExplode
Call @Label39
PushD -1
Jump @Label70

:Label72
FnBegin 5 7
Var1
RefGet
Var0
RefGet
StrCpy
MulF
Var2
RefGet
PushD -1
CmpNe
JumpFalse @Label71
PushString "_"
Var0
RefGet
StrCat
MulF
Var2
RefGet
Var0
RefGet
StrCatI
MulF
Var3
RefGet
PushD -1
CmpNe
JumpFalse @Label71
PushString "_"
Var0
RefGet
StrCat
MulF
Var3
RefGet
Var0
RefGet
StrCatI
MulF
Var4
RefGet
PushD -1
CmpNe
JumpFalse @Label71
PushString "_"
Var0
RefGet
StrCat
MulF
Var4
RefGet
Var0
RefGet
StrCatI
MulF

:Label71
FnEnd 5 0

:Label70
Call @Label72
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
PushD 12
Var
Jump @Label73

:Label76
FnBegin 2 4
CallNative IS_JAPANESE_VERSION 0 1
IsZero
JumpFalse @Label74
Var0
RefGet
RefGet
Var1
RefGet
CallNative GET_STRING_FROM_TEXT_FILE 1 1
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Jump @Label75

:Label74
Var0
RefGet
RefGet
Var1
RefGet
CallNative ADD_STRING_TO_HTML_SCRIPT_OBJECT 2 0

:Label75
FnEnd 2 0

:Label73
Call @Label76
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<br/><br/>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushS 32
Var
RefGet
PushD 1
CmpEq
JumpFalse @Label77
PushD 11
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushD 12
Var
IntToStr
MulF
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushD 12
Var
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString ":00 "
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "&nbsp;"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Jump @Label78

:Label77
PushS 33
Var
RefGet
PushD 1
CmpEq
JumpFalse @Label78
PushD 12
Var
PushD 2
LocalVar
PushString "EMAIL_DAY"
PushD 13
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushD -1
Jump @Label79

:Label81
FnBegin 5 7
Var1
RefGet
Var0
RefGet
StrCpy
MulF
Var2
RefGet
Var0
RefGet
StrCat
MulF
Var3
RefGet
PushD -1
CmpNe
JumpFalse @Label80
PushString "_"
Var0
RefGet
StrCat
MulF
Var3
RefGet
Var0
RefGet
StrCatI
MulF
Var4
RefGet
PushD -1
CmpNe
JumpFalse @Label80
PushString "_"
Var0
RefGet
StrCat
MulF
Var4
RefGet
Var0
RefGet
StrCatI
MulF

:Label80
FnEnd 5 0

:Label79
Call @Label81
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
PushD 12
Var
PushD -1
Call @Label53
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "."
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "&nbsp;"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label78
PushD 12
Var
PushD 2
LocalVar
PushString "M"
PushD 15
LocalVar
RefGet
PushD 1
PushD 10
Var0
ArrayExplode
Call @Label39
Call @Label81
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
PushD 12
Var
Call @Label76
PushS 32
Var
RefGet
PushD 2
CmpEq
JumpFalse @Label82
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "&nbsp;"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 11
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushD 12
Var
IntToStr
MulF
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushD 12
Var
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString ":00"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Jump @Label83

:Label82
PushS 33
Var
RefGet
PushD 2
CmpEq
JumpFalse @Label83
PushD 12
Var
PushString "EMAIL_DAY"
PushD 13
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushD -1
PushD -1
Call @Label72
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
PushD 12
Var
PushD -1
Call @Label53
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "."
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label83
PushD 10
LocalVar
RefGet
PushD 1
CmpGt
JumpFalse @Label84
PushD 8
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "&nbsp;"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 12
Var
PushD 2
LocalVar
PushString "M"
PushD 15
LocalVar
RefGet
PushD 2
PushD 10
Var0
ArrayExplode
Call @Label39
Call @Label81
PushD 8
PushD 1
PushD 26
LocalVar
ArrayRef
PushD 12
Var
Call @Label76
PushS 32
Var
RefGet
PushD 3
CmpEq
JumpFalse @Label85
PushD 8
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "&nbsp;"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 11
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushD 12
Var
IntToStr
MulF
PushD 8
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushD 12
Var
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 8
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString ":00"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Jump @Label86

:Label85
PushS 33
Var
RefGet
PushD 3
CmpEq
JumpFalse @Label86
PushD 12
Var
PushString "EMAIL_DAY"
PushD 13
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushD -1
PushD -1
Call @Label72
PushD 8
PushD 1
PushD 26
LocalVar
ArrayRef
PushD 12
Var
PushD -1
Call @Label53
PushD 8
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "."
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label86
PushD 10
LocalVar
RefGet
PushD 2
CmpGt
JumpFalse @Label84
PushD 9
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "&nbsp;"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 12
Var
PushD 2
LocalVar
PushString "M"
PushD 15
LocalVar
RefGet
PushD 3
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
Call @Label81
PushD 9
PushD 1
PushD 26
LocalVar
ArrayRef
PushD 12
Var
Call @Label76
PushS 32
Var
RefGet
PushD 4
CmpEq
JumpFalse @Label87
PushD 9
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "&nbsp;"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 11
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushD 12
Var
IntToStr
MulF
PushD 9
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushD 12
Var
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 9
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString ":00"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Jump @Label84

:Label87
PushS 33
Var
RefGet
PushD 4
CmpEq
JumpFalse @Label84
PushD 12
Var
PushString "EMAIL_DAY"
PushD 13
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushD -1
PushD -1
Call @Label72
PushD 9
PushD 1
PushD 26
LocalVar
ArrayRef
PushD 12
Var
PushD -1
Call @Label53
PushD 9
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "."
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label84
PushD 9
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<br/><br/>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 12
Var
PushD 20
Var
PushD 15
LocalVar
RefGet
PushD 9
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushD -1
Call @Label72
PushD 9
PushD 1
PushD 26
LocalVar
ArrayRef
PushD 12
Var
Call @Label76
PushD 9
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<br /><br />"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 12
Var
PushD 2
LocalVar
PushString "_SIGNOFF"
PushD 15
LocalVar
RefGet
PushD -1
Call @Label81
PushD 9
PushD 1
PushD 26
LocalVar
ArrayRef
PushD 12
Var
PushD -1
Call @Label53
Jump @Label65

:Label64
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<table width="444" height="200" border="0" cellpadding="0" cellspacing="0">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<td width="444" height="200" align="center" valign="middle">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
PushS 45
LocalVar
PushS 50
LocalVar
PushS 320
PushS 200
PushD -1
Jump @Label88

:Label91
FnBegin 6 12
Var5
RefGet
PushD 8
Var
IntToStr
MulF
Var5
RefGet
PushD -1
CmpNe
JumpFalse @Label89
Var0
RefGet
RefGet
PushString "<a href=""
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
PushD 8
Var
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
PushString "">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label89
Var0
RefGet
RefGet
PushString "<img txd=""
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
Var1
RefGet
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
PushString "" src=""
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
Var2
RefGet
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
PushString "" width=""
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var3
RefGet
PushD 8
Var
IntToStr
MulF
Var0
RefGet
RefGet
PushD 8
Var
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
PushString "" height=""
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var4
RefGet
PushD 8
Var
IntToStr
MulF
Var0
RefGet
RefGet
PushD 8
Var
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
PushString "" />"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var5
RefGet
PushD -1
CmpNe
JumpFalse @Label90
Var0
RefGet
RefGet
PushString "</a>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label90
FnEnd 6 0

:Label88
Call @Label91
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</td></table>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Jump @Label65

:Label65
Jump @Label92

:Label62
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<table width="444" height="200" border="0" cellpadding="0" cellspacing="0">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<td width="444" height="200" align="center" valign="middle">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<img src="imgs/pageFirstLoad.jpg" width="444" height="200" />"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</td></table>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label92
Jump @Label61

:Label60
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<table width="444" height="200" border="0" cellpadding="0" cellspacing="0">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<td width="444" height="200" width="444" align="left" valign="middle">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 22
LocalVar
RefGet
PushD 1
Add
PushD 22
LocalVar
RefSet
PushD 22
LocalVar
RefGet
PushD 23
LocalVar
RefGet
CmpGt
PushS 860
GlobalVar
PushS 312
Add
RefGet
Or
PushS 860
GlobalVar
PushS 320
Add
RefGet
Or
JumpFalse @Label93
PushD 23
LocalVar
RefGet
PushD 22
LocalVar
RefSet
PushD 1
PushD 16
LocalVar
RefSet
Jump @Label94

:Label93
PushD -1
PushString "PC_EMAIL_REPLY_KEY_PRESS"
CallNative PLAY_SOUND_FRONTEND 2 0

:Label94
CallNative IS_JAPANESE_VERSION 0 1
IsZero
JumpFalse @Label94_01
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushD 18
LocalVar
PushD 22
LocalVar
RefGet
CallNative GET_FIRST_N_CHARACTERS_OF_STRING 2 1
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Jump @Label94_02

:Label94_01
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushD 18
LocalVar
PushD 22
LocalVar
RefGet
CallNative ADD_FIRST_N_CHARACTERS_OF_STRING_TO_HTML_SCRIPT_OBJECT 3 0

:Label94_02
PushD 16
LocalVar
RefGet
JumpFalse @Label95
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<br /><br />"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 17
LocalVar
RefGet
JumpFalse @Label96
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
PushString "posIcon.jpg"
PushD -1
PushD 16
PushD 16
Jump @Label97

:Label100
FnBegin 5 11
Var2
RefGet
Var7
IntToStr
MulF
Var2
RefGet
PushD -1
CmpNe
JumpFalse @Label98
Var0
RefGet
RefGet
PushString "<a href=""
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
Var7
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
PushString "">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label98
Var0
RefGet
RefGet
PushString "<img src="imgs/"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
Var1
RefGet
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
PushString "" width=""
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var3
RefGet
Var7
IntToStr
MulF
Var0
RefGet
RefGet
Var7
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
PushString "" height=""
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var4
RefGet
Var7
IntToStr
MulF
Var0
RefGet
RefGet
Var7
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var0
RefGet
RefGet
PushString "" />"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var2
RefGet
PushD -1
CmpNe
JumpFalse @Label99
Var0
RefGet
RefGet
PushString "</a>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label99
FnEnd 5 0

:Label97
Call @Label100
Jump @Label101

:Label96
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
PushString "negIcon.jpg"
PushD -1
PushD 16
PushD 16
Call @Label100

:Label101
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
PushString "EMAILMSG_SENT"
PushD -1
Call @Label53
PushD 0
PushS 860
GlobalVar
PushD 8
Add
RefSet
PushD 0
PushS 860
GlobalVar
PushD 12
Add
RefSet
PushD 0
PushS 854
GlobalVar
PushD 20
Add
RefSet

:Label95
PushD 7
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</td></table>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Jump @Label61

:Label61
FnEnd 10 0

:Label58
Call @Label102
Jump @Label103

:Label57
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 1372
GlobalVar
ArrayRef
ArrayExplode
Call @Label102

:Label103
Jump @Label104

:Label56
PushS 860
GlobalVar
PushS 40
Add
RefGet
PushD -1
CmpEq
JumpFalse @Label105
PushD 10
PushD 0
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label102
Jump @Label104

:Label105
PushD 10
PushD 0
PushD 10
PushS 1372
GlobalVar
ArrayRef
ArrayExplode
Call @Label102

:Label104
Jump @Label106

:Label111
FnBegin 0 10
PushString "navTopTitle"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 11
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushString "navTopImage"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 12
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushString "navBottomTitle"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 13
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushString "navBottomImage1"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 14
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushString "navBottomImage2"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 15
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushD 9
LocalVar
RefGet
PushD -1
CmpNe
JumpFalse @Label107
PushD 11
LocalVar
RefGet
PushD 24
LocalVar
RefGet
PushD 1
CmpNe
And
JumpFalse @Label108
PushD 11
PushD 1
PushD 26
LocalVar
ArrayRef
PushString "EMAIL_VIEW"
PushD -1
Call @Label53
PushD 24
LocalVar
RefGet
PushD 0
CmpEq
JumpFalse @Label109
PushD 12
PushD 1
PushD 26
LocalVar
ArrayRef
PushS 45
LocalVar
PushS 50
LocalVar
PushS 70
PushS 40
PushS 41
Call @Label91
Jump @Label108

:Label109
PushD 12
PushD 1
PushD 26
LocalVar
ArrayRef
PushString "but_email.jpg"
PushS 40
PushS 70
PushS 40
Call @Label100

:Label108
PushD 24
LocalVar
RefGet
PushD 1
CmpNe
JumpFalse @Label107
PushS 860
GlobalVar
PushS 40
Add
RefGet
PushD -1
CmpEq
JumpFalse @Label107
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushS 36
Add
RefGet
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 28
Add
RefGet
IsZero
And
JumpFalse @Label110
PushD 13
PushD 1
PushD 26
LocalVar
ArrayRef
PushString "EMAIL_REPLY"
PushD -1
Call @Label53
PushD 14
PushD 1
PushD 26
LocalVar
ArrayRef
PushString "but_reply_pos.jpg"
PushD 30
PushS 70
PushS 40
Call @Label100
PushD 15
PushD 1
PushD 26
LocalVar
ArrayRef
PushString "but_reply_neg.jpg"
PushD 31
PushS 70
PushS 40
Call @Label100
Jump @Label107

:Label110
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 16
Add
RefGet
JumpFalse @Label107
PushD 13
PushD 1
PushD 26
LocalVar
ArrayRef
PushString "EMAIL_DELETE"
PushD -1
Call @Label53
PushD 14
PushD 1
PushD 26
LocalVar
ArrayRef
PushString "but_delete.jpg"
PushD 21
PushS 70
PushS 40
Call @Label100

:Label107
FnEnd 0 0

:Label106
Call @Label111
Jump @Label112

:Label116
FnBegin 0 6
PushString "emailTopInfo"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushD 9
LocalVar
RefGet
PushD -1
CmpNe
JumpFalse @Label113
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<table width="391" border="0" cellspacing="0" cellpadding="0">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<tr>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="79" align="left" valign="middle"><span class="title_text">FROM</span></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="312" align="left" valign="middle"><span class="info_text">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Var2
PushD 2
LocalVar
PushString "_ADDRESS"
PushD 15
LocalVar
RefGet
PushD -1
Call @Label81
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
Var2
PushD -1
Call @Label53
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</span></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</tr>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<tr>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th align="left" valign="middle"><span class="title_text">SUBJECT</span></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th align="left" valign="middle"><span class="info_text">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushS 860
GlobalVar
PushS 40
Add
RefGet
PushD -1
CmpEq
JumpFalse @Label114
Var2
PushD 2
LocalVar
PushString "S"
PushD 15
LocalVar
RefGet
PushD 1
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
Call @Label81
Jump @Label115

:Label114
Var2
PushD 2
LocalVar
PushString "S"
PushD 15
LocalVar
RefGet
PushD 1
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 1372
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
Call @Label81

:Label115
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
Var2
PushD -1
Call @Label53
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</span></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</tr>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 6
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</table>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label113
FnEnd 0 0

:Label112
Call @Label116
Jump @Label117

:Label141
FnBegin 0 3
PushString "emailInbox0"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 0
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushString "emailInbox1"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 1
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushString "emailInbox2"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 2
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushString "emailInbox3"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 3
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushString "emailInbox4"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 4
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushString "emailInbox5"
CallNative CREATE_HTML_SCRIPT_OBJECT 1 1
PushD 5
PushD 1
PushD 26
LocalVar
ArrayRef
RefSet
PushD 0
Var2
RefSet

:Label140
Var2
RefGet
PushD 6
LocalVar
RefGet
PushD 1
Sub
CmpLe
JumpFalse @Label118
PushD 12
LocalVar
RefGet
Var2
RefGet
Sub
PushD 0
CmpGe
PushD 13
LocalVar
RefGet
PushD 0
CmpNe
And
JumpFalse @Label119
PushS 860
GlobalVar
PushS 40
Add
RefGet
PushD -1
CmpEq
JumpFalse @Label120
PushD 10
PushD 12
LocalVar
RefGet
Var2
RefGet
Sub
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Var2
RefGet
Jump @Label121

:Label139
FnBegin 11 18
PushD 0
PushD 10
Var0
ArrayExplode
Call @Label39
PushD 13
Var
RefSet
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<table width="640" height="25" border="0" bgcolor="#FFFFFF" cellpadding="0" cellspacing="0">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<tr>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="48" height="25" bgcolor="#6699CC"></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="10" align="center"></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 4
PushD 10
Var0
ArrayExplode
Call @Label39
Switch 0:@Label122 1:@Label123 3:@Label123 2:@Label124 4:@Label124 5:@Label125
Jump @Label126

:Label122
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="20" align="center"><img src="imgs/unreadIcon.jpg" width="16" height="16" /></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Jump @Label126

:Label123
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="20" align="center"></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Jump @Label126

:Label124
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="20" align="center"><img src="imgs/posIcon.jpg" width="16" height="16" /></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Jump @Label126

:Label125
Var0
PushS 32
Add
RefGet
JumpFalse @Label127
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="20" align="center"><img src="imgs/posIcon.jpg" width="16" height="16" /></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Jump @Label128

:Label127
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="20" align="center"><img src="imgs/negIcon.jpg" width="16" height="16" /></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label128
Jump @Label126

:Label126
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="32" align="center" valign="middle">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 6
PushD 10
Var0
ArrayExplode
Call @Label39
Push 0xFFFF
CmpNe
JumpFalse @Label129
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
PushString "attachedIcon.jpg"
PushD -1
PushD 12
PushD 20
Call @Label100

:Label129
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="160" align="left" valign="middle">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<span class="read_text">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 14
Var
PushD 2
LocalVar
PushString "_NAME"
PushD 13
Var
RefGet
PushD -1
Call @Label81
PushD 9
LocalVar
RefGet
PushD 12
LocalVar
RefGet
PushD 10
Var
RefGet
Sub
CmpEq
JumpFalse @Label130
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
PushD 14
Var
PushD -1
Call @Label53
Jump @Label131

:Label130
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
PushD 14
Var
PushD 10
Var
RefGet
Call @Label53

:Label131
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</span></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="292" align="left" valign="middle">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<span class="read_text">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 14
Var
PushD 2
LocalVar
PushString "S"
PushD 13
Var
RefGet
PushD 1
PushD 10
Var0
ArrayExplode
Call @Label39
Call @Label81
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
PushD 14
Var
PushD -1
Call @Label53
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</span></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
Var
RefGet
PushD 0
CmpEq
JumpFalse @Label132
PushD 13
LocalVar
RefGet
PushD 6
LocalVar
RefGet
PushD 1
Add
CmpLt
PushD 12
LocalVar
RefGet
PushD 7
LocalVar
PushD 0
Add
RefGet
PushD 13
LocalVar
RefGet
PushD 1
Sub
Add
CmpEq
Or
JumpFalse @Label133
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="30" bgcolor="#999999"></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Jump @Label134

:Label133
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="30" align="center" valign="middle" bgcolor="#999999">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
PushString "but_up.jpg"
PushD 10
PushD 16
PushD 16
Call @Label100
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label134
Jump @Label135

:Label132
PushD 10
Var
RefGet
PushD 6
LocalVar
RefGet
PushD 1
Sub
CmpEq
JumpFalse @Label136
PushD 13
LocalVar
RefGet
PushD 6
LocalVar
RefGet
PushD 1
Add
CmpLt
PushD 12
LocalVar
RefGet
PushD 6
LocalVar
RefGet
PushD 1
Sub
Sub
PushD 7
LocalVar
PushD 0
Add
RefGet
CmpEq
Or
JumpFalse @Label137
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="30" bgcolor="#999999"></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
Jump @Label138

:Label137
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="30" align="center" valign="middle" bgcolor="#999999">"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
PushString "but_down.jpg"
PushD 11
PushD 16
PushD 16
Call @Label100
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label138
Jump @Label135

:Label136
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="30" bgcolor="#999999" ></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0

:Label135
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "<th width="48" bgcolor="#6699CC"></th>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</tr>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
PushD 10
Var
RefGet
PushD 1
PushD 26
LocalVar
ArrayRef
RefGet
PushString "</table>"
CallNative ADD_TO_HTML_SCRIPT_OBJECT 2 0
FnEnd 11 0

:Label121
Call @Label139
Jump @Label119

:Label120
PushD 10
PushD 12
LocalVar
RefGet
Var2
RefGet
Sub
PushD 10
PushS 1372
GlobalVar
ArrayRef
ArrayExplode
Var2
RefGet
Call @Label139

:Label119
Var2
RefGet
PushD 1
Add
Var2
RefSet
Jump @Label140

:Label118
FnEnd 0 0

:Label117
Call @Label141
Var0
RefGet
JumpFalse @Label142
PushS 854
GlobalVar
PushD 8
Add
RefGet
PushD 0
Jump @Label143

:Label145
FnBegin 2 4
Var0
RefGet
PushD -1
CmpNe
Var0
RefGet
PushS 860
GlobalVar
PushD 4
Add
RefGet
CallNative GET_NUMBER_OF_WEB_PAGE_LINKS 1 1
CmpLt
And
JumpFalse @Label144
PushS 860
GlobalVar
PushD 4
Add
RefGet
Var0
RefGet
Var1
RefGet
CallNative SET_WEB_PAGE_LINK_ACTIVE 3 0

:Label144
FnEnd 2 0

:Label143
Call @Label145
PushD -1
PushS 854
GlobalVar
PushD 8
Add
RefSet
PushS 860
GlobalVar
PushD 4
Add
RefGet
CallNative RELOAD_WEB_PAGE 1 0

:Label142
FnEnd 1 0

:Label19
Call @Label146
PushS 54
LocalVar
PushD 0
Add
PushD 1
PushD 0
Jump @Label147

:Label158
FnBegin 3 5
Var1
RefGet
Jump @Label148

:Label151
FnBegin 1 3
Var0
RefGet
JumpFalse @Label149
PushS 945
GlobalVar
RefGet
PushS 860
GlobalVar
PushD 20
Add
RefSet
Jump @Label150

:Label149
PushF 0
PushS 860
GlobalVar
PushD 20
Add
RefSet

:Label150
PushS 860
GlobalVar
PushD 4
Add
RefGet
PushS 860
GlobalVar
PushD 20
Add
RefGet
CallNative SET_WEB_PAGE_SCROLL 2 0
FnEnd 1 0

:Label148
Call @Label151
Var2
RefGet
JumpFalse @Label152
PushS 860
GlobalVar
PushD 4
Add
RefGet
CallNative RELOAD_WEB_PAGE 1 0
Jump @Label153

:Label152
PushS 860
GlobalVar
PushD 4
Add
RefGet
Var0
RefGet
CallNative LOAD_WEB_PAGE 2 0
Var0
RefGet
PushS 860
GlobalVar
PushS 168
Add
StrCpy
GlobalVar
PushD 1
PushS 860
GlobalVar
PushS 164
Add
RefSet

:Label153
Jump @Label154

:Label157
FnBegin 0 3
PushS 860
GlobalVar
PushD 4
Add
RefGet
CallNative GET_WEB_PAGE_HEIGHT 1 1
Var2
RefSet
Var2
RefGet
PushS 944
GlobalVar
RefGet
PushS 942
GlobalVar
RefGet
PushS 944
GlobalVar
RefGet
MulF
SubF
CmpGtF
JumpFalse @Label155
PushD 1
PushS 860
GlobalVar
PushD 28
Add
RefSet
PushF 1
PushS 942
GlobalVar
RefGet
SubF
Var2
RefGet
DivF
PushS 860
GlobalVar
PushS 32
Add
RefSet
PushF 1
PushS 942
GlobalVar
RefGet
SubF
PushS 944
GlobalVar
RefGet
PushS 942
GlobalVar
RefGet
PushS 944
GlobalVar
RefGet
MulF
SubF
Var2
RefGet
DivF
MulF
PushS 860
GlobalVar
PushS 36
Add
RefSet
Jump @Label156

:Label155
PushD 0
PushS 860
GlobalVar
PushD 28
Add
RefSet

:Label156
FnEnd 0 0

:Label154
Call @Label157
FnEnd 3 0

:Label147
Call @Label158

:Label233
PushS 860
GlobalVar
PushD 16
Add
RefGet
IsZero
JumpFalse @Label159
PushD 0
CallNative WAIT 1 0
PushD 25
LocalVar
Jump @Label160

:Label162
FnBegin 1 3
Var0
RefGet
RefGet
CallNative GET_CURRENT_LANGUAGE 0 1
CmpNe
JumpFalse @Label161
CallNative GET_CURRENT_LANGUAGE 0 1
Var0
RefGet
RefSet
PushD 1
FnEnd 1 1

:Label161
PushD 0
FnEnd 1 1

:Label160
Call @Label162
JumpFalse @Label163
PushD -1
PushD 9
LocalVar
RefSet
PushD 0
PushD 24
LocalVar
RefSet
PushD 0
PushS 860
GlobalVar
PushD 8
Add
RefSet
PushD 0
PushS 860
GlobalVar
PushD 12
Add
RefSet
PushD 0
Call @Label146
PushS 54
LocalVar
PushD 0
Add
PushD 1
PushD 1
Call @Label158
Jump @Label164

:Label166
FnBegin 0 2
PushS 43
LocalVar
RefGet
JumpFalse @Label165
PushS 49
LocalVar
RefGet
CallNative RELEASE_TEXTURE 1 0
PushS 44
LocalVar
RefGet
CallNative REMOVE_TXD 1 0
PushD 0
PushS 43
LocalVar
RefSet

:Label165
FnEnd 0 0

:Label164
Call @Label166

:Label163
PushS 854
GlobalVar
PushD 12
Add
RefGet
Var2
RefSet
PushD 2
PushD 2
LocalVar
ArrayExplode
PushD 2
PushD 4
PushD 8
Var
StrVarCpy
PushString "R"
PushD 8
Var
StrCat
MulF
PushD 24
LocalVar
RefGet
Switch 1:@Label167 2:@Label168
Jump @Label169

:Label167
PushD 16
LocalVar
RefGet
IsZero
JumpFalse @Label168
PushD 1
Call @Label146
Jump @Label169

:Label168
PushS 860
GlobalVar
PushS 312
Add
RefGet
PushS 860
GlobalVar
PushD 8
Add
RefGet
And
JumpFalse @Label170
PushS 40
Var2
RefSet

:Label170
Jump @Label169

:Label169
Var2
RefGet
Switch 0:@Label171 1:@Label171 2:@Label171 3:@Label171 4:@Label171 5:@Label171 A:@Label172 B:@Label173 15:@Label174 1E:@Label175 1F:@Label175 28:@Label176 29:@Label177
Jump @Label178

:Label171
PushD 0
PushS 860
GlobalVar
PushD 8
Add
RefSet
PushD 12
LocalVar
RefGet
Var2
RefGet
Sub
PushD 9
LocalVar
RefSet
PushS 860
GlobalVar
PushS 40
Add
RefGet
PushD -1
CmpEq
JumpFalse @Label179
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
Jump @Label180

:Label200
FnBegin 1 3
PushD 4
PushD 10
Var0
RefGet
ArrayExplode
Call @Label39
Switch 0:@Label181 1:@Label181 2:@Label182
Jump @Label183

:Label181
PushD 3
PushD 4
Var0
RefGet
Jump @Label184

:Label199
FnBegin 3 5
Var1
RefGet
Switch 0:@Label185 1:@Label186 2:@Label187 3:@Label188 4:@Label189 5:@Label190 6:@Label191 8:@Label192 9:@Label193 B:@Label194 C:@Label195 D:@Label196 E:@Label197
Jump @Label198

:Label185
PushD 1
PushD 1
Var2
RefGet
PushD 0
Add
ArrayRef
PushD 14
PushD 23
Var0
RefGet
CallNative SET_BITS_IN_RANGE 4 0
Jump @Label198

:Label186
PushD 0
PushD 1
Var2
RefGet
PushD 0
Add
ArrayRef
PushD 0
PushD 13
Var0
RefGet
CallNative SET_BITS_IN_RANGE 4 0
Jump @Label198

:Label187
PushD 0
PushD 1
Var2
RefGet
PushD 0
Add
ArrayRef
PushD 14
PushD 27
Var0
RefGet
CallNative SET_BITS_IN_RANGE 4 0
Jump @Label198

:Label188
PushD 1
PushD 1
Var2
RefGet
PushD 0
Add
ArrayRef
PushD 0
PushD 13
Var0
RefGet
CallNative SET_BITS_IN_RANGE 4 0
Jump @Label198

:Label189
PushD 2
PushD 1
Var2
RefGet
PushD 0
Add
ArrayRef
PushD 22
PushD 25
Var0
RefGet
CallNative SET_BITS_IN_RANGE 4 0
Jump @Label198

:Label190
PushD 0
PushD 1
Var2
RefGet
PushD 0
Add
ArrayRef
PushD 28
PushD 31
Var0
RefGet
CallNative SET_BITS_IN_RANGE 4 0
Jump @Label198

:Label191
PushD 2
PushD 1
Var2
RefGet
PushD 0
Add
ArrayRef
PushD 0
PushD 15
Var0
RefGet
CallNative SET_BITS_IN_RANGE 4 0
Jump @Label198

:Label192
PushD 2
PushD 1
Var2
RefGet
PushD 0
Add
ArrayRef
PushD 16
PushD 18
Var0
RefGet
CallNative SET_BITS_IN_RANGE 4 0
Jump @Label198

:Label193
PushD 2
PushD 1
Var2
RefGet
PushD 0
Add
ArrayRef
PushD 19
PushD 21
Var0
RefGet
CallNative SET_BITS_IN_RANGE 4 0
Jump @Label198

:Label194
PushD 1
PushD 1
Var2
RefGet
PushD 0
Add
ArrayRef
PushD 27
PushD 31
Var0
RefGet
CallNative SET_BITS_IN_RANGE 4 0
Jump @Label198

:Label195
PushD 2
PushD 1
Var2
RefGet
PushD 0
Add
ArrayRef
PushD 29
PushD 31
Var0
RefGet
CallNative SET_BITS_IN_RANGE 4 0
Jump @Label198

:Label196
PushD 1
PushD 1
Var2
RefGet
PushD 0
Add
ArrayRef
PushD 24
PushD 26
Var0
RefGet
CallNative SET_BITS_IN_RANGE 4 0
Jump @Label198

:Label197
PushD 2
PushD 1
Var2
RefGet
PushD 0
Add
ArrayRef
PushD 26
PushD 28
Var0
RefGet
CallNative SET_BITS_IN_RANGE 4 0
Jump @Label198

:Label198
FnEnd 3 0

:Label184
Call @Label199
Jump @Label183

:Label182
PushD 4
PushD 4
Var0
RefGet
Call @Label199
Jump @Label183

:Label183
FnEnd 1 0

:Label180
Call @Label200
PushD 0
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushD 15
LocalVar
RefSet
Jump @Label201

:Label179
PushD 9
LocalVar
RefGet
PushD 10
PushS 1372
GlobalVar
ArrayRef
Call @Label200
PushD 0
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 1372
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushD 15
LocalVar
RefSet

:Label201
PushD 2
PushD 4
LocalVar
ArrayExplode
PushD 2
PushD 4
Var4
StrVarCpy
PushD 15
LocalVar
RefGet
Var4
StrCatI
MulF
Var4
PushD 3
CallNative LOAD_ADDITIONAL_TEXT 2 0
PushD 0
PushD 24
LocalVar
RefSet
PushD 1
PushD 10
LocalVar
RefSet
PushS 860
GlobalVar
PushS 40
Add
RefGet
PushD -1
CmpEq
JumpFalse @Label202
PushD 3
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushS 16383
CmpNe
JumpFalse @Label203
PushD 3
PushD 10
LocalVar
RefSet
Jump @Label204

:Label203
PushD 2
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushS 16383
CmpNe
JumpFalse @Label204
PushD 2
PushD 10
LocalVar
RefSet

:Label204
PushD 0
PushD 11
LocalVar
RefSet
PushD 6
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
Push 0xFFFF
CmpNe
JumpFalse @Label205
PushD 6
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
Jump @Label206

:Label208
FnBegin 1 3
PushString "webPhotos_"
PushS 45
LocalVar
StrCpy
MulF
PushS 43
LocalVar
RefGet
JumpFalse @Label207
Call @Label166

:Label207
Var0
RefGet
PushD 5
Div
PushS 45
LocalVar
StrCatI
MulF
PushS 45
LocalVar
CallNative LOAD_TXD 1 1
PushS 44
LocalVar
RefSet
PushString "photo_"
PushS 50
LocalVar
StrCpy
MulF
Var0
RefGet
PushS 50
LocalVar
StrCatI
MulF
PushS 44
LocalVar
RefGet
PushS 50
LocalVar
CallNative GET_TEXTURE 2 1
PushS 49
LocalVar
RefSet
PushD 1
PushS 43
LocalVar
RefSet
FnEnd 1 0

:Label206
Call @Label208
PushD 1
PushD 11
LocalVar
RefSet

:Label205
Jump @Label209

:Label202
PushD 3
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 1372
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushS 16383
CmpNe
JumpFalse @Label210
PushD 3
PushD 10
LocalVar
RefSet
Jump @Label211

:Label210
PushD 2
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 1372
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
PushS 16383
CmpNe
JumpFalse @Label211
PushD 2
PushD 10
LocalVar
RefSet

:Label211
PushD 0
PushD 11
LocalVar
RefSet
PushD 6
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 1372
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
Push 0xFFFF
CmpNe
JumpFalse @Label209
PushD 6
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 1372
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
Call @Label208
PushD 1
PushD 11
LocalVar
RefSet

:Label209
PushS 860
GlobalVar
PushS 40
Add
RefGet
PushD -1
CmpEq
JumpFalse @Label212
PushD 1
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
Var3
RefSet
PushD 18
LocalVar
PushD 2
LocalVar
PushString "R"
PushD 15
LocalVar
RefGet
Var3
RefGet
Call @Label81
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 20
Add
RefGet
IsZero
JumpFalse @Label213
Var4
PushD 8
Var
PushD 15
LocalVar
RefGet
Var3
RefGet
PushD 0
Call @Label72
Var4
CallNative DOES_TEXT_LABEL_EXIST 1 1
JumpFalse @Label214
PushD 1
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 24
Add
RefSet
Jump @Label215

:Label214
PushD 0
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 24
Add
RefSet

:Label215
PushD 0
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 28
Add
RefSet
PushD 0
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushS 32
Add
RefSet
PushD 1
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 20
Add
RefSet

:Label213
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushS 36
Add
RefGet
JumpFalse @Label212
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 24
Add
RefGet
IsZero
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 28
Add
RefGet
Or
JumpFalse @Label216
PushD 0
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushS 36
Add
RefSet
Jump @Label212

:Label216
PushD 4
PushD 10
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
Call @Label39
Switch 2:@Label217 4:@Label217 5:@Label217
Jump @Label212

:Label217
PushD 0
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushS 36
Add
RefSet
Jump @Label212

:Label212
PushD 1
Call @Label146
Jump @Label178

:Label172
PushD 12
LocalVar
RefGet
PushD 2
Add
PushD 12
LocalVar
RefSet

:Label173
PushD 12
LocalVar
RefGet
PushD 1
Sub
PushD 12
LocalVar
RefSet
PushD 1
Call @Label146
Jump @Label178

:Label174
PushS 860
GlobalVar
PushS 40
Add
RefGet
PushD -1
CmpEq
JumpFalse @Label218
PushD 9
LocalVar
RefGet
Jump @Label219

:Label224
FnBegin 1 4
Var0
RefGet
PushS 39
CmpLt
JumpFalse @Label220
Var0
RefGet
PushD 1
Add
Var3
RefSet

:Label221
Var3
RefGet
PushS 39
CmpLe
JumpFalse @Label220
PushD 10
Var3
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayExplode
PushD 10
Var3
RefGet
PushD 1
Sub
PushD 10
PushS 971
GlobalVar
ArrayRef
ArrayImplode
Var3
RefGet
PushD 1
Add
Var3
RefSet
Jump @Label221

:Label220
PushS 39
Jump @Label222

:Label223
FnBegin 1 3
PushD -1
PushD 0
PushD 1
Var0
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 0
Add
ArrayRef
RefSet
PushD -1
PushD 1
PushD 1
Var0
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 0
Add
ArrayRef
RefSet
PushD -1
PushD 2
PushD 1
Var0
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 0
Add
ArrayRef
RefSet
FnEnd 1 0

:Label222
Call @Label223
FnEnd 1 0

:Label219
Call @Label224
PushD -1
PushD 9
LocalVar
RefSet
Call @Label9
PushD 13
LocalVar
RefSet
PushD 13
LocalVar
RefGet
PushD 1
Sub
PushD 12
LocalVar
RefSet
PushD 1
Call @Label146

:Label218
Jump @Label178

:Label175
PushD 1
PushS 860
GlobalVar
PushD 8
Add
RefSet
PushD 1
PushS 860
GlobalVar
PushD 12
Add
RefSet
PushD 1
PushS 854
GlobalVar
PushD 20
Add
RefSet
PushS 305
PushD 1
CallNative INCREMENT_INT_STAT_NO_MESSAGE 2 0
Var2
RefGet
PushD 30
CmpEq
JumpFalse @Label225
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 1
Jump @Label226

:Label229
FnBegin 2 4
PushD 4
PushD 10
Var0
RefGet
ArrayExplode
Call @Label39
Switch 3:@Label227 4:@Label227
Jump @Label228

:Label227
PushD 5
PushD 4
Var0
RefGet
Call @Label199
PushD 1
Var0
RefGet
PushD 28
Add
RefSet
Var1
RefGet
Var0
RefGet
PushS 32
Add
RefSet
Jump @Label228

:Label228
FnEnd 2 0

:Label226
Call @Label229
Jump @Label230

:Label225
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushD 0
Call @Label229

:Label230
Var2
RefGet
PushD 30
CmpEq
JumpFalse @Label231
PushString "_0"
PushD 18
LocalVar
StrCat
MulF
PushD 1
PushD 17
LocalVar
RefSet
Jump @Label232

:Label231
PushString "_1"
PushD 18
LocalVar
StrCat
MulF
PushD 0
PushD 17
LocalVar
RefSet

:Label232
PushD 0
PushD 22
LocalVar
RefSet
PushD 18
LocalVar
CallNative GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL 1 1
PushD 23
LocalVar
RefSet
PushD 0
PushD 16
LocalVar
RefSet
PushD 0
PushD 9
LocalVar
RefGet
PushD 10
PushS 971
GlobalVar
ArrayRef
PushS 36
Add
RefSet
PushD 1
PushD 24
LocalVar
RefSet
Jump @Label178

:Label176
PushD 0
PushS 860
GlobalVar
PushD 8
Add
RefSet
PushD 0
PushD 24
LocalVar
RefSet
PushD 1
Call @Label146
Jump @Label178

:Label177
PushD 1
PushS 860
GlobalVar
PushD 8
Add
RefSet
PushD 2
PushD 24
LocalVar
RefSet
PushD 1
Call @Label146
Jump @Label178

:Label178
Jump @Label233

:Label159
PushD 0
PushS 854
GlobalVar
PushD 20
Add
RefSet
PushD 0
PushS 860
GlobalVar
PushD 8
Add
RefSet
PushD 0
PushS 860
GlobalVar
PushD 12
Add
RefSet
Call @Label166
CallNative UNREGISTER_SCRIPT_WITH_AUDIO 0 0
FnEnd 0 0
