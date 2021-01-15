
[Rainmeter]
Update=2000

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

[TextStylePr]
Meter=String
FontFace=gliscor gothic
FontColor=255,255,255,255
FontSize=7
StringAlign=Right
StringEffect=Shadow
FontEffectColor=0,0,0,50
AntiAlias=1

;HIDE LAUNCHERS =========================================================

[MeterSmallLauncherOff]
Meter=Button
ButtonImage=#@#\Images\Small Launchers2\SLauncButton.png
x=104
y=56
ButtonCommand=[!WriteKeyValue Variables TabSL "Small_Launchers0_M"][!Refresh]
ToolTipText=#SmLTxt1#
ToolTipIcon=Info
ToolTipType=0
Antialias=1
UpdateDivider=-1

;MEASURES ===============================================================

;Main program control measures are stored in Avengers\Options\Small Launchers 2Plus.inc

;PROGRAMS RUNNING STATE DETECTION ---------------------------------------

[MeasureSL2Progr10]
Measure=Plugin
Plugin=Process.dll
ProcessName=#SL2Data10#
IfBelowValue=1
IfBelowAction=[!HideMeter MeterProgL10On][!HideMeter MeterLauncher10a][!ShowMeter MeterLauncher10][!UpdateMeterGroup SLauncher10][!Redraw]
IfEqualValue=1
IfEqualAction=[!ShowMeter MeterProgL10On][!HideMeter MeterLauncher10][!ShowMeter MeterLauncher10a][!UpdateMeterGroup SLauncher10][!Redraw]
Disabled=#ProgSL10#

[MeasureSL2Progr11]
Measure=Plugin
Plugin=Process.dll
ProcessName=#SL2Data11#
IfBelowValue=1
IfBelowAction=[!HideMeter MeterProgL11On][!HideMeter MeterLauncher11a][!ShowMeter MeterLauncher11][!UpdateMeterGroup SLauncher11][!Redraw]
IfEqualValue=1
IfEqualAction=[!ShowMeter MeterProgL11On][!HideMeter MeterLauncher11][!ShowMeter MeterLauncher11a][!UpdateMeterGroup SLauncher11][!Redraw]
Disabled=#ProgSL11#

[MeasureSL2Progr12]
Measure=Plugin
Plugin=Process.dll
ProcessName=#SL2Data12#
IfBelowValue=1
IfBelowAction=[!HideMeter MeterProgL12On][!HideMeter MeterLauncher12a][!ShowMeter MeterLauncher12][!UpdateMeterGroup SLauncher12][!Redraw]
IfEqualValue=1
IfEqualAction=[!ShowMeter MeterProgL12On][!HideMeter MeterLauncher12][!ShowMeter MeterLauncher12a][!UpdateMeterGroup SLauncher12][!Redraw]
Disabled=#ProgSL12#

[MeasureSL2Progr13]
Measure=Plugin
Plugin=Process.dll
ProcessName=#SL2Data13#
IfBelowValue=1
IfBelowAction=[!HideMeter MeterProgL13On][!HideMeter MeterLauncher13a][!ShowMeter MeterLauncher13][!UpdateMeterGroup SLauncher13][!Redraw]
IfEqualValue=1
IfEqualAction=[!ShowMeter MeterProgL13On][!HideMeter MeterLauncher13][!ShowMeter MeterLauncher13a][!UpdateMeterGroup SLauncher13][!Redraw]
Disabled=#ProgSL13#

[MeasureSL2Progr14]
Measure=Plugin
Plugin=Process.dll
ProcessName=#SL2Data14#
IfBelowValue=1
IfBelowAction=[!HideMeter MeterProgL14On][!HideMeter MeterLauncher14a][!ShowMeter MeterLauncher14][!UpdateMeterGroup SLauncher14][!Redraw]
IfEqualValue=1
IfEqualAction=[!ShowMeter MeterProgL14On][!HideMeter MeterLauncher14][!ShowMeter MeterLauncher14a][!UpdateMeterGroup SLauncher14][!Redraw]
Disabled=#ProgSL14#

;LAUNCHERS ==============================================================

[MeterLauncher10Image]
Meter=Image
ImagePath=#@#\Images\Small Launchers2
ImageName=SLButton#Color1#_0.png
x=99
y=88
Group=GroupSlaunch| SLauncher10
UpdateDivider=-1

