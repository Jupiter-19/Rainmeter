
;MEASURES ===============================================================

;FOLDERS - PATH CHANGE AND UPDATE =======================================

[Folder1PathCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FLP1" "#config#" "#FLP1#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder2PathCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FLP2" "#config#" "#FLP2#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder3PathCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FLP3" "#config#" "#FLP3#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder4PathCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FLP4" "#config#" "#FLP4#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder5PathCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FLP5" "#config#" "#FLP5#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder6PathCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FLP6" "#config#" "#FLP6#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder7PathCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FLP7" "#config#" "#FLP7#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

;BACKGROUND =============================================================

[MeterBackgroundBottom]
Meter=Image
ImageName=#@#\Images\Options\Options5_10 #Color1#.png
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

[MeterTabButtonBottom]
Meter=Button
ButtonImage="#@#\Images\Options\Tab Button.png"
x=r
y=200r
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

;FOLDERS - PAGE 2 -------------------------------------------------------

[MeterFolders1Button]
Meter=Image
ImageName=#@#\Images\Options\TopButtonR.png
ImageAlpha=0
x=305
y=47
LeftMouseUpAction=[!WriteKeyValue Variables Tab "Folders2"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 255][!SetOption "Folders2TitleTop" FontColor 255,255,255,200][!UpdateMeter Folders2TitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 0][!SetOption "Folders2TitleTop" FontColor "150,150,150,220"][!UpdateMeter Folders2TitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=#TimePlus#

;------------------------------------------------------------------------

[FoldersTitleTop]
Meter=String
MeterStyle=TitleStyleTop
Text=FOLDERS
x=60
y=45

[FoldersIconTop]
Meter=Image
ImageName=#@#\Images\Options\FoldersIcon.png
x=30R
y=4r
W=28
PreserveAspectRatio=1
AntiAlias=1

[Folders2TitleTop]
Meter=String
MeterStyle=TitleStyleTop
FontColor=150,150,150,220
Text=FOLDER 1-7
x=120R
y=-4r
AntiAlias=1
Hidden=#TimePlus#

[Folders2IconTop]
Meter=Image
ImageName=#@#\Images\Options\FoldersIcon.png
x=30R
y=4r
W=28
ImageAlpha=180
PreserveAspectRatio=1
AntiAlias=1
Hidden=#TimePlus#

;FRAME CONTENT ==========================================================

[FoldersTitle]
Meter=String
MeterStyle=TitleStyle
Text=FOLDER SHORTCUTS
x=57
y=34r

[FoldersIcon]
Meter=Image
ImageName=#@#\Images\Options\FoldersIcon.png
x=220r
y=3r
W=28
PreserveAspectRatio=1
AntiAlias=1

[FolderLauncher1]
Meter=String
MeterStyle=SubTitleStyle
Text=#Folder# 1
x=-220r
y=44r

[FolderLauncher2]
Meter=String
MeterStyle=SubTitleStyle
Text=#Folder# 2
x=r
y=70r

[FolderLauncher3]
Meter=String
MeterStyle=SubTitleStyle
Text=#Folder# 3
x=r
y=70r

[FolderLauncher4]
Meter=String
MeterStyle=SubTitleStyle
Text=#Folder# 4
x=r
y=70r

[FolderLauncher5]
Meter=String
MeterStyle=SubTitleStyle
Text=#Folder# 5
x=r
y=70r

[FolderLauncher6]
Meter=String
MeterStyle=SubTitleStyle
Text=#Folder# 6
x=r
y=70r

[FolderLauncher7]
Meter=String
MeterStyle=SubTitleStyle
Text=#Folder# 7
x=r
y=70r

;FOLDER IMAGES ==========================================================

[Folder1Image]
Meter=Image
ImageName=#@#\Images\Options\Folder1.png
x=410r
y=-383r

[Folder2Image]
Meter=Image
ImageName=#@#\Images\Options\Folder2.png
x=r
y=70r

[Folder3Image]
Meter=Image
ImageName=#@#\Images\Options\Folder3.png
x=r
y=70r

[Folder4Image]
Meter=Image
ImageName=#@#\Images\Options\Folder4.png
x=r
y=70r

[Folder5Image]
Meter=Image
ImageName=#@#\Images\Options\Folder5.png
x=r
y=70r

[Folder6Image]
Meter=Image
ImageName=#@#\Images\Options\Folder6.png
x=r
y=70r

[Folder7Image]
Meter=Image
ImageName=#@#\Images\Options\Folder7.png
x=r
y=70r

;FOLDER 1 LIST ==========================================================

[Folder1TitleLabel0]
Meter=String
MeterStyle=LabelStyle
Text=#FLDN#
x=-370r
y=-438r
Hidden=#TimePlus#

[Folder1TextBackground0]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusL" "ExecuteBatch 11"
Hidden=#TimePlus#

[Folder1TitleText0]
Meter=String
MeterStyle=TextStyle
Text=#FPLN11#
x=28r
y=1r
Hidden=#TimePlus#

;FOLDER 1 LAUNCHER ======================================================

[Folder1TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDNam#
x=-29r
y=-21r
Hidden=#TimeNorm#

[Folder1TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "MeasureFolders2" "ExecuteBatch 1"
Hidden=#TimeNorm#

[Folder1TitleText]
Meter=String
MeterStyle=TextStyle
Text=#FLN1#
x=28r
y=1r
Hidden=#TimeNorm#

[Folder1PathLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDPat#
x=155r
y=-21r
Hidden=#TimeNorm#

[Folder1PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "Folder1PathCommand" "Run"
Hidden=#TimeNorm#

[Folder1PathText]
Meter=String
MeterStyle=TextStyle
Text=#FLP1#
x=28r
y=1r
Hidden=#TimeNorm#

;FOLDER 2 LAUNCHER ======================================================

[Folder2TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDNam#
x=-213r
y=49r

[Folder2TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "MeasureFolders2" "ExecuteBatch 2"

[Folder2TitleText]
Meter=String
MeterStyle=TextStyle
Text=#FLN2#
x=28r
y=1r

[Folder2PathLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDPat#
x=155r
y=-21r

[Folder2PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "Folder2PathCommand" "Run"

[Folder2PathText]
Meter=String
MeterStyle=TextStyle
Text=#FLP2#
x=28r
y=1r

;FOLDER 3 LAUNCHER ======================================================

[Folder3TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDNam#
x=-213r
y=49r

[Folder3TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "MeasureFolders2" "ExecuteBatch 3"

[Folder3TitleText]
Meter=String
MeterStyle=TextStyle
Text=#FLN3#
x=28r
y=1r

[Folder3PathLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDPat#
x=155r
y=-21r

[Folder3PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "Folder3PathCommand" "Run"

[Folder3PathText]
Meter=String
MeterStyle=TextStyle
Text=#FLP3#
x=28r
y=1r

;FOLDER 4 LAUNCHER ======================================================

[Folder4TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDNam#
x=-213r
y=49r

[Folder4TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "MeasureFolders2" "ExecuteBatch 4"

[Folder4TitleText]
Meter=String
MeterStyle=TextStyle
Text=#FLN4#
x=28r
y=1r

[Folder4PathLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDPat#
x=155r
y=-21r

[Folder4PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "Folder4PathCommand" "Run"

[Folder4PathText]
Meter=String
Meterstyle=TextStyle
Text=#FLP4#
x=28r
y=1r

;FOLDER 5 LAUNCHER ======================================================

[Folder5TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDNam#
x=-213r
y=49r

[Folder5TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "MeasureFolders2" "ExecuteBatch 5"

[Folder5TitleText]
Meter=String
MeterStyle=TextStyle
Text=#FLN5#
x=28r
y=1r

[Folder5PathLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDPat#
x=155r
y=-21r

[Folder5PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "Folder5PathCommand" "Run"

[Folder5PathText]
Meter=String
MeterStyle=TextStyle
Text=#FLP5#
x=28r
y=1r

;FOLDER 6 LAUNCHER ======================================================

[Folder6TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDNam#
x=-213r
y=49r

[Folder6TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "MeasureFolders2" "ExecuteBatch 6"

[Folder6TitleText]
Meter=String
MeterStyle=TextStyle
Text=#FLN6#
x=28r
y=1r

[Folder6PathLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDPat#
x=155r
y=-21r

[Folder6PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "Folder6PathCommand" "Run"

[Folder6PathText]
Meter=String
MeterStyle=TextStyle
Text=#FLP6#
x=28r
y=1r

;FOLDER 7 LAUNCHER ======================================================

[Folder7TitleLabel0]
Meter=String
MeterStyle=LabelStyle
Text=#FLDN#
x=-213r
y=49r
Hidden=#TimePlus#

[Folder7TextBackground0]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusR" "ExecuteBatch 11"
Hidden=#TimePlus#

[Folder7TitleText0]
Meter=String
MeterStyle=TextStyle
Text=#FPRN11#
x=28r
y=1r
Hidden=#TimePlus#

;FOLDER 7 LAUNCHER ======================================================

[Folder7TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDNam#
x=-29r
y=-21r
Hidden=#TimeNorm#

[Folder7TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "MeasureFolders2" "ExecuteBatch 7"
Hidden=#TimeNorm#

[Folder7TitleText]
Meter=String
MeterStyle=TextStyle
Text=#FLN7#
x=28r
y=1r
Hidden=#TimeNorm#

[Folder7PathLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDPat#
x=155r
y=-21r
Hidden=#TimeNorm#

[Folder7PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "Folder7PathCommand" "Run"
Hidden=#TimeNorm#

[Folder7PathText]
Meter=String
MeterStyle=TextStyle
Text=#FLP7#
x=28r
y=1r
Hidden=#TimeNorm#
