
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
x=42
y=47
LeftMouseUpAction=[!WriteKeyValue Variables Tab "OtherPlus"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 255][!SetOption "OtherTitleTop" FontColor 255,255,255,200][!UpdateMeter OtherTitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 0][!SetOption "OtherTitleTop" FontColor "150,150,150,220"][!UpdateMeter OtherTitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]

;------------------------------------------------------------------------

[OtherTitleTop]
Meter=String
MeterStyle=TitleStyleTop
FontColor=150,150,150,220
Text=SYSTEM
x=60
y=45

[OtherIconTop]
Meter=Image
ImageName=#@#\Images\Options\SysMonitorIcon.png
x=35R
y=5r
H=24
ImageAlpha=180
PreserveAspectRatio=1
AntiAlias=1

[WeatherTitleTop]
Meter=String
MeterStyle=TitleStyleTop
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
PreserveAspectRatio=1
AntiAlias=1

;------------------------------------------------------------------------

;WEATHER CONFIGURATION ==================================================

;------------------------------------------------------------------------

;MAIN WEATHER INFORMATION AND WARNING -----------------------------------

[WeatherAlertInfo]
Meter=String
MeterStyle=LabelStyleT
Text=#WeatAttn#
x=57
y=87
ClipString=2
ClipStringW=500

;WEATHER UNITS ==========================================================

[WeatherUnits]
Meter=String
MeterStyle=LabelStyleT
Text=#SySUn#
x=415
y=40r

[WeatherUnitsBackground]
Meter=Button
ButtonImage=#@#\Images\Options\HDDbackgroundButton.png
x=85r
y=-1r
ButtonCommand=[!ShowMeterGroup GroupTempOptList][!Redraw]

[WeatherUnitsText]
Meter=String
MeterStyle=TextStyle
Text=°#WFUN#
x=10r
y=1r

;DISPLAY WEATHER TEMPERATURE UNITS OPTION LIST --------------------------

[MeterBackgroundTempOptList]
Meter=Image
ImageName=#@#\Images\Options\BackListUp1.png
x=-30r
y=-39r
MouseLeaveAction=[!HideMeterGroup GroupTempOptList][!Redraw]
Hidden=1
Group=GroupTempOptList