[MeterLauncher10]
Meter=Image
SolidColor=0,0,0,1
x=3r
y=92
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher10Image ImageName SLButton#Color1#_2#Type10s#.png]["#SLP10#"][!UpdateMeter MeterLauncher10Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher10Image ImageName SLButton#Color1#_#Type10s#1.png][!UpdateMeter MeterLauncher10Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher10Image ImageName SLButton#Color1#_1#Type10s#.png][!SetOption MeterLauncher10 H 36][!SetOption MeterLauncher10 W 100][!MoveMeter 136 101 MeterLauncherText10][!MoveMeter 112 99 MeterLauncherIcon10][!MoveMeter 102 131 MeterLauncher11][!MoveMeter 99 124 MeterLauncher11Image][!MoveMeter 130 132 MeterLauncherText11][!MoveMeter 107 130 MeterLauncherIcon11][!MoveMeter 102 162 MeterLauncher12][!MoveMeter 99 155 MeterLauncher12Image][!MoveMeter 130 163 MeterLauncherText12][!MoveMeter 107 161 MeterLauncherIcon12][!MoveMeter 102 193 MeterLauncher13][!MoveMeter 99 186 MeterLauncher13Image][!MoveMeter 130 194 MeterLauncherText13][!MoveMeter 107 191 MeterLauncherIcon13][!MoveMeter 102 224 MeterLauncher14][!MoveMeter 99 217 MeterLauncher14Image][!MoveMeter 130 225 MeterLauncherText14][!MoveMeter 107 222 MeterLauncherIcon14][!SetOptionGroup SLauncher11 ImageAlpha 180][!SetOptionGroup SLauncher11 FontColor 255,255,255,180][!SetOptionGroup SLauncher12 ImageAlpha 180][!SetOptionGroup SLauncher12 FontColor 255,255,255,180][!SetOptionGroup SLauncher13 ImageAlpha 180][!SetOptionGroup SLauncher13 FontColor 255,255,255,180][!SetOptionGroup SLauncher14 ImageAlpha 180][!SetOptionGroup SLauncher14 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher10Image ImageName SLButton#Color1#_0#Type10s#.png][!SetOption MeterLauncher10 H 30][!SetOption MeterLauncher10 W 90][!MoveMeter 130 96 MeterLauncherText10][!MoveMeter 107 93 MeterLauncherIcon10][!MoveMeter 102 123 MeterLauncher11][!MoveMeter 99 119 MeterLauncher11Image][!MoveMeter 130 127 MeterLauncherText11][!MoveMeter 107 124 MeterLauncherIcon11][!MoveMeter 102 154 MeterLauncher12][!MoveMeter 99 150 MeterLauncher12Image][!MoveMeter 130 158 MeterLauncherText12][!MoveMeter 107 155 MeterLauncherIcon12][!MoveMeter 102 185 MeterLauncher13][!MoveMeter 99 181 MeterLauncher13Image][!MoveMeter 130 189 MeterLauncherText13][!MoveMeter 107 186 MeterLauncherIcon13][!MoveMeter 102 216 MeterLauncher14][!MoveMeter 99 212 MeterLauncher14Image][!MoveMeter 130 220 MeterLauncherText14][!MoveMeter 107 217 MeterLauncherIcon14][!SetOptionGroup SLauncher11 ImageAlpha 255][!SetOptionGroup SLauncher11 FontColor ""][!SetOptionGroup SLauncher12 ImageAlpha 255][!SetOptionGroup SLauncher12 FontColor ""][!SetOptionGroup SLauncher13 ImageAlpha 255][!SetOptionGroup SLauncher13 FontColor ""][!SetOptionGroup SLauncher14 ImageAlpha 255][!SetOptionGroup SLauncher14 FontColor ""][!UpdateMeterGroup GroupSlaunch][!Redraw]
Group=GroupSlaunch| SLauncher10
UpdateDivider=-1

