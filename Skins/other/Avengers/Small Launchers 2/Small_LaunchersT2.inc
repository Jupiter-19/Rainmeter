
[Rainmeter]
Update=-1

AccurateText=1
MiddleMouseDownAction=[!WriteKeyValue Variables Color1 #Color2#][!WriteKeyValue Variables Color2 #Color3#][!WriteKeyValue Variables Color3 #Color1#][!Refresh]

[Variables]
Color1=Orange
Color2=Blue
Color3=Red

;TEXT STYLES ============================================================

[TextStyle]
Meter=String
FontFace= gliscor gothic
FontColor=255,255,255,255
FontSize=10
StringAlign=Left
StringEffect=Shadow
FontEffectColor=0,0,0,50
AntiAlias=1

;HIDE LAUNCHERS =========================================================

[MeterSmallLauncherOff]
Meter=Button
ButtonImage=#@#\Images\Small Launchers2\SLauncButton.png
x=104
y=56
ButtonCommand=[!WriteKeyValue Variables TabSL "Small_Launchers0"][!Refresh]
ToolTipText=#SmLTxt1#
ToolTipIcon=Info
ToolTipType=0
Antialias=1

;LAUNCHERS ==============================================================

[MeterLauncher10Image]
Meter=Image
ImagePath=#@#\Images\Small Launchers2
ImageName=SLButton#Color1#_0.png
x=99
y=88
Group=GroupSlaunch| SLauncher10

[MeterLauncher10]
Meter=Image
SolidColor=0,0,0,1
x=3r
y=92
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher10Image ImageName SLButton#Color1#_2#Type10s#.png]["#SLP10#"][!UpdateMeter MeterLauncher10Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher10Image ImageName SLButton#Color1#_1#Type10s#.png][!UpdateMeter MeterLauncher10Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher10Image ImageName SLButton#Color1#_1#Type10s#.png][!SetOption MeterLauncher10 H 36][!SetOption MeterLauncher10 W 100][!MoveMeter 136 102 MeterLauncherText10][!MoveMeter 112 100 MeterLauncherIcon10][!MoveMeter 102 131 MeterLauncher11][!MoveMeter 99 124 MeterLauncher11Image][!MoveMeter 130 133 MeterLauncherText11][!MoveMeter 107 131 MeterLauncherIcon11][!MoveMeter 102 162 MeterLauncher12][!MoveMeter 99 155 MeterLauncher12Image][!MoveMeter 130 164 MeterLauncherText12][!MoveMeter 107 162 MeterLauncherIcon12][!MoveMeter 102 193 MeterLauncher13][!MoveMeter 99 186 MeterLauncher13Image][!MoveMeter 130 195 MeterLauncherText13][!MoveMeter 107 192 MeterLauncherIcon13][!MoveMeter 102 224 MeterLauncher14][!MoveMeter 99 217 MeterLauncher14Image][!MoveMeter 130 226 MeterLauncherText14][!MoveMeter 107 223 MeterLauncherIcon14][!SetOptionGroup SLauncher11 ImageAlpha 180][!SetOptionGroup SLauncher11 FontColor 255,255,255,180][!SetOptionGroup SLauncher12 ImageAlpha 180][!SetOptionGroup SLauncher12 FontColor 255,255,255,180][!SetOptionGroup SLauncher13 ImageAlpha 180][!SetOptionGroup SLauncher13 FontColor 255,255,255,180][!SetOptionGroup SLauncher14 ImageAlpha 180][!SetOptionGroup SLauncher14 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher10Image ImageName SLButton#Color1#_0#Type10s#.png][!SetOption MeterLauncher10 H 30][!SetOption MeterLauncher10 W 90][!MoveMeter 130 97 MeterLauncherText10][!MoveMeter 107 94 MeterLauncherIcon10][!MoveMeter 102 123 MeterLauncher11][!MoveMeter 99 119 MeterLauncher11Image][!MoveMeter 130 128 MeterLauncherText11][!MoveMeter 107 125 MeterLauncherIcon11][!MoveMeter 102 154 MeterLauncher12][!MoveMeter 99 150 MeterLauncher12Image][!MoveMeter 130 159 MeterLauncherText12][!MoveMeter 107 156 MeterLauncherIcon12][!MoveMeter 102 185 MeterLauncher13][!MoveMeter 99 181 MeterLauncher13Image][!MoveMeter 130 190 MeterLauncherText13][!MoveMeter 107 187 MeterLauncherIcon13][!MoveMeter 102 216 MeterLauncher14][!MoveMeter 99 212 MeterLauncher14Image][!MoveMeter 130 221 MeterLauncherText14][!MoveMeter 107 218 MeterLauncherIcon14][!SetOptionGroup SLauncher11 ImageAlpha 255][!SetOptionGroup SLauncher11 FontColor ""][!SetOptionGroup SLauncher12 ImageAlpha 255][!SetOptionGroup SLauncher12 FontColor ""][!SetOptionGroup SLauncher13 ImageAlpha 255][!SetOptionGroup SLauncher13 FontColor ""][!SetOptionGroup SLauncher14 ImageAlpha 255][!SetOptionGroup SLauncher14 FontColor ""][!UpdateMeterGroup GroupSlaunch][!Redraw]
Group=GroupSlaunch| SLauncher10

[MeterLauncherText10]
Meter=String
MeterStyle=TextStyle
Text=#SLT10#
x=28r
y=5r
Group=GroupSlaunch| SLauncher10

[MeterLauncherIcon10]
Meter=Image
ImageName=#SLI10#
x=-23r
y=-3r
W=20
H=20
AntiAlias=1
Group=GroupSlaunch| SLauncher10

;------------------------------------------------------------------------

[MeterLauncher11Image]
Meter=Image
ImagePath=#@#\Images\Small Launchers2
ImageName=SLButton#Color1#_0.png
x=99
y=119
Group=GroupSlaunch| SLauncher11

[MeterLauncher11]
Meter=Image
SolidColor=0,0,0,1
x=3r
y=123
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher11Image ImageName SLButton#Color1#_2#Type11s#.png]["#SLP11#"][!UpdateMeter MeterLauncher11Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher11Image ImageName SLButton#Color1#_1#Type11s#.png][!UpdateMeter MeterLauncher11Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher11Image ImageName SLButton#Color1#_1#Type11s#.png][!SetOption MeterLauncher11 H 36][!SetOption MeterLauncher11 W 100][!MoveMeter 136 133 MeterLauncherText11][!MoveMeter 113 131 MeterLauncherIcon11][!MoveMeter 102 162 MeterLauncher12][!MoveMeter 99 155 MeterLauncher12Image][!MoveMeter 130 164 MeterLauncherText12][!MoveMeter 107 162 MeterLauncherIcon12][!MoveMeter 102 193 MeterLauncher13][!MoveMeter 99 186 MeterLauncher13Image][!MoveMeter 130 195 MeterLauncherText13][!MoveMeter 107 192 MeterLauncherIcon13][!MoveMeter 102 224 MeterLauncher14][!MoveMeter 99 217 MeterLauncher14Image][!MoveMeter 130 226 MeterLauncherText14][!MoveMeter 107 223 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 180][!SetOptionGroup SLauncher10 FontColor 255,255,255,180][!SetOptionGroup SLauncher12 ImageAlpha 180][!SetOptionGroup SLauncher12 FontColor 255,255,255,180][!SetOptionGroup SLauncher13 ImageAlpha 180][!SetOptionGroup SLauncher13 FontColor 255,255,255,180][!SetOptionGroup SLauncher14 ImageAlpha 180][!SetOptionGroup SLauncher14 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher11Image ImageName SLButton#Color1#_0#Type11s#.png][!SetOption MeterLauncher11 H 30][!SetOption MeterLauncher11 W 90][!MoveMeter 130 128 MeterLauncherText11][!MoveMeter 107 125 MeterLauncherIcon11][!MoveMeter 102 154 MeterLauncher12][!MoveMeter 99 150 MeterLauncher12Image][!MoveMeter 130 159 MeterLauncherText12][!MoveMeter 107 156 MeterLauncherIcon12][!MoveMeter 102 185 MeterLauncher13][!MoveMeter 99 181 MeterLauncher13Image][!MoveMeter 130 190 MeterLauncherText13][!MoveMeter 107 187 MeterLauncherIcon13][!MoveMeter 102 216 MeterLauncher14][!MoveMeter 99 212 MeterLauncher14Image][!MoveMeter 130 221 MeterLauncherText14][!MoveMeter 107 218 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 255][!SetOptionGroup SLauncher10 FontColor ""][!SetOptionGroup SLauncher12 ImageAlpha 255][!SetOptionGroup SLauncher12 FontColor ""][!SetOptionGroup SLauncher13 ImageAlpha 255][!SetOptionGroup SLauncher13 FontColor ""][!SetOptionGroup SLauncher14 ImageAlpha 255][!SetOptionGroup SLauncher14 FontColor ""][!UpdateMeterGroup GroupSlaunch][!UpdateMeterGroup GroupSlaunch][!Redraw]
Group=GroupSlaunch| SLauncher11

[MeterLauncherText11]
Meter=String
MeterStyle=TextStyle
Text=#SLT11#
x=28r
y=5r
Group=GroupSlaunch| SLauncher11

[MeterLauncherIcon11]
Meter=Image
ImageName=#SLI11#
x=-23r
y=-3r
W=20
H=20
AntiAlias=1
Group=GroupSlaunch| SLauncher11

;------------------------------------------------------------------------

[MeterLauncher12Image]
Meter=Image
ImagePath=#@#\Images\Small Launchers2
ImageName=SLButton#Color1#_0.png
x=99
y=150
Group=GroupSlaunch| SLauncher12

[MeterLauncher12]
Meter=Image
SolidColor=0,0,0,1
x=3r
y=154
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher12Image ImageName SLButton#Color1#_2#Type12s#.png]["#SLP12#"][!UpdateMeter MeterLauncher12Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher12Image ImageName SLButton#Color1#_1#Type12s#.png][!UpdateMeter MeterLauncher12Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher12Image ImageName SLButton#Color1#_1#Type12s#.png][!SetOption MeterLauncher12 H 36][!SetOption MeterLauncher12 W 100][!MoveMeter 135 164 MeterLauncherText12][!MoveMeter 113 162 MeterLauncherIcon12][!MoveMeter 102 193 MeterLauncher13][!MoveMeter 99 186 MeterLauncher13Image][!MoveMeter 130 195 MeterLauncherText13][!MoveMeter 107 192 MeterLauncherIcon13][!MoveMeter 102 224 MeterLauncher14][!MoveMeter 99 217 MeterLauncher14Image][!MoveMeter 130 226 MeterLauncherText14][!MoveMeter 107 223 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 180][!SetOptionGroup SLauncher10 FontColor 255,255,255,180][!SetOptionGroup SLauncher11 ImageAlpha 180][!SetOptionGroup SLauncher11 FontColor 255,255,255,180][!SetOptionGroup SLauncher13 ImageAlpha 180][!SetOptionGroup SLauncher13 FontColor 255,255,255,180][!SetOptionGroup SLauncher14 ImageAlpha 180][!SetOptionGroup SLauncher14 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher12Image ImageName SLButton#Color1#_0#Type12s#.png][!SetOption MeterLauncher12 H 30][!SetOption MeterLauncher12 W 90][!MoveMeter 130 159 MeterLauncherText12][!MoveMeter 107 156 MeterLauncherIcon12][!MoveMeter 102 185 MeterLauncher13][!MoveMeter 99 181 MeterLauncher13Image][!MoveMeter 130 190 MeterLauncherText13][!MoveMeter 107 187 MeterLauncherIcon13][!MoveMeter 102 216 MeterLauncher14][!MoveMeter 99 212 MeterLauncher14Image][!MoveMeter 130 221 MeterLauncherText14][!MoveMeter 107 218 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 255][!SetOptionGroup SLauncher10 FontColor ""][!SetOptionGroup SLauncher11 ImageAlpha 255][!SetOptionGroup SLauncher11 FontColor ""][!SetOptionGroup SLauncher13 ImageAlpha 255][!SetOptionGroup SLauncher13 FontColor ""][!SetOptionGroup SLauncher14 ImageAlpha 255][!SetOptionGroup SLauncher14 FontColor ""][!UpdateMeterGroup GroupSlaunch][!Redraw]
Group=GroupSlaunch| SLauncher12

[MeterLauncherText12]
Meter=String
MeterStyle=TextStyle
Text=#SLT12#
x=28r
y=5r
Group=GroupSlaunch| SLauncher12

[MeterLauncherIcon12]
Meter=Image
ImageName=#SLI12#
x=-23r
y=-3r
W=20
H=20
AntiAlias=1
Group=GroupSlaunch| SLauncher12

;------------------------------------------------------------------------

[MeterLauncher13Image]
Meter=Image
ImagePath=#@#\Images\Small Launchers2
ImageName=SLButton#Color1#_0.png
x=99
y=181
Group=GroupSlaunch| SLauncher13

[MeterLauncher13]
Meter=Image
SolidColor=0,0,0,1
x=3r
y=185
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher13Image ImageName SLButton#Color1#_2#Type13s#.png]["#SLP13#"][!UpdateMeter MeterLauncher13Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher13Image ImageName SLButton#Color1#_1#Type13s#.png][!UpdateMeter MeterLauncher13Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher13Image ImageName SLButton#Color1#_1#Type13s#.png][!SetOption MeterLauncher13 H 36][!SetOption MeterLauncher13 W 100][!MoveMeter 135 195 MeterLauncherText13][!MoveMeter 113 192 MeterLauncherIcon13][!MoveMeter 102 224 MeterLauncher14][!MoveMeter 99 217 MeterLauncher14Image][!MoveMeter 130 226 MeterLauncherText14][!MoveMeter 107 223 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 180][!SetOptionGroup SLauncher10 FontColor 255,255,255,180][!SetOptionGroup SLauncher11 ImageAlpha 180][!SetOptionGroup SLauncher11 FontColor 255,255,255,180][!SetOptionGroup SLauncher12 ImageAlpha 180][!SetOptionGroup SLauncher12 FontColor 255,255,255,180][!SetOptionGroup SLauncher14 ImageAlpha 180][!SetOptionGroup SLauncher14 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher13Image ImageName SLButton#Color1#_0#Type13s#.png][!SetOption MeterLauncher13 H 30][!SetOption MeterLauncher13 W 90][!MoveMeter 130 190 MeterLauncherText13][!MoveMeter 107 187 MeterLauncherIcon13][!MoveMeter 102 216 MeterLauncher14][!MoveMeter 99 212 MeterLauncher14Image][!MoveMeter 130 221 MeterLauncherText14][!MoveMeter 107 218 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 255][!SetOptionGroup SLauncher10 FontColor ""][!SetOptionGroup SLauncher11 ImageAlpha 255][!SetOptionGroup SLauncher11 FontColor ""][!SetOptionGroup SLauncher12 ImageAlpha 255][!SetOptionGroup SLauncher12 FontColor ""][!SetOptionGroup SLauncher14 ImageAlpha 255][!SetOptionGroup SLauncher14 FontColor ""][!UpdateMeterGroup GroupSlaunch][!Redraw]
Group=GroupSlaunch| SLauncher13

[MeterLauncherText13]
Meter=String
MeterStyle=TextStyle
Text=#SLT13#
x=28r
y=5r
Group=GroupSlaunch| SLauncher13

[MeterLauncherIcon13]
Meter=Image
ImageName=#SLI13#
x=-23r
y=-3r
W=20
H=20
AntiAlias=1
Group=GroupSlaunch| SLauncher13

;------------------------------------------------------------------------

[MeterLauncher14Image]
Meter=Image
ImagePath=#@#\Images\Small Launchers2
ImageName=SLButton#Color1#_0.png
x=99
y=212
Group=GroupSlaunch| SLauncher14

[MeterLauncher14]
Meter=Image
SolidColor=0,0,0,1
x=3r
y=216
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher14Image ImageName SLButton#Color1#_2#Type14s#.png]["#SLP14#"][!UpdateMeter MeterLauncher14Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher14Image ImageName SLButton#Color1#_1#Type14s#.png][!UpdateMeter MeterLauncher14Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher14Image ImageName SLButton#Color1#_1#Type14s#.png][!SetOption MeterLauncher14 H 36][!SetOption MeterLauncher14 W 100][!MoveMeter 135 226 MeterLauncherText14][!MoveMeter 113 223 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 180][!SetOptionGroup SLauncher10 FontColor 255,255,255,180][!SetOptionGroup SLauncher11 ImageAlpha 180][!SetOptionGroup SLauncher11 FontColor 255,255,255,180][!SetOptionGroup SLauncher12 ImageAlpha 180][!SetOptionGroup SLauncher12 FontColor 255,255,255,180][!SetOptionGroup SLauncher13 ImageAlpha 180][!SetOptionGroup SLauncher13 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!UpdateMeterGroup SLauncher14][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher14Image ImageName SLButton#Color1#_0#Type14s#.png][!SetOption MeterLauncher14 H 30][!SetOption MeterLauncher14 W 90][!MoveMeter 130 221 MeterLauncherText14][!MoveMeter 107 218 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 255][!SetOptionGroup SLauncher10 FontColor ""][!SetOptionGroup SLauncher11 ImageAlpha 255][!SetOptionGroup SLauncher11 FontColor ""][!SetOptionGroup SLauncher12 ImageAlpha 255][!SetOptionGroup SLauncher12 FontColor ""][!SetOptionGroup SLauncher13 ImageAlpha 255][!SetOptionGroup SLauncher13 FontColor ""][!UpdateMeterGroup GroupSlaunch][!UpdateMeterGroup SLauncher14][!Redraw]
Group=GroupSlaunch| SLauncher14

[MeterLauncherText14]
Meter=String
MeterStyle=TextStyle
Text=#SLT14#
x=28r
y=5r
Group=GroupSlaunch| SLauncher14

[MeterLauncherIcon14]
Meter=Image
ImageName=#SLI14#
x=-23r
y=-3r
W=20
H=20
AntiAlias=1
Group=GroupSlaunch| SLauncher14
