
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

[MeterPage1Title]
Meter=String
MeterStyle=TextStyle1
x=22
y=26
Text=#Note1Txt#
Group=GroupNotes

[MeterPage2TitleB]
Meter=String
MeterStyle=TextStyle1
SolidColor=0,0,0,10
FontColor=200,200,200,255
x=80
y=r
W=50
H=16
Text=#Note2Txt#
LeftMouseUpAction=[!WriteKeyValue Variables Tab "NotesB"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor "200,200,200,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=GroupNotes

[MeterPage3TitleB]
Meter=String
MeterStyle=TextStyle1
SolidColor=0,0,0,10
FontColor=200,200,200,255
x=135
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
x=193
y=r
W=50
H=16
Text=#Note4Txt#
LeftMouseUpAction=[!WriteKeyValue Variables Tab "NotesD"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor "200,200,200,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=GroupNotes

;PAGE 1 =================================================================

;NOTE 1 =================================================================

[MeterNote1Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=46
W=244
H=85
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 1"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1a #Color2a#][!WriteKeyValue Variables Color2a #Color3a#][!WriteKeyValue Variables Color3a #Color4a#][!WriteKeyValue Variables Color4a #Color1a#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote1]
Meter=Image
SolidColor=#Color1a#
x=17r
y=r
W=225
H=85
Antialias=1
Group=GroupNotes

[MeterTextNote1]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=82
Text=#Note1#
ClipString=2
DynamicVariables=1
Group=GroupNotes

;NOTE 2 =================================================================

[MeterNote2Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=135
W=244
H=85
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 2"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1b #Color2b#][!WriteKeyValue Variables Color2b #Color3b#][!WriteKeyValue Variables Color3b #Color4b#][!WriteKeyValue Variables Color4b #Color1b#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote2]
Meter=Image
SolidColor=#Color1b#
x=17r
y=r
W=225
H=85
Antialias=1
Group=GroupNotes

[MeterTextNote2]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=82
Text=#Note2#
ClipString=2
DynamicVariables=1
Group=GroupNotes

;NOTE 3 =================================================================

[MeterNote3Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=222
W=244
H=85
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 3"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1c #Color2c#][!WriteKeyValue Variables Color2c #Color3c#][!WriteKeyValue Variables Color3c #Color4c#][!WriteKeyValue Variables Color4c #Color1c#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote3]
Meter=Image
SolidColor=#Color1c#
x=17r
y=r
W=225
H=85
Antialias=1
Group=GroupNotes

[MeterTextNote3]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=82
StringAlign=Left
Text=#Note3#
ClipString=2
DynamicVariables=1
Group=GroupNotes