[MeterLauncher10a]
Meter=Image
SolidColor=0,0,0,1
x=r
y=r
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher10Image ImageName SLButton#Color1#_2#Type10s#.png][!UpdateMeter MeterLauncher10Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher10Image ImageName SLButton#Color1#_#Type10s#1.png][!UpdateMeter MeterLauncher10Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher10Image ImageName SLButton#Color1#_1#Type10s#.png][!SetOption MeterLauncher10 H 36][!SetOption MeterLauncher10 W 100][!MoveMeter 136 101 MeterLauncherText10][!MoveMeter 112 99 MeterLauncherIcon10][!MoveMeter 102 131 MeterLauncher11][!MoveMeter 99 124 MeterLauncher11Image][!MoveMeter 130 132 MeterLauncherText11][!MoveMeter 107 130 MeterLauncherIcon11][!MoveMeter 102 162 MeterLauncher12][!MoveMeter 99 155 MeterLauncher12Image][!MoveMeter 130 163 MeterLauncherText12][!MoveMeter 107 161 MeterLauncherIcon12][!MoveMeter 102 193 MeterLauncher13][!MoveMeter 99 186 MeterLauncher13Image][!MoveMeter 130 194 MeterLauncherText13][!MoveMeter 107 191 MeterLauncherIcon13][!MoveMeter 102 224 MeterLauncher14][!MoveMeter 99 217 MeterLauncher14Image][!MoveMeter 130 225 MeterLauncherText14][!MoveMeter 107 222 MeterLauncherIcon14][!SetOptionGroup SLauncher11 ImageAlpha 180][!SetOptionGroup SLauncher11 FontColor 255,255,255,180][!SetOptionGroup SLauncher12 ImageAlpha 180][!SetOptionGroup SLauncher12 FontColor 255,255,255,180][!SetOptionGroup SLauncher13 ImageAlpha 180][!SetOptionGroup SLauncher13 FontColor 255,255,255,180][!SetOptionGroup SLauncher14 ImageAlpha 180][!SetOptionGroup SLauncher14 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher10Image ImageName SLButton#Color1#_0#Type10s#.png][!SetOption MeterLauncher10 H 30][!SetOption MeterLauncher10 W 90][!MoveMeter 130 96 MeterLauncherText10][!MoveMeter 107 93 MeterLauncherIcon10][!MoveMeter 102 123 MeterLauncher11][!MoveMeter 99 119 MeterLauncher11Image][!MoveMeter 130 127 MeterLauncherText11][!MoveMeter 107 124 MeterLauncherIcon11][!MoveMeter 102 154 MeterLauncher12][!MoveMeter 99 150 MeterLauncher12Image][!MoveMeter 130 158 MeterLauncherText12][!MoveMeter 107 155 MeterLauncherIcon12][!MoveMeter 102 185 MeterLauncher13][!MoveMeter 99 181 MeterLauncher13Image][!MoveMeter 130 189 MeterLauncherText13][!MoveMeter 107 186 MeterLauncherIcon13][!MoveMeter 102 216 MeterLauncher14][!MoveMeter 99 212 MeterLauncher14Image][!MoveMeter 130 220 MeterLauncherText14][!MoveMeter 107 217 MeterLauncherIcon14][!SetOptionGroup SLauncher11 ImageAlpha 255][!SetOptionGroup SLauncher11 FontColor ""][!SetOptionGroup SLauncher12 ImageAlpha 255][!SetOptionGroup SLauncher12 FontColor ""][!SetOptionGroup SLauncher13 ImageAlpha 255][!SetOptionGroup SLauncher13 FontColor ""][!SetOptionGroup SLauncher14 ImageAlpha 255][!SetOptionGroup SLauncher14 FontColor ""][!UpdateMeterGroup GroupSlaunch][!Redraw]
Hidden=1
Group=GroupSlaunch| SLauncher10
UpdateDivider=-1

[MeterLauncherText10]
Meter=String
MeterStyle=TextStyle
Text=#SLT10#
x=28r
y=4r
Group=GroupSlaunch| SLauncher10
UpdateDivider=-1

[MeterLauncherIcon10]
Meter=Image
ImageName=#SLI10#
x=-23r
y=-3r
W=20
H=20
AntiAlias=1
Group=GroupSlaunch| SLauncher10
UpdateDivider=-1

[MeterProgL10On]
Meter=String
MeterStyle=TextStylePr
Text=PRG RUN
x=81r
y=14r
AntiAlias=1
Group=GroupSLaunch| SLauncher10
Hidden=1
UpdateDivider=-1

;------------------------------------------------------------------------

[MeterLauncher11Image]
Meter=Image
ImagePath=#@#\Images\Small Launchers2
ImageName=SLButton#Color1#_0.png
x=99
y=119
Group=GroupSlaunch| SLauncher11
UpdateDivider=-1

