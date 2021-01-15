
;TAB LIST R --------------------------------------

[MeterFolder7RPlus]
Meter=Image
ImageName=#@#\Images\Time1\FolderPlusR.png
x=577
y=375
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

;Button to switch from open to closed ------------

[MeterFolder7RPlusButton0]
Meter=Button
ButtonImage=#@#\Images\Time1\Folder LauncherR.png
x=511
y=358
LeftMouseUpAction=[!ShowMeterGroup FolderR0][!HideMeter MeterFolder7RPlusButton0][!ShowMeter MeterFolder7RPlusButton1][!WriteKeyValue Variables FRstatR 0][!SetOption Variables FRstatR 0][!Redraw]
UpdateDivider=-1

[MeterFolder7Text]
Meter=String
MeterStyle=LauncherStyle
Text=#FPRN9#
x=8r
y=2r
UpdateDivider=-1

[MeterFolder7RPlusButton1]
Meter=Button
ButtonImage=#@#\Images\Time1\Folder LauncherPlusR.png
x=511
y=358
LeftMouseUpAction=[!HideMeterGroup FolderR0][!ShowMeter MeterFolder7RPlusButton0][!HideMeter MeterFolder7RPlusButton1][!WriteKeyValue Variables FRstatR 1][!SetOption Variables FRstatR 1][!Redraw]
Hidden=#FRstatR#
UpdateDivider=-1

;Option to close automatically on launch ---------

[AutoCloseRFolderMeter]
Meter=Image
SolidColor=0,0,0,1
x=706
y=381
W=12
H=12
AntiAlias=1
ToolTipText=#InfoCLA1#
ToolTipIcon=Info
ToolTipType=0
LeftMouseUpAction=[!WriteKeyValue Variables Tab FolderPlusRAutoClosed][!Refresh]
DynamicVariables=1
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

;FOLDER PLUS LAUNCHERS ==================================================

[MeterFolderRPlus1]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=400
ButtonCommand=["#FPR1#"]
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus1Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN1#
x=8r
y=1r
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus2]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=17r
ButtonCommand=["#FPR2#"]
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus2Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN2#
x=8r
y=1r
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus3]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=17r
ButtonCommand=["#FPR3#"]
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus3Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN3#
x=8r
y=1r
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus4]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=17r
ButtonCommand=["#FPR4#"]
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus4Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN4#
x=8r
y=1r
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus5]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=17r
ButtonCommand=["#FPR5#"]
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus5Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN5#
x=8r
y=1r
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus6]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=17r
ButtonCommand=["#FPR6#"]
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus6Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN6#
x=8r
y=1r
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus7]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=17r
ButtonCommand=["#FPR7#"]
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus7Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN7#
x=8r
y=1r
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus8]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=17r
ButtonCommand=["#FPR8#"]
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus8Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN8#
x=8r
y=1r
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

;Divider ------------------------------------------

[MeterBoxRLine]
Meter=image
SolidColor=255,255,255,80
x=583
y=18r
W=138
H=2
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterBoxRLineShadow]
Meter=image
SolidColor=50,50,50,80
x=1r
y=1r
W=138
H=2
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

;FOLDER PLUS LAUNCHERS BOTTOM ===========================================

[MeterFolderRPlus9]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus1.png
x=583
y=4r
ButtonCommand=["#FPR9#"]
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus9Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN9#
x=8r
y=1r
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus10]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus1.png
x=583
y=17r
ButtonCommand=["#FPR10#"]
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1

[MeterFolderRPlus10Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN10#
x=8r
y=1r
Hidden=#FRstatR#
Group=FolderR0
UpdateDivider=-1
