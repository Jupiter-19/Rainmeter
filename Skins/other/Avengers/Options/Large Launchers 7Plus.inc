
;MEASURES ===============================================================

;LAUNCHERS 7 PROGRAM 1-7 FILE/FOLDER CHANGE AND UPDATE ==================

[LargeLauncher1Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchChoice1#" "Variables" "LLP1" "#config#" "#LLP1#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Lauchers 7"]

[LargeLauncher2Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchChoice1#" "Variables" "LLP2" "#config#" "#LLP2#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Lauchers 7"]

[LargeLauncher3Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchChoice1#" "Variables" "LLP3" "#config#" "#LLP3#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Lauchers 7"]

[LargeLauncher4Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchChoice1#" "Variables" "LLP4" "#config#" "#LLP4#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Lauchers 7"]

[LargeLauncher5Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchChoice1#" "Variables" "LLP5" "#config#" "#LLP5#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Lauchers 7"]

[LargeLauncher6Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchChoice1#" "Variables" "LLP6" "#config#" "#LLP6#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Lauchers 7"]

[LargeLauncher7Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchChoice1#" "Variables" "LLP7" "#config#" "#LLP7#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Lauchers 7"]

;LAUNCHERS 7 PROGRAM 1-7 ICON CHANGE AND UPDATE =========================

[LargeLauncher1IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "LLI1" "#config#" "#LLI1#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Lauchers 7"]

[LargeLauncher2IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "LLI2" "#config#" "#LLI2#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Lauchers 7"]

[LargeLauncher3IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "LLI3" "#config#" "#LLI3#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Lauchers 7"]

[LargeLauncher4IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "LLI4" "#config#" "#LLI4#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Lauchers 7"]

[LargeLauncher5IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "LLI5" "#config#" "#LLI5#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Lauchers 7"]

[LargeLauncher6IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "LLI6" "#config#" "#LLI6#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Lauchers 7"]

[LargeLauncher7IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "LLI7" "#config#" "#LLI7#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Large Lauchers 7"]

;LAUNCHERS 7 PROGRAM 1-7 RUNNING STATE DETECTION ========================

[MeasureLLData1]
Measure=String
String=#LLP1#
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgLL1 0 "#@#\Config.inc"][!WriteKeyValue Variables LLData1 "[MeasureLLData1]" "#@#\Config.inc"][!WriteKeyValue Variables Type1 "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgLL1 1 "#@#\Config.inc"][!WriteKeyValue Variables LLData1 "" "#@#\Config.inc"][!WriteKeyValue Variables Type1 D "#@#\Config.inc"][!Refresh "Avengers\Large Lauchers 7"]

[MeasureLLData2]
Measure=String
String=#LLP2#
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgLL2 0 "#@#\Config.inc"][!WriteKeyValue Variables LLData2 "[MeasureLLData2]" "#@#\Config.inc"][!WriteKeyValue Variables Type2 "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgLL2 1 "#@#\Config.inc"][!WriteKeyValue Variables LLData2 "" "#@#\Config.inc"][!WriteKeyValue Variables Type2 D "#@#\Config.inc"][!Refresh "Avengers\Large Lauchers 7"]

[MeasureLLData3]
Measure=String
String=#LLP3#
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgLL3 0 "#@#\Config.inc"][!WriteKeyValue Variables LLData3 "[MeasureLLData3]" "#@#\Config.inc"][!WriteKeyValue Variables Type3 "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgLL3 1 "#@#\Config.inc"][!WriteKeyValue Variables LLData3 "" "#@#\Config.inc"][!WriteKeyValue Variables Type3 D "#@#\Config.inc"][!Refresh "Avengers\Large Lauchers 7"]

[MeasureLLData4]
Measure=String
String=#LLP4#
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgLL4 0 "#@#\Config.inc"][!WriteKeyValue Variables LLData4 "[MeasureLLData4]" "#@#\Config.inc"][!WriteKeyValue Variables Type4 "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgLL4 1 "#@#\Config.inc"][!WriteKeyValue Variables LLData4 "" "#@#\Config.inc"][!WriteKeyValue Variables Type4 D "#@#\Config.inc"][!Refresh "Avengers\Large Lauchers 7"]

[MeasureLLData5]
Measure=String
String=#LLP5#
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgLL5 0 "#@#\Config.inc"][!WriteKeyValue Variables LLData5 "[MeasureLLData5]" "#@#\Config.inc"][!WriteKeyValue Variables Type5 "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgLL5 1 "#@#\Config.inc"][!WriteKeyValue Variables LLData5 "" "#@#\Config.inc"][!WriteKeyValue Variables Type5 D "#@#\Config.inc"][!Refresh "Avengers\Large Lauchers 7"]

[MeasureLLData6]
Measure=String
String=#LLP6#
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgLL6 0 "#@#\Config.inc"][!WriteKeyValue Variables LLData6 "[MeasureLLData6]" "#@#\Config.inc"][!WriteKeyValue Variables Type6 "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgLL6 1 "#@#\Config.inc"][!WriteKeyValue Variables LLData6 "" "#@#\Config.inc"][!WriteKeyValue Variables Type6 D "#@#\Config.inc"][!Refresh "Avengers\Large Lauchers 7"]

[MeasureLLData7]
Measure=String
String=#LLP7#
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgLL7 0 "#@#\Config.inc"][!WriteKeyValue Variables LLData7 "[MeasureLLData7]" "#@#\Config.inc"][!WriteKeyValue Variables Type7 "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgLL7 1 "#@#\Config.inc"][!WriteKeyValue Variables LLData7 "" "#@#\Config.inc"][!WriteKeyValue Variables Type7 D "#@#\Config.inc"][!Refresh "Avengers\Large Lauchers 7"]

;BACKGROUND =============================================================

[MeterBackgroundTopMiddle]
Meter=Image
ImageName=#@#\Images\Options\Options2_10 #Color1#.png
x=0
y=0

;TAB BUTTONS ============================================================

[MeterTabButtonTop]
Meter=Button
ButtonImage="#@#\Images\Options\Tab Button.png"
x=-8r
y=26r
ButtonCommand=[!WriteKeyValue Variables Tab "GeneralPlus"][!Refresh]

[MeterTabButtonBottomMiddle]
Meter=Button
ButtonImage="#@#\Images\Options\Tab Button.png"
x=r
y=200r
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

;TITLE ==================================================================

[MeterSkinTitle]
Meter=String
MeterStyle=TitleStyleTop
FontSize=15
Text=#ConfigTxt#
x=162
y=17
AntiAlias=1

[MeterSkinTip]
Meter=String
MeterStyle=TitleStyleTop
FontSize=11
Text=#SkinTipTxt#
x=35R
y=22
AntiAlias=1

;OPTION TO CHANGE FROM FILE TO FOLDER PATH ==============================

[ChooseFileFolderBackgroundColor]
Meter=Image
SolidColor=#Shade1#,80
x=380
y=54
W=166
H=26
LeftMouseUpAction=[!WriteKeyValue Variables LaunchChoice1 #LaunchChoice2#][!WriteKeyValue Variables LaunchChoice2 #LaunchChoice1#][!WriteKeyValue Variables PathOption1 #PathOption2#][!WriteKeyValue Variables PathOption2 #PathOption1#][!Refresh "#CURRENTCONFIG#"]
ToolTipText=#ChPathTxt#
ToolTipIcon=Info
ToolTipType=0
AntiAlias=1

[BaseFileFolderMeter]
Meter=Image
SolidColor=145,145,145,240
x=10r
y=6r
W=14
H=14
AntiAlias=1

[MeterOptionChoiceFileButton]
Meter=Image
SolidColor=255,100,50,220
x=3r
y=3r
W=8
H=8
AntiAlias=1

[MeterOptionChoiceFolderButton]
Meter=Image
SolidColor=255,255,255,220
x=r
y=r
W=8
H=8
AntiAlias=1
Hidden=#PathOption1#

[MeasureOptionChoice]
Measure=String
String=#PathOption1#
RegExpSubstitute=1
Substitute="0":"#ChFileTxt#","1":"#ChFolderTxt#"

[MeasureTypeChoice]
Measure=String
String=#PathOption1#
RegExpSubstitute=1
Substitute="0":"#LLLabel#","1":"#LLLabel2#"

[MeasurePathChoice]
Measure=String
String=#PathOption1#
RegExpSubstitute=1
Substitute="0":"#LLAppP#","1":"#LLAppP2#"

[OptionChoiceTitle]
Meter=String
MeasureName=MeasureOptionChoice
MeterStyle=LabelStyleT
Text=%1
x=22r
y=-4r

;FRAME CONTENT ==========================================================

[LargeLaunchersTitle]
Meter=String
MeterStyle=TitleStyle
Text=LARGE LAUNCHERS
x=57
y=53

[LargeLaunchersIcon]
Meter=Image
ImageName=#@#\Images\Options\LargeLaunchersIcon.png
x=223r
y=4r
W=28
PreserveAspectRatio=1
AntiAlias=1

[LargeLauncher1]
Meter=String
MeterStyle=SubtitleStyle
Text=LAUNCHER 1
x=-223r
y=38r

[LargeLauncher2]
Meter=String
MeterStyle=SubtitleStyle
Text=LAUNCHER 2
x=r
y=81r

[LargeLauncher3]
Meter=String
MeterStyle=SubtitleStyle
Text=LAUNCHER 3
x=r
y=81r

[LargeLauncher4]
Meter=String
MeterStyle=SubtitleStyle
Text=LAUNCHER 4
x=r
y=81r

[LargeLauncher5]
Meter=String
MeterStyle=SubtitleStyle
Text=LAUNCHER 5
x=r
y=81r

[LargeLauncher6]
Meter=String
MeterStyle=SubtitleStyle
Text=LAUNCHER 6
x=r
y=81r

[LargeLauncher7]
Meter=String
MeterStyle=SubtitleStyle
Text=LAUNCHER 7
x=r
y=81r

;LARGE LAUNCHER 1 =======================================================

;OPTION TO HIDE LAUNCHER 1 ----------------------------------------------

[CloseLauncher1Meter]
Meter=Image
ImageName=#@#\Images\Options\OnOff#CloseLL1#.png
x=330r
y=-491r
W=42
LeftMouseUpAction=!CommandMeasure "MeasureLargeLauncher 7Plus" "ExecuteBatch 8"
TooltipText=#NetTimeTooltip#
AntiAlias=1

[CloseLauncher1Text]
Meter=String
MeterStyle=TextStyle
Text=#CloseLL1#
x=11r
y=6r

[MeasureCloseLauncher1Text]
Measure=String
String=#CloseLL1#
RegExpSubstitute=1
Substitute="0":"#CloseLL1Txt0#","1":"#CloseLL1Txt1#"

[CloseLauncher1TextTitle]
Meter=String
MeasureName=MeasureCloseLauncher1Text
MeterStyle=LabelStyleT
Text=%1 1
x=41r
y=-4r

[CloseLauncher1Indication]
Meter=String
MeterStyle=LabelStyle
Text=#CloseLL1Explain#
x=-260r
y=30r

;------------------------------------------------------------------------

[LargeLauncher1TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-7r
y=-4r
ButtonCommand=!CommandMeasure "MeasureLargeLauncher 7Plus" "ExecuteBatch 1"
Hidden=#CloseLL1#

[LargeLauncher1TitleLabel]
Meter=String
MeasureName=MeasureTypeChoice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r
Hidden=#CloseLL1#

[LargeLauncher1TitleText]
Meter=String
MeterStyle=TextStyle
Text=#LLT1#
x=143r
y=r
Hidden=#CloseLL1#

[LargeLauncher1PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "LargeLauncher1Command" "Run"
Hidden=#CloseLL1#

[LargeLauncher1PathLabel]
Meter=String
MeasureName=MeasurePathChoice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r
Hidden=#CloseLL1#

[LargeLauncher1PathText]
Meter=String
Meterstyle=TextStyle
Text=#LLP1#
x=142r
y=r
Hidden=#CloseLL1#

[LargeLauncher1IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "LargeLauncher1IconCommand" "Run"
Hidden=#CloseLL1#

[LargeLauncher1IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r
Hidden=#CloseLL1#

[LargeLauncher1Icon]
Meter=Image
ImageName=#LLI1#
x=70r
y=-7r
w=30
h=30
AntiAlias=1
Hidden=#CloseLL1#

;LARGE LAUNCHER 2 =======================================================

[LargeLauncher2TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-282r
y=77r
ButtonCommand=!CommandMeasure "MeasureLargeLauncher 7Plus" "ExecuteBatch 2"

[LargeLauncher2TitleLabel]
Meter=String
MeasureName=MeasureTypeChoice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[LargeLauncher2TitleText]
Meter=String
MeterStyle=TextStyle
Text=#LLT2#
x=143r
y=r

[LargeLauncher2PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "LargeLauncher2Command" "Run"

[LargeLauncher2PathLabel]
Meter=String
MeasureName=MeasurePathChoice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[LargeLauncher2PathText]
Meter=String
Meterstyle=TextStyle
Text=#LLP2#
x=142r
y=r

[LargeLauncher2IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "LargeLauncher2IconCommand" "Run"

[LargeLauncher2IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[LargeLauncher2Icon]
Meter=Image
ImageName=#LLI2#
x=70r
y=-7r
w=30
h=30
AntiAlias=1

;LARGE LAUNCHER 3 =======================================================

[LargeLauncher3TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-283r
y=77r
ButtonCommand=!CommandMeasure "MeasureLargeLauncher 7Plus" "ExecuteBatch 3"

[LargeLauncher3TitleLabel]
Meter=String
MeasureName=MeasureTypeChoice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[LargeLauncher3TitleText]
Meter=String
MeterStyle=TextStyle
Text=#LLT3#
x=143r
y=r

[LargeLauncher3PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "LargeLauncher3Command" "Run"

[LargeLauncher3PathLabel]
Meter=String
MeasureName=MeasurePathChoice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[LargeLauncher3PathText]
Meter=String
Meterstyle=TextStyle
Text=#LLP3#
x=142r
y=r

[LargeLauncher3IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "LargeLauncher3IconCommand" "Run"

[LargeLauncher3IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[LargeLauncher3Icon]
Meter=Image
ImageName=#LLI3#
x=70r
y=-7r
h=30
w=30
AntiAlias=1

;LARGE LAUNCHER 4 =======================================================

[LargeLauncher4TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-283r
y=77r
ButtonCommand=!CommandMeasure "MeasureLargeLauncher 7Plus" "ExecuteBatch 4"

[LargeLauncher4TitleLabel]
Meter=String
MeasureName=MeasureTypeChoice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[LargeLauncher4TitleText]
Meter=String
MeterStyle=TextStyle
Text=#LLT4#
x=143r
y=r

[LargeLauncher4PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "LargeLauncher4Command" "Run"

[LargeLauncher4PathLabel]
Meter=String
MeasureName=MeasurePathChoice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[LargeLauncher4PathText]
Meter=String
Meterstyle=TextStyle
Text=#LLP4#
x=142r
y=r

[LargeLauncher4IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "LargeLauncher4IconCommand" "Run"

[LargeLauncher4IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[LargeLauncher4Icon]
Meter=Image
ImageName=#LLI4#
x=70r
y=-7r
h=30
w=30
AntiAlias=1

;LARGE LAUNCHER 5 =======================================================

[LargeLauncher5TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-283r
y=77r
ButtonCommand=!CommandMeasure "MeasureLargeLauncher 7Plus" "ExecuteBatch 5"

[LargeLauncher5TitleLabel]
Meter=String
MeasureName=MeasureTypeChoice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[LargeLauncher5TitleText]
Meter=String
MeterStyle=TextStyle
Text=#LLT5#
x=143r
y=r

[LargeLauncher5PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "LargeLauncher5Command" "Run"

[LargeLauncher5PathLabel]
Meter=String
MeasureName=MeasurePathChoice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[LargeLauncher5PathText]
Meter=String
MeterStyle=TextStyle
Text=#LLP5#
x=142r
y=r

[LargeLauncher5IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "LargeLauncher5IconCommand" "Run"

[LargeLauncher5IconLabel]
Meter=String
MeterStyle=LabelStyle
Stringalign=Center
Text=#LLIco#
x=-65r
y=12r

[LargeLauncher5Icon]
Meter=Image
ImageName=#LLI5#
x=70r
y=-7r
W=30
H=30
AntiAlias=1

;LARGE LAUNCHER 6 =======================================================

[LargeLauncher6TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-283r
y=77r
ButtonCommand=!CommandMeasure "MeasureLargeLauncher 7Plus" "ExecuteBatch 6"

[LargeLauncher6TitleLabel]
Meter=String
MeasureName=MeasureTypeChoice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[LargeLauncher6TitleText]
Meter=String
MeterStyle=TextStyle
Text=#LLT6#
x=143r
y=r

[LargeLauncher6PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "LargeLauncher6Command" "Run"

[LargeLauncher6PathLabel]
Meter=String
MeasureName=MeasurePathChoice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[LargeLauncher6PathText]
Meter=String
MeterStyle=TextStyle
Text=#LLP6#
x=142r
y=r

[LargeLauncher6IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "LargeLauncher6IconCommand" "Run"

[LargeLauncher6IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[LargeLauncher6Icon]
Meter=Image
ImageName=#LLI6#
x=70r
y=-7r
W=30
H=30
AntiAlias=1

;LARGE LAUNCHER 7 =======================================================

[LargeLauncher7TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-283r
y=77r
ButtonCommand=!CommandMeasure "MeasureLargeLauncher 7Plus" "ExecuteBatch 7"

[LargeLauncher7TitleLabel]
Meter=String
MeasureName=MeasureTypeChoice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[LargeLauncher7TitleText]
Meter=String
MeterStyle=TextStyle
Text=#LLT7#
x=143r
y=r

[LargeLauncher7PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "LargeLauncher7Command" "Run"

[LargeLauncher7PathLabel]
Meter=String
MeasureName=MeasurePathChoice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[LargeLauncher7PathText]
Meter=String
MeterStyle=TextStyle
Text=#LLP7#
x=142r
y=r

[LargeLauncher7IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "LargeLauncher7IconCommand" "Run"

[LargeLauncher7IconLabel]
Meter=String
MeterStyle=labelstyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[LargeLauncher7Icon]
Meter=Image
ImageName=#LLI7#
x=70r
y=-7r
W=30
H=30
AntiAlias=1