[MeterLauncher11]
Meter=Image
SolidColor=0,0,0,1
x=3r
y=123
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher11Image ImageName SLButton#Color1#_2#Type11s#.png]["#SLP11#"][!UpdateMeter MeterLauncher11Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher11Image ImageName SLButton#Color1#_1#Type11s#.png][!UpdateMeter MeterLauncher11Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher11Image ImageName SLButton#Color1#_1#Type11s#.png][!SetOption MeterLauncher11 H 36][!SetOption MeterLauncher11 W 100][!MoveMeter 136 132 MeterLauncherText11][!MoveMeter 113 130 MeterLauncherIcon11][!MoveMeter 102 162 MeterLauncher12][!MoveMeter 99 155 MeterLauncher12Image][!MoveMeter 130 163 MeterLauncherText12][!MoveMeter 107 161 MeterLauncherIcon12][!MoveMeter 102 193 MeterLauncher13][!MoveMeter 99 186 MeterLauncher13Image][!MoveMeter 130 194 MeterLauncherText13][!MoveMeter 107 191 MeterLauncherIcon13][!MoveMeter 102 224 MeterLauncher14][!MoveMeter 99 217 MeterLauncher14Image][!MoveMeter 130 225 MeterLauncherText14][!MoveMeter 107 222 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 180][!SetOptionGroup SLauncher10 FontColor 255,255,255,180][!SetOptionGroup SLauncher12 ImageAlpha 180][!SetOptionGroup SLauncher12 FontColor 255,255,255,180][!SetOptionGroup SLauncher13 ImageAlpha 180][!SetOptionGroup SLauncher13 FontColor 255,255,255,180][!SetOptionGroup SLauncher14 ImageAlpha 180][!SetOptionGroup SLauncher14 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher11Image ImageName SLButton#Color1#_0#Type11s#.png][!SetOption MeterLauncher11 H 30][!SetOption MeterLauncher11 W 90][!MoveMeter 130 127 MeterLauncherText11][!MoveMeter 107 124 MeterLauncherIcon11][!MoveMeter 102 154 MeterLauncher12][!MoveMeter 99 150 MeterLauncher12Image][!MoveMeter 130 158 MeterLauncherText12][!MoveMeter 107 155 MeterLauncherIcon12][!MoveMeter 102 185 MeterLauncher13][!MoveMeter 99 181 MeterLauncher13Image][!MoveMeter 130 189 MeterLauncherText13][!MoveMeter 107 186 MeterLauncherIcon13][!MoveMeter 102 216 MeterLauncher14][!MoveMeter 99 212 MeterLauncher14Image][!MoveMeter 130 220 MeterLauncherText14][!MoveMeter 107 217 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 255][!SetOptionGroup SLauncher10 FontColor ""][!SetOptionGroup SLauncher12 ImageAlpha 255][!SetOptionGroup SLauncher12 FontColor ""][!SetOptionGroup SLauncher13 ImageAlpha 255][!SetOptionGroup SLauncher13 FontColor ""][!SetOptionGroup SLauncher14 ImageAlpha 255][!SetOptionGroup SLauncher14 FontColor ""][!UpdateMeterGroup GroupSlaunch][!UpdateMeterGroup GroupSlaunch][!Redraw]
Group=GroupSlaunch| SLauncher11
UpdateDivider=-1

[MeterLauncher11a]
Meter=Image
SolidColor=0,0,0,1
x=r
y=r
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher11Image ImageName SLButton#Color1#_2#Type11s#.png][!UpdateMeter MeterLauncher11Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher11Image ImageName SLButton#Color1#_1#Type11s#.png][!UpdateMeter MeterLauncher11Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher11Image ImageName SLButton#Color1#_1#Type11s#.png][!SetOption MeterLauncher11 H 36][!SetOption MeterLauncher11 W 100][!MoveMeter 136 132 MeterLauncherText11][!MoveMeter 113 130 MeterLauncherIcon11][!MoveMeter 102 162 MeterLauncher12][!MoveMeter 99 155 MeterLauncher12Image][!MoveMeter 130 163 MeterLauncherText12][!MoveMeter 107 161 MeterLauncherIcon12][!MoveMeter 102 193 MeterLauncher13][!MoveMeter 99 186 MeterLauncher13Image][!MoveMeter 130 194 MeterLauncherText13][!MoveMeter 107 191 MeterLauncherIcon13][!MoveMeter 102 224 MeterLauncher14][!MoveMeter 99 217 MeterLauncher14Image][!MoveMeter 130 225 MeterLauncherText14][!MoveMeter 107 222 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 180][!SetOptionGroup SLauncher10 FontColor 255,255,255,180][!SetOptionGroup SLauncher12 ImageAlpha 180][!SetOptionGroup SLauncher12 FontColor 255,255,255,180][!SetOptionGroup SLauncher13 ImageAlpha 180][!SetOptionGroup SLauncher13 FontColor 255,255,255,180][!SetOptionGroup SLauncher14 ImageAlpha 180][!SetOptionGroup SLauncher14 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher11Image ImageName SLButton#Color1#_0#Type11s#.png][!SetOption MeterLauncher11 H 30][!SetOption MeterLauncher11 W 90][!MoveMeter 130 127 MeterLauncherText11][!MoveMeter 107 124 MeterLauncherIcon11][!MoveMeter 102 154 MeterLauncher12][!MoveMeter 99 150 MeterLauncher12Image][!MoveMeter 130 158 MeterLauncherText12][!MoveMeter 107 155 MeterLauncherIcon12][!MoveMeter 102 185 MeterLauncher13][!MoveMeter 99 181 MeterLauncher13Image][!MoveMeter 130 189 MeterLauncherText13][!MoveMeter 107 186 MeterLauncherIcon13][!MoveMeter 102 216 MeterLauncher14][!MoveMeter 99 212 MeterLauncher14Image][!MoveMeter 130 220 MeterLauncherText14][!MoveMeter 107 217 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 255][!SetOptionGroup SLauncher10 FontColor ""][!SetOptionGroup SLauncher12 ImageAlpha 255][!SetOptionGroup SLauncher12 FontColor ""][!SetOptionGroup SLauncher13 ImageAlpha 255][!SetOptionGroup SLauncher13 FontColor ""][!SetOptionGroup SLauncher14 ImageAlpha 255][!SetOptionGroup SLauncher14 FontColor ""][!UpdateMeterGroup GroupSlaunch][!UpdateMeterGroup GroupSlaunch][!Redraw]
Hidden=1
Group=GroupSlaunch| SLauncher11
UpdateDivider=-1

