
;MEASURES ===============================================================

;SMALL LAUNCHERS PROGRAM 1-5 FILE/FOLDER CHANGE AND UPDATE ==============

[SmallLauncher10Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchSChoice1#" "Variables" "SLP10" "#config#" "#SLP10#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 2"]

[SmallLauncher11Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchSChoice1#" "Variables" "SLP11" "#config#" "#SLP11#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 2"]

[SmallLauncher12Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchSChoice1#" "Variables" "SLP12" "#config#" "#SLP12#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 2"]

[SmallLauncher13Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchSChoice1#" "Variables" "SLP13" "#config#" "#SLP13#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 2"]

[SmallLauncher14Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchSChoice1#" "Variables" "SLP14" "#config#" "#SLP14#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 2"]

;SMALL LAUNCHERS 2 PROGRAM 1-5 ICON CHANGE AND UPDATE ===================

[SmallLauncher10IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SLI10" "#config#" "#SLI10#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 2"]

[SmallLauncher11IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SLI11" "#config#" "#SLI11#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 2"]

[SmallLauncher12IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SLI12" "#config#" "#SLI12#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 2"]

[SmallLauncher13IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SLI13" "#config#" "#SLI13#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 2"]

[SmallLauncher14IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SLI14" "#config#" "#SLI14#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 2"]

;LAUNCHERS 2 PROGRAM 1-5 RUNNING STATE DETECTION ========================

[MeasureSL2Data10]
Measure=String
String="#SLP10#"
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgSL10 0 "#@#\Config.inc"][!WriteKeyValue Variables SL2Data10 "[MeasureSL2Data10]" "#@#\Config.inc"][!WriteKeyValue Variables Type10s "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgSL10 1 "#@#\Config.inc"][!WriteKeyValue Variables SL2Data10 "" "#@#\Config.inc"][!WriteKeyValue Variables Type10s D "#@#\Config.inc"][!Refresh "Avengers\Small Launchers 2"]

[MeasureSL2Data11]
Measure=String
String="#SLP11#"
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgSL11 0 "#@#\Config.inc"][!WriteKeyValue Variables SL2Data11 "[MeasureSL2Data11]" "#@#\Config.inc"][!WriteKeyValue Variables Type11s "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgSL11 1 "#@#\Config.inc"][!WriteKeyValue Variables SL2Data11 "" "#@#\Config.inc"][!WriteKeyValue Variables Type11s D "#@#\Config.inc"][!Refresh "Avengers\Small Launchers 2"]

[MeasureSL2Data12]
Measure=String
String="#SLP12#"
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgSL12 0 "#@#\Config.inc"][!WriteKeyValue Variables SL2Data12 "[MeasureSL2Data12]" "#@#\Config.inc"][!WriteKeyValue Variables Type12s "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgSL12 1 "#@#\Config.inc"][!WriteKeyValue Variables SL2Data12 "" "#@#\Config.inc"][!WriteKeyValue Variables Type12s D "#@#\Config.inc"][!Refresh "Avengers\Small Launchers 2"]

[MeasureSL2Data13]
Measure=String
String="#SLP13#"
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgSL13 0 "#@#\Config.inc"][!WriteKeyValue Variables SL2Data13 "[MeasureSL2Data13]" "#@#\Config.inc"][!WriteKeyValue Variables Type13s "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgSL13 1 "#@#\Config.inc"][!WriteKeyValue Variables SL2Data13 "" "#@#\Config.inc"][!WriteKeyValue Variables Type13s D "#@#\Config.inc"][!Refresh "Avengers\Small Launchers 2"]

[MeasureSL2Data14]
Measure=String
String="#SLP14#"
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1","(.*.vmcx)":"VMWindow.exe"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgSL14 0 "#@#\Config.inc"][!WriteKeyValue Variables SL2Data14 "[MeasureSL2Data14]" "#@#\Config.inc"][!WriteKeyValue Variables Type14s "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgSL14 1 "#@#\Config.inc"][!WriteKeyValue Variables SL2Data14 "" "#@#\Config.inc"][!WriteKeyValue Variables Type14s D "#@#\Config.inc"][!Refresh "Avengers\Small Launchers 2"]

;BACKGROUND =============================================================

[MeterBackgroundBottomMiddle1]
Meter=Image
ImageName=#@#\Images\Options\Options4_10 #Color1#.png
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

[MeterTabButtonTopMiddle1]
Meter=Button
ButtonImage="#@#\Images\Options\Tab Button.png"
x=r
y=100r
ButtonCommand=[!WriteKeyValue Variables Tab "Small Launchers 9Plus"][!Refresh]

[MeterTabButtonBottom1]
Meter=Button
ButtonImage="#@#\Images\Options\Tab Button.png"
x=r
y=200r
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

[ChooseFileFolderBackgroundColor2]
Meter=Image
SolidColor=#Shade1#,80
x=380
y=54
W=166
H=26
LeftMouseUpAction=[!WriteKeyValue Variables LaunchSChoice1 #LaunchSChoice2#][!WriteKeyValue Variables LaunchSChoice2 #LaunchSChoice1#][!WriteKeyValue Variables PathSOption1 #PathSOption2#][!WriteKeyValue Variables PathSOption2 #PathSOption1#][!Refresh "#CURRENTCONFIG#"]
ToolTipText=#ChPathTxt#
ToolTipIcon=Info
ToolTipType=0
AntiAlias=1

[BaseSFileFolderMeter2]
Meter=Image
SolidColor=150,150,150,240
x=10r
y=6r
W=14
H=14
AntiAlias=1
DynamicVariables=1

[MeterOptionChoiceSFileButton2]
Meter=Image
SolidColor=255,100,50,220
x=3r
y=3r
W=8
H=8
AntiAlias=1

[MeterOptionChoiceSFolderButton2]
Meter=Image
SolidColor=255,255,255,220
x=r
y=r
W=8
H=8
AntiAlias=1
Hidden=#PathSOption1#

[MeasureOptionSChoice2]
Measure=String
String=#PathSOption1#
RegExpSubstitute=1
Substitute="0":"#ChFileTxt#","1":"#ChFolderTxt#"

[MeasureTypeSChoice2]
Measure=String
String=#PathSOption1#
RegExpSubstitute=1
Substitute="0":"#LLLabel#","1":"#LLLabel2#"

[MeasurePathSChoice2]
Measure=String
String=#PathSOption1#
RegExpSubstitute=1
Substitute="0":"#LLAppP#","1":"#LLAppP2#"

[OptionChoiceSTitle2]
Meter=String
MeasureName=MeasureOptionSChoice2
MeterStyle=LabelStyleT
Text=%1
x=22r
y=-4r

;FRAME CONTENT ==========================================================

[SmallLaunchers2Title]
Meter=String
MeterStyle=TitleStyle
Text=SMALL LAUNCHERS 2
x=57
y=53

[SmallLaunchers2Icon]
Meter=Image
ImageName=#@#\Images\Options\SmallLaunchersIcon2.png
x=225r
y=4r
W=28
PreserveAspectRatio=1
AntiAlias=1

[SmallLauncher10]
Meter=String
MeterStyle=SubTitleStyle
Text=LAUNCHER 1
x=-225r
y=38r

[SmallLauncher11]
Meter=String
MeterStyle=SubTitleStyle
Text=LAUNCHER 2
x=r
y=81r

[SmallLauncher12]
Meter=String
MeterStyle=SubTitleStyle
Text=LAUNCHER 3
x=r
y=81r

[SmallLauncher13]
Meter=String
MeterStyle=SubTitleStyle
Text=LAUNCHER 4
x=r
y=81r

[SmallLauncher14]
Meter=String
MeterStyle=SubTitleStyle
Text=LAUNCHER 5
x=r
y=81r

;SMALL LAUNCHER 10 ======================================================

[SmallLauncher10TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=115r
y=-301r
ButtonCommand=!CommandMeasure "MeasureSmallLauncher 2Plus" "ExecuteBatch 1"

[SmallLauncher10TitleLabel]
Meter=String
MeasureName=MeasureTypeSChoice2
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher10TitleText]
Meter=String
MeterStyle=TextStyle
Text=#SLT10#
x=143r
y=r

[SmallLauncher10PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "SmallLauncher10Command" "Run"

[SmallLauncher10PathLabel]
Meter=String
MeasureName=MeasurePathSChoice2
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher10PathText]
Meter=String
Meterstyle=textstyle
Text=#SLP10#
x=142r
y=r

[SmallLauncher10IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "SmallLauncher10IconCommand" "Run"

[SmallLauncher10IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[SmallLauncher10Icon]
Meter=Image
ImageName=#SLI10#
x=70r
y=-7r
W=30
H=30
AntiAlias=1

;SMALL LAUNCHER 11 ======================================================

[SmallLauncher11TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-282r
y=77r
ButtonCommand=!CommandMeasure "MeasureSmallLauncher 2Plus" "ExecuteBatch 2"

[SmallLauncher11TitleLabel]
Meter=String
MeasureName=MeasureTypeSChoice2
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher11TitleText]
Meter=String
MeterStyle=TextStyle
Text=#SLT11#
x=143r
y=r

[SmallLauncher11PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "SmallLauncher11Command" "Run"

[SmallLauncher11PathLabel]
Meter=String
MeasureName=MeasurePathSChoice2
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher11PathText]
Meter=String
Meterstyle=TextStyle
Text=#SLP11#
x=142r
y=r

[SmallLauncher11IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "SmallLauncher11IconCommand" "Run"

[SmallLauncher11IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[SmallLauncher11Icon]
Meter=Image
ImageName=#SLI11#
x=70r
y=-7r
W=30
H=30
AntiAlias=1

;SMALL LAUNCHER 12 ======================================================

[SmallLauncher12TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-283r
y=77r
ButtonCommand=!CommandMeasure "MeasureSmallLauncher 2Plus" "ExecuteBatch 3"

[SmallLauncher12TitleLabel]
Meter=String
MeasureName=MeasureTypeSChoice2
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher12TitleText]
Meter=String
MeterStyle=TextStyle
Text=#SLT12#
x=143r
y=r

[SmallLauncher12PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "SmallLauncher12Command" "Run"

[SmallLauncher12PathLabel]
Meter=String
MeasureName=MeasurePathSChoice2
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher12PathText]
Meter=String
Meterstyle=TextStyle
Text=#SLP12#
x=142r
y=r

[SmallLauncher12IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "SmallLauncher12IconCommand" "Run"

[SmallLauncher12IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[SmallLauncher12Icon]
Meter=Image
ImageName=#SLI12#
x=70r
y=-7r
W=30
H=30
AntiAlias=1

;SMALL LAUNCHER 13 ======================================================

[SmallLauncher13TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-283r
y=77r
ButtonCommand=!CommandMeasure "MeasureSmallLauncher 2Plus" "ExecuteBatch 4"

[SmallLauncher13TitleLabel]
Meter=String
MeasureName=MeasureTypeSChoice2
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher13TitleText]
Meter=String
MeterStyle=TextStyle
Text=#SLT13#
x=143r
y=r

[SmallLauncher13PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "SmallLauncher13Command" "Run"

[SmallLauncher13PathLabel]
Meter=String
MeasureName=MeasurePathSChoice2
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher13PathText]
Meter=String
MeterStyle=TextStyle
Text=#SLP13#
x=142r
y=r

[SmallLauncher13IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "SmallLauncher13IconCommand" "Run"

[SmallLauncher13IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[SmallLauncher13Icon]
Meter=Image
ImageName=#SLI13#
x=70r
y=-7r
W=30
H=30
AntiAlias=1

;SMALL LAUNCHER 14 ======================================================

[SmallLauncher14TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-283r
y=77r
ButtonCommand=!CommandMeasure "MeasureSmallLauncher 2Plus" "ExecuteBatch 5"

[SmallLauncher14TitleLabel]
Meter=String
MeasureName=MeasureTypeSChoice2
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher14TitleText]
Meter=String
MeterStyle=TextStyle
Text=#SLT14#
x=143r
y=r

[SmallLauncher14PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "SmallLauncher14Command" "Run"

[SmallLauncher14PathLabel]
Meter=String
MeasureName=MeasurePathSChoice2
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher14PathText]
Meter=String
MeterStyle=TextStyle
Text=#SLP14#
x=142r
y=r

[SmallLauncher14IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "SmallLauncher14IconCommand" "Run"

[SmallLauncher14IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[SmallLauncher14Icon]
Meter=Image
ImageName=#SLI14#
x=70r
y=-7r
W=30
H=30
AntiAlias=1
