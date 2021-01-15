
;MEASURES ===============================================================

;SMALL LAUNCHERS 9 PROGRAM 6-9 FILE/FOLDER CHANGE AND UPDATE ============

[SmallLauncher6Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchS9Choice1#" "Variables" "SLP6" "#config#" "#SLP6#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

[SmallLauncher7Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchS9Choice1#" "Variables" "SLP7" "#config#" "#SLP7#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

[SmallLauncher8Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchS9Choice1#" "Variables" "SLP8" "#config#" "#SLP8#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

[SmallLauncher9Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "#LaunchS9Choice1#" "Variables" "SLP9" "#config#" "#SLP9#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

;SMALL LAUNCHERS 9 PROGRAM 6-9 ICON CHANGE AND UPDATE ===================

[SmallLauncher6IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SLI6" "#config#" "#SLI6#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

[SmallLauncher7IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SLI7" "#config#" "#SLI7#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

[SmallLauncher8IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SLI8" "#config#" "#SLI8#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

[SmallLauncher9IconCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "SLI9" "#config#" "#SLI9#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Small Launchers 9"]

;LAUNCHERS 9 PROGRAM 6-9 RUNNING STATE DETECTION ========================

[MeasureSL9Data6]
Measure=String
String="#SLP6#"
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgSL6 0 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data6 "[MeasureSL9Data6]" "#@#\Config.inc"][!WriteKeyValue Variables Type6S "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgSL6 1 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data6 "" "#@#\Config.inc"][!WriteKeyValue Variables Type6S D "#@#\Config.inc"][!Refresh "Avengers\Small Launchers 9"]
UpdateDivider=-1

[MeasureSL9Data7]
Measure=String
String="#SLP7#"
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgSL7 0 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data7 "[MeasureSL9Data7]" "#@#\Config.inc"][!WriteKeyValue Variables Type7S "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgSL7 1 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data7 "" "#@#\Config.inc"][!WriteKeyValue Variables Type7S D "#@#\Config.inc"][!Refresh "Avengers\Small Launchers 9"]
UpdateDivider=-1

[MeasureSL9Data8]
Measure=String
String="#SLP8#"
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgSL8 0 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data8 "[MeasureSL9Data8]" "#@#\Config.inc"][!WriteKeyValue Variables Type8S "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgSL8 1 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data8 "" "#@#\Config.inc"][!WriteKeyValue Variables Type8S D "#@#\Config.inc"][!Refresh "Avengers\Small Launchers 9"]

[MeasureSL9Data9]
Measure=String
String="#SLP9#"
RegExpSubstitute=1
Substitute=".*\\(.*)$":"\1"
IfMatch=.*.exe
IfMatchAction=[!WriteKeyValue Variables ProgSL9 0 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data9 "[MeasureSL9Data9]" "#@#\Config.inc"][!WriteKeyValue Variables Type9S "" "#@#\Config.inc"]
IfNotMatchAction=[!WriteKeyValue Variables ProgSL9 1 "#@#\Config.inc"][!WriteKeyValue Variables SL9Data9 "" "#@#\Config.inc"][!WriteKeyValue Variables Type9S D "#@#\Config.inc"][!Refresh "Avengers\Small Launchers 9"]

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

;SMALL LAUNCHERS 9 - PAGE 1 ---------------------------------------------

[MeterSL9Button]
Meter=Image
ImageName=#@#\Images\Options\TopButtonR.png
ImageAlpha=0
x=42
y=47
LeftMouseUpAction=[!WriteKeyValue Variables Tab "Small Launchers 9Plus"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 255][!SetOption "SL91TitleTop" FontColor 255,255,255,200][!UpdateMeter SL91TitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 0][!SetOption "SL91TitleTop" FontColor "150,150,150,220"][!UpdateMeter SL91TitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]

;------------------------------------------------------------------------

[SL91TitleTop]
Meter=String
MeterStyle=TitleStyleTop
FontColor=150,150,150,220
Text=LAUNCHERS 1-5
x=60
y=45

[SL91IconTop]
Meter=Image
ImageName=#@#\Images\Options\SmallLaunchersIcon1.png
x=35R
y=2r
W=28
ImageAlpha=180
PreserveAspectRatio=1
AntiAlias=1

[SL92TitleTop]
Meter=String
MeterStyle=TitleStyleTop
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
Text=LAUNCHER 6
x=-223r
y=38r

[SmallLauncher2]
Meter=String
MeterStyle=SubTitleStyle
Text=LAUNCHER 7
x=r
y=101r

[SmallLauncher3]
Meter=String
MeterStyle=SubTitleStyle
Text=LAUNCHER 8
x=r
y=101r

[SmallLauncher4]
Meter=String
MeterStyle=SubTitleStyle
Text=LAUNCHER 9
x=r
y=101r

;SMALL LAUNCHER 6 =======================================================

[SmallLauncher6TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=115r
y=-280r
ButtonCommand=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 6"

[SmallLauncher6TitleLabel]
Meter=String
MeasureName=MeasureTypeSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher6TitleText]
Meter=String
MeterStyle=TextStyle
Text=#SLT6#
x=143r
y=r

[SmallLauncher6PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "SmallLauncher6Command" "Run"

[SmallLauncher6PathLabel]
Meter=String
MeasureName=MeasurePathSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher6PathText]
Meter=String
MeterStyle=TextStyle
Text=#SLP6#
x=142r
y=r

[SmallLauncher6IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "SmallLauncher6IconCommand" "Run"

[SmallLauncher6IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[SmallLauncher6Icon]
Meter=Image
ImageName=#SLI6#
x=70r
y=-7r
W=30
H=30
AntiAlias=1

;OPTION TO CHOOSE THE MAXIMUM NUMBER OF PROGRAM INSTANCES ---------------

[SmallLauncher6OptionNum]
Meter=String
MeterStyle=LabelStyleT
Text=#ProgramNum#
x=-399r
y=40r
Hidden=#SL9Mon#

[SmallLauncher6OptionNumBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=116r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 19"
Hidden=#SL9Mon#

[SmallLauncher6OptionNumtText]
Meter=String
MeterStyle=TextStyle
Text=#MAXL6#
x=9r
y=1r
Hidden=#SL9Mon#

;SMALL LAUNCHER 7 =======================================================

[SmallLauncher7TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-9r
y=58r
ButtonCommand=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 7"

[SmallLauncher7TitleLabel]
Meter=String
MeasureName=MeasureTypeSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher7TitleText]
Meter = string
MeterStyle=TextStyle
Text=#SLT7#
x=143r
y=r

[SmallLauncher7PathBackground]
meter= Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "SmallLauncher7Command" "Run"

[SmallLauncher7PathLabel]
Meter=String
MeasureName=MeasurePathSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher7PathText]
Meter=String
MeterStyle=TextStyle
Text=#SLP7#
x=142r
y=r

[SmallLauncher7IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "SmallLauncher7IconCommand" "Run"

[SmallLauncher7IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[SmallLauncher7Icon]
Meter=Image
ImageName=#SLI7#
x=70r
y=-7r
W=30
H=30
AntiAlias=1

;OPTION TO CHOOSE THE MAXIMUM NUMBER OF PROGRAM INSTANCES ---------------

[SmallLauncher7OptionNum]
Meter=String
MeterStyle=LabelStyleT
Text=#ProgramNum#
x=-399r
y=40r
Hidden=#SL9Mon#

[SmallLauncher7OptionNumBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=116r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 20"
Hidden=#SL9Mon#

[SmallLauncher7OptionNumtText]
Meter=String
MeterStyle=TextStyle
Text=#MAXL7#
x=9r
y=1r
Hidden=#SL9Mon#

;SMALL LAUNCHER 8 =======================================================

[SmallLauncher8TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-9r
y=58r
ButtonCommand=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 8"

[SmallLauncher8TitleLabel]
Meter=String
MeasureName=MeasureTypeSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher8TitleText]
Meter=String
MeterStyle=TextStyle
Text=#SLT8#
x=143r
y=r

[SmallLauncher8PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "SmallLauncher8Command" "Run"

[SmallLauncher8PathLabel]
Meter=String
MeasureName=MeasurePathSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher8PathText]
Meter=String
Meterstyle=TextStyle
Text=#SLP8#
x=142r
y=r

[SmallLauncher8IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "SmallLauncher8IconCommand" "Run"

[SmallLauncher8IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[SmallLauncher8Icon]
Meter=Image
ImageName=#SLI8#
x=70r
y=-7r
W=30
H=30
AntiAlias=1

;OPTION TO CHOOSE THE MAXIMUM NUMBER OF PROGRAM INSTANCES ---------------

[SmallLauncher8OptionNum]
Meter=String
MeterStyle=LabelStyleT
Text=#ProgramNum#
x=-399r
y=40r
Hidden=#SL9Mon#

[SmallLauncher8OptionNumBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=116r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 21"
Hidden=#SL9Mon#

[SmallLauncher8OptionNumtText]
Meter=String
MeterStyle=TextStyle
Text=#MAXL8#
x=9r
y=1r
Hidden=#SL9Mon#

;SMALL LAUNCHER 9 =======================================================

[SmallLauncher9TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-9r
y=58r
ButtonCommand=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 9"

[SmallLauncher9TitleLabel]
Meter=String
MeasureName=MeasureTypeSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher9TitleText]
Meter=String
MeterStyle=TextStyle
Text=#SLT9#
x=143r
y=r

[SmallLauncher9PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-27r
y=19r
ButtonCommand=!CommandMeasure "SmallLauncher9Command" "Run"

[SmallLauncher9PathLabel]
Meter=String
MeasureName=MeasurePathSL9Choice
MeterStyle=LabelStyle
Text=%1
x=-116r
y=1r

[SmallLauncher9PathText]
Meter=String
MeterStyle=TextStyle
Text=#SLP9#
x=142r
y=r

[SmallLauncher9IconBackground]
Meter=Button
ButtonImage=#@#\Images\Options\IconBackground.png
x=252r
y=-22r
ButtonCommand=!CommandMeasure "SmallLauncher9IconCommand" "Run"

[SmallLauncher9IconLabel]
Meter=String
MeterStyle=LabelStyle
StringAlign=Center
Text=#LLIco#
x=-65r
y=12r

[SmallLauncher9Icon]
Meter=Image
ImageName=#SLI9#
x=70r
y=-7r
W=30
H=30
AntiAlias=1

;OPTION TO CHOOSE THE MAXIMUM NUMBER OF PROGRAM INSTANCES ---------------

[SmallLauncher9OptionNum]
Meter=String
MeterStyle=LabelStyleT
Text=#ProgramNum#
x=-399r
y=40r
Hidden=#SL9Mon#

[SmallLauncher9OptionNumBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=116r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureSmallLauncher 9Plus" "ExecuteBatch 22"
Hidden=#SL9Mon#

[SmallLauncher9OptionNumtText]
Meter=String
MeterStyle=TextStyle
Text=#MAXL9#
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
