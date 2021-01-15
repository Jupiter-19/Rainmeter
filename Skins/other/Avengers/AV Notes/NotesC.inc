
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

[MeterPage3Title]
Meter=String
MeterStyle=TextStyle1
x=22
y=26
Text=#Note3Txt#
Group=GroupNotes

[MeterPage4TitleB]
Meter=String
MeterStyle=TextStyle1
SolidColor=0,0,0,10
FontColor=200,200,200,255
x=80
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
x=135
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
x=193
y=r
W=50
H=16
Text=#Note2Txt#
LeftMouseUpAction=[!WriteKeyValue Variables Tab "NotesB"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor "200,200,200,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=GroupNotes

;PAGE 3 =================================================================

;NOTE 7 =================================================================

[MeterNote7Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=46
W=244
H=42
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 7"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1g #Color2g#][!WriteKeyValue Variables Color2g #Color3g#][!WriteKeyValue Variables Color3g #Color4g#][!WriteKeyValue Variables Color4g #Color1g#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote7]
Meter=Image
SolidColor=#Color1g#
x=17r
y=r
W=225
H=42
Antialias=1
Group=GroupNotes

[MeterTextNote7]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=35
Text=#Note7#
ClipString=2
DynamicVariables=1
Group=GroupNotes

;NOTE 8 =================================================================

[MeterNote8Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=90
W=244
H=42
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 8"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1h #Color2h#][!WriteKeyValue Variables Color2h #Color3h#][!WriteKeyValue Variables Color3h #Color4h#][!WriteKeyValue Variables Color4h #Color1h#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote8]
Meter=Image
SolidColor=#Color1h#
x=17r
y=r
W=225
H=42
Antialias=1
Group=GroupNotes

[MeterTextNote8]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=35
Text=#Note8#
ClipString=2
DynamicVariables=1
Group=GroupNotes

;NOTE 9 =================================================================

[MeterNote9Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=134
W=244
H=42
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 9"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1i #Color2i#][!WriteKeyValue Variables Color2i #Color3i#][!WriteKeyValue Variables Color3i #Color4i#][!WriteKeyValue Variables Color4i #Color1i#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote9]
Meter=Image
SolidColor=#Color1i#
x=17r
y=r
W=225
H=42
Antialias=1
Group=GroupNotes

[MeterTextNote9]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=35
StringAlign=Left
Text=#Note9#
ClipString=2
DynamicVariables=1
Group=GroupNotes

;NOTE 10 ================================================================

[MeterNote10Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=178
W=244
H=42
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 10"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1l #Color2l#][!WriteKeyValue Variables Color2l #Color3l#][!WriteKeyValue Variables Color3l #Color4l#][!WriteKeyValue Variables Color4l #Color1l#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote10]
Meter=Image
SolidColor=#Color1l#
x=17r
y=r
W=225
H=42
Antialias=1
Group=GroupNotes

[MeterTextNote10]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=35
StringAlign=Left
Text=#Note10#
ClipString=2
DynamicVariables=1
Group=GroupNotes

;NOTE 11 ================================================================

[MeterNote11Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=222
W=244
H=42
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 11"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1m #Color2m#][!WriteKeyValue Variables Color2m #Color3m#][!WriteKeyValue Variables Color3m #Color4m#][!WriteKeyValue Variables Color4m #Color1m#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote11]
Meter=Image
SolidColor=#Color1m#
x=17r
y=r
W=225
H=42
Antialias=1
Group=GroupNotes

[MeterTextNote11]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=35
StringAlign=Left
Text=#Note11#
ClipString=2
DynamicVariables=1
Group=GroupNotes

;NOTE 12 ================================================================

[MeterNote12Background]
Meter=Image
SolidColor=80,80,80,120
x=14
y=266
W=244
H=42
Antialias=1
LeftMouseUpAction=!CommandMeasure "MeasureInputNotes" "ExecuteBatch 12"
MiddleMouseDownAction=[!WriteKeyValue Variables Color1n #Color2n#][!WriteKeyValue Variables Color2n #Color3n#][!WriteKeyValue Variables Color3n #Color4n#][!WriteKeyValue Variables Color4n #Color1n#][!Refresh]
MouseActionCursorName=Pen
Group=GroupNotes

[MeterEvidenceNote12]
Meter=Image
SolidColor=#Color1n#
x=17r
y=r
W=225
H=42
Antialias=1
Group=GroupNotes

[MeterTextNote12]
Meter=String
MeterStyle=TextStyle1
x=3r
y=2r
W=225
H=35
StringAlign=Left
Text=#Note12#
ClipString=2
DynamicVariables=1
Group=GroupNotes