[MeterLauncherText11]
Meter=String
MeterStyle=TextStyle
Text=#SLT11#
x=28r
y=4r
Group=GroupSlaunch| SLauncher11
UpdateDivider=-1

[MeterLauncherIcon11]
Meter=Image
ImageName=#SLI11#
x=-23r
y=-3r
W=20
H=20
AntiAlias=1
Group=GroupSlaunch| SLauncher11
UpdateDivider=-1

[MeterProgL11On]
Meter=String
MeterStyle=TextStylePr
Text=PRG RUN
x=81r
y=14r
AntiAlias=1
Group=GroupSLaunch| SLauncher11
Hidden=1
UpdateDivider=-1

;------------------------------------------------------------------------

[MeterLauncher12Image]
Meter=Image
ImagePath=#@#\Images\Small Launchers2
ImageName=SLButton#Color1#_0.png
x=99
y=150
Group=GroupSlaunch| SLauncher12
UpdateDivider=-1

[MeterLauncher12]
Meter=Image
SolidColor=0,0,0,1
x=3r
y=154
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher12Image ImageName SLButton#Color1#_2#Type12s#.png]["#SLP12#"][!UpdateMeter MeterLauncher12Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher12Image ImageName SLButton#Color1#_1#Type12s#.png][!UpdateMeter MeterLauncher12Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher12Image ImageName SLButton#Color1#_1#Type12s#.png][!SetOption MeterLauncher12 H 36][!SetOption MeterLauncher12 W 100][!MoveMeter 135 163 MeterLauncherText12][!MoveMeter 113 161 MeterLauncherIcon12][!MoveMeter 102 193 MeterLauncher13][!MoveMeter 99 186 MeterLauncher13Image][!MoveMeter 130 194 MeterLauncherText13][!MoveMeter 107 191 MeterLauncherIcon13][!MoveMeter 102 224 MeterLauncher14][!MoveMeter 99 217 MeterLauncher14Image][!MoveMeter 130 225 MeterLauncherText14][!MoveMeter 107 222 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 180][!SetOptionGroup SLauncher10 FontColor 255,255,255,180][!SetOptionGroup SLauncher11 ImageAlpha 180][!SetOptionGroup SLauncher11 FontColor 255,255,255,180][!SetOptionGroup SLauncher13 ImageAlpha 180][!SetOptionGroup SLauncher13 FontColor 255,255,255,180][!SetOptionGroup SLauncher14 ImageAlpha 180][!SetOptionGroup SLauncher14 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher12Image ImageName SLButton#Color1#_0#Type12s#.png][!SetOption MeterLauncher12 H 30][!SetOption MeterLauncher12 W 90][!MoveMeter 130 158 MeterLauncherText12][!MoveMeter 107 155 MeterLauncherIcon12][!MoveMeter 102 185 MeterLauncher13][!MoveMeter 99 181 MeterLauncher13Image][!MoveMeter 130 189 MeterLauncherText13][!MoveMeter 107 186 MeterLauncherIcon13][!MoveMeter 102 216 MeterLauncher14][!MoveMeter 99 212 MeterLauncher14Image][!MoveMeter 130 220 MeterLauncherText14][!MoveMeter 107 217 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 255][!SetOptionGroup SLauncher10 FontColor ""][!SetOptionGroup SLauncher11 ImageAlpha 255][!SetOptionGroup SLauncher11 FontColor ""][!SetOptionGroup SLauncher13 ImageAlpha 255][!SetOptionGroup SLauncher13 FontColor ""][!SetOptionGroup SLauncher14 ImageAlpha 255][!SetOptionGroup SLauncher14 FontColor ""][!UpdateMeterGroup GroupSlaunch][!Redraw]
Group=GroupSlaunch| SLauncher12
UpdateDivider=-1

