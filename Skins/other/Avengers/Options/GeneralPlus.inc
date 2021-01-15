
;MEASURES ===============================================================

[MeasureCountry]
Measure=String
String=#Country#
Substitute=#ExtCountry#

;GENERAL - SHIELD TAG IMAGE CHANGE AND UPDATE ===========================

[ShieldTagIconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SignIcon" "#config#" "#SignIcon#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Shield Tag"]

;GENERAL - UTILITY FOLDER CHANGE AND UPDATE =============================

[Utility1PathCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "UB1" "#config#" "#UB1#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Utility"]

[Utility4PathCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "UB4" "#config#" "#UB4#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Utility"]

[Utility5PathCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "UB5" "#config#" "#UB5#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Utility"]

[Utility6PathCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "UB6" "#config#" "#UB6#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Utility"]

;HIDE DISKS IN FUNCTION OF DISKS USED ===================================

[MeasureHideDisk]
Measure=Calc
Formula=#HideHDDS#
IfCondition=(#HideHDDS#=1)
IfTrueAction=[!HideMeterGroup GroupHDD5][!HideMeterGroup GroupHDD4][!HideMeterGroup GroupHDD3][!HideMeterGroup GroupHDD2]
IfCondition2=(#HideHDDS#=2)
IfTrueAction2=[!HideMeterGroup GroupHDD5][!HideMeterGroup GroupHDD4][!HideMeterGroup GroupHDD3][!ShowMeterGroup GroupHDD2]
IfCondition3=(#HideHDDS#=3)
IfTrueAction3=[!HideMeterGroup GroupHDD5][!HideMeterGroup GroupHDD4][!ShowMeterGroup GroupHDD3][!ShowMeterGroup GroupHDD2]
IfCondition4=(#HideHDDS#=4)
IfTrueAction4=[!HideMeterGroup GroupHDD5][!ShowMeterGroup GroupHDD4][!ShowMeterGroup GroupHDD3][!ShowMeterGroup GroupHDD2]

;BACKGROUND =============================================================

[MeterBackgroundTop]
Meter=Image
ImageName=#@#\Images\Options\Options1_10 #Color1#.png
x=0
y=0

;TAB BUTTONS ============================================================

[MeterTabButtonTopMiddle]
Meter=Button
ButtonImage="#@#\Images\Options\Tab Button.png"
x=-8r
y=126r
ButtonCommand=[!WriteKeyValue Variables Tab "Large Launchers 7Plus"][!Refresh]

[MeterTabButtonBottomMiddle]
Meter=Button
ButtonImage="#@#\Images\Options\Tab Button.png"
x=r
y=100r
ButtonCommand=[!WriteKeyValue Variables Tab "Small Launchers 9Plus"][!Refresh]

[MeterTabButtonBottomMiddle1]
Meter=Button
ButtonImage="#@#\Images\Options\Tab Button.png"
x=r
y=100r
ButtonCommand=[!WriteKeyValue Variables Tab "Small Launchers 2Plus"][!Refresh]

[MeterTabButtonBottom1]
Meter=Button
ButtonImage="#@#\Images\Options\Tab Button.png"
x=r
y=100r
ButtonCommand=[!WriteKeyValue Variables Tab "FoldersPlus"][!Refresh]

[MeterTabButtonBottom]
Meter=Button
ButtonImage="#@#\Images\Options\Tab Button.png"
x=r
y=100r
ButtonCommand=[!WriteKeyValue Variables Tab "OtherPlus"][!Refresh]

;TAB NAMES ==============================================================

[MeterTabGeneralPlus]
Meter=Image
ImageName=#@#\Images\Options\GeneralIcon.png
ImageRotate=-90
x=7
y=95

[MeterTabLargeLaunchers 7Plus]
Meter=Image
ImageName=#@#\Images\Options\LargeLaunchersIcon.png
x=r
y=100r

[MeterTabSmallLaunchers 9Plus]
Meter=Image
ImageName=#@#\Images\Options\SmallLaunchersIcon1.png
x=r
y=100r

[MeterTabSmallLaunchers 2Plus]
Meter=Image
ImageName=#@#\Images\Options\SmallLaunchersIcon2.png
x=r
y=100r

[MeterTabFoldersPlus]
Meter=Image
ImageName=#@#\Images\Options\FoldersIcon.png
x=r
y=100r

[MeterTabOtherPlus]
Meter=Image
ImageName=#@#\Images\Options\SysMonitorIcon.png
ImageRotate=-90
x=r
y=100r
H=20
PreserveAspectRatio=1
AntiAlias=1

;NAMES ------------------------------------------------------------------

[MeterTabGeneralText]
Meter=String
MeterStyle=SubTitlestyle
Text=GENERAL
x=9
y=93
Angle=-1.570796

[MeterTabSmallText]
Meter=String
MeterStyle=TabStyle1
Text=LARGE
x=-4r
y=102r

[MeterTabSLaunchersText]
Meter=String
MeterStyle=TabStyle1
Text=LAUNCHERS
x=10r
y=r

[MeterTabLargeText]
Meter=String
MeterStyle=TabStyle1
Text=SMALL
x=-10r
y=100r

[MeterTabLaunchersText]
Meter=String
MeterStyle=TabStyle1
Text=LAUNCHERS
x=10r
y=r

[MeterTabLarge2Text]
Meter=String
MeterStyle=TabStyle1
Text=SMALL
x=-10r
y=100r

[MeterTabLaunchers2Text]
Meter=String
MeterStyle=TabStyle1
Text=LAUNCHERS 2
x=10r
y=r

[MeterTabFoldersText]
Meter=String
MeterStyle=SubTitlestyle
Text=FOLDERS
x=-6r
y=100r
Angle=-1.570796

[MeterTabOtherText]
Meter=String
MeterStyle=SubTitlestyle
Text=OTHER
x=r
y=96r
Angle=-1.570796

;FRAME CONTENT ==========================================================

;TITLE ------------------------------------------------------------------

[MeterSkinTitle]
Meter=String
MeterStyle=TitleStyleTop
FontSize=15
Text=#ConfigTxt#
x=162
y=17

[MeterSkinTip]
Meter=String
MeterStyle=TitleStyleTop
FontSize=11
Text=#SkinTipTxt#
x=35R
y=22

;GENERAL - PAGE 2 -------------------------------------------------------

[MeterWebButton]
Meter=Image
ImageName=#@#\Images\Options\TopButtonR.png
ImageAlpha=0
x=305
y=47
LeftMouseUpAction=[!WriteKeyValue Variables Tab "General2"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 255][!SetOption "WebTitleTop" FontColor 255,255,255,200][!UpdateMeter WebTitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 0][!SetOption "WebTitleTop" FontColor "150,150,150,220"][!UpdateMeter WebTitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]

;------------------------------------------------------------------------

[GeneralTitleTop]
Meter=String
MeterStyle=TitleStyleTop
Text=GENERAL
x=60
y=45

[GeneralIconTop]
Meter=Image
ImageName=#@#\Images\Options\GeneralIcon.png
x=30R
y=4r
W=28
PreserveAspectRatio=1
AntiAlias=1

[WebTitleTop]
Meter=String
MeterStyle=TitleStyleTop
FontColor=150,150,150,220
Text=WEB LAUNCHERS
x=120R
y=-4r
AntiAlias=1

[WebIconTop]
Meter=Image
ImageName=#@#\Images\Options\GeneralIcon.png
x=30R
y=4r
W=28
ImageAlpha=180
PreserveAspectRatio=1
AntiAlias=1

;------------------------------------------------------------------------

;MUSIC PLAYER ===========================================================

;------------------------------------------------------------------------

[MusicPlayer]
Meter=String
MeterStyle=TitleStyle
Text=MUSIC PLAYER
x=57
y=34r

[MusicLabel]
Meter=String
MeterStyle=LabelStyleT
Text=PLAYER CODE
x=r
y=38r

[MusicBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=88r
y=-1r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 18"
ToolTipIcon=Info
ToolTipType=0
ToolTipText=#PlayerTxt#

[MusicText]
Meter=String
MeterStyle=TextStyle
Text=#Player#
x=25r
y=1r

;PLAYER INFORMATIONS ------------------------------------------------------

[MusicInfo]
Meter=String
MeterStyle=LabelStyle
Text=#MusicTxt#
x=-113r
y=22r
ClipString=2
ClipStringW=260

;------------------------------------------------------------------------

;LANGUAGE =================================================================

;------------------------------------------------------------------------

[LanguageTitle]
Meter=String
MeterStyle=TitleStyle
Text=#Lang1Txt#
x=57
y=58r

[LanguageSubTitle]
Meter=String
MeterStyle=LabelStyleT
Text=#Lang2Txt#
x=8R
y=14r

[LanguageBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground1.png
x=209
y=-4r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 22"
TooltipText=#LangTooltip#

[LanguageText]
Meter=String
MeterStyle=TextStyle
Text=#Country# ([MeasureCountry])
x=25r
y=1r

;------------------------------------------------------------------------

;CALENDAR =================================================================

;------------------------------------------------------------------------

[CalendarTitle]
Meter=String
MeterStyle=TitleStyle
Text=#TitleCAL#
x=57
y=30r

[CalendarSubTitle]
Meter=String
MeterStyle=LabelStyleT
Text=#CalendOpt#
x=r
y=38r

[CalendarBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=88r
y=-1r
ButtonCommand=[!ShowMeterGroup GroupCalOptList][!Redraw]
TooltipText=#CalendTooltip#

[MeasureStartDay]
Measure=String
String=#StartDay#
RegExpSubstitute=1
Substitute="0":"#DayCal0#","1":"#DayCal1#"

[CalendarText]
Meter=String
MeterStyle=LabelStyleT
MeasureName=MeasureStartDay
x=25r
y=1r

;DISPLAY CALENDAR OPTION LIST -------------------------------------------

[MeterBackgroundCalOptList]
Meter=Image
ImageName=#@#\Images\Options\BackListUp.png
x=-26r
y=-39r
MouseLeaveAction=[!HideMeterGroup GroupCalOptList][!Redraw]
Hidden=1
Group=GroupCalOptList

[MeterCalOptCommand1]
Meter=String
MeterStyle=LabelStyleT
Text=" #DayCal0#"
SolidColor=0,0,0,1
x=46r
y=1r
W=80
H=18
LeftMouseUpAction=[!WriteKeyValue Variables StartDay 0 "#@#\Config.inc"][!WriteKeyValue Variables WeekN "U" "#@#\Config.inc"][!Refresh "Avengers\Calendar"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupCalOptList

[MeterCalOptCommand2]
Meter=String
MeterStyle=LabelStyleT
Text=" #DayCal1#"
SolidColor=0,0,0,1
x=r
y=20r
W=80
H=18
LeftMouseUpAction=[!WriteKeyValue Variables StartDay 1 "#@#\Config.inc"][!WriteKeyValue Variables WeekN "W" "#@#\Config.inc"][!Refresh "Avengers\Calendar"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupCalOptList

;------------------------------------------------------------------------

;NETWORK ==================================================================

;------------------------------------------------------------------------

[NetworkTitle]
Meter=String
MeterStyle=TitleStyle
Text=WI-FI
x=57
y=46r

[NetworkLabelUpl]
Meter=String
MeterStyle=LabelStyleT
Text=Max Upload
x=r
y=38r

[NetworkUplBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=88r
y=-1r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 19"

[NetworkUplText]
Meter=String
MeterStyle=TextStyle
Text=#MaxUpload#
x=25r
y=1r
TooltipText=#NetTooltip#

[NetworkLabelDwn]
Meter=String
MeterStyle=LabelStyleT
Text=Max Download
x=-113r
y=21r

[NetworkDwnBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=88r
y=-1r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 20"

[NetworkDwnText]
Meter=String
MeterStyle=TextStyle
Text=#MaxDownload#
x=25r
y=1r
TooltipText=#NetTooltip#

[NetTimeOption]
Meter=String
MeterStyle=LabelStyle
Text=#NetCounter# *
x=-11r
y=-44r

[NetTimeBackground]
Meter=Image
ImageName=#@#\Images\Options\OnOff#NetTime#.png
x=97r
y=-7r
W=42
TooltipText=#NetTimeTooltip#
LeftMouseUpAction=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 21"
AntiAlias=1

[NetTimeText]
Meter=String
MeterStyle=TextStyle
Text=#NetTime#
x=10r
y=6r

;NETWORK INFORMATIONS -----------------------------------------------------

[NetworkInfo]
Meter=String
MeterStyle=LabelStyle
Text=#NetShow#
x=-213r
y=67r

;------------------------------------------------------------------------

;HARD DISKS ===============================================================

;------------------------------------------------------------------------

[HDDTitle]
Meter=String
MeterStyle=TitleStyle
Text=HARD DISKS
x=360
y=82
AntiAlias=1

[HDDTitlelIcon]
Meter=Image
ImageName=#@#\Images\Time\Hdd.png
x=153r
y=4r
PreserveAspectRatio=1

[HD1]
Meter=String
MeterStyle=SubTitleStyle
Text=HDD1
x=-153r
y=32r

[HD1Label]
Meter=String
MeterStyle=LabelStyle
Text=#HDD1Txt#
x=40r
y=2r

[HD1Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=120r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 13"
TooltipText=#HDDTooltip#

[HD1Text]
Meter=String
MeterStyle=TextStyle
Text=#disk1#
x=10r
y=1r

[HD2]
Meter=String
MeterStyle=SubTitleStyle
Text=HDD2
x=-170r
y=20r
Group=GroupHDD2

[HD2Label]
Meter=String
MeterStyle=LabelStyle
Text=#HDD2Txt#
x=40r
y=2r
Group=GroupHDD2

[HD2Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=120r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 14"
TooltipText=#HDDTooltip#
Group=GroupHDD2

[HD2Text]
Meter=String
MeterStyle=TextStyle
Text=#disk2#
x=10r
y=1r
Group=GroupHDD2

[HD3]
Meter=String
MeterStyle=SubTitleStyle
Text=HDD3
x=-170r
y=20r
Group=GroupHDD3

[HD3Label]
Meter=String
MeterStyle=LabelStyle
Text=#HDD3Txt#
x=40r
y=2r
Group=GroupHDD3

[HD3Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=120r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 15"
TooltipText=#HDDTooltip#
Group=GroupHDD3

[HD3Text]
Meter=String
MeterStyle=TextStyle
Text=#disk3#
x=10r
y=1r
Group=GroupHDD3

[HD4]
Meter=String
MeterStyle=SubTitleStyle
Text=HDD4
x=-170r
y=20r
Group=GroupHDD4

[HD4Label]
Meter=String
MeterStyle=LabelStyle
Text=#HDD4Txt#
x=40r
y=2r
Group=GroupHDD4

[HD4Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=120r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 16"
TooltipText=#HDDTooltip#
Group=GroupHDD4

[HD4Text]
Meter=String
MeterStyle=TextStyle
Text=#disk4#
x=10r
y=1r
Group=GroupHDD4

[HD5]
Meter=String
MeterStyle=SubTitleStyle
Text=HDD5
x=-170r
y=20r
Group=GroupHDD5

[HD5Label]
Meter=String
MeterStyle=LabelStyle
Text=#HDD5Txt#
x=40r
y=2r
Group=GroupHDD5

[HD5Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=120r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 17"
TooltipText=#HDDTooltip#
Group=GroupHDD5

[HD5Text]
Meter=String
MeterStyle=TextStyle
Text=#disk5#
x=10r
y=1r
Group=GroupHDD5

;DISABLE HDD ============================================================

[DisableHDDSBackgroundColor]
Meter=Image
SolidColor=#Shade1#,80
x=-179r
y=19r
W=206
H=20
AntiAlias=1

[DisableHDDS]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=170r
y=1r
LeftMouseUpAction=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 23"
TooltipText=#HDDOnOffTooltip#

[DisableHDDSText]
Meter=String
MeterStyle=TextStyle
StringEffect=Shadow
FontEffectColor=0,0,0,50
Text=#HDDSTxt#
x=-160r
y=1r
ClipString=0

[HDDSText]
Meter=String
MeterStyle=TextStyle
Text=#HideHDDS#
x=170r
y=r

;--------------------------------------------------------------------------

[USB1]
Meter=String
MeterStyle=SubTitleStyle
Text=USB1
x=-170r
y=20r

[USB1Label]
Meter=String
MeterStyle=LabelStyle
Text=#USB1Txt#
x=40r
y=2r

[USB1Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=120r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 24"
TooltipText=#USBTooltip#

[USB1Text]
Meter=String
MeterStyle=TextStyle
Text=#usb1#
x=10r
y=1r

;VERIFY USB1 PRESENCE ----------------------------------------------------

[MeasureUSB1Drive]
Measure=String
String=#usb1#
IfMatch=^$
IfMatchAction=[!WriteKeyValue Variables USB1On 1  "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables USB1On 0  "#@#\Config.inc"]

;-------------------------------------------------------------------------

[USB2]
Meter=String
MeterStyle=SubTitleStyle
Text=USB2
x=-170r
y=20r

[USB2Label]
Meter=String
MeterStyle=LabelStyle
Text=#USB2Txt#
x=40r
y=2r

[USB2Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=120r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 25"
TooltipText=#USBTooltip#

[USB2Text]
Meter=String
MeterStyle=TextStyle
Text=#usb2#
x=10r
y=1r

;VERIFY USB2 PRESENCE ----------------------------------------------------

[MeasureUSB2Drive]
Measure=String
String=#usb2#
IfMatch=^$
IfMatchAction=[!WriteKeyValue Variables USB2On 1  "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables USB2On 0  "#@#\Config.inc"]

;-------------------------------------------------------------------------

[USB3]
Meter=String
MeterStyle=SubTitleStyle
Text=USB3
x=-170r
y=20r

[USB3Label]
Meter=String
MeterStyle=LabelStyle
Text=#USB3Txt#
x=40r
y=2r

[USB3Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=120r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 26"
TooltipText=#USBTooltip#

[USB3Text]
Meter=String
MeterStyle=TextStyle
Text=#usb3#
x=10r
y=1r

;VERIFY USB3 PRESENCE ----------------------------------------------------

[MeasureUSB3Drive]
Measure=String
String=#usb3#
IfMatch=^$
IfMatchAction=[!WriteKeyValue Variables USB3On 1  "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables USB3On 0  "#@#\Config.inc"]

;-------------------------------------------------------------------------

[DVD1]
Meter=String
MeterStyle=SubTitleStyle
Text=DVD1
x=-170r
y=22r

[DVD1Label]
Meter=String
MeterStyle=LabelStyle
Text=#USB1Txt#
x=40r
y=2r

[DVD1Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=120r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 37"
TooltipText=#USBTooltip##CRLF##DVDInfo#

[DVD1BackgroundAlt]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=r
y=r
Hidden=1

[DVD1Text]
Meter=String
MeterStyle=TextStyle
Text=#DVD1#
x=10r
y=1r

;VERIFY DVD PRESENCE ----------------------------------------------------

[MeasureDVDDrive]
Measure=String
String=#DVD1#
IfMatch=^$
IfMatchAction=[!WriteKeyValue Variables DVD1On 1  "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables DVD1On 0  "#@#\Config.inc"]

;HARD DISKS INFORMATIONS --------------------------------------------------

[HDDInfo]
Meter=String
MeterStyle=LabelStyle
Text=#HDDTxt#
x=-170r
y=19r
ClipString=2
ClipStringW=210

;------------------------------------------------------------------------

;HARD DISKS READ/WRITE PERFORMANCE MONITOR SETTINGS =====================

;------------------------------------------------------------------------

[HDDSettingsBackgroundColor]
Meter=Image
SolidColor=#Shade1#,80
x=-10r
y=18r
W=206
H=58
AntiAlias=1

[DiskRWTitle]
Meter=String
MeterStyle=LabelStyleT
StringAlign=Center
StringEffect=Shadow
FontEffectColor=0,0,0,50
Text=#RWText#
x=102r
y=1r

[HDD1RWMaxTitle]
Meter=String
MeterStyle=LabelStyleT
StringEffect=Shadow
FontEffectColor=0,0,0,50
Text=#RW1Txt#
x=-90r
y=17r

[HDD1RWMaxBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground1.png
x=103r
y=r
ButtonCommand=[!ShowMeterGroup GroupRW1OptList][!Redraw]

;DISPLAY R/W DISK 1 OPTION LIST -----------------------------------------

[MeterBackgroundRW1OptList]
Meter=Image
ImageName=#@#\Images\Options\BackListUp2.png
x=1r
y=-76r
MouseLeaveAction=[!HideMeterGroup GroupRW1OptList][!Redraw]
Hidden=1
Group=GroupRW1OptList

[MeterRW1OptCommand4]
Meter=String
MeterStyle=LabelStyleT
Text=" #RWOpt4#"
SolidColor=0,0,0,1
x=1r
y=-1r
W=91
H=18
LeftMouseUpAction=[!WriteKeyValue Variables MaxDiskRWC 419430400 "#@#\Config.inc"][!WriteKeyValue Variables ValueC1 200 "#@#\Config.inc"][!WriteKeyValue Variables ValueC2 400 "#@#\Config.inc"][!Refresh "Avengers\Disk Statistics"][!Refresh]
MouseOverAction=[!HideMeter USB3Background][!ShowMeter USB3BackgroundAlt][!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter USB3BackgroundAlt][!ShowMeter USB3Background][!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupRW1OptList

[MeterRW1OptCommand3]
Meter=String
MeterStyle=LabelStyleT
Text=" #RWOpt3#"
SolidColor=0,0,0,1
x=r
y=20r
W=91
H=18
LeftMouseUpAction=[!WriteKeyValue Variables MaxDiskRWC 262144000 "#@#\Config.inc"][!WriteKeyValue Variables ValueC1 125 "#@#\Config.inc"][!WriteKeyValue Variables ValueC2 250 "#@#\Config.inc"][!Refresh "Avengers\Disk Statistics"][!Refresh]
MouseOverAction=[!HideMeter DVD1Background][!ShowMeter DVD1BackgroundAlt][!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter DVD1BackgroundAlt][!ShowMeter DVD1Background][!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupRW1OptList

[MeterRW1OptCommand2]
Meter=String
MeterStyle=LabelStyleT
Text=" #RWOpt2#"
SolidColor=0,0,0,1
x=r
y=20r
W=91
H=18
LeftMouseUpAction=[!WriteKeyValue Variables MaxDiskRWC 157286400 "#@#\Config.inc"][!WriteKeyValue Variables ValueC1 75 "#@#\Config.inc"][!WriteKeyValue Variables ValueC2 150 "#@#\Config.inc"][!Refresh "Avengers\Disk Statistics"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupRW1OptList

[MeterRW1OptCommand1]
Meter=String
MeterStyle=LabelStyleT
Text=" #RWOpt1#"
SolidColor=0,0,0,1
x=r
y=20r
W=91
H=18
LeftMouseUpAction=[!WriteKeyValue Variables MaxDiskRWC 104857600 "#@#\Config.inc"][!WriteKeyValue Variables ValueC1 50 "#@#\Config.inc"][!WriteKeyValue Variables ValueC2 100 "#@#\Config.inc"][!Refresh "Avengers\Disk Statistics"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupRW1OptList

[HDD1RWMaxText]
Meter=String
MeterStyle=TextStyle
Text=#ValueC2#  MB/s
x=23r
y=18r

;------------------------------------------------------------------------

[HDD2RWMaxTitle]
Meter=String
MeterStyle=LabelStyleT
StringEffect=Shadow
FontEffectColor=0,0,0,50
Text=#RW2Txt#
x=-128r
y=20r

[NoHDD2RWText]
Meter=String
MeterStyle=TextStyle
Text=#RWOpt0#
x=106r
y=r

[HDD2RWMaxBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground1.png
x=-3r
y=r
ButtonCommand=[!ShowMeterGroup GroupRW2OptList][!Redraw]
Group=GroupHDD2

;DISPLAY R/W DISK 2 OPTION LIST -----------------------------------------

[MeterBackgroundRW2OptList]
Meter=Image
ImageName=#@#\Images\Options\BackListUp2.png
x=1r
y=-76r
MouseLeaveAction=[!HideMeterGroup GroupRW2OptList][!Redraw]
Hidden=1
Group=GroupRW2OptList

[MeterRW2OptCommand4]
Meter=String
MeterStyle=LabelStyleT
Text=" #RWOpt4#"
SolidColor=0,0,0,1
x=1r
y=-1r
W=91
H=18
LeftMouseUpAction=[!WriteKeyValue Variables MaxDiskRW 419430400 "#@#\Config.inc"][!WriteKeyValue Variables Value1 200 "#@#\Config.inc"][!WriteKeyValue Variables Value2 400 "#@#\Config.inc"][!Refresh "Avengers\Disk Statistics"][!Refresh]
MouseOverAction=[!HideMeter DVD1Background][!ShowMeter DVD1BackgroundAlt][!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter DVD1BackgroundAlt][!ShowMeter DVD1Background][!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupRW2OptList

[MeterRW2OptCommand3]
Meter=String
MeterStyle=LabelStyleT
Text=" #RWOpt3#"
SolidColor=0,0,0,1
x=r
y=20r
W=91
H=18
LeftMouseUpAction=[!WriteKeyValue Variables MaxDiskRW 262144000 "#@#\Config.inc"][!WriteKeyValue Variables Value1 125 "#@#\Config.inc"][!WriteKeyValue Variables Value2 250 "#@#\Config.inc"][!Refresh "Avengers\Disk Statistics"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupRW2OptList

[MeterRW2OptCommand2]
Meter=String
MeterStyle=LabelStyleT
Text=" #RWOpt2#"
SolidColor=0,0,0,1
x=r
y=20r
W=91
H=18
LeftMouseUpAction=[!WriteKeyValue Variables MaxDiskRW 157286400 "#@#\Config.inc"][!WriteKeyValue Variables Value1 75 "#@#\Config.inc"][!WriteKeyValue Variables Value2 150 "#@#\Config.inc"][!Refresh "Avengers\Disk Statistics"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupRW2OptList

[MeterRW2OptCommand1]
Meter=String
MeterStyle=LabelStyleT
Text=" #RWOpt1#"
SolidColor=0,0,0,1
x=r
y=20r
W=91
H=18
LeftMouseUpAction=[!WriteKeyValue Variables MaxDiskRW 104857600 "#@#\Config.inc"][!WriteKeyValue Variables Value1 50 "#@#\Config.inc"][!WriteKeyValue Variables Value2 100 "#@#\Config.inc"][!Refresh "Avengers\Disk Statistics"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupRW2OptList

[HDD2RWMaxText]
Meter=String
MeterStyle=TextStyle
Text=#Value2#  MB/s
x=23r
y=18r
Group=GroupHDD2

;------------------------------------------------------------------------

;S.H.I.E.L.D. TAG =======================================================

;------------------------------------------------------------------------

[SHIELDTitle1]
Meter=String
MeterStyle=TitleStyle
Text=S.H.I.E.L.D. TAG
x=57
y=416

[SHIELDIcon]
Meter=Image
ImageName=#@#\Images\Options\Tag#Color1#.png
x=208r
y=1r
W=28
PreserveAspectRatio=1
AntiAlias=1

[UserTextTitle]
Meter=String
MeterStyle=LabelStyleT
Text=USER #FLDN#
x=-208r
y=38r

[OtherTextTitle]
Meter=String
MeterStyle=LabelStyleT
Text=#SHTagOth#
x=260r
y=r

[UserTextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-172r
y=-1r
ButtonCommand=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 1"
TooltipText=#ShTagTooltip#

[UserTextBackgroundAlt]
Meter=Image
ImageName=#@#\Images\Options\TextBackground0.png
x=r
y=r
Hidden=1

[UserTitleText]
Meter=String
MeterStyle=TextStyle
Text=#STName#
x=25r
y=1r

[OtherTextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=230r
y=-1r
ButtonCommand=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 2"
TooltipText=#ShTagTooltip1#

[OtherTitleText]
Meter=String
MeterStyle=TextStyle
Text=#STOther#
x=25r
y=1r

[ShieldTagSubTitle]
Meter=String
MeterStyle=LabelStyleT
Text=#ShTagOpt#
x=-368r
y=21r

[ShieldTagBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=88r
y=-1r
ButtonCommand=[!ShowMeterGroup GroupShOptList][!Redraw]

[MeasureImageText]
Measure=String
String=#NoTagSign#
RegExpSubstitute=1
Substitute="0":"#ShTag0#","1":"#ShTag1#"

[ShieldTagText]
Meter=String
MeterStyle=LabelStyleT
MeasureName=MeasureImageText
x=25r
y=1r

[TopTextTitle]
Meter=String
MeterStyle=LabelStyleT
Text=#SHTagTitle#
x=147r
y=-48r

[ShieldTagTopBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=83r
y=-1r
ButtonCommand=[!ShowMeterGroup GroupShTopList][!Redraw]

[MeasureTopText]
Measure=String
String=#NoTagTitle#
RegExpSubstitute=1
Substitute="0":"#SHTagTop1#","1":"#SHTagTop2#"

[ShieldTopText]
Meter=String
MeterStyle=LabelStyleT
MeasureName=MeasureTopText
x=25r
y=1r

;SHIELD TAG INFORMATIONS ------------------------------------------------

[SHIELDSubLabel]
Meter=String
MeterStyle=LabelStyle
Text=#SHTagTxt#
x=-368r
y=68r

;DISPLAY SHIELD TAG OPTION LIST -----------------------------------------

[MeterBackgroundShOptList]
Meter=Image
ImageName=#@#\Images\Options\BackListUp.png
x=88r
y=-61r
MouseOverAction=[!HideMeter UserTextBackground][!ShowMeter UserTextBackgroundAlt][!Redraw]
MouseLeaveAction=[!HideMeterGroup GroupShOptList][!ShowMeter UserTextBackground][!HideMeter UserTextBackgroundAlt][!Redraw]
Hidden=1
Group=GroupShOptList

[MeterShOptCommand1]
Meter=String
MeterStyle=LabelStyleT
Text=" #ShTag0#"
SolidColor=0,0,0,1
x=45r
y=1r
W=80
H=18
LeftMouseUpAction=[!WriteKeyValue Variables NoTagSign 0 "#@#\Config.inc"][!WriteKeyValue Variables NoTagText 1 "#@#\Config.inc"][!Refresh "Avengers\Shield Tag"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupShOptList

[MeterShOptCommand2]
Meter=String
MeterStyle=LabelStyleT
Text=" #ShTag1#"
SolidColor=0,0,0,1
x=r
y=20r
W=80
H=18
LeftMouseUpAction=[!WriteKeyValue Variables NoTagSign 1 "#@#\Config.inc"][!WriteKeyValue Variables NoTagText 0 "#@#\Config.inc"][!Refresh "Avengers\Shield Tag"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupShOptList

;------------------------------------------------------------------------

;DISPLAY SHIELD TAG TOP OPTION LIST -------------------------------------

[MeterBackgroundShTopList]
Meter=Image
ImageName=#@#\Images\Options\BackListUp.png
x=208r
y=-69r
MouseLeaveAction=[!HideMeterGroup GroupShTopList][!Redraw]
Hidden=1
Group=GroupShTopList

[MeterShTopCommand1]
Meter=String
MeterStyle=LabelStyleT
Text=" #SHTagTop1#"
SolidColor=0,0,0,1
x=45r
y=1r
W=80
H=18
LeftMouseUpAction=[!WriteKeyValue Variables NoTagTitle 0 "#@#\Config.inc"][!WriteKeyValue Variables NoTagDate 1 "#@#\Config.inc"][!Refresh "Avengers\Shield Tag"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupShTopList

[MeterShTopCommand2]
Meter=String
MeterStyle=LabelStyleT
Text=" #SHTagTop2#"
SolidColor=0,0,0,1
x=r
y=20r
W=80
H=18
LeftMouseUpAction=[!WriteKeyValue Variables NoTagTitle 1 "#@#\Config.inc"][!WriteKeyValue Variables NoTagDate 0 "#@#\Config.inc"][!Refresh "Avengers\Shield Tag"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupShTopList

;------------------------------------------------------------------------

[ShieldTagTextTitle]
Meter=String
MeterStyle=LabelStyleT
Text=#ShTagIco#
x=-127r
y=68r
Hidden=#NoTagSign#

[ShieldTagTextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=84r
y=-1r
ButtonCommand=!CommandMeasure "ShieldTagIconCommand" "Run"
Hidden=#NoTagSign#

[ShieldTagTitleText]
Meter=String
MeterStyle=TextStyle
Text=#SignIcon#
x=25r
y=1r
Hidden=#NoTagSign#

;------------------------------------------------------------------------

[ShieldTagNumTitle]
Meter=String
MeterStyle=LabelStyleT
Text=#ShTagT#
x=-109r
y=r
Hidden=#NoTagText#

[ShieldTagNumBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=84r
y=-1r
ButtonCommand=[!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 29"]
Hidden=#NoTagText#

[ShieldTagTitleNum]
Meter=String
MeterStyle=TextStyle
Text=#TagTxt#
x=25r
y=1r
Hidden=#NoTagText#

;------------------------------------------------------------------------

;UTILITY LAUNCHERS ======================================================

;------------------------------------------------------------------------

[UtilityTitle1]
Meter=String
MeterStyle=TitleStyle
Text=UTILITY LAUNCHERS
x=57
y=46r

[UtilityIcon]
Meter=Image
ImageName=#@#\Images\Utility\SearchIcon1.png
x=207r
y=4r
W=28
PreserveAspectRatio=1
AntiAlias=1

[UtilityImage]
Meter=Image
ImageName=#@#\Images\Options\Utility.png
x=120r
y=6r

[Utility1TextTitle]
Meter=String
MeterStyle=LabelStyleT
Text=UTILITY 1 #FLDN#
x=-327r
y=28r

[Utility1FolderBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=88r
y=-1r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 33"

[Utility1Name]
Meter=String
MeterStyle=TextStyle
Text=#TitleUB1#
x=25r
y=1r

[Utility1PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-25r
y=20r
ButtonCommand=!CommandMeasure "Utility1PathCommand" "Run"

[Utility1PathLabel]
Meter=String
MeterStyle=LabelStyleT
Text=#FLDPat#
x=-88r
y=1r

[Utility1PathText]
Meter=String
MeterStyle=TextStyle
Text=#UB1#
x=113r
y=r

[Utility4TextTitle]
Meter=String
MeterStyle=LabelStyleT
Text=UTILITY 4 #FLDN#
x=143r
y=-21r

[Utility4FolderBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=88r
y=-1r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 34"

[Utility4Name]
Meter=String
MeterStyle=TextStyle
Text=#TitleUB4#
x=25r
y=1r

[Utility4PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-25r
y=20r
ButtonCommand=!CommandMeasure "Utility4PathCommand" "Run"

[Utility4PathLabel]
Meter=String
MeterStyle=LabelStyleT
Text=#FLDPat#
x=-88r
y=1r

[Utility4PathText]
Meter=String
MeterStyle=TextStyle
Text=#UB4#
x=113r
y=r

[Utility5TextTitle]
Meter=String
MeterStyle=LabelStyleT
Text=UTILITY 5 #FLDN#
x=-368r
y=30r

[Utility5FolderBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=88r
y=-1r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 35"

[Utility5Name]
Meter=String
MeterStyle=TextStyle
Text=#TitleUB5#
x=25r
y=1r

[Utility5PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-25r
y=20r
ButtonCommand=!CommandMeasure "Utility5PathCommand" "Run"

[Utility5PathLabel]
Meter=String
MeterStyle=LabelStyleT
Text=#FLDPat#
x=-88r
y=1r

[Utility5PathText]
Meter=String
MeterStyle=TextStyle
Text=#UB5#
x=113r
y=r

[Utility6TextTitle]
Meter=String
MeterStyle=LabelStyleT
Text=UTILITY 6 #FLDN#
x=143r
y=-21r

[Utility6FolderBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=88r
y=-1r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 36"

[Utility6Name]
Meter=String
MeterStyle=TextStyle
Text=#TitleUB6#
x=25r
y=1r

[Utility6PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-25r
y=20r
ButtonCommand=!CommandMeasure "Utility6PathCommand" "Run"

[Utility6PathLabel]
Meter=String
MeterStyle=LabelStyleT
Text=#FLDPat#
x=-88r
y=1r

[Utility6PathText]
Meter=String
MeterStyle=TextStyle
Text=#UB6#
x=113r
y=r
