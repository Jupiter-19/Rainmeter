
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
AntiAlias=1

[MeterSkinTip]
Meter=String
MeterStyle=TitleStyleTop
FontSize=11
Text=#SkinTipTxt#
x=35R
y=22
AntiAlias=1

;GENERAL - PAGE 1 -------------------------------------------------------

[MeterGeneralButton]
Meter=Image
ImageName=#@#\Images\Options\TopButtonL.png
ImageAlpha=0
x=42
y=47
LeftMouseUpAction=[!WriteKeyValue Variables Tab "GeneralPlus"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 255][!SetOption "GeneralTitleTop" FontColor 255,255,255,200][!UpdateMeter GeneralTitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 0][!SetOption "GeneralTitleTop" FontColor "150,150,150,220"][!UpdateMeter GeneralTitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]

;------------------------------------------------------------------------

[GeneralTitleTop]
Meter=String
MeterStyle=TitleStyleTop
FontColor=150,150,150,220
Text=GENERAL
x=60
y=45

[GeneralIconTop]
Meter=Image
ImageName=#@#\Images\Options\GeneralIcon.png
x=30R
y=4r
W=28
ImageAlpha=180
PreserveAspectRatio=1
AntiAlias=1

[WebTitleTop]
Meter=String
MeterStyle=TitleStyleTop
Text=WEB LAUNCHERS
x=120R
y=-4r

[WebIconTop]
Meter=Image
ImageName=#@#\Images\Options\GeneralIcon.png
x=30R
y=4r
W=28
PreserveAspectRatio=1
AntiAlias=1

;WEB LAUNCHERS ==========================================================

[WebsiteLaunchers]
Meter=String
MeterStyle=TitleStyle
Text=WEBSITE LAUNCHERS
x=57
y=85

[WebTitlelIcon]
Meter=Image
ImageName=#@#\Images\Time1\End1Red.png
x=248r
y=7r
W=28
PreserveAspectRatio=1
AntiAlias=1

[Web1Launcher]
Meter=String
MeterStyle=SubTitleStyle
Text=WEBSITE 1
x=-248r
y=38r

[Web2Launcher]
Meter=String
MeterStyle=SubTitleStyle
Text=WEBSITE 2
x=258r
y=r

[Web3Launcher]
Meter=String
MeterStyle=SubTitleStyle
Text=WEBSITE 3
x=-258r
y=75r

[Web4Launcher]
Meter=String
MeterStyle=SubTitleStyle
Text=WEBSITE 4
x=258r
y=r

[Web5Launcher]
Meter=String
MeterStyle=SubTitleStyle
Text=WEBSITE 5
x=-258r
y=75r

[Web6Launcher]
Meter=String
MeterStyle=SubTitleStyle
Text=WEBSITE 6
x=258r
y=r

;WEB LAUNCHER 1 =========================================================

[Web1TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-170r
y=-127r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 1"

[Web1TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebN#
x=-88r
y=2r

[Web1TitleText]
Meter=String
MeterStyle=TextStyle
Text=#WN1#
x=113r
y=r

[Web1PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-25r
y=20r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 2"

[Web1PathLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebAd#
x=-88r
y=1r

[Web1PathText]
Meter=String
MeterStyle=TextStyle
Text=#WA1#
x=113r
y=r

;WEB LAUNCHER 2 =========================================================

[Web2TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=233r
y=-23r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 3"

[Web2TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebN#
x=-88r
y=2r

[Web2TitleText]
Meter=String
MeterStyle=TextStyle
Text=#WN2#
x=113r
y=r

[Web2PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-25r
y=20r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 4"

[Web2PathLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebAd#
x=-88r
y=1r

[Web2PathText]
Meter=String
MeterStyle=TextStyle
Text=#WA2#
x=113r
y=r

;WEB LAUNCHER 3 =========================================================

[Web3TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-283r
y=51r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 5"

[Web3TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebN#
x=-88r
y=2r

[Web3TitleText]
Meter=String
MeterStyle=TextStyle
Text=#WN3#
x=113r
y=r

[Web3PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-25r
y=20r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 6"

[Web3PathLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebAd#
x=-88r
y=1r

[Web3PathText]
Meter=String
MeterStyle=TextStyle
Text=#WA3#
x=113r
y=r

;WEB LAUNCHER 4 =========================================================

[Web4TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=233r
y=-23r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 7"

[Web4TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebN#
x=-88r
y=2r

[Web4TitleText]
Meter=String
MeterStyle=TextStyle
Text=#WN4#
x=113r
y=r

[Web4PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-25r
y=20r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 8"

[Web4PathLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebAd#
x=-88r
y=1r

[Web4PathText]
Meter=String
MeterStyle=TextStyle
Text=#WA4#
x=113r
y=r

;WEB LAUNCHER 5 =========================================================

[Web5TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-283r
y=51r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 9"

[Web5TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebN#
x=-88r
y=2r

[Web5TitleText]
Meter=String
MeterStyle=TextStyle
Text=#WN5#
x=113r
y=r

[Web5PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-25r
y=20r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 10"

[Web5PathLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebAd#
x=-88r
y=1r

[Web5PathText]
Meter=String
MeterStyle=TextStyle
Text=#WA5#
x=113r
y=r

;WEB LAUNCHER 6 =========================================================

[Web6TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=233r
y=-23r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 11"

[Web6TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebN#
x=-88r
y=2r

[Web6TitleText]
Meter=String
MeterStyle=TextStyle
Text=#WN6#
x=113r
y=r

[Web6PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-25r
y=20r
ButtonCommand=!CommandMeasure "MeasureGeneralPlus" "ExecuteBatch 12"

[Web6PathLabel]
Meter=String
MeterStyle=LabelStyle
Text=#WebAd#
x=-88r
y=1r

[Web6PathText]
Meter=String
MeterStyle=TextStyle
Text=#WA6#
x=113r
y=r

;WEB LAUNCHER INFORMATIONS ------------------------------------------------

[WebText]
Meter=String
MeterStyle=LabelStyle
Text=#WebTxt#
x=-370r
y=28r
ClipString=2
ClipStringW=400