[MeterLauncher12a]
Meter=Image
SolidColor=0,0,0,1
x=r
y=r
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher12Image ImageName SLButton#Color1#_2#Type12s#.png][!UpdateMeter MeterLauncher12Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher12Image ImageName SLButton#Color1#_1#Type12s#.png][!UpdateMeter MeterLauncher12Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher12Image ImageName SLButton#Color1#_1#Type12s#.png][!SetOption MeterLauncher12 H 36][!SetOption MeterLauncher12 W 100][!MoveMeter 135 163 MeterLauncherText12][!MoveMeter 113 161 MeterLauncherIcon12][!MoveMeter 102 193 MeterLauncher13][!MoveMeter 99 186 MeterLauncher13Image][!MoveMeter 130 194 MeterLauncherText13][!MoveMeter 107 191 MeterLauncherIcon13][!MoveMeter 102 224 MeterLauncher14][!MoveMeter 99 217 MeterLauncher14Image][!MoveMeter 130 225 MeterLauncherText14][!MoveMeter 107 222 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 180][!SetOptionGroup SLauncher10 FontColor 255,255,255,180][!SetOptionGroup SLauncher11 ImageAlpha 180][!SetOptionGroup SLauncher11 FontColor 255,255,255,180][!SetOptionGroup SLauncher13 ImageAlpha 180][!SetOptionGroup SLauncher13 FontColor 255,255,255,180][!SetOptionGroup SLauncher14 ImageAlpha 180][!SetOptionGroup SLauncher14 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher12Image ImageName SLButton#Color1#_0#Type12s#.png][!SetOption MeterLauncher12 H 30][!SetOption MeterLauncher12 W 90][!MoveMeter 130 158 MeterLauncherText12][!MoveMeter 107 155 MeterLauncherIcon12][!MoveMeter 102 185 MeterLauncher13][!MoveMeter 99 181 MeterLauncher13Image][!MoveMeter 130 189 MeterLauncherText13][!MoveMeter 107 186 MeterLauncherIcon13][!MoveMeter 102 216 MeterLauncher14][!MoveMeter 99 212 MeterLauncher14Image][!MoveMeter 130 220 MeterLauncherText14][!MoveMeter 107 217 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 255][!SetOptionGroup SLauncher10 FontColor ""][!SetOptionGroup SLauncher11 ImageAlpha 255][!SetOptionGroup SLauncher11 FontColor ""][!SetOptionGroup SLauncher13 ImageAlpha 255][!SetOptionGroup SLauncher13 FontColor ""][!SetOptionGroup SLauncher14 ImageAlpha 255][!SetOptionGroup SLauncher14 FontColor ""][!UpdateMeterGroup GroupSlaunch][!Redraw]
Hidden=1
Group=GroupSlaunch| SLauncher12
UpdateDivider=-1

[MeterLauncherText12]
Meter=String
MeterStyle=TextStyle
Text=#SLT12#
x=28r
y=4r
Group=GroupSlaunch| SLauncher12
UpdateDivider=-1

[MeterLauncherIcon12]
Meter=Image
ImageName=#SLI12#
x=-23r
y=-3r
W=20
H=20
AntiAlias=1
Group=GroupSlaunch| SLauncher12
UpdateDivider=-1

[MeterProgL12On]
Meter=String
MeterStyle=TextStylePr
Text=PRG RUN
x=81r
y=14r
AntiAlias=1
Group=GroupSLaunch| SLauncher12
Hidden=1
UpdateDivider=-1

;------------------------------------------------------------------------

[MeterLauncher13Image]
Meter=Image
ImagePath=#@#\Images\Small Launchers2
ImageName=SLButton#Color1#_0.png
x=99
y=181
Group=GroupSlaunch| SLauncher13
UpdateDivider=-1

