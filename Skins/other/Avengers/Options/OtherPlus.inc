
;MEASURES ===============================================================

;OTHER PLUS - SISTEM MONITOR ALARM SOUND CHANGE AND UPDATE ==============

[SysAlarm1Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "Alarm1" "#config#" "#Alarm1#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Sys Monitor"]

[SysAlarm2Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "File" "Variables" "Alarm2" "#config#" "#Alarm2#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Sys Monitor"]

;BACKGROUND =============================================================

[MeterBackgroundTop]
Meter=Image
ImageName=#@#\Images\Options\Options6_10 #Color1#.png
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

;WEATHER - PAGE 2 -------------------------------------------------------

[MeterWeatherButton]
Meter=Image
ImageName=#@#\Images\Options\TopButtonR.png
ImageAlpha=0
x=305
y=47
LeftMouseUpAction=[!WriteKeyValue Variables Tab "Other"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 255][!SetOption "WeatherTitleTop" FontColor 255,255,255,200][!UpdateMeter WeatherTitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 0][!SetOption "WeatherTitleTop" FontColor "150,150,150,220"][!UpdateMeter WeatherTitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]

;------------------------------------------------------------------------

[OtherTitleTop]
Meter=String
MeterStyle=TitleStyleTop
Text=SYSTEM
x=60
y=45

[OtherIconTop]
Meter=Image
ImageName=#@#\Images\Options\SysMonitorIcon.png
x=35R
y=5r
H=24
PreserveAspectRatio=1
AntiAlias=1

[WeatherTitleTop]
Meter=String
MeterStyle=TitleStyleTop
FontColor=150,150,150,220
Text=FEEDS-WEATHER
x=130R
y=-5r
AntiAlias=1

[WeatherIconTop]
Meter=Image
ImageName=#@#\Images\AVWeather\WeatherIcons\30.png
x=20R
y=5r
H=28
ImageAlpha=180
PreserveAspectRatio=1
AntiAlias=1

;------------------------------------------------------------------------

;SYSTEM MONITOR CONFIGURATION ===========================================

;------------------------------------------------------------------------

[SysMonTitle]
Meter=String
MeterStyle=TitleStyle
Text=SYSTEM MONITOR
x=57
y=34r

[SysMonTitleIcon]
Meter=Image
ImageName=#@#\Images\Options\SysMonitorIcon.png
x=224r
y=2r
H=25
PreserveAspectRatio=1
AntiAlias=1

;SYSTEM MONITORING INFORMATIONS -----------------------------------------

[SysMonInfo]
Meter=String
MeterStyle=LabelStyle
Text=#SySMonTxt#
x=-224r
y=33r
ClipString=2
ClipStringW=500

;SYSTEM UNITS ===========================================================

[SFUnits]
Meter=String
MeterStyle=LabelStyleT
Text=#SySUn#
x=r
y=53r

[SFUnitsBackground]
Meter=Button
ButtonImage=#@#\Images\Options\HDDbackgroundButton.png
x=85r
y=-1r
ButtonCommand=[!ShowMeterGroup GroupSysOptList][!Redraw]

[SFUnitsText]
Meter=String
MeterStyle=TextStyle
Text=°#SFUN#
x=10r
y=1r

[SFUnitsSubLabel]
Meter=String
MeterStyle=LabelStyleT
Text=#SysUnTxt#
x=30r
y=1r

;DISPLAY SYSTEM TEMPERATURE UNITS OPTION LIST ---------------------------

[MeterBackgroundSysOptList]
Meter=Image
ImageName=#@#\Images\Options\BackListUp1.png
x=-60r
y=-40r
MouseLeaveAction=[!HideMeterGroup GroupSysOptList][!Redraw]
Hidden=1
Group=GroupSysOptList

