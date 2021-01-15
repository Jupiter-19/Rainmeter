
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
y=88r
Text=1
Group=GroupNotes

[MeterPoint3]
Meter=String
MeterStyle=TextStyle1
FontFace=Wingdings 2
x=r
y=88r
Text=1
Group=GroupNotes

;PAGE LABELS ============================================================

[MeterPage2Title]
Meter=String
MeterStyle=TextStyle1
x=22
y=26
Text=#Note2Txt#
Group=GroupNotes

[MeterPage3TitleB]
Meter=String
MeterStyle=TextStyle1
SolidColor=0,0,0,10
FontColor=200,200,200,255
x=80
y=r
W=50
H=16
Text=#Note3Txt#
LeftMouseUpAction=[!WriteKeyValue Variables Tab "NotesC"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor "200,200,200,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=GroupNotes

[MeterPage4TitleB]
Meter=String
MeterStyle=TextStyle1
SolidColor=0,0,0,10
FontColor=200,200,200,255
x=135
y=r
W=50
H=16
Text=#Note4Txt#
LeftMouseUpAction=[!WriteKeyValue Variables Tab "NotesD"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor "200,200,200,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=GroupNotes

[MeterPage1TitleB]
Meter=String
MeterStyle=TextStyle1
SolidColor=0,0,0,10
FontColor=200,200,200,255
x=193
y=r
W=50
H=16
Text=#Note1Txt#
LeftMouseUpAction=[!WriteKeyValue Variables Tab "NotesA"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor "200,200,200,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=GroupNotes

;PAGE 2 =================================================================

;NOTE 4 =================================================================

[MeterNote4Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=46
W=244
H=85
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 4"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1d #Color2d#][!WriteKeyValue Variables Color2d #Color3d#][!WriteKeyValue Variables Color3d #Color4d#][!WriteKeyValue Variables Color4d #Color1d#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote4]
Meter=Image
SolidColor=#Color1d#
x=17r
y=r
W=225
H=85
Antialias=1
Group=GroupNotes

[MeterTextNote4]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=82
Text=#Note4#
ClipString=2
DynamicVariables=1
Group=GroupNotes

;NOTE 5 =================================================================

[MeterNote5Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=134
W=244
H=85
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 5"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1e #Color2e#][!WriteKeyValue Variables Color2e #Color3e#][!WriteKeyValue Variables Color3e #Color4e#][!WriteKeyValue Variables Color4e #Color1e#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote5]
Meter=Image
SolidColor=#Color1e#
x=17r
y=r
W=225
H=85
Antialias=1
Group=GroupNotes

[MeterTextNote5]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=82
Text=#Note5#
ClipString=2
DynamicVariables=1
Group=GroupNotes

;NOTE 6 =================================================================

[MeterNote6Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=222
W=244
H=85
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 6"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1f #Color2f#][!WriteKeyValue Variables Color2f #Color3f#][!WriteKeyValue Variables Color3f #Color4f#][!WriteKeyValue Variables Color4f #Color1f#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote6]
Meter=Image
SolidColor=#Color1f#
x=17r
y=r
W=225
H=85
Antialias=1
Group=GroupNotes

[MeterTextNote6]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=82
StringAlign=Left
Text=#Note6#
ClipString=2
DynamicVariables=1
Group=GroupNotes