[MeterLauncher13]
Meter=Image
SolidColor=0,0,0,1
x=3r
y=185
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher13Image ImageName SLButton#Color1#_2#Type13s#.png]["#SLP13#"][!UpdateMeter MeterLauncher13Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher13Image ImageName SLButton#Color1#_1#Type13s#.png][!UpdateMeter MeterLauncher13Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher13Image ImageName SLButton#Color1#_1#Type13s#.png][!SetOption MeterLauncher13 H 36][!SetOption MeterLauncher13 W 100][!MoveMeter 135 195 MeterLauncherText13][!MoveMeter 113 192 MeterLauncherIcon13][!MoveMeter 102 224 MeterLauncher14][!MoveMeter 99 217 MeterLauncher14Image][!MoveMeter 130 225 MeterLauncherText14][!MoveMeter 107 222 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 180][!SetOptionGroup SLauncher10 FontColor 255,255,255,180][!SetOptionGroup SLauncher11 ImageAlpha 180][!SetOptionGroup SLauncher11 FontColor 255,255,255,180][!SetOptionGroup SLauncher12 ImageAlpha 180][!SetOptionGroup SLauncher12 FontColor 255,255,255,180][!SetOptionGroup SLauncher14 ImageAlpha 180][!SetOptionGroup SLauncher14 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher13Image ImageName SLButton#Color1#_0#Type13s#.png][!SetOption MeterLauncher13 H 30][!SetOption MeterLauncher13 W 90][!MoveMeter 130 190 MeterLauncherText13][!MoveMeter 107 187 MeterLauncherIcon13][!MoveMeter 102 216 MeterLauncher14][!MoveMeter 99 212 MeterLauncher14Image][!MoveMeter 130 220 MeterLauncherText14][!MoveMeter 107 217 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 255][!SetOptionGroup SLauncher10 FontColor ""][!SetOptionGroup SLauncher11 ImageAlpha 255][!SetOptionGroup SLauncher11 FontColor ""][!SetOptionGroup SLauncher12 ImageAlpha 255][!SetOptionGroup SLauncher12 FontColor ""][!SetOptionGroup SLauncher14 ImageAlpha 255][!SetOptionGroup SLauncher14 FontColor ""][!UpdateMeterGroup GroupSlaunch][!Redraw]
Group=GroupSlaunch| SLauncher13
UpdateDivider=-1

[MeterLauncher13a]
Meter=Image
SolidColor=0,0,0,1
x=r
y=r
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher13Image ImageName SLButton#Color1#_2#Type13s#.png][!UpdateMeter MeterLauncher13Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher13Image ImageName SLButton#Color1#_1#Type13s#.png][!UpdateMeter MeterLauncher13Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher13Image ImageName SLButton#Color1#_1#Type13s#.png][!SetOption MeterLauncher13 H 36][!SetOption MeterLauncher13 W 100][!MoveMeter 135 194 MeterLauncherText13][!MoveMeter 113 191 MeterLauncherIcon13][!MoveMeter 102 224 MeterLauncher14][!MoveMeter 99 217 MeterLauncher14Image][!MoveMeter 130 225 MeterLauncherText14][!MoveMeter 107 222 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 180][!SetOptionGroup SLauncher10 FontColor 255,255,255,180][!SetOptionGroup SLauncher11 ImageAlpha 180][!SetOptionGroup SLauncher11 FontColor 255,255,255,180][!SetOptionGroup SLauncher12 ImageAlpha 180][!SetOptionGroup SLauncher12 FontColor 255,255,255,180][!SetOptionGroup SLauncher14 ImageAlpha 180][!SetOptionGroup SLauncher14 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher13Image ImageName SLButton#Color1#_0#Type13s#.png][!SetOption MeterLauncher13 H 30][!SetOption MeterLauncher13 W 90][!MoveMeter 130 189 MeterLauncherText13][!MoveMeter 107 186 MeterLauncherIcon13][!MoveMeter 102 216 MeterLauncher14][!MoveMeter 99 212 MeterLauncher14Image][!MoveMeter 130 220 MeterLauncherText14][!MoveMeter 107 217 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 255][!SetOptionGroup SLauncher10 FontColor ""][!SetOptionGroup SLauncher11 ImageAlpha 255][!SetOptionGroup SLauncher11 FontColor ""][!SetOptionGroup SLauncher12 ImageAlpha 255][!SetOptionGroup SLauncher12 FontColor ""][!SetOptionGroup SLauncher14 ImageAlpha 255][!SetOptionGroup SLauncher14 FontColor ""][!UpdateMeterGroup GroupSlaunch][!Redraw]
Hidden=1
Group=GroupSlaunch| SLauncher13
UpdateDivider=-1

[MeterLauncherText13]
Meter=String
MeterStyle=TextStyle
Text=#SLT13#
x=28r
y=4r
Group=GroupSlaunch| SLauncher13
UpdateDivider=-1

[MeterLauncherIcon13]
Meter=Image
ImageName=#SLI13#
x=-23r
y=-3r
W=20
H=20
AntiAlias=1
Group=GroupSlaunch| SLauncher13
UpdateDivider=-1

[MeterProgL13On]
Meter=String
MeterStyle=TextStylePr
Text=PRG RUN
x=81r
y=14r
AntiAlias=1
Group=GroupSLaunch| SLauncher13
Hidden=1
UpdateDivider=-1

;------------------------------------------------------------------------

[MeterLauncher14Image]
Meter=Image
ImagePath=#@#\Images\Small Launchers2
ImageName=SLButton#Color1#_0.png
x=99
y=212
Group=GroupSlaunch| SLauncher14
UpdateDivider=-1

