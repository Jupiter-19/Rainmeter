
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

[MeterLargeLauncherOff]
Meter=Button
ButtonImage=#@#\Images\Large Launchers\LLaunchButton.png
x=-1
y=37
ButtonCommand=[!WriteKeyValue Variables TabLL "Large_Launchers0"][!Refresh]
ToolTipText=#SmLTxt1#
ToolTipIcon=Info
ToolTipType=0
Antialias=1

;BUTTONS ================================================================

[MeterLauncher1Image]
Meter=Image
ImagePath=#@#\Images\Large Launchers
ImageName=LLButton#Color1#_0.png
x=40
y=2
Hidden=#CloseLL1#
Group=GroupLaunch| LLauncher1

[MeterLauncher1]
Meter=Image
SolidColor=0,0,0,1
x=r
y=4
W=130
H=40
LeftMouseDownAction=[!SetOption MeterLauncher1Image ImageName LLButton#Color1#_2#Type1#.png]["#LLP1#"][!UpdateMeter MeterLauncher1Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher1Image ImageName LLButton#Color1#_1#Type1#.png][!UpdateMeter MeterLauncher1Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher1Image ImageName LLButton#Color1#_1#Type1#.png][!SetOption MeterLauncher1 H 52][!SetOption MeterLauncher1 W 140][!MoveMeter 101 24 MeterLauncherText1][!MoveMeter 71 15 MeterLauncherIcon1][!MoveMeter 40 59 MeterLauncher2][!MoveMeter 40 55 MeterLauncher2Image][!MoveMeter 91 68 MeterLauncherText2][!MoveMeter 61 58 MeterLauncherIcon2][!MoveMeter 40 104 MeterLauncher3][!MoveMeter 40 99 MeterLauncher3Image][!MoveMeter 91 112 MeterLauncherText3][!MoveMeter 61 102 MeterLauncherIcon3][!MoveMeter 40 148 MeterLauncher4][!MoveMeter 40 144 MeterLauncher4Image][!MoveMeter 91 156 MeterLauncherText4][!MoveMeter 61 146 MeterLauncherIcon4][!MoveMeter 40 192 MeterLauncher5][!MoveMeter 40 188 MeterLauncher5Image][!MoveMeter 91 200 MeterLauncherText5][!MoveMeter 61 190 MeterLauncherIcon5][!MoveMeter 40 236 MeterLauncher6][!MoveMeter 40 232 MeterLauncher6Image][!MoveMeter 91 244 MeterLauncherText6][!MoveMeter 61 234 MeterLauncherIcon6][!MoveMeter 40 280 MeterLauncher7][!MoveMeter 40 276 MeterLauncher7Image][!MoveMeter 91 288 MeterLauncherText7][!MoveMeter 61 278 MeterLauncherIcon7][!SetOptionGroup LLauncher2 ImageAlpha 180][!SetOptionGroup LLauncher2 FontColor 255,255,255,180][!SetOptionGroup LLauncher3 ImageAlpha 180][!SetOptionGroup LLauncher3 FontColor 255,255,255,180][!SetOptionGroup LLauncher4 ImageAlpha 180][!SetOptionGroup LLauncher4 FontColor 255,255,255,180][!SetOptionGroup LLauncher5 ImageAlpha 180][!SetOptionGroup LLauncher5 FontColor 255,255,255,180][!SetOptionGroup LLauncher6 ImageAlpha 180][!SetOptionGroup LLauncher6 FontColor 255,255,255,180][!SetOptionGroup LLauncher7 ImageAlpha 180][!SetOptionGroup LLauncher7 FontColor 255,255,255,180][!UpdateMeterGroup GroupLaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher1Image ImageName LLButton#Color1#_0#Type1#.png][!SetOption MeterLauncher1 H 40][!SetOption MeterLauncher1 W 130][!MoveMeter 91 15 MeterLauncherText1][!MoveMeter 61 5 MeterLauncherIcon1][!MoveMeter 40 50 MeterLauncher2][!MoveMeter 40 46 MeterLauncher2Image][!MoveMeter 91 59 MeterLauncherText2][!MoveMeter 61 49 MeterLauncherIcon2][!MoveMeter 40 94 MeterLauncher3][!MoveMeter 40 90 MeterLauncher3Image][!MoveMeter 91 103 MeterLauncherText3][!MoveMeter 61 93 MeterLauncherIcon3][!MoveMeter 40 138 MeterLauncher4][!MoveMeter 40 134 MeterLauncher4Image][!MoveMeter 91 147 MeterLauncherText4][!MoveMeter 61 137 MeterLauncherIcon4][!MoveMeter 40 182 MeterLauncher5][!MoveMeter 40 178 MeterLauncher5Image][!MoveMeter 91 191 MeterLauncherText5][!MoveMeter 61 181 MeterLauncherIcon5][!MoveMeter 40 226 MeterLauncher6][!MoveMeter 40 222 MeterLauncher6Image][!MoveMeter 91 235 MeterLauncherText6][!MoveMeter 61 225 MeterLauncherIcon6][!MoveMeter 40 270 MeterLauncher7][!MoveMeter 40 266 MeterLauncher7Image][!MoveMeter 91 279 MeterLauncherText7][!MoveMeter 61 269 MeterLauncherIcon7][!SetOptionGroup LLauncher2 ImageAlpha 255][!SetOptionGroup LLauncher2 FontColor ""][!SetOptionGroup LLauncher3 ImageAlpha 255][!SetOptionGroup LLauncher3 FontColor ""][!SetOptionGroup LLauncher4 ImageAlpha 255][!SetOptionGroup LLauncher4 FontColor ""][!SetOptionGroup LLauncher5 ImageAlpha 255][!SetOptionGroup LLauncher5 FontColor ""][!SetOptionGroup LLauncher6 ImageAlpha 255][!SetOptionGroup LLauncher6 FontColor ""][!SetOptionGroup LLauncher7 ImageAlpha 255][!SetOptionGroup LLauncher7 FontColor ""][!UpdateMeterGroup GroupLaunch][!Redraw]
Hidden=#CloseLL1#
Group=GroupLaunch| LLauncher1

[MeterLauncherText1]
Meter=String
MeterStyle=TextStyle
Text=#LLT1#
x=51r
y=11r
Hidden=#CloseLL1#
Group=GroupLaunch| LLauncher1

[MeterLauncherIcon1]
Meter=Image
ImageName=#LLI1#
x=-30r
y=-10r
W=27
H=27
AntiAlias=1
Hidden=#CloseLL1#
Group=GroupLaunch| LLauncher1

;------------------------------------------------------------------------

[MeterLauncher2Image]
Meter=Image
ImagePath=#@#\Images\Large Launchers
ImageName=LLButton#Color1#_0.png
x=40
y=46
Group=GroupLaunch| LLauncher2

[MeterLauncher2]
Meter=Image
SolidColor=0,0,0,1
x=r
y=50
W=130
H=40
LeftMouseDownAction=[!SetOption MeterLauncher2Image ImageName LLButton#Color1#_2#Type2#.png]["#LLP2#"][!UpdateMeter MeterLauncher2Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher2Image ImageName LLButton#Color1#_1#Type2#.png][!UpdateMeter MeterLauncher2Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher2Image ImageName LLButton#Color1#_1#Type2#.png][!SetOption MeterLauncher2 H 52][!SetOption MeterLauncher2 W 140][!MoveMeter 101 68 MeterLauncherText2][!MoveMeter 71 58 MeterLauncherIcon2][!MoveMeter 40 104 MeterLauncher3][!MoveMeter 40 99 MeterLauncher3Image][!MoveMeter 91 112 MeterLauncherText3][!MoveMeter 61 102 MeterLauncherIcon3][!MoveMeter 40 148 MeterLauncher4][!MoveMeter 40 144 MeterLauncher4Image][!MoveMeter 91 156 MeterLauncherText4][!MoveMeter 61 146 MeterLauncherIcon4][!MoveMeter 40 192 MeterLauncher5][!MoveMeter 40 188 MeterLauncher5Image][!MoveMeter 91 200 MeterLauncherText5][!MoveMeter 61 190 MeterLauncherIcon5][!MoveMeter 40 236 MeterLauncher6][!MoveMeter 40 232 MeterLauncher6Image][!MoveMeter 91 244 MeterLauncherText6][!MoveMeter 61 234 MeterLauncherIcon6][!MoveMeter 40 280 MeterLauncher7][!MoveMeter 40 276 MeterLauncher7Image][!MoveMeter 91 288 MeterLauncherText7][!MoveMeter 61 278 MeterLauncherIcon7][!SetOptionGroup LLauncher1 ImageAlpha 180][!SetOptionGroup LLauncher1 FontColor 255,255,255,180][!SetOptionGroup LLauncher3 ImageAlpha 180][!SetOptionGroup LLauncher3 FontColor 255,255,255,180][!SetOptionGroup LLauncher4 ImageAlpha 180][!SetOptionGroup LLauncher4 FontColor 255,255,255,180][!SetOptionGroup LLauncher5 ImageAlpha 180][!SetOptionGroup LLauncher5 FontColor 255,255,255,180][!SetOptionGroup LLauncher6 ImageAlpha 180][!SetOptionGroup LLauncher6 FontColor 255,255,255,180][!SetOptionGroup LLauncher7 ImageAlpha 180][!SetOptionGroup LLauncher7 FontColor 255,255,255,180][!UpdateMeterGroup GroupLaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher2Image ImageName LLButton#Color1#_0#Type2#.png][!SetOption MeterLauncher2 H 40][!SetOption MeterLauncher2 W 130][!MoveMeter 91 59 MeterLauncherText2][!MoveMeter 61 49 MeterLauncherIcon2][!MoveMeter 40 94 MeterLauncher3][!MoveMeter 40 90 MeterLauncher3Image][!MoveMeter 91 103 MeterLauncherText3][!MoveMeter 61 93 MeterLauncherIcon3][!MoveMeter 40 138 MeterLauncher4][!MoveMeter 40 134 MeterLauncher4Image][!MoveMeter 91 147 MeterLauncherText4][!MoveMeter 61 137 MeterLauncherIcon4][!MoveMeter 40 182 MeterLauncher5][!MoveMeter 40 178 MeterLauncher5Image][!MoveMeter 91 191 MeterLauncherText5][!MoveMeter 61 181 MeterLauncherIcon5][!MoveMeter 40 226 MeterLauncher6][!MoveMeter 40 222 MeterLauncher6Image][!MoveMeter 91 235 MeterLauncherText6][!MoveMeter 61 225 MeterLauncherIcon6][!MoveMeter 40 270 MeterLauncher7][!MoveMeter 40 266 MeterLauncher7Image][!MoveMeter 91 279 MeterLauncherText7][!MoveMeter 61 269 MeterLauncherIcon7][!SetOptionGroup LLauncher1 ImageAlpha 255][!SetOptionGroup LLauncher1 FontColor ""][!SetOptionGroup LLauncher3 ImageAlpha 255][!SetOptionGroup LLauncher3 FontColor ""][!SetOptionGroup LLauncher4 ImageAlpha 255][!SetOptionGroup LLauncher4 FontColor ""][!SetOptionGroup LLauncher5 ImageAlpha 255][!SetOptionGroup LLauncher5 FontColor ""][!SetOptionGroup LLauncher6 ImageAlpha 255][!SetOptionGroup LLauncher6 FontColor ""][!SetOptionGroup LLauncher7 ImageAlpha 255][!SetOptionGroup LLauncher7 FontColor ""][!UpdateMeterGroup GroupLaunch][!Redraw]
Group=GroupLaunch| LLauncher2

[MeterLauncherText2]
Meter=String
MeterStyle=TextStyle
Text=#LLT2#
x=51r
y=9r
Group=GroupLaunch| LLauncher2

[MeterLauncherIcon2]
Meter=Image
ImageName=#LLI2#
x=-30r
y=-10r
W=27
H=27
AntiAlias=1
Group=GroupLaunch| LLauncher2

;------------------------------------------------------------------------

[MeterLauncher3Image]
Meter=Image
ImagePath=#@#\Images\Large Launchers
ImageName=LLButton#Color1#_0D.png
x=40
y=90
Group=GroupLaunch| LLauncher3

[MeterLauncher3]
Meter=Image
SolidColor=0,0,0,1
x=r
y=94
W=130
H=40
LeftMouseDownAction=[!SetOption MeterLauncher3Image ImageName LLButton#Color1#_2#Type3#.png]["#LLP3#"][!UpdateMeter MeterLauncher3Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher3Image ImageName LLButton#Color1#_1#Type3#.png][!UpdateMeter MeterLauncher3Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher3Image ImageName LLButton#Color1#_1#Type3#.png][!SetOption MeterLauncher3 H 52][!SetOption MeterLauncher3 W 140][!MoveMeter 101 112 MeterLauncherText3][!MoveMeter 71 102 MeterLauncherIcon3][!MoveMeter 40 148 MeterLauncher4][!MoveMeter 40 144 MeterLauncher4Image][!MoveMeter 91 156 MeterLauncherText4][!MoveMeter 61 146 MeterLauncherIcon4][!MoveMeter 40 192 MeterLauncher5][!MoveMeter 40 188 MeterLauncher5Image][!MoveMeter 91 200 MeterLauncherText5][!MoveMeter 61 190 MeterLauncherIcon5][!MoveMeter 40 236 MeterLauncher6][!MoveMeter 40 232 MeterLauncher6Image][!MoveMeter 91 244 MeterLauncherText6][!MoveMeter 61 234 MeterLauncherIcon6][!MoveMeter 40 280 MeterLauncher7][!MoveMeter 40 276 MeterLauncher7Image][!MoveMeter 91 288 MeterLauncherText7][!MoveMeter 61 278 MeterLauncherIcon7][!SetOptionGroup LLauncher1 ImageAlpha 180][!SetOptionGroup LLauncher1 FontColor 255,255,255,180][!SetOptionGroup LLauncher2 ImageAlpha 180][!SetOptionGroup LLauncher2 FontColor 255,255,255,180][!SetOptionGroup LLauncher4 ImageAlpha 180][!SetOptionGroup LLauncher4 FontColor 255,255,255,180][!SetOptionGroup LLauncher5 ImageAlpha 180][!SetOptionGroup LLauncher5 FontColor 255,255,255,180][!SetOptionGroup LLauncher6 ImageAlpha 180][!SetOptionGroup LLauncher6 FontColor 255,255,255,180][!SetOptionGroup LLauncher7 ImageAlpha 180][!SetOptionGroup LLauncher7 FontColor 255,255,255,180][!UpdateMeterGroup GroupLaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher3Image ImageName LLButton#Color1#_0#Type3#.png][!SetOption MeterLauncher3 H 40][!SetOption MeterLauncher3 W 130][!MoveMeter 91 103 MeterLauncherText3][!MoveMeter 61 93 MeterLauncherIcon3][!MoveMeter 40 138 MeterLauncher4][!MoveMeter 40 134 MeterLauncher4Image][!MoveMeter 91 147 MeterLauncherText4][!MoveMeter 61 137 MeterLauncherIcon4][!MoveMeter 40 182 MeterLauncher5][!MoveMeter 40 178 MeterLauncher5Image][!MoveMeter 91 191 MeterLauncherText5][!MoveMeter 61 181 MeterLauncherIcon5][!MoveMeter 40 226 MeterLauncher6][!MoveMeter 40 222 MeterLauncher6Image][!MoveMeter 91 235 MeterLauncherText6][!MoveMeter 61 225 MeterLauncherIcon6][!MoveMeter 40 270 MeterLauncher7][!MoveMeter 40 266 MeterLauncher7Image][!MoveMeter 91 279 MeterLauncherText7][!MoveMeter 61 269 MeterLauncherIcon7][!SetOptionGroup LLauncher1 ImageAlpha 255][!SetOptionGroup LLauncher1 FontColor ""][!SetOptionGroup LLauncher2 ImageAlpha 255][!SetOptionGroup LLauncher2 FontColor ""][!SetOptionGroup LLauncher4 ImageAlpha 255][!SetOptionGroup LLauncher4 FontColor ""][!SetOptionGroup LLauncher5 ImageAlpha 255][!SetOptionGroup LLauncher5 FontColor ""][!SetOptionGroup LLauncher6 ImageAlpha 255][!SetOptionGroup LLauncher6 FontColor ""][!SetOptionGroup LLauncher7 ImageAlpha 255][!SetOptionGroup LLauncher7 FontColor ""][!UpdateMeterGroup GroupLaunch][!Redraw]
Group=GroupLaunch| LLauncher3

[MeterLauncherText3]
Meter=String
MeterStyle=TextStyle
Text=#LLT3#
x=51r
y=9r
Group=GroupLaunch| LLauncher3

[MeterLauncherIcon3]
Meter=Image
ImageName=#LLI3#
x=-30r
y=-10r
W=27
H=27
AntiAlias=1
Group=GroupLaunch| LLauncher3

;------------------------------------------------------------------------

[MeterLauncher4Image]
Meter=Image
ImagePath=#@#\Images\Large Launchers
ImageName=LLButton#Color1#_0D.png
x=40
y=134
Group=GroupLaunch| LLauncher4

[MeterLauncher4]
Meter=Image
SolidColor=0,0,0,1
x=r
y=138
W=130
H=40
LeftMouseDownAction=[!SetOption MeterLauncher4Image ImageName LLButton#Color1#_2#Type4#.png]["#LLP4#"][!UpdateMeter MeterLauncher4Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher4Image ImageName LLButton#Color1#_1#Type4#.png][!UpdateMeter MeterLauncher4Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher4Image ImageName LLButton#Color1#_1#Type4#.png][!SetOption MeterLauncher4 H 52][!SetOption MeterLauncher4 W 140][!MoveMeter 101 156 MeterLauncherText4][!MoveMeter 71 146 MeterLauncherIcon4][!MoveMeter 40 192 MeterLauncher5][!MoveMeter 40 188 MeterLauncher5Image][!MoveMeter 91 200 MeterLauncherText5][!MoveMeter 61 190 MeterLauncherIcon5][!MoveMeter 40 236 MeterLauncher6][!MoveMeter 40 232 MeterLauncher6Image][!MoveMeter 91 244 MeterLauncherText6][!MoveMeter 61 234 MeterLauncherIcon6][!MoveMeter 40 280 MeterLauncher7][!MoveMeter 40 276 MeterLauncher7Image][!MoveMeter 91 288 MeterLauncherText7][!MoveMeter 61 278 MeterLauncherIcon7][!SetOptionGroup LLauncher1 ImageAlpha 180][!SetOptionGroup LLauncher1 FontColor 255,255,255,180][!SetOptionGroup LLauncher2 ImageAlpha 180][!SetOptionGroup LLauncher2 FontColor 255,255,255,180][!SetOptionGroup LLauncher3 ImageAlpha 180][!SetOptionGroup LLauncher3 FontColor 255,255,255,180][!SetOptionGroup LLauncher5 ImageAlpha 180][!SetOptionGroup LLauncher5 FontColor 255,255,255,180][!SetOptionGroup LLauncher6 ImageAlpha 180][!SetOptionGroup LLauncher6 FontColor 255,255,255,180][!SetOptionGroup LLauncher7 ImageAlpha 180][!SetOptionGroup LLauncher7 FontColor 255,255,255,180][!UpdateMeterGroup GroupLaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher4Image ImageName LLButton#Color1#_0#Type4#.png][!SetOption MeterLauncher4 H 40][!SetOption MeterLauncher4 W 130][!MoveMeter 91 147 MeterLauncherText4][!MoveMeter 61 137 MeterLauncherIcon4][!MoveMeter 40 182 MeterLauncher5][!MoveMeter 40 178 MeterLauncher5Image][!MoveMeter 91 191 MeterLauncherText5][!MoveMeter 61 181 MeterLauncherIcon5][!MoveMeter 40 226 MeterLauncher6][!MoveMeter 40 222 MeterLauncher6Image][!MoveMeter 91 235 MeterLauncherText6][!MoveMeter 61 225 MeterLauncherIcon6][!MoveMeter 40 270 MeterLauncher7][!MoveMeter 40 266 MeterLauncher7Image][!MoveMeter 91 279 MeterLauncherText7][!MoveMeter 61 269 MeterLauncherIcon7][!SetOptionGroup LLauncher1 ImageAlpha 255][!SetOptionGroup LLauncher1 FontColor ""][!SetOptionGroup LLauncher2 ImageAlpha 255][!SetOptionGroup LLauncher2 FontColor ""][!SetOptionGroup LLauncher3 ImageAlpha 255][!SetOptionGroup LLauncher3 FontColor ""][!SetOptionGroup LLauncher5 ImageAlpha 255][!SetOptionGroup LLauncher5 FontColor ""][!SetOptionGroup LLauncher6 ImageAlpha 255][!SetOptionGroup LLauncher6 FontColor ""][!SetOptionGroup LLauncher7 ImageAlpha 255][!SetOptionGroup LLauncher7 FontColor ""][!UpdateMeterGroup GroupLaunch][!Redraw]
Group=GroupLaunch| LLauncher4

[MeterLauncherText4]
Meter=String
MeterStyle=TextStyle
Text=#LLT4#
x=51r
y=9r
Group=GroupLaunch| LLauncher4

[MeterLauncherIcon4]
Meter=Image
ImageName=#LLI4#
x=-30r
y=-10r
W=27
H=27
AntiAlias=1
Group=GroupLaunch| LLauncher4

;------------------------------------------------------------------------

[MeterLauncher5Image]
Meter=Image
ImagePath=#@#\Images\Large Launchers
ImageName=LLButton#Color1#_0D.png
x=40
y=178
Group=GroupLaunch| LLauncher5

[MeterLauncher5]
Meter=Image
SolidColor=0,0,0,1
x=r
y=182
W=130
H=40
LeftMouseDownAction=[!SetOption MeterLauncher5Image ImageName LLButton#Color1#_2#Type5#.png]["#LLP5#"][!UpdateMeter MeterLauncher5Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher5Image ImageName LLButton#Color1#_1#Type5#.png][!UpdateMeter MeterLauncher5Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher5Image ImageName LLButton#Color1#_1#Type5#.png][!SetOption MeterLauncher5 H 52][!SetOption MeterLauncher5 W 140][!MoveMeter 101 200 MeterLauncherText5][!MoveMeter 71 190 MeterLauncherIcon5][!MoveMeter 40 236 MeterLauncher6][!MoveMeter 40 232 MeterLauncher6Image][!MoveMeter 91 244 MeterLauncherText6][!MoveMeter 61 234 MeterLauncherIcon6][!MoveMeter 40 280 MeterLauncher7][!MoveMeter 40 276 MeterLauncher7Image][!MoveMeter 91 288 MeterLauncherText7][!MoveMeter 61 278 MeterLauncherIcon7][!SetOptionGroup LLauncher1 ImageAlpha 180][!SetOptionGroup LLauncher1 FontColor 255,255,255,180][!SetOptionGroup LLauncher2 ImageAlpha 180][!SetOptionGroup LLauncher2 FontColor 255,255,255,180][!SetOptionGroup LLauncher3 ImageAlpha 180][!SetOptionGroup LLauncher3 FontColor 255,255,255,180][!SetOptionGroup LLauncher4 ImageAlpha 180][!SetOptionGroup LLauncher4 FontColor 255,255,255,180][!SetOptionGroup LLauncher6 ImageAlpha 180][!SetOptionGroup LLauncher6 FontColor 255,255,255,180][!SetOptionGroup LLauncher7 ImageAlpha 180][!SetOptionGroup LLauncher7 FontColor 255,255,255,180][!UpdateMeterGroup GroupLaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher5Image ImageName LLButton#Color1#_0#Type5#.png][!SetOption MeterLauncher5 H 40][!SetOption MeterLauncher5 W 130][!MoveMeter 91 191 MeterLauncherText5][!MoveMeter 61 181 MeterLauncherIcon5][!MoveMeter 40 226 MeterLauncher6][!MoveMeter 40 222 MeterLauncher6Image][!MoveMeter 91 235 MeterLauncherText6][!MoveMeter 61 225 MeterLauncherIcon6][!MoveMeter 40 270 MeterLauncher7][!MoveMeter 40 266 MeterLauncher7Image][!MoveMeter 91 279 MeterLauncherText7][!MoveMeter 61 269 MeterLauncherIcon7][!SetOptionGroup LLauncher1 ImageAlpha 255][!SetOptionGroup LLauncher1 FontColor ""][!SetOptionGroup LLauncher2 ImageAlpha 255][!SetOptionGroup LLauncher2 FontColor ""][!SetOptionGroup LLauncher3 ImageAlpha 255][!SetOptionGroup LLauncher3 FontColor ""][!SetOptionGroup LLauncher4 ImageAlpha 255][!SetOptionGroup LLauncher4 FontColor ""][!SetOptionGroup LLauncher6 ImageAlpha 255][!SetOptionGroup LLauncher6 FontColor ""][!SetOptionGroup LLauncher7 ImageAlpha 255][!SetOptionGroup LLauncher7 FontColor ""][!UpdateMeterGroup GroupLaunch][!Redraw]
Group=GroupLaunch| LLauncher5

[MeterLauncherText5]
Meter=String
MeterStyle=TextStyle
Text=#LLT5#
x=51r
y=9r
Group=GroupLaunch| LLauncher5

[MeterLauncherIcon5]
Meter=Image
ImageName=#LLI5#
x=-30r
y=-10r
W=27
H=27
AntiAlias=1
Group=GroupLaunch| LLauncher5

;------------------------------------------------------------------------

[MeterLauncher6Image]
Meter=Image
ImagePath=#@#\Images\Large Launchers
ImageName=LLButton#Color1#_0.png
x=40
y=222
Group=GroupLaunch| LLauncher6

[MeterLauncher6]
Meter=Image
SolidColor=0,0,0,1
x=r
y=226
W=130
H=40
LeftMouseDownAction=[!SetOption MeterLauncher6Image ImageName LLButton#Color1#_2#Type6#.png]["#LLP6#"][!UpdateMeter MeterLauncher6Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher6Image ImageName LLButton#Color1#_1#Type6#.png][!UpdateMeter MeterLauncher6Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher6Image ImageName LLButton#Color1#_1#Type6#.png][!SetOption MeterLauncher6 H 52][!SetOption MeterLauncher6 W 140][!MoveMeter 101 244 MeterLauncherText6][!MoveMeter 71 234 MeterLauncherIcon6][!MoveMeter 40 280 MeterLauncher7][!MoveMeter 40 276 MeterLauncher7Image][!MoveMeter 91 288 MeterLauncherText7][!MoveMeter 61 278 MeterLauncherIcon7][!SetOptionGroup LLauncher1 ImageAlpha 180][!SetOptionGroup LLauncher1 FontColor 255,255,255,180][!SetOptionGroup LLauncher2 ImageAlpha 180][!SetOptionGroup LLauncher2 FontColor 255,255,255,180][!SetOptionGroup LLauncher3 ImageAlpha 180][!SetOptionGroup LLauncher3 FontColor 255,255,255,180][!SetOptionGroup LLauncher4 ImageAlpha 180][!SetOptionGroup LLauncher4 FontColor 255,255,255,180][!SetOptionGroup LLauncher5 ImageAlpha 180][!SetOptionGroup LLauncher5 FontColor 255,255,255,180][!SetOptionGroup LLauncher7 ImageAlpha 180][!SetOptionGroup LLauncher7 FontColor 255,255,255,180][!UpdateMeterGroup GroupLaunch][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher6Image ImageName LLButton#Color1#_0#Type6#.png][!SetOption MeterLauncher6 H 40][!SetOption MeterLauncher6 W 130][!MoveMeter 91 235 MeterLauncherText6][!MoveMeter 61 225 MeterLauncherIcon6][!MoveMeter 40 270 MeterLauncher7][!MoveMeter 40 266 MeterLauncher7Image][!MoveMeter 91 279 MeterLauncherText7][!MoveMeter 61 269 MeterLauncherIcon7][!SetOptionGroup LLauncher1 ImageAlpha 255][!SetOptionGroup LLauncher1 FontColor ""][!SetOptionGroup LLauncher2 ImageAlpha 255][!SetOptionGroup LLauncher2 FontColor ""][!SetOptionGroup LLauncher3 ImageAlpha 255][!SetOptionGroup LLauncher3 FontColor ""][!SetOptionGroup LLauncher4 ImageAlpha 255][!SetOptionGroup LLauncher4 FontColor ""][!SetOptionGroup LLauncher5 ImageAlpha 255][!SetOptionGroup LLauncher5 FontColor ""][!SetOptionGroup LLauncher7 ImageAlpha 255][!SetOptionGroup LLauncher7 FontColor ""][!UpdateMeterGroup GroupLaunch][!Redraw]
Group=GroupLaunch| LLauncher6

[MeterLauncherText6]
Meter=String
MeterStyle=TextStyle
Text=#LLT6#
x=51r
y=9r
Group=GroupLaunch| LLauncher6

[MeterLauncherIcon6]
Meter=Image
ImageName=#LLI6#
x=-30r
y=-10r
W=27
H=27
AntiAlias=1
Group=GroupLaunch| LLauncher6

;------------------------------------------------------------------------

[MeterLauncher7Image]
Meter=Image
ImagePath=#@#\Images\Large Launchers
ImageName=LLButton#Color1#_0.png
x=40
y=266
Group=GroupLaunch| LLauncher7

[MeterLauncher7]
Meter=Image
SolidColor=0,0,0,1
x=r
y=270
W=130
H=40
LeftMouseDownAction=[!SetOption MeterLauncher7Image ImageName LLButton#Color1#_2#Type7#.png]["#LLP7#"][!UpdateMeter MeterLauncher7Image][!Redraw]
LeftMouseUpAction=[!SetOption MeterLauncher7Image ImageName LLButton#Color1#_1#Type7#.png][!UpdateMeter MeterLauncher7Image][!Redraw]
MouseOverAction=[!SetOption MeterLauncher7Image ImageName LLButton#Color1#_1#Type7#.png][!SetOption MeterLauncher7 H 52][!SetOption MeterLauncher7 W 140][!MoveMeter 101 288 MeterLauncherText7][!MoveMeter 71 278 MeterLauncherIcon7][!SetOptionGroup LLauncher1 ImageAlpha 180][!SetOptionGroup LLauncher1 FontColor 255,255,255,180][!SetOptionGroup LLauncher2 ImageAlpha 180][!SetOptionGroup LLauncher2 FontColor 255,255,255,180][!SetOptionGroup LLauncher3 ImageAlpha 180][!SetOptionGroup LLauncher3 FontColor 255,255,255,180][!SetOptionGroup LLauncher4 ImageAlpha 180][!SetOptionGroup LLauncher4 FontColor 255,255,255,180][!SetOptionGroup LLauncher5 ImageAlpha 180][!SetOptionGroup LLauncher5 FontColor 255,255,255,180][!SetOptionGroup LLauncher6 ImageAlpha 180][!SetOptionGroup LLauncher6 FontColor 255,255,255,180][!UpdateMeterGroup GroupLaunch][!UpdateMeterGroup LLauncher7][!Redraw]
MouseLeaveAction=[!SetOption MeterLauncher7Image ImageName LLButton#Color1#_0#Type7#.png][!SetOption MeterLauncher7 H 40][!SetOption MeterLauncher7 W 130][!MoveMeter 91 279 MeterLauncherText7][!MoveMeter 61 269 MeterLauncherIcon7][!SetOptionGroup LLauncher1 ImageAlpha 255][!SetOptionGroup LLauncher1 FontColor ""][!SetOptionGroup LLauncher2 ImageAlpha 255][!SetOptionGroup LLauncher2 FontColor ""][!SetOptionGroup LLauncher3 ImageAlpha 255][!SetOptionGroup LLauncher3 FontColor ""][!SetOptionGroup LLauncher4 ImageAlpha 255][!SetOptionGroup LLauncher4 FontColor ""][!SetOptionGroup LLauncher5 ImageAlpha 255][!SetOptionGroup LLauncher5 FontColor ""][!SetOptionGroup LLauncher6 ImageAlpha 255][!SetOptionGroup LLauncher6 FontColor ""][!UpdateMeterGroup GroupLaunch][!UpdateMeterGroup LLauncher7][!Redraw]
Group=GroupLaunch| LLauncher7

[MeterLauncherText7]
Meter=String
MeterStyle=TextStyle
Text=#LLT7#
x=51r
y=9r
Group=GroupLaunch| LLauncher7

[MeterLauncherIcon7]
Meter=Image
ImageName=#LLI7#
x=-30r
y=-10r
W=27
H=27
AntiAlias=1
Group=GroupLaunch| LLauncher7
