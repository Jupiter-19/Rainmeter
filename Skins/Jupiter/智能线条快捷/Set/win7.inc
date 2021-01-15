[Rainmeter]
Update=1000

[BG]
Meter=IMAGE
ImageName=xiantiao.png
X=0
Y=0

[FontSet]
Meter=STRING
SolidColor=0,0,0,1
X=90
Y=90
W=80
H=28
ToolTipText="左键改字体#CRLF#中键改颜色"
LeftMouseUpAction=!Execute ["#CURRENTPATH#Font\_CFont1.exe"]
MiddleMouseUpAction=!Execute ["#CURRENTPATH#Font\_CColor1.exe"]

[TextStyle]
FontColor=#FontColor1#
FontFace=#Font1#
FontSize=#Height1#
StringEffect=SHADOW
StringAlign=CENTER
AntiAlias=1

[ItemNamesRSS]
Measure=Plugin
Plugin=WebParser
Url=file://#CURRENTPATH#ItemNames\ItemNames.inc
RegExp="(?siU)Name1=(.*)Name2=(.*)Name3=(.*)Name4=(.*)Name5=(.*)Name6=(.*)Name7=(.*)Name8=(.*)Name9=(.*)Name10=(.*)Name11=(.*)Name12=(.*)Name13=(.*)Name14=(.*)Name15=(.*)Path1="
UpdateRate=10
Disabled=0
FinishAction=!execute [!UpdateMeterGroup Icons "#CURRENTCONFIG#"]
CodePage=936

[Name1]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=1

[Name2]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=2

[Name3]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=3

[Name4]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=4

[Name5]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=5

[Name6]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=6

[Name7]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=7

[Name8]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=8

[Name9]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=9

[Name10]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=10

[Name11]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=11

[Name12]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=12

[Name13]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=13

[Name14]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=14

[Name15]
Measure=Plugin
Plugin=WebParser
Url=[ItemNamesRSS]
StringIndex=15

[a1txt]
Meter=STRING
MeterStyle=TextStyle
MeasureName=Name1
X=45
Y=152
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item1.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 1 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a2txt]
Meter=STRING
MeasureName=Name2
X=r
Y=30r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item2.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,162,232,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 2 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a3txt]
Meter=STRING
MeasureName=Name3
X=r
Y=30r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item3.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 255,127,39,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 3 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a4txt]
Meter=STRING
MeasureName=Name4
X=r
Y=30r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item4.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 34,177,76,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 4 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[a5txt]
Meter=STRING
MeasureName=Name5
X=r
Y=30r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item5.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 5 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[MeasureBin]
Measure=Plugin
Plugin=RecycleManager.dll
RecycleType=COUNT
Drives=ALL
Update=1

[hszexe]
Meter=Image
SolidColor=255,0,0,150
X=15
Y=32r
W=60
H=16
Hidden=1

[回收站空]
Meter=STRING
X=45
Y=-2r
MeterStyle=TextStyle
Text="回收站空"
Group=Icons
UpdateDivider=1
SolidColor=0,0,0,1
DynamicVariables=1
LeftMouseUpAction=!PluginBang "MeasureBin OpenBin"
Hidden=0

[回收站满]
Meter=STRING
X=r
Y=r
MeterStyle=TextStyle
Text="回收站满"
Group=Icons
UpdateDivider=1
SolidColor=0,0,0,1
DynamicVariables=1
LeftMouseUpAction=!PluginBang "MeasureBin OpenBin"
MiddleMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 15 "#PROGRAMPATH#" "#CURRENTCONFIG#"]
RightMouseDownAction=!PluginBang "MeasureBin EmptyBin"
Hidden=1

[bin_action]
Measure=Calc
Formula=MeasureBin
IfAboveAction=!execute [!HideMeter 回收站空][!ShowMeter 回收站满][!ShowMeter hszexe]
IfAboveValue=0
IfEqualAction=!execute [!HideMeter 回收站满][!ShowMeter 回收站空][!HideMeter hszexe]
IfEqualValue=0

[b1txt]
Meter=STRING
MeasureName=Name6
X=118
Y=137
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item6.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,162,232,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 6 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b2txt]
Meter=STRING
MeasureName=Name7
X=r
Y=30r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item7.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 255,127,39,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 7 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b3txt]
Meter=STRING
MeasureName=Name8
X=r
Y=30r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item8.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 34,177,76,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 8 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b4txt]
Meter=STRING
MeasureName=Name9
X=r
Y=30r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item9.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 9 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b5txt]
Meter=STRING
MeasureName=Name10
X=r
Y=30r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item10.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,162,232,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 10 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b6txt]
Meter=STRING
MeasureName=Name11
X=r
Y=30r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item11.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 255,127,39,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 11 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b7txt]
Meter=STRING
MeasureName=Name12
X=r
Y=30r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item12.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 34,177,76,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 12 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b8txt]
Meter=STRING
MeasureName=Name13
X=r
Y=30r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item13.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 163,73,164,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 13 "#PROGRAMPATH#" "#CURRENTCONFIG#"]

[b9txt]
Meter=STRING
MeasureName=Name14
X=r
Y=30r
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
LeftMouseUpAction=!Execute ["#CURRENTPATH#ItemPaths\item14.lnk"][!Redraw]
MouseOverAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,162,232,100][!Update]
MouseLeaveAction=!Execute [!SetOption #CURRENTSECTION# SolidColor 0,0,0,1][!Update]
RightMouseUpAction=!Execute ["#CURRENTPATH#Tools\LauncherL.exe" App2 14 "#PROGRAMPATH#" "#CURRENTCONFIG#"]
