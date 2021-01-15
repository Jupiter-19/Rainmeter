
;MEASURES ===============================================================

;FOLDER 1 - PATH CHANGE AND UPDATE ======================================

[Folder1PathCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPL1" "#config#" "#FPL1#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder1Path2Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPL2" "#config#" "#FPL2#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder1Path3Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPL3" "#config#" "#FPL3#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder1Path4Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPL4" "#config#" "#FPL4#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder1Path5Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPL5" "#config#" "#FPL5#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder1Path6Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPL6" "#config#" "#FPL6#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder1Path7Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPL7" "#config#" "#FPL7#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder1Path8Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPL8" "#config#" "#FPL8#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder1Path9Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPL9" "#config#" "#FPL9#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder1Path10Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPL10" "#config#" "#FPL10#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

;FOLDER 7 - PATH CHANGE AND UPDATE ======================================

[Folder7PathCommand]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPR1" "#config#" "#FPR1#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder7Path2Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPR2" "#config#" "#FPR2#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder7Path3Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPR3" "#config#" "#FPR3#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder7Path4Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPR4" "#config#" "#FPR4#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder7Path5Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPR5" "#config#" "#FPR5#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder7Path6Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPR6" "#config#" "#FPR6#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder7Path7Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPR7" "#config#" "#FPR7#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder7Path8Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPR8" "#config#" "#FPR8#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder7Path9Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPR9" "#config#" "#FPR9#""
FinishAction=[!Refresh "#CURRENTCONFIG#"][!Refresh "Avengers\Time"]

[Folder7Path10Command]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainFile\RainFileWithoutRefresh.exe" "Folder" "Variables" "FPR10" "#config#" "#FPR10#""
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

;FOLDERS - PAGE 1 -------------------------------------------------------

[MeterFoldersButton]
Meter=Image
ImageName=#@#\Images\Options\TopButtonR.png
ImageAlpha=0
x=42
y=47
LeftMouseUpAction=[!WriteKeyValue Variables Tab "FoldersPlus"][!Refresh]
MouseOverAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 255][!SetOption "FoldersTitleTop" FontColor 255,255,255,200][!UpdateMeter FoldersTitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" ImageAlpha 0][!SetOption "FoldersTitleTop" FontColor "150,150,150,220"][!UpdateMeter FoldersTitleTop][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=#TimePlus#

;------------------------------------------------------------------------

[FoldersTitleTop]
Meter=String
MeterStyle=TitleStyleTop
FontColor=150,150,150,220
Text=FOLDERS
x=60
y=45

[FoldersIconTop]
Meter=Image
ImageName=#@#\Images\Options\FoldersIcon.png
x=30R
y=4r
W=28
ImageAlpha=180
PreserveAspectRatio=1
AntiAlias=1

[Folders2TitleTop]
Meter=String
MeterStyle=TitleStyleTop
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
PreserveAspectRatio=1
AntiAlias=1
Hidden=#TimePlus#

;FRAME CONTENT ==========================================================

[FoldersTitle]
Meter=String
MeterStyle=TitleStyle
Text=FOLDERS MENU
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
y=34r

[FolderLauncher7]
Meter=String
MeterStyle=SubTitleStyle
Text=#Folder# 7
x=r
y=271r

;FOLDER IMAGES ==========================================================

[Folder1Image]
Meter=Image
ImageName=#@#\Images\Options\Folder1.png
x=410r
y=-225r

[Folder1PlusImage]
Meter=Image
ImageName=#@#\Images\Options\Folder1Plus.png
x=-38r
y=5r

[Folder7Image]
Meter=Image
ImageName=#@#\Images\Options\Folder7.png
x=r
y=265r

[Folder7PlusImage]
Meter=Image
ImageName=#@#\Images\Options\Folder7Plus.png
x=88r
y=5r

;FOLDER 1 LAUNCHERS =====================================================

[Folder1TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDNam#
x=-425r
y=-295r

[Folder1TextBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusL" "ExecuteBatch 1"

[Folder1TitleText]
Meter=String
MeterStyle=TextStyle
Text=#FPLN1#
x=28r
y=1r

[Folder1PathLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDPat#
x=140r
y=-21r

[Folder1PathBackground]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "Folder1PathCommand" "Run"

[Folder1PathText]
Meter=String
MeterStyle=TextStyle
Text=#FPL1#
x=28r
y=1r

[Folder1TextBackground2]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusL" "ExecuteBatch 2"

[Folder1TitleText2]
Meter=String
MeterStyle=TextStyle
Text=#FPLN2#
x=28r
y=1r

[Folder1PathBackground2]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder1Path2Command" "Run"

[Folder1PathText2]
Meter=String
MeterStyle=TextStyle
Text=#FPL2#
x=28r
y=1r

[Folder1TextBackground3]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusL" "ExecuteBatch 3"

[Folder1TitleText3]
Meter=String
MeterStyle=TextStyle
Text=#FPLN3#
x=28r
y=1r

[Folder1PathBackground3]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder1Path3Command" "Run"

[Folder1PathText3]
Meter=String
MeterStyle=TextStyle
Text=#FPL3#
x=28r
y=1r

[Folder1TextBackground4]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusL" "ExecuteBatch 4"

[Folder1TitleText4]
Meter=String
MeterStyle=TextStyle
Text=#FPLN4#
x=28r
y=1r

[Folder1PathBackground4]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder1Path4Command" "Run"

[Folder1PathText4]
Meter=String
MeterStyle=TextStyle
Text=#FPL4#
x=28r
y=1r

[Folder1TextBackground5]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusL" "ExecuteBatch 5"

[Folder1TitleText5]
Meter=String
MeterStyle=TextStyle
Text=#FPLN5#
x=28r
y=1r

[Folder1PathBackground5]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder1Path5Command" "Run"

[Folder1PathText5]
Meter=String
MeterStyle=TextStyle
Text=#FPL5#
x=28r
y=1r

[Folder1TextBackground6]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusL" "ExecuteBatch 6"

[Folder1TitleText6]
Meter=String
MeterStyle=TextStyle
Text=#FPLN6#
x=28r
y=1r

[Folder1PathBackground6]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder1Path6Command" "Run"

[Folder1PathText6]
Meter=String
MeterStyle=TextStyle
Text=#FPL6#
x=28r
y=1r

[Folder1TextBackground7]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusL" "ExecuteBatch 7"

[Folder1TitleText7]
Meter=String
MeterStyle=TextStyle
Text=#FPLN7#
x=28r
y=1r

[Folder1PathBackground7]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder1Path7Command" "Run"

[Folder1PathText7]
Meter=String
MeterStyle=TextStyle
Text=#FPL7#
x=28r
y=1r

[Folder1TextBackground8]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusL" "ExecuteBatch 8"

[Folder1TitleText8]
Meter=String
MeterStyle=TextStyle
Text=#FPLN8#
x=28r
y=1r

[Folder1PathBackground8]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder1Path8Command" "Run"

[Folder1PathText8]
Meter=String
MeterStyle=TextStyle
Text=#FPL8#
x=28r
y=1r

[Folder1TextBackground9]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=24r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusL" "ExecuteBatch 9"

[Folder1TitleText9]
Meter=String
MeterStyle=TextStyle
Text=#FPLN9#
x=28r
y=1r

[Folder1PathBackground9]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder1Path9Command" "Run"

[Folder1PathText9]
Meter=String
MeterStyle=TextStyle
Text=#FPL9#
x=28r
y=1r

[Folder1TextBackground10]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusL" "ExecuteBatch 10"

[Folder1TitleText10]
Meter=String
MeterStyle=TextStyle
Text=#FPLN10#
x=28r
y=1r

[Folder1PathBackground10]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder1Path10Command" "Run"

[Folder1PathText10]
Meter=String
MeterStyle=TextStyle
Text=#FPL10#
x=28r
y=1r

;FOLDER 7 LAUNCHERS =====================================================

[Folder7TitleLabel]
Meter=String
MeterStyle=LabelStyle
Text=#FLDNam#
x=-197r
y=57r

[Folder7TextBackground1]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusR" "ExecuteBatch 1"

[Folder7TitleText1]
Meter=String
MeterStyle=TextStyle
Text=#FPRN1#
x=28r
y=1r

[Folder7PathLabel1]
Meter=String
MeterStyle=LabelStyle
Text=#FLDPat#
x=140r
y=-21r

[Folder7PathBackground1]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=1r
y=20r
ButtonCommand=!CommandMeasure "Folder7PathCommand" "Run"

[Folder7PathText1]
Meter=String
MeterStyle=TextStyle
Text=#FPR1#
x=28r
y=1r

[Folder7TextBackground2]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusR" "ExecuteBatch 2"

[Folder7TitleText2]
Meter=String
MeterStyle=TextStyle
Text=#FPRN2#
x=28r
y=1r

[Folder7PathBackground2]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder7Path2Command" "Run"

[Folder7PathText2]
Meter=String
MeterStyle=TextStyle
Text=#FPR2#
x=28r
y=1r

[Folder7TextBackground3]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusR" "ExecuteBatch 3"

[Folder7TitleText3]
Meter=String
MeterStyle=TextStyle
Text=#FPRN3#
x=28r
y=1r

[Folder7PathBackground3]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder7Path3Command" "Run"

[Folder7PathText3]
Meter=String
MeterStyle=TextStyle
Text=#FPR3#
x=28r
y=1r

[Folder7TextBackground4]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusR" "ExecuteBatch 4"

[Folder7TitleText4]
Meter=String
MeterStyle=TextStyle
Text=#FPRN4#
x=28r
y=1r

[Folder7PathBackground4]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder7Path4Command" "Run"

[Folder7PathText4]
Meter=String
MeterStyle=TextStyle
Text=#FPR4#
x=28r
y=1r

[Folder7TextBackground5]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusR" "ExecuteBatch 5"

[Folder7TitleText5]
Meter=String
MeterStyle=TextStyle
Text=#FPRN5#
x=28r
y=1r

[Folder7PathBackground5]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder7Path5Command" "Run"

[Folder7PathText5]
Meter=String
MeterStyle=TextStyle
Text=#FPR5#
x=28r
y=1r

[Folder7TextBackground6]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusR" "ExecuteBatch 6"

[Folder7TitleText6]
Meter=String
MeterStyle=TextStyle
Text=#FPRN6#
x=28r
y=1r

[Folder7PathBackground6]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder7Path6Command" "Run"

[Folder7PathText6]
Meter=String
MeterStyle=TextStyle
Text=#FPR6#
x=28r
y=1r

[Folder7TextBackground7]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusR" "ExecuteBatch 7"

[Folder7TitleText7]
Meter=String
MeterStyle=TextStyle
Text=#FPRN7#
x=28r
y=1r

[Folder7PathBackground7]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder7Path7Command" "Run"

[Folder7PathText7]
Meter=String
MeterStyle=TextStyle
Text=#FPR7#
x=28r
y=1r

[Folder7TextBackground8]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusR" "ExecuteBatch 8"

[Folder7TitleText8]
Meter=String
MeterStyle=TextStyle
Text=#FPRN8#
x=28r
y=1r

[Folder7PathBackground8]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder7Path8Command" "Run"

[Folder7PathText8]
Meter=String
MeterStyle=TextStyle
Text=#FPR8#
x=28r
y=1r

[Folder7TextBackground9]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=24r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusR" "ExecuteBatch 9"

[Folder7TitleText9]
Meter=String
MeterStyle=TextStyle
Text=#FPRN9#
x=28r
y=1r

[Folder7PathBackground9]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder7Path9Command" "Run"

[Folder7PathText9]
Meter=String
MeterStyle=TextStyle
Text=#FPR9#
x=28r
y=1r

[Folder7TextBackground10]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=-197r
y=20r
ButtonCommand=!CommandMeasure "MeasureFoldersPlusR" "ExecuteBatch 10"

[Folder7TitleText10]
Meter=String
MeterStyle=TextStyle
Text=#FPRN10#
x=28r
y=1r

[Folder7PathBackground10]
Meter=Button
ButtonImage=#@#\Images\Options\TextBackground.png
x=141r
y=-1r
ButtonCommand=!CommandMeasure "Folder7Path10Command" "Run"

[Folder7PathText10]
Meter=String
MeterStyle=TextStyle
Text=#FPR10#
x=28r
y=1r