[MeterLauncher14]
Meter=Image
SolidColor=0,0,0,1
x=3r
y=216
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher14Image ImageName SLButton#Color1#_2#Type14s#.png]["#SLP14#"][!UpdateMeter MeterLauncher14Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher14Image ImageName SLButton#Color1#_1#Type14s#.png][!UpdateMeter MeterLauncher14Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher14Image ImageName SLButton#Color1#_1#Type14s#.png][!SetOption MeterLauncher14 H 36][!SetOption MeterLauncher14 W 100][!MoveMeter 135 225 MeterLauncherText14][!MoveMeter 113 222 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 180][!SetOptionGroup SLauncher10 FontColor 255,255,255,180][!SetOptionGroup SLauncher11 ImageAlpha 180][!SetOptionGroup SLauncher11 FontColor 255,255,255,180][!SetOptionGroup SLauncher12 ImageAlpha 180][!SetOptionGroup SLauncher12 FontColor 255,255,255,180][!SetOptionGroup SLauncher13 ImageAlpha 180][!SetOptionGroup SLauncher13 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!UpdateMeterGroup SLauncher14][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher14Image ImageName SLButton#Color1#_0#Type14s#.png][!SetOption MeterLauncher14 H 30][!SetOption MeterLauncher14 W 90][!MoveMeter 130 220 MeterLauncherText14][!MoveMeter 107 217 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 255][!SetOptionGroup SLauncher10 FontColor ""][!SetOptionGroup SLauncher11 ImageAlpha 255][!SetOptionGroup SLauncher11 FontColor ""][!SetOptionGroup SLauncher12 ImageAlpha 255][!SetOptionGroup SLauncher12 FontColor ""][!SetOptionGroup SLauncher13 ImageAlpha 255][!SetOptionGroup SLauncher13 FontColor ""][!UpdateMeterGroup GroupSlaunch][!UpdateMeterGroup SLauncher14][!Redraw]
Group=GroupSlaunch| SLauncher14
UpdateDivider=-1

[MeterLauncher14a]
Meter=Image
SolidColor=0,0,0,1
x=r
y=216
W=90
H=30
LeftMouseDownAction=[!SetOption MeterLauncher14Image ImageName SLButton#Color1#_2#Type14s#.png][!UpdateMeter MeterLauncher14Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher14Image ImageName SLButton#Color1#_1#Type14s#.png][!UpdateMeter MeterLauncher14Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher14Image ImageName SLButton#Color1#_1#Type14s#.png][!SetOption MeterLauncher14 H 36][!SetOption MeterLauncher14 W 100][!MoveMeter 135 225 MeterLauncherText14][!MoveMeter 113 222 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 180][!SetOptionGroup SLauncher10 FontColor 255,255,255,180][!SetOptionGroup SLauncher11 ImageAlpha 180][!SetOptionGroup SLauncher11 FontColor 255,255,255,180][!SetOptionGroup SLauncher12 ImageAlpha 180][!SetOptionGroup SLauncher12 FontColor 255,255,255,180][!SetOptionGroup SLauncher13 ImageAlpha 180][!SetOptionGroup SLauncher13 FontColor 255,255,255,180][!UpdateMeterGroup GroupSlaunch][!UpdateMeterGroup SLauncher14][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher14Image ImageName SLButton#Color1#_0#Type14s#.png][!SetOption MeterLauncher14 H 30][!SetOption MeterLauncher14 W 90][!MoveMeter 130 220 MeterLauncherText14][!MoveMeter 107 217 MeterLauncherIcon14][!SetOptionGroup SLauncher10 ImageAlpha 255][!SetOptionGroup SLauncher10 FontColor ""][!SetOptionGroup SLauncher11 ImageAlpha 255][!SetOptionGroup SLauncher11 FontColor ""][!SetOptionGroup SLauncher12 ImageAlpha 255][!SetOptionGroup SLauncher12 FontColor ""][!SetOptionGroup SLauncher13 ImageAlpha 255][!SetOptionGroup SLauncher13 FontColor ""][!UpdateMeterGroup GroupSlaunch][!UpdateMeterGroup SLauncher14][!Redraw]
Hidden=1
Group=GroupSlaunch| SLauncher14
UpdateDivider=-1

[MeterLauncherText14]
Meter=String
MeterStyle=TextStyle
Text=#SLT14#
x=28r
y=4r
Group=GroupSlaunch| SLauncher14
UpdateDivider=-1

[MeterLauncherIcon14]
Meter=Image
ImageName=#SLI14#
x=-23r
y=-3r
W=20
H=20
AntiAlias=1
Group=GroupSlaunch| SLauncher14
UpdateDivider=-1

[MeterProgL14On]
Meter=String
MeterStyle=TextStylePr
Text=PRG RUN
x=81r
y=14r
AntiAlias=1
Hidden=1
Group=GroupSLaunch| SLauncher14
Hidden=1
UpdateDivider=-1