[MeterSysOptCommand1]
Meter=String
MeterStyle=LabelStyleT
Text=" #WeatUn1#"
SolidColor=0,0,0,1
x=2r
y=1r
W=80
H=18
LeftMouseUpAction=[!WriteKeyValue Variables SFUN C "#ROOTCONFIGPATH#\@Resources\Config.inc"][!Refresh "Avengers\Sys Monitor"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupSysOptList

[MeterSysOptCommand2]
Meter=String
MeterStyle=LabelStyleT
Text=" #WeatUn2#"
SolidColor=0,0,0,1
x=r
y=20r
W=80
H=18
LeftMouseUpAction=[!WriteKeyValue Variables SFUN F "#ROOTCONFIGPATH#\@Resources\Config.inc"][!Refresh "Avengers\Sys Monitor"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupSysOptList

;DISABLE SENSORS NOT USED -----------------------------------------------

[DisableSensorsBackgroundColor]
Meter=Image
SolidColor=#Shade1#,80
x=178
y=195
W=379
H=25
AntiAlias=1

[DisableSensorText]
Meter=String
MeterStyle=SubTitleStyle
Text=#NOSensors#
x=6r
y=6r

;HD1 SENSOR -------------------------------------------------------------

[NoHD1Option]
Meter=String
MeterStyle=LabelStyleT
Text=HD1
x=59r
y=2r

[NoHD1Background]
Meter=Image
ImageName=#@#\Images\Options\OnOff#NoHD2#.png
x=21r
y=-7r
W=42
TooltipText=#NetTimeTooltip#
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 29"
AntiAlias=1

[NoHD1Text]
Meter=String
MeterStyle=TextStyle
Text=#NoHD2#
x=10r
y=6r

;HD2 SENSOR -------------------------------------------------------------

[NoHD2Option]
Meter=String
MeterStyle=LabelStyleT
Text=HD2
x=44r
y=1r

[NoHD2Background]
Meter=Image
ImageName=#@#\Images\Options\OnOff#NoHD3#.png
x=21r
y=-7r
W=42
TooltipText=#NetTimeTooltip#
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 30"
AntiAlias=1

[NoHD2Text]
Meter=String
MeterStyle=TextStyle
Text=#NoHD3#
x=10r
y=6r

;HD3 SENSOR -------------------------------------------------------------

[NoHD3Option]
Meter=String
MeterStyle=LabelStyleT
Text=HD3
x=44r
y=1r

[NoHD3Background]
Meter=Image
ImageName=#@#\Images\Options\OnOff#NoHD4#.png
x=21r
y=-7r
W=42
TooltipText=#NetTimeTooltip#
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 31"
AntiAlias=1

[NoHD3Text]
Meter=String
MeterStyle=TextStyle
Text=#NoHD4#
x=10r
y=6r

;SYS FAN SENSOR ---------------------------------------------------------

[NoSysFOption]
Meter=String
MeterStyle=LabelStyleT
Text=Sys Fan
x=47r
y=1r

[NoSysFBackground]
Meter=Image
ImageName=#@#\Images\Options\OnOff#NoSysF#.png
x=39r
y=-7r
W=42
TooltipText=#NetTimeTooltip#
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 32"
AntiAlias=1

[NoSysFText]
Meter=String
MeterStyle=TextStyle
Text=#NoSysF#
x=10r
y=6r

;CPU TEMPERATURE (PROCESSOR) --------------------------------------------

[SensorText]
Meter=String
MeterStyle=SubTitleStyle
Text=#SensorN#
x=57
y=205

[CPUFan1]
Meter=String
MeterStyle=LabelStyleT
Text=Core 0
x=5r
y=26r

[CPUFan1Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=60r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 8"

[CPUFan1Text]
Meter=String
MeterStyle=TextStyle
Text=#CPUSF1#
x=9r
y=1r

[CPUFan2]
Meter=String
MeterStyle=LabelStyleT
Text=Core 1
x=65r
y=1r

[CPUFan2Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=60r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 9"

[CPUFan2Text]
Meter=String
MeterStyle=TextStyle
Text=#CPUSF2#
x=9r
y=1r

[CPUFan3]
Meter=String
MeterStyle=LabelStyleT
Text=Core 2
x=65r
y=1r

[CPUFan3Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=60r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 10"

[CPUFan3Text]
Meter=String
MeterStyle=TextStyle
Text=#CPUSF3#
x=9r
y=1r

[CPUFan4]
Meter=String
MeterStyle=LabelStyleT
Text=Core 3
x=65r
y=1r

[CPUFan4Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=60r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 11"

[CPUFan4Text]
Meter=String
MeterStyle=TextStyle
Text=#CPUSF4#
x=9r
y=1r

;MOTHERBOARD TEMPERATURE ------------------------------------------------

[MBFan1]
Meter=String
MeterStyle=LabelStyleT
Text=System
x=-471r
y=28r

[MBFan1Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=60r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 12"

[MBFan1Text]
Meter=String
MeterStyle=TextStyle
Text=#MBSF1#
x=9r
y=1r

[MBFan2]
Meter=String
MeterStyle=LabelStyleT
Text=SMIO...
x=65r
y=1r

[MBFan2Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=60r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 13"

[MBFan2Text]
Meter=String
MeterStyle=TextStyle
Text=#MBSF2#
x=9r
y=1r

;GPU TEMPERATURE (VIDEO CARD) -------------------------------------------

[GPUFan1]
Meter=String
MeterStyle=LabelStyleT
Text=GPU
x=199r
y=1r

[GPUFan1Background]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=60r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 14"

[GPUFan1Text]
Meter=String
MeterStyle=TextStyle
Text=#GPUSF1#
x=9r
y=1r

;HARD DISK TEMPERATURE --------------------------------------------------

[HDD1Fan]
Meter=String
MeterStyle=LabelStyleT
Text=HD0
x=-471r
y=28r

[HDD1FanBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=60r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 15"

[HDD1FanText]
Meter=String
MeterStyle=TextStyle
Text=#HDD1SF#
x=9r
y=1r

[HDD2Fan]
Meter=String
MeterStyle=LabelStyleT
Text=HD1
x=65r
y=1r
Hidden=#NoHD1#

[HDD2FanBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=60r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 16"
Hidden=#NoHD1#

[HDD2FanText]
Meter=String
MeterStyle=TextStyle
Text=#HDD2SF#
x=9r
y=1r
Hidden=#NoHD1#

[HDD3Fan]
Meter=String
MeterStyle=LabelStyleT
Text=HD2
x=65r
y=1r
Hidden=#NoHD2#

[HDD3FanBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=60r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 17"
Hidden=#NoHD2#

[HDD3FanText]
Meter=String
MeterStyle=TextStyle
Text=#HDD3SF#
x=9r
y=1r
Hidden=#NoHD2#

[HDD4Fan]
Meter=String
MeterStyle=LabelStyleT
Text=HD3
x=65r
y=1r
Hidden=#NoHD3#

[HDD4FanBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=60r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 18"
Hidden=#NoHD3#

[HDD4FanText]
Meter=String
MeterStyle=TextStyle
Text=#HDD4SF#
x=9r
y=1r
Hidden=#NoHD3#

;CPU FAN SPEED ----------------------------------------------------------

[CPUFanSpeed]
Meter=String
MeterStyle=LabelStyleT
Text=CPU Fan
x=-471r
y=28r

[CPUFanSpeedBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=60r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 19"

[CPUFanSpeedText]
Meter=String
MeterStyle=TextStyle
Text=#CPUFSF#
x=9r
y=1r

;SYS FAN SPEED ----------------------------------------------------------

[SYSFanSpeed]
Meter=String
MeterStyle=LabelStyleT
Text=Sys Fan
x=65r
y=1r
Hidden=#NoSysF#

[SYSFanSpeedBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=60r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 20"
Hidden=#NoSysF#

[SYSFanSpeedText]
Meter=String
MeterStyle=TextStyle
Text=#SYSFSF#
x=9r
y=1r
Hidden=#NoSysF#

;OVERHEATING ALERT ======================================================

[AlertSettingsText]
Meter=String
MeterStyle=SubTitleStyle
Text=#SysAlTxt# **
x=-208r
y=28r

;CPU MAX ALERT ----------------------------------------------------------

[CPUAlert]
Meter=String
MeterStyle=LabelStyleT
Text=CPU Max Temp.          °#SFUN#
x=r
y=26r

[CPUAlertBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=85r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 21"

[CPUAlertText]
Meter=String
MeterStyle=TextStyle
Text=#CPUOHSF#
x=9r
y=1r

;GPU MAX ALERT ----------------------------------------------------------

[GPUAlert]
Meter=String
MeterStyle=LabelStyleT
Text=GPU Max Temp.          °#SFUN#
x=273r
y=1r

[GPUAlertBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=85r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 24"

[GPUAlertText]
Meter=String
MeterStyle=TextStyle
Text=#GPUOHSF#
x=9r
y=1r

;MOTHERBOARD MAX ALERT --------------------------------------------------

[MB1Alert]
Meter=String
MeterStyle=LabelStyleT
Text=MB1 Max Temp.          °#SFUN#
x=-461r
y=28r

[MB1AlertBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=85r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 22"

[MB1AlertText]
Meter=String
MeterStyle=TextStyle
Text=#MB1OHSF#
x=9r
y=1r

;MOTHERBOARD 2 MAX ALERT ------------------------------------------------

[MB2Alert]
Meter=String
MeterStyle=LabelStyleT
Text=MB2 Max Temp.          °#SFUN#
x=89r
y=1r

[MB2AlertBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=85r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 23"

[MB2AlertText]
Meter=String
MeterStyle=TextStyle
Text=#MB2OHSF#
x=9r
y=1r

;HARD DISKS MAX ALERT ---------------------------------------------------

[HDDAlert]
Meter=String
MeterStyle=LabelStyleT
Text=HDD Max Temp.          °#SFUN#
x=90r
y=1r

[HDDAlertBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=85r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 25"

[HDDAlertText]
Meter=String
MeterStyle=TextStyle
Text=#HDDOHSF#
x=9r
y=1r

;FAN LOW ALERT ==========================================================

[FanAlertSettingsText]
Meter=String
MeterStyle=SubTitleStyle
Text=#FanAlTxt# **
x=-461r
y=27r

;CPU MIN FAN ALERT ------------------------------------------------------

[CPUFanAlert]
Meter=String
MeterStyle=LabelStyleT
Text=CPU #CPUFLw#          rpm
x=r
y=26r

[CPUFanAlertBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=85r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 26"

[CPUFanAlertText]
Meter=String
MeterStyle=TextStyle
Text=#CPUMRSF#
x=6r
y=1r

;SYSTEM MIN FAN ALERT ---------------------------------------------------

[SYSFanAlert]
Meter=String
MeterStyle=LabelStyleT
Text=SYS #CPUFLw#           rpm
x=89r
y=1r

[SYSFanAlertBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=88r
y=-2r
LeftMouseUpAction=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 27"

[SYSFanAlertText]
Meter=String
MeterStyle=TextStyle
Text=#SYSMRSF#
x=6r
y=1r

;SYSTEM TEMPERATURE AND FAN ALERT INFORMATIONS --------------------------

[AlertSubLabel]
Meter=String
MeterStyle=LabelStyleT
Text=** #FanTxt#
x=-274r
y=22r

;SYSTEM TEMPERATURE AND FAN ALERT ALARM SOUNDS --------------------------

[AlertSoundSettingsText]
Meter=String
MeterStyle=SubTitleStyle
Text=#SoundAlm# *
x=r
y=26r

[AlarmTempText]
Meter=String
MeterStyle=LabelStyleT
Text=#AlarmSTemp#
x=r
y=26r

[Alarm1TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=98r
y=-2r
ButtonCommand=!CommandMeasure "SysAlarm1Command" "Run"

[Alarm1TitleText]
Meter=String
MeterStyle=TextStyle
Text=#Alarm1#
x=25r
y=1r

[AlarmFanText]
Meter=String
MeterStyle=LabelStyleT
Text=#AlarmSFan#
x=145r
y=1r

[Alarm2TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=80r
y=-2r
ButtonCommand=!CommandMeasure "SysAlarm2Command" "Run"

[Alarm2TitleText]
Meter=String
MeterStyle=TextStyle
Text=#Alarm2#
x=25r
y=1r

[AlarmSettingsText]
Meter=String
MeterStyle=LabelStyleT
Text=#AlarmTempTxt#
x=-373r
y=23r

;------------------------------------------------------------------------

;CPU SETTINGS ===========================================================

;------------------------------------------------------------------------

[CPUSettingsText]
Meter=String
MeterStyle=TitleStyle
Text=CPU MONITOR
x=r
y=32r

[CPUTitleIcon]
Meter=Image
ImageName=#@#\Images\CPU\CPUBase2.png
x=224r
y=-2r
W=28
PreserveAspectRatio=1
AntiAlias=1

[CPUNumCores]
Meter=String
MeterStyle=LabelStyleT
Text=CPU cores/Threads
x=-224r
y=44r

[CPUNumCoresBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=95r
y=-2r

[CPUNumCoresText]
Meter=String
MeterStyle=TextStyle
Text=%NUMBER_OF_PROCESSORS%
x=9r
y=1r

[CPUCoresText]
Meter=String
MeterStyle=LabelStyle
Text=#CPUCoresTxt1#
x=30r
y=1r

[CPUCoresText2]
Meter=String
MeterStyle=LabelStyle
Text=#CPUCoresTxt2#
x=-134r
y=20r

;BUTTON TO OPEN TASK MANAGER --------------------------------------------

[TaskManagerButton]
Meter=Image
ImageName=#@#\Images\AV Feeds\FeedsTitle.png
x=356r
y=-24r
H=20
Scalemargins=5,5,5,5
LeftMouseUpAction=taskmgr.exe
MouseOverAction=[!SetOption "#CURRENTSECTION#" ImageTint "165,250,245,200"][!SetOption TaskManagerText FontColor "165,250,245,200"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter TaskManagerText][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" ImageTint ""][!SetOption TaskManagerText FontColor ""][!UpdateMeter #CURRENTSECTION#][!UpdateMeter TaskManagerText][!Redraw]
AnyiAlias=1
UpdateDivider=-1

[TaskManagerText]
Meter=String
MeterStyle=LabelStyleT
Text=TASK MANAGER
x=35r
y=2r
UpdateDivider=-1

;BUTTON TO SHOW / HIDE CPU TOTAL USAGE ----------------------------------

[CPUTextTitle]
Meter=String
MeterStyle=LabelStyleT
Text=#CPUOptTxt#
x=-126r
y=-30r

[CPUBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=83r
y=-1r
ButtonCommand=[!ShowMeterGroup GroupCPUList][!Redraw]

[MeasureCPUText]
Measure=String
String=#NoCPU#
RegExpSubstitute=1
Substitute="0":"#CPUTxt1#","1":"#CPUTxt2#"

[CPUText]
Meter=String
MeterStyle=LabelStyleT
MeasureName=MeasureCPUText
x=25r
y=1r

;DISPLAY TOTAL CPU USAGE OPTION LIST ------------------------------------

[MeterBackgroundCPUList]
Meter=Image
ImageName=#@#\Images\Options\BackListUp.png
x=-30r
y=-40r
MouseLeaveAction=[!HideMeterGroup GroupCPUList][!Redraw]
Hidden=1
Group=GroupCPUList

[MeterCPUCommand1]
Meter=String
MeterStyle=LabelStyleT
Text=" #CPUtxt1#"
SolidColor=0,0,0,1
x=45r
y=1r
W=80
H=18
LeftMouseUpAction=[!WriteKeyValue Variables NoCPU 0 "#ROOTCONFIGPATH#\@Resources\Config.inc"][!WriteKeyValue Variables NoCPUGraph 1 "#ROOTCONFIGPATH#\@Resources\Config.inc"][!WriteKeyValue Variables YPos0 64 "#ROOTCONFIGPATH#\@Resources\Config.inc"][!Refresh "Avengers\CPU2"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupCPUList

[MeterCPUCommand2]
Meter=String
MeterStyle=LabelStyleT
Text=" #CPUTxt2#"
SolidColor=0,0,0,1
x=r
y=20r
W=80
H=18
LeftMouseUpAction=[!WriteKeyValue Variables NoCPU 1 "#ROOTCONFIGPATH#\@Resources\Config.inc"][!WriteKeyValue Variables NoCPUGraph "-1" "#ROOTCONFIGPATH#\@Resources\Config.inc"][!WriteKeyValue Variables YPos0 25 "#ROOTCONFIGPATH#\@Resources\Config.inc"][!Refresh "Avengers\CPU2"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupCPUList
