
;TAB LIST ----------------------------------------

[MeterFolder1LPlus]
Meter=Image
ImageName=#@#\Images\Time1\FolderPlusL.png
x=78
y=375
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

;Button to switch from open to closed ------------

[MeterFolder1LPlusButton0]
Meter=Button
ButtonImage=#@#\Images\Time1\Folder LauncherL.png
x=220
y=358
LeftMouseUpAction=[!ShowMeterGroup FolderL0][!HideMeter MeterFolder1LPlusButton0][!ShowMeter MeterFolder1LPlusButton1][!WriteKeyValue Variables FLstatL 0][!SetOption Variables FLstatL 0][!Redraw]
UpdateDivider=-1

[MeterFolder7LText]
Meter=String
MeterStyle=LauncherStyle
Text=#FPLN9#
x=16r
y=2r
UpdateDivider=-1

[MeterFolder1LPlusButton1]
Meter=Button
ButtonImage=#@#\Images\Time1\Folder LauncherPlusL.png
x=220
y=358
LeftMouseUpAction=[!HideMeterGroup FolderL0][!ShowMeter MeterFolder1LPlusButton0][!HideMeter MeterFolder1LPlusButton1][!WriteKeyValue Variables FLstatL 1][!SetOption Variables FLstatL 1][!Redraw]
Hidden=#FLstatL#
UpdateDivider=-1

;Option to close automatically on launch ---------

[AutoCloseLFolderMeter]
Meter=Image
SolidColor=0,0,0,1
x=86
y=381
W=12
H=12
AntiAlias=1
ToolTipText=#InfoCLA1#
ToolTipIcon=Info
ToolTipType=0
LeftMouseUpAction=[!WriteKeyValue Variables Tab2 FolderPlusLAutoClosed][!Refresh]
DynamicVariables=1
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

;FOLDER PLUS LAUNCHERS ==================================================

[MeterFolderLPlus1]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=84
y=400
ButtonCommand=["#FPL1#"]
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus1Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPLN1#
x=8r
y=1r
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus2]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=84
y=17r
ButtonCommand=["#FPL2#"]
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus2Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPLN2#
x=8r
y=1r
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus3]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=84
y=17r
ButtonCommand=["#FPL3#"]
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus3Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPLN3#
x=8r
y=1r
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus4]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=84
y=17r
ButtonCommand=["#FPL4#"]
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus4Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPLN4#
x=8r
y=1r
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus5]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=84
y=17r
ButtonCommand=["#FPL5#"]
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus5Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPLN5#
x=8r
y=1r
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus6]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=84
y=17r
ButtonCommand=["#FPL6#"]
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus6Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPLN6#
x=8r
y=1r
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus7]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=84
y=17r
ButtonCommand=["#FPL7#"]
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus7Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPLN7#
x=8r
y=1r
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus8]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=84
y=17r
ButtonCommand=["#FPL8#"]
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus8Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPLN8#
x=8r
y=1r
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

;Divider ------------------------------------------

[MeterBoxLLine]
Meter=image
SolidColor=255,255,255,80
x=84
y=18r
W=138
H=2
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterBoxLLineShadow]
Meter=image
SolidColor=50,50,50,80
x=1r
y=1r
W=138
H=2
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

;FOLDER PLUS LAUNCHERS BOTTOM ===========================================

[MeterFolderLPlus9]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus1.png
x=84
y=4r
ButtonCommand=["#FPL9#"]
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus9Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPLN9#
x=8r
y=1r
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus10]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus1.png
x=84
y=17r
ButtonCommand=["#FPL10#"]
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1

[MeterFolderLPlus10Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPLN10#
x=8r
y=1r
Hidden=#FLstatL#
Group=FolderL0
UpdateDivider=-1
