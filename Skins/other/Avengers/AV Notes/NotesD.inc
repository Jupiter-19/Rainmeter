
;TAB LIST --------------------------------------------------

;TEXT METERS ============================================================

[MeterNoteTitle]
Meter=String
MeterStyle=TextStyle1
StringCase=UPPER
x=29
y=7
Text=#NoteT#
Group=GroupNotes

[MeterPoint1]
Meter=String
MeterStyle=TextStyle1
FontFace=Wingdings 2
x=16
y=40r
Text=1
Group=GroupNotes

[MeterPoint2]
Meter=String
MeterStyle=TextStyle1
FontFace=Wingdings 2
x=r
y=44r
Text=1
Group=GroupNotes

[MeterPoint3]
Meter=String
MeterStyle=TextStyle1
FontFace=Wingdings 2
x=r
y=44r
Text=1
Group=GroupNotes

[MeterPoint4]
Meter=String
MeterStyle=TextStyle1
FontFace=Wingdings 2
x=r
y=44r
Text=1
Group=GroupNotes

[MeterPoint5]
Meter=String
MeterStyle=TextStyle1
FontFace=Wingdings 2
x=r
y=44r
Text=1
Group=GroupNotes

[MeterPoint6]
Meter=String
MeterStyle=TextStyle1
FontFace=Wingdings 2
x=r
y=44r
Text=1
Group=GroupNotes

;PAGE LABELS ============================================================

[MeterPage4Title]
Meter=String
MeterStyle=TextStyle1
x=22
y=26
Text=#Note4Txt#
Group=GroupNotes

[MeterPage1TitleB]
Meter=String
MeterStyle=TextStyle1
SolidColor=0,0,0,10
FontColor=200,200,200,255
x=80
y=r
W=50
H=16
Text=#Note1Txt#
LeftMouseUpAction=[!WriteKeyValue Variables Tab "NotesA"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor "200,200,200,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=GroupNotes

[MeterPage2TitleB]
Meter=String
MeterStyle=TextStyle1
SolidColor=0,0,0,10
FontColor=200,200,200,255
x=135
y=r
W=50
H=16
Text=#Note2Txt#
LeftMouseUpAction=[!WriteKeyValue Variables Tab "NotesB"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor "200,200,200,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=GroupNotes

[MeterPage2TitleC]
Meter=String
MeterStyle=TextStyle1
SolidColor=0,0,0,10
FontColor=200,200,200,255
x=193
y=r
W=50
H=16
Text=#Note3Txt#
LeftMouseUpAction=[!WriteKeyValue Variables Tab "NotesC"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor "200,200,200,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=GroupNotes

;PAGE 4 =================================================================

;NOTE 13 =================================================================

[MeterNote13Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=46
W=244
H=42
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 13"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1o #Color2o#][!WriteKeyValue Variables Color2o #Color3o#][!WriteKeyValue Variables Color3o #Color4o#][!WriteKeyValue Variables Color4o #Color1o#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote13]
Meter=Image
SolidColor=#Color1o#
x=17r
y=r
W=225
H=42
Antialias=1
Group=GroupNotes

[MeterTextNote13]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=35
Text=#Note13#
ClipString=2
DynamicVariables=1
Group=GroupNotes

;NOTE 14 =================================================================

[MeterNote14Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=90
W=244
H=42
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 14"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1p #Color2p#][!WriteKeyValue Variables Color2p #Color3p#][!WriteKeyValue Variables Color3p #Color4p#][!WriteKeyValue Variables Color4p #Color1p#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote14]
Meter=Image
SolidColor=#Color1p#
x=17r
y=r
W=225
H=42
Antialias=1
Group=GroupNotes

[MeterTextNote14]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=35
Text=#Note14#
ClipString=2
DynamicVariables=1
Group=GroupNotes

;NOTE 15 =================================================================

[MeterNote15Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=134
W=244
H=42
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 15"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1q #Color2q#][!WriteKeyValue Variables Color2q #Color3q#][!WriteKeyValue Variables Color3q #Color4q#][!WriteKeyValue Variables Color4q #Color1q#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote15]
Meter=Image
SolidColor=#Color1q#
x=17r
y=r
W=225
H=42
Antialias=1
Group=GroupNotes

[MeterTextNote15]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=35
StringAlign=Left
Text=#Note15#
ClipString=2
DynamicVariables=1
Group=GroupNotes

;NOTE 16 ================================================================

[MeterNote16Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=178
W=244
H=42
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 16"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1r #Color2r#][!WriteKeyValue Variables Color2r #Color3r#][!WriteKeyValue Variables Color3r #Color4r#][!WriteKeyValue Variables Color4r #Color1r#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote16]
Meter=Image
SolidColor=#Color1r#
x=17r
y=r
W=225
H=42
Antialias=1
Group=GroupNotes

[MeterTextNote16]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=35
StringAlign=Left
Text=#Note16#
ClipString=2
DynamicVariables=1
Group=GroupNotes

;NOTE 17 ================================================================

[MeterNote17Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=222
W=244
H=42
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 17"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1s #Color2s#][!WriteKeyValue Variables Color2s #Color3s#][!WriteKeyValue Variables Color3s #Color4s#][!WriteKeyValue Variables Color4s #Color1s#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote17]
Meter=Image
SolidColor=#Color1s#
x=17r
y=r
W=225
H=42
Antialias=1
Group=GroupNotes

[MeterTextNote17]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=35
StringAlign=Left
Text=#Note17#
ClipString=2
DynamicVariables=1
Group=GroupNotes

;NOTE 18 ================================================================

[MeterNote18Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=266
W=244
H=42
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 18"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1t #Color2t#][!WriteKeyValue Variables Color2t #Color3t#][!WriteKeyValue Variables Color3t #Color4t#][!WriteKeyValue Variables Color4t #Color1t#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote18]
Meter=Image
SolidColor=#Color1t#
x=17r
y=r
W=225
H=42
Antialias=1
Group=GroupNotes

[MeterTextNote18]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=35
StringAlign=Left
Text=#Note18#
ClipString=2
DynamicVariables=1
Group=GroupNotes