[MeterTempOptCommand1]
Meter=String
MeterStyle=LabelStyleT
Text=" #WeatUn1#"
SolidColor=0,0,0,1
x=2r
y=1r
W=80
H=18
LeftMouseUpAction=[!WriteKeyValue Variables Unit m "#ROOTCONFIGPATH#\@Resources\Config.inc"][!WriteKeyValue Variables WFUN C "#ROOTCONFIGPATH#\@Resources\Config.inc"][!Refresh "Avengers\AV Weather"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupTempOptList

[MeterTempOptCommand2]
Meter=String
MeterStyle=LabelStyleT
Text=" #WeatUn2#"
SolidColor=0,0,0,1
x=r
y=20r
W=80
H=18
LeftMouseUpAction=[!WriteKeyValue Variables Unit f "#ROOTCONFIGPATH#\@Resources\Config.inc"][!WriteKeyValue Variables WFUN F "#ROOTCONFIGPATH#\@Resources\Config.inc"][!Refresh "Avengers\AV Weather"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" SolidColor "165,250,245,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=GroupTempOptList

;WEATHER FORECAST =======================================================

[WeatherTitle]
Meter=String
MeterStyle=TitleStyle
Text=WEATHER FORECAST
x=-425r
y=5r

[WeatherTitleIcon]
Meter=Image
ImageName=#@#\Images\AVWeather\WeatherIcons\30.png
x=208r
y=4r
H=28
PreserveAspectRatio=1
AntiAlias=1

[TWCTitleIcon]
Meter=Image
ImageName=#@#\Images\AVWeather\TWC_logo.png
x=55r
y=-12r
H=40
AntiAlias=1

[WeatherTextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-175r
y=49r
ButtonCommand=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 3"

[WeatherTitleLabel]
Meter=String
MeterStyle=LabelStyleT
Text=#WebN#
x=-88r
y=r

[WeatherTitleText]
Meter=String
MeterStyle=TextStyle
Text=#OWN1#
x=116r
y=r

[WeatherPathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-28r
y=26r
ButtonCommand=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 4"

[WeatherPathLabel]
Meter=String
MeterStyle=LabelStyleT
Text=#WebAd#
x=-88r
y=1r

[WeatherPathText]
Meter=String
MeterStyle=TextStyle
Text=#OWA1#
x=116r
y=r

[LocationTextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=230r
y=-27r
ButtonCommand=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 5"

[LocationTitleLabel]
Meter=String
MeterStyle=LabelStyleT
Text=#WeatCod#
x=-85r
y=r

[LocationTitleText]
Meter=String
MeterStyle=TextStyle
Text=#OLOC1#
x=113r
y=1r

[WeatherUpdateTimeBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-28r
y=25r
ButtonCommand=!CommandMeasure "MeasureOtherPlus" "ExecuteBatch 6"

[WeatherUpdateTimeLabel]
Meter=String
MeterStyle=LabelStyleT
Text=#UpdFr#*
x=-85r
y=r

[WeatherUpdateTimeText]
Meter=String
MeterStyle=TextStyle
Text=#OTUPD# #SEC#
x=113r
y=1r

;WEATHER INFORMATIONS AND WARNINGS --------------------------------------

[UpdateTimeInfo]
Meter=String
MeterStyle=LabelStyleT
Text=#WeatTXt1#
x=-374r
y=30r
ClipString=2
ClipStringW=500

[LocationInfo]
Meter=String
MeterStyle=LabelStyle
Text=#WeatTxt2#
x=r
y=63r
ClipString=2
ClipStringW=500

;------------------------------------------------------------------------

;RSS FEEDS ================================================================

;------------------------------------------------------------------------

[FeedTitle]
Meter=String
MeterStyle=TitleStyle
Text=RSS FEED
x=r
y=95r

[Feed1Launcher]
Meter=String
MeterStyle=SubTitleStyle
Text=FEED 1
x=r
y=38r

[Feed2Launcher]
Meter=String
MeterStyle=SubTitleStyle
Text=FEED 2
x=258r
y=r

[Feed3Launcher]
Meter=String
MeterStyle=SubTitleStyle
Text=FEED 3
x=-258r
y=50r

[Feed4Launcher]
Meter=String
MeterStyle=SubTitleStyle
Text=FEED 4
x=258r
y=r

;FEED 1 LINK ==============================================================

[Feed1TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-170r
y=-27r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 27"

[Feed1TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebAd#
x=-88r
y=1r

[Feed1TitleText]
Meter=String
MeterStyle=TextStyle
Text=#NewsURLFeed1#
x=113r
y=r

;FEED 2 LINK ==============================================================

[Feed2TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=233r
y=-1r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 28"

[Feed2TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebAd#
x=-88r
y=1r

[Feed2TitleText]
Meter=String
MeterStyle=TextStyle
Text=#NewsURLFeed2#
x=113r
y=r

;FEED 3 LINK ==============================================================

[Feed3TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-283r
y=50r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 29"

[Feed3TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebAd#
x=-88r
y=1r

[Feed3TitleText]
Meter=String
MeterStyle=TextStyle
Text=#NewsURLFeed3#
x=113r
y=r

;FEED 4 LINK ==============================================================

[Feed4TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=233r
y=-1r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 30"

[Feed4TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebAd#
x=-88r
y=1r

[Feed4TitleText]
Meter=String
MeterStyle=TextStyle
Text=#NewsURLFeed4#
x=113r
y=r

;Option to set how much time a page is displayed ==========================

[FeedDelaySubTitle]
Meter=String
MeterStyle=LabelStyleT
Text=#FeedDelayTxt#
x=-247r
y=-98r

[FeedDelayBackground]
Meter=Image
ImageName=#@#\Images\Options\HDDbackground.png
x=80r
y=-3r
LeftMouseUpAction=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 31"
TooltipText=#FeedDelayTooltip#

[FeedDelayText]
Meter=String
MeterStyle=TextStyle
Text=#FeedDelay#
x=8r
y=1r

;Option to enable or disable the page rotation ============================

[FeedRotarionOption]
Meter=String
MeterStyle=LabelStyleT
Text=#FeedRotTxt#
x=125r
y=2r

[FeedRotarionBackground]
Meter=Image
ImageName=#@#\Images\Options\OnOff#NetTime#.png
x=-50r
y=-7r
W=42
TooltipText=#NetTimeTooltip#
LeftMouseUpAction=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 32"
AntiAlias=1

[FeedRotarionText]
Meter=String
MeterStyle=TextStyle
Text=#FeedRot#
x=10r
y=6r
