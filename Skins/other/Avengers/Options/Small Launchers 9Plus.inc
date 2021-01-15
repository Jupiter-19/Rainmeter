
;MEASURES ===============================================================

;SMALL LAUNCHERS 9 PROGRAM 1-5 FILE/FOLDER CHANGE AND UPDATE ============

[SmallLauncher1Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchS9Choice1#" "Variables" "SLP1" "#config#" "#SLP1#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

[SmallLauncher2Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchS9Choice1#" "Variables" "SLP2" "#config#" "#SLP2#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

[SmallLauncher3Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchS9Choice1#" "Variables" "SLP3" "#config#" "#SLP3#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

[SmallLauncher4Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchS9Choice1#" "Variables" "SLP4" "#config#" "#SLP4#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

[SmallLauncher5Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchS9Choice1#" "Variables" "SLP5" "#config#" "#SLP5#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

;SMALL LAUNCHERS 9 PROGRAM 1-5 ICON CHANGE AND UPDATE ===================

[SmallLauncher1IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SLI1" "#config#" "#SLI1#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

[SmallLauncher2IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SLI2" "#config#" "#SLI2#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

[SmallLauncher3IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SLI3" "#config#" "#SLI3#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

[SmallLauncher4IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SLI4" "#config#" "#SLI4#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

[SmallLauncher5IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SLI5" "#config#" "#SLI5#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

;LAUNCHERS 9 PROGRAM 1-5 RUNNING STATE DETECTION ========================

[MeasureSL9Data1]
Measure=String
String=#SLP1#
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgSL1 0 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data1 "[MeasureSL9Data1]" "#@#\Config.inc"][!WriteKeyValue Variables Type1S "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgSL1 1 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data1 "" "#@#\Config.inc"][!WriteKeyValue Variables Type1S D "#@#\Config.inc"][!Refresh "Avengers\Small Launchers 9"]

[MeasureSL9Data2]
Measure=String
String=#SLP2#
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgSL2 0 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data2 "[MeasureSL9Data2]" "#@#\Config.inc"][!WriteKeyValue Variables Type2S "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgSL2 1 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data2 "" "#@#\Config.inc"][!WriteKeyValue Variables Type2S D "#@#\Config.inc"][!Refresh "Avengers\Small Launchers 9"]

[MeasureSL9Data3]
Measure=String
String=#SLP3#
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgSL3 0 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data3 "[MeasureSL9Data3]" "#@#\Config.inc"][!WriteKeyValue Variables Type3S "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgSL3 1 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data3 "" "#@#\Config.inc"][!WriteKeyValue Variables Type3S D "#@#\Config.inc"][!Refresh "Avengers\Small Launchers 9"]

[MeasureSL9Data4]
Measure=String
String=#SLP4#
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgSL4 0 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data4 "[MeasureSL9Data4]" "#@#\Config.inc"][!WriteKeyValue Variables Type4S "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgSL4 1 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data4 "" "#@#\Config.inc"][!WriteKeyValue Variables Type4S D "#@#\Config.inc"][!Refresh "Avengers\Small Launchers 9"]
Disabled=#CloseSL4#


[MeasureSL9Data5]
Measure=String
String=#SLP5#
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgSL5 0 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data5 "[MeasureSL9Data5]" "#@#\Config.inc"][!WriteKeyValue Variables Type5S "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgSL5 1 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data5 "" "#@#\Config.inc"][!WriteKeyValue Variables Type5S D "#@#\Config.inc"][!Refresh "Avengers\Small Launchers 9"]

;BACKGROUND =============================================================

[MeterBackgroundBottomMiddle]
Meter=Image
ImageName=#@#\Images\Options\Options3_10 #Color1#.png
x=0
y=0

;TAB BUTTONS ============================================================

[MeterTabButtonTop]
Meter=Button
ButtonImage="#@#\Images\Options\Tab Button.png"
x=-8r
y=26r
ButtonCommand=[!WriteKeyValue Variables Tab "GeneralPlus"][!Refresh]

[MeterTabButtonTopMiddle]
Meter=Button
ButtonImage="#@#\Images\Options\Tab Button.png"
x=r
y=100r
ButtonCommand=[!WriteKeyValue Variables Tab "Large Launchers 7Plus"][!Refresh]

[MeterTabButtonBottomMiddle1]
Meter=Button
ButtonImage="#@#\Images\Options\Tab Button.png"
x=r
y=200r
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

;ICONS ------------------------------------------------------------------

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

;SMALL LAUNCHERS 9 - PAGE 2 ---------------------------------------------

[MeterSL9Button]
Meter=Image
ImageName=#@#\Images\Options\TopButtonR.png
ImageAlpha=0
x=305
y=47
LeftMouseUpAction=[!WriteKeyValue Variables Tab "Small Launchers 9"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 255][!SetOption "SL92TitleTop" FontColor 255,255,255,200][!UpdateMeter SL92TitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 0][!SetOption "SL92TitleTop" FontColor "150,150,150,220"][!UpdateMeter SL92TitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]

;------------------------------------------------------------------------

[SL91TitleTop]
Meter=String
MeterStyle=TitleStyleTop
Text=LAUNCHERS 1-5
x=60
y=45

[SL91IconTop]
Meter=Image
ImageName=#@#\Images\Options\SmallLaunchersIcon1.png
x=35R
y=2r
W=28
PreserveAspectRatio=1
AntiAlias=1

[SL92TitleTop]
Meter=String
MeterStyle=TitleStyleTop
FontColor=150,150,150,220
Text=LAUNCHERS 6-9
x=44R
y=-2r
AntiAlias=1

[SL92IconTop]
Meter=Image
ImageName=#@#\Images\Options\SmallLaunchersIcon1.png
x=30R
y=2r
W=28
ImageAlpha=180
PreserveAspectRatio=1
AntiAlias=1

;OPTION TO CHANGE FROM FILE TO FOLDER PATH ==============================

[ChooseSL9FileFolderBackgroundColor]
Meter=Image
SolidColor=#Shade1#,80
x=380
y=84
W=166
H=26
LeftMouseUpAction=[!WriteKeyValue Variables LaunchS9Choice1 #LaunchS9Choice2#][!WriteKeyValue Variables LaunchS9Choice2 #LaunchS9Choice1#][!WriteKeyValue Variables PathS9Option1 #PathS9Option2#][!WriteKeyValue Variables PathS9Option2 #PathS9Option1#][!Refresh "#CURRENTCONFIG#"]
ToolTipText=#ChPathTxt#
ToolTipIcon=Info
ToolTipType=0
AntiAlias=1

[BaseSL9FileFolderMeter]
Meter=Image
SolidColor=145,145,145,240
x=10r
y=6r
W=14
H=14
AntiAlias=1

[MeterSL9OptionChoiceFileButton]
Meter=Image
SolidColor=255,100,50,220
x=3r
y=3r
W=8
H=8
AntiAlias=1

[MeterSL9OptionChoiceFolderButton]
Meter=Image
SolidColor=255,255,255,220
x=r
y=r
W=8
H=8
AntiAlias=1
Hidden=#PathOption1#

[MeasureOptionSL9Choice]
Measure=String
String=#PathS9Option1#
RegExpSubstitute=1
Substitute="0":"#ChFileTxt#","1":"#ChFolderTxt#"

[MeasureTypeSL9Choice]
Measure=String
String=#PathS9Option1#
RegExpSubstitute=1
Substitute="0":"#LLLabel#","1":"#LLLabel2#"

[MeasurePathSL9Choice]
Measure=String
String=#PathS9Option1#
RegExpSubstitute=1
Substitute="0":"#LLAppP#","1":"#LLAppP2#"

[OptionChoiceSL9Title]
Meter=String
MeasureName=MeasureOptionSL9Choice
MeterStyle=LabelStyle
Text=%1
x=22r
y=-4r

;FRAME CONTENT ==========================================================

[SmallLaunchersTitle]
Meter=String
MeterStyle=TitleStyle
Text=SMALL LAUNCHERS 9
x=57
y=84

[SmallLaunchersIcon]
Meter=Image
ImageName=#@#\Images\Options\SmallLaunchersIcon1.png
x=223r
y=4r
W=28
PreserveAspectRatio=1
AntiAlias=1

[SmallLauncher1]
Meter=String
MeterStyle=SubTitleStyle
Text=LAUNCHER 1
x=-223r
y=38r

[SmallLauncher2]
Meter=String
MeterStyle=SubTitleStyle
Text=LAUNCHER 2
x=r
y=101r

[SmallLauncher3]
Meter=String
MeterStyle=SubTitleStyle
Text=LAUNCHER 3
x=r
y=101r

[SmallLauncher4]
Meter=String
MeterStyle=SubTitleStyle
Text=LAUNCHER 4
x=r
y=101r

[SmallLauncher5]
Meter=String
MeterStyle=SubTitleStyle
Text=LAUNCHER 5
x=r
y=101r

;SMALL LAUNCHER 1 =======================================================

;OPTION TO HIDE SMALL LAUNCHER 1 ----------------------------------------

[CloseLauncherS1Meter]
Meter=Image
ImageName=#@#\Images\Options\OnOff#CloseLL1#.png
x=330r
y=-408r
W=42
TooltipText=#NetTimeTooltip#
LeftMouseUpAction=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 10"
AntiAlias=1

[CloseLauncherS1Text]
Meter=String
MeterStyle=TextStyle
Text=#CloseSL1#
x=11r
y=6r

[MeasureCloseLauncherS1Text]
Measure=String
String=#CloseSL1#
RegExpSubstitute=1
Substitute="0":"#CloseLL1Txt0#","1":"#CloseLL1Txt1#"

[CloseLauncherS1TextTitle]
Meter=String
MeasureName=MeasureCloseLauncherS1Text
MeterStyle=LabelStyleT
Text=%1 1
x=41r
y=-4r

[CloseLauncherS1Indication]
Meter=String
MeterStyle=LabelStyle
Text=#CloseLL1Explain#
x=-260r
y=30r

;------------------------------------------------------------------------

[SmallLauncher1TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-7r
y=-5r
ButtonCommand=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 1"
Hidden=#CloseSL1#

[SmallLauncher1TitleLabel]
Meter=String
MeasureName=MeasureTypeSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r
Hidden=#CloseSL1#

[SmallLauncher1TitleText]
Meter=String
MeterStyle=TextStyle
Text=#SLT1#
x=143r
y=r
Hidden=#CloseSL1#

[SmallLauncher1PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "SmallLauncher1Command" "Run"
Hidden=#CloseSL1#

[SmallLauncher1PathLabel]
Meter=String
MeasureName=MeasurePathSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r
Hidden=#CloseSL1#

[SmallLauncher1PathText]
Meter=String
MeterStyle=TextStyle
Text=#SLP1#
x=142r
y=r
Hidden=#CloseSL1#

[SmallLauncher1IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "SmallLauncher1IconCommand" "Run"
Hidden=#CloseSL1#

[SmallLauncher1IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r
Hidden=#CloseSL1#

[SmallLauncher1Icon]
Meter=Image
ImageName=#SLI1#
x=70r
y=-7r
W=30
H=30
AntiAlias=1
Hidden=#CloseSL1#

;OPTION TO CHOOSE THE MAXIMUM NUMBER OF PROGRAM INSTANCES ---------------

[MeasureSmallLauncher1NumActive]
Measure=Calc
Formula=(#SL9Mon#+#CloseSL1#)
IfEqualValue=0
IfEqualAction=[!WriteKeyValue Variables HideNum1 0][!SetOptionGroup SL9ANum1 Hidden 0]
IfAboveValue=0
IfAboveAction=[!WriteKeyValue Variables HideNum1 1][!SetOptionGroup SL9ANum1 Hidden 1]

[SmallLauncher1OptionNum]
Meter=String
MeterStyle=LabelStyleT
Text=#ProgramNum#
x=-399r
y=40r
Group=SL9ANum1
Hidden=#HideNum1#

[SmallLauncher1OptionNumBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=116r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 14"
Group=SL9ANum1
Hidden=#HideNum1#

[SmallLauncher1OptionNumtText]
Meter=String
MeterStyle=TextStyle
Text=#MAXL1#
x=9r
y=1r
Group=SL9ANum1
Hidden=#HideNum1#

;SMALL LAUNCHER 2 =======================================================

;OPTION TO HIDE SMALL LAUNCHER 2 ----------------------------------------

[CloseLauncherS2Meter]
Meter=Image
ImageName=#@#\Images\Options\OnOff#CloseLL1#.png
x=206r
y=31r
W=42
TooltipText=#NetTimeTooltip#
LeftMouseUpAction=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 11"
AntiAlias=1

[CloseLauncherS2Text]
Meter=String
MeterStyle=TextStyle
Text=#CloseSL2#
x=11r
y=6r

[MeasureCloseLauncherS2Text]
Measure=String
String=#CloseSL2#
RegExpSubstitute=1
Substitute="0":"#CloseLL1Txt0#","1":"#CloseLL1Txt1#"

[CloseLauncherS2TextTitle]
Meter=String
MeasureName=MeasureCloseLauncherS2Text
MeterStyle=LabelStyleT
Text=%1 2
x=41r
y=-4r

[CloseLauncherS2Indication]
Meter=String
MeterStyle=LabelStyle
Text=#CloseLL1Explain#
x=-260r
y=30r

;------------------------------------------------------------------------

[SmallLauncher2TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-7r
y=-5r
ButtonCommand=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 2"
Hidden=#CloseSL2#

[SmallLauncher2TitleLabel]
Meter=String
MeasureName=MeasureTypeSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r
Hidden=#CloseSL2#

[SmallLauncher2TitleText]
Meter=String
MeterStyle=TextStyle
Text=#SLT2#
x=143r
y=r
Hidden=#CloseSL2#

[SmallLauncher2PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "SmallLauncher2Command" "Run"
Hidden=#CloseSL2#

[SmallLauncher2PathLabel]
Meter=String
MeasureName=MeasurePathSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r
Hidden=#CloseSL2#

[SmallLauncher2PathText]
Meter=String
MeterStyle=TextStyle
Text=#SLP2#
x=142r
y=r
Hidden=#CloseSL2#

[SmallLauncher2IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "SmallLauncher2IconCommand" "Run"
Hidden=#CloseSL2#

[SmallLauncher2IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r
Hidden=#CloseSL2#

[SmallLauncher2Icon]
Meter=Image
ImageName=#SLI2#
x=70r
y=-7r
W=30
H=30
AntiAlias=1
Hidden=#CloseSL2#

;OPTION TO CHOOSE THE MAXIMUM NUMBER OF PROGRAM INSTANCES ---------------

[MeasureSmallLauncher2NumActive]
Measure=Calc
Formula=(#SL9Mon#+#CloseSL2#)
IfEqualValue=0
IfEqualAction=[!WriteKeyValue Variables HideNum2 0][!SetOptionGroup SL9ANum2 Hidden 0]
IfAboveValue=0
IfAboveAction=[!WriteKeyValue Variables HideNum2 1][!SetOptionGroup SL9ANum2 Hidden 1]

[SmallLauncher2OptionNum]
Meter=String
MeterStyle=LabelStyleT
Text=#ProgramNum#
x=-399r
y=40r
Group=SL9ANum2
Hidden=#HideNum2#

[SmallLauncher2OptionNumBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=116r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 15"
Group=SL9ANum2
Hidden=#HideNum2#

[SmallLauncher2OptionNumtText]
Meter=String
MeterStyle=TextStyle
Text=#MAXL2#
x=9r
y=1r
Group=SL9ANum2
Hidden=#HideNum2#

;SMALL LAUNCHER 3 =======================================================

;OPTION TO HIDE SMALL LAUNCHER 3 ----------------------------------------

[CloseLauncherS3Meter]
Meter=Image
ImageName=#@#\Images\Options\OnOff#CloseLL1#.png
x=206r
y=31r
W=42
TooltipText=#NetTimeTooltip#
LeftMouseUpAction=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 12"
AntiAlias=1

[CloseLauncherS3Text]
Meter=String
MeterStyle=TextStyle
Text=#CloseSL3#
x=11r
y=6r

[MeasureCloseLauncherS3Text]
Measure=String
String=#CloseSL3#
RegExpSubstitute=1
Substitute="0":"#CloseLL1Txt0#","1":"#CloseLL1Txt1#"

[CloseLauncherS3TextTitle]
Meter=String
MeasureName=MeasureCloseLauncherS3Text
MeterStyle=LabelStyleT
Text=%1 3
x=41r
y=-4r

[CloseLauncherS3Indication]
Meter=String
MeterStyle=LabelStyle
Text=#CloseLL1Explain#
x=-260r
y=30r

;------------------------------------------------------------------------

[SmallLauncher3TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-7r
y=-5r
ButtonCommand=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 3"
Hidden=#CloseSL3#

[SmallLauncher3TitleLabel]
Meter=String
MeasureName=MeasureTypeSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r
Hidden=#CloseSL3#

[SmallLauncher3TitleText]
Meter=String
MeterStyle=TextStyle
Text=#SLT3#
x=143r
y=r
Hidden=#CloseSL3#

[SmallLauncher3PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "SmallLauncher3Command" "Run"
Hidden=#CloseSL3#

[SmallLauncher3PathLabel]
Meter=String
MeasureName=MeasurePathSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r
Hidden=#CloseSL3#

[SmallLauncher3PathText]
Meter=String
MeterStyle=TextStyle
Text=#SLP3#
x=142r
y=r
Hidden=#CloseSL3#

[SmallLauncher3IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "SmallLauncher3IconCommand" "Run"
Hidden=#CloseSL3#

[SmallLauncher3IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r
Hidden=#CloseSL3#

[SmallLauncher3Icon]
Meter=Image
ImageName=#SLI3#
x=70r
y=-7r
W=30
H=30
AntiAlias=1
Hidden=#CloseSL3#

;OPTION TO CHOOSE THE MAXIMUM NUMBER OF PROGRAM INSTANCES ---------------

[MeasureSmallLauncher3NumActive]
Measure=Calc
Formula=(#SL9Mon#+#CloseSL3#)
IfEqualValue=0
IfEqualAction=[!WriteKeyValue Variables HideNum3 0][!SetOptionGroup SL9ANum3 Hidden 0]
IfAboveValue=0
IfAboveAction=[!WriteKeyValue Variables HideNum3 1][!SetOptionGroup SL9ANum3 Hidden 1]

[SmallLauncher3OptionNum]
Meter=String
MeterStyle=LabelStyleT
Text=#ProgramNum#
x=-399r
y=40r
Group=SL9ANum3
Hidden=#HideNum3#

[SmallLauncher3OptionNumBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=116r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 16"
Group=SL9ANum3
Hidden=#HideNum3#

[SmallLauncher3OptionNumtText]
Meter=String
MeterStyle=TextStyle
Text=#MAXL3#
x=9r
y=1r
Group=SL9ANum3
Hidden=#HideNum3#

;SMALL LAUNCHER 4 =======================================================

;OPTION TO HIDE SMALL LAUNCHER 4 ----------------------------------------

[CloseLauncherS4Meter]
Meter=Image
ImageName=#@#\Images\Options\OnOff#CloseLL1#.png
x=206r
y=31r
W=42
TooltipText=#NetTimeTooltip#
LeftMouseUpAction=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 13"
AntiAlias=1

[CloseLauncherS4Text]
Meter=String
MeterStyle=TextStyle
Text=#CloseSL4#
x=11r
y=6r

[MeasureCloseLauncherS4Text]
Measure=String
String=#CloseSL4#
RegExpSubstitute=1
Substitute="0":"#CloseLL1Txt0#","1":"#CloseLL1Txt1#"

[CloseLauncherS4TextTitle]
Meter=String
MeasureName=MeasureCloseLauncherS4Text
MeterStyle=LabelStyleT
Text=%1 4
x=41r
y=-4r

[CloseLauncherS4Indication]
Meter=String
MeterStyle=LabelStyle
Text=#CloseLL1Explain#
x=-260r
y=30r

;------------------------------------------------------------------------

[SmallLauncher4TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-7r
y=-5r
ButtonCommand=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 4"
Hidden=#CloseSL4#

[SmallLauncher4TitleLabel]
Meter=String
MeasureName=MeasureTypeSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r
Hidden=#CloseSL4#

[SmallLauncher4TitleText]
Meter=String
MeterStyle=LabelStyleT
Text=#SLT4#
x=143r
y=r
Hidden=#CloseSL4#

[SmallLauncher4PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "SmallLauncher4Command" "Run"
Hidden=#CloseSL4#

[SmallLauncher4PathLabel]
Meter=String
MeasureName=MeasurePathSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r
Hidden=#CloseSL4#

[SmallLauncher4PathText]
Meter=String
MeterStyle=TextStyle
Text=#SLP4#
x=142r
y=r
Hidden=#CloseSL4#

[SmallLauncher4IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "SmallLauncher4IconCommand" "Run"
Hidden=#CloseSL4#

[SmallLauncher4IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r
Hidden=#CloseSL4#

[SmallLauncher4Icon]
Meter=Image
ImageName=#SLI4#
x=70r
y=-7r
W=30
H=30
AntiAlias=1
Hidden=#CloseSL4#

;OPTION TO CHOOSE THE MAXIMUM NUMBER OF PROGRAM INSTANCES ---------------

[MeasureSmallLauncher4NumActive]
Measure=Calc
Formula=(#SL9Mon#+#CloseSL4#)
IfEqualValue=0
IfEqualAction=[!WriteKeyValue Variables HideNum4 0][!SetOptionGroup SL9ANum4 Hidden 0]
IfAboveValue=0
IfAboveAction=[!WriteKeyValue Variables HideNum4 1][!SetOptionGroup SL9ANum4 Hidden 1]

[SmallLauncher4OptionNum]
Meter=String
MeterStyle=LabelStyleT
Text=#ProgramNum#
x=-399r
y=40r
Group=SL9ANum4
Hidden=#HideNum4#

[SmallLauncher4OptionNumBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=116r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 17"
Group=SL9ANum4
Hidden=#HideNum4#

[SmallLauncher4OptionNumtText]
Meter=String
MeterStyle=TextStyle
Text=#MAXL4#
x=9r
y=1r
Group=SL9ANum4
Hidden=#HideNum4#

;SMALL LAUNCHER 5 =======================================================

[SmallLauncher5TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-9r
y=58r
ButtonCommand=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 5"

[SmallLauncher5TitleLabel]
Meter=String
MeasureName=MeasureTypeSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher5TitleText]
Meter=String
MeterStyle=TextStyle
Text=#SLT5#
x=143r
y=r

[SmallLauncher5PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "SmallLauncher5Command" "Run"

[SmallLauncher5PathLabel]
Meter=String
MeasureName=MeasurePathSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher5PathText]
Meter=String
MeterStyle=TextStyle
Text=#SLP5#
x=142r
y=r

[SmallLauncher5IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "SmallLauncher5IconCommand" "Run"

[SmallLauncher5IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[SmallLauncher5Icon]
Meter=Image
ImageName=#SLI5#
x=70r
y=-7r
W=30
H=30
AntiAlias=1

;OPTION TO CHOOSE THE MAXIMUM NUMBER OF PROGRAM INSTANCES ---------------

[SmallLauncher5OptionNum]
Meter=String
MeterStyle=LabelStyleT
Text=#ProgramNum#
x=-399r
y=40r
Hidden=#SL9Mon#

[SmallLauncher5OptionNumBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=116r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 18"
Hidden=#SL9Mon#

[SmallLauncher5OptionNumtText]
Meter=String
MeterStyle=TextStyle
Text=#MAXL5#
x=9r
y=1r
Hidden=#SL9Mon#

;SMALL LAUNCHERS 9 INFORMATIONS -----------------------------------------

[SL9NumText]
Meter=String
MeterStyle=LabelStyle
Text=#ProgramNumExpl#
x=-125r
y=34r
ClipString=2
ClipStringW=500
