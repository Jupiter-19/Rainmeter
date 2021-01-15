
;TAB LIST R --------------------------------------

[MeterFolder7RPlus]
Meter=Image
ImageName=#@#\Images\Time1\FolderPlusR.png
x=577
y=375
Hidden=1
Group=FolderR
UpdateDivider=-1

;Button to switch from open to closed ------------

[MeterFolder7RPlusButton0]
Meter=Button
ButtonImage=#@#\Images\Time1\Folder LauncherR.png
x=511
y=358
LeftMouseUpAction=[!ShowMeterGroup FolderR][!HideMeter MeterFolder7RPlusButton0][!ShowMeter MeterFolder7RPlusButton1][!Redraw]
UpdateDivider=-1

[MeterFolder7Text]
Meter=String
MeterStyle=LauncherStyle
Text=#FPRN11#
x=8r
y=2r
UpdateDivider=-1

[MeterFolder7RPlusButton1]
Meter=Button
ButtonImage=#@#\Images\Time1\Folder LauncherPlusR.png
x=511
y=358
LeftMouseUpAction=[!HideMeterGroup FolderR][!ShowMeter MeterFolder7RPlusButton0][!HideMeter MeterFolder7RPlusButton1][!Redraw]
Hidden=1
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
ToolTipText=#InfoCLA2#
ToolTipIcon=Info
ToolTipType=0
LeftMouseUpAction=[!WriteKeyValue Variables Tab FolderPlusRClosed][!Refresh]
DynamicVariables=1
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderROnButton]
Meter=Image
SolidColor=255,200,50,180
x=708
y=2r
W=8
H=8
AntiAlias=1
Hidden=1
Group=FolderR
UpdateDivider=-1

;FOLDER PLUS LAUCHERS ===================================================

[MeterFolderRPlus1]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=400
ButtonCommand=["#FPR1#"][!HideMeterGroup FolderR][!ShowMeter MeterFolder7RPlusButton0][!HideMeter MeterFolder7RPlusButton1][!Redraw]
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus1Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN1#
x=8r
y=1r
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus2]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=17r
ButtonCommand=["#FPR2#"][!HideMeterGroup FolderR][!ShowMeter MeterFolder7RPlusButton0][!HideMeter MeterFolder7RPlusButton1][!Redraw]
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus2Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN2#
x=8r
y=1r
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus3]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=17r
ButtonCommand=["#FPR3#"][!HideMeterGroup FolderR][!ShowMeter MeterFolder7RPlusButton0][!HideMeter MeterFolder7RPlusButton1][!Redraw]
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus3Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN3#
x=8r
y=1r
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus4]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=17r
ButtonCommand=["#FPR4#"][!HideMeterGroup FolderR][!ShowMeter MeterFolder7RPlusButton0][!HideMeter MeterFolder7RPlusButton1][!Redraw]
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus4Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN4#
x=8r
y=1r
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus5]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=17r
ButtonCommand=["#FPR5#"][!HideMeterGroup FolderR][!ShowMeter MeterFolder7RPlusButton0][!HideMeter MeterFolder7RPlusButton1][!Redraw]
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus5Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN5#
x=8r
y=1r
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus6]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=17r
ButtonCommand=["#FPR6#"][!HideMeterGroup FolderR][!ShowMeter MeterFolder7RPlusButton0][!HideMeter MeterFolder7RPlusButton1][!Redraw]
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus6Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN6#
x=8r
y=1r
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus7]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=17r
ButtonCommand=["#FPR7#"][!HideMeterGroup FolderR][!ShowMeter MeterFolder7RPlusButton0][!HideMeter MeterFolder7RPlusButton1][!Redraw]
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus7Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN7#
x=8r
y=1r
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus8]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus.png
x=583
y=17r
ButtonCommand=["#FPR8#"][!HideMeterGroup FolderR][!ShowMeter MeterFolder7RPlusButton0][!HideMeter MeterFolder7RPlusButton1][!Redraw]
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus8Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN8#
x=8r
y=1r
Hidden=1
Group=FolderR
UpdateDivider=-1

;Divider ------------------------------------------

[MeterBoxRLine]
Meter=image
SolidColor=255,255,255,80
x=583
y=18r
W=138
H=2
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterBoxRLineShadow]
Meter=image
SolidColor=50,50,50,80
x=1r
y=1r
W=138
H=2
Hidden=1
Group=FolderR
UpdateDivider=-1

;FOLDER PLUS LAUCHERS BOTTOM ============================================

[MeterFolderRPlus9]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus1.png
x=583
y=4r
ButtonCommand=["#FPR9#"][!HideMeterGroup FolderR][!ShowMeter MeterFolder7RPlusButton0][!HideMeter MeterFolder7RPlusButton1][!Redraw]
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus9Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN9#
x=8r
y=1r
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus10]
Meter=Button
ButtonImage=#@#\Images\Time1\FolderPlus1.png
x=583
y=17r
ButtonCommand=["#FPR10#"][!HideMeterGroup FolderR][!ShowMeter MeterFolder7RPlusButton0][!HideMeter MeterFolder7RPlusButton1][!Redraw]
Hidden=1
Group=FolderR
UpdateDivider=-1

[MeterFolderRPlus10Text]
Meter=String
MeterStyle=LauncherStyle1
Text=#FPRN10#
x=8r
y=1r
Hidden=1
Group=FolderR
UpdateDivider=-1
