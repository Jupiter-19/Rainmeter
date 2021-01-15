[Rainmeter]
Update=1000

[FontSet]
Meter=STRING
SolidColor=0,0,0,1
X=105
Y=60
W=40
H=38
Group=button
ToolTipText="左键改字体#CRLF#右键改颜色"
LeftMouseUpAction=!Execute ["#CURRENTPATH#Font\_CFont1.exe"]
RightMouseUpAction=!Execute ["#CURRENTPATH#Font\_CColor1.exe"]
Hidden=1

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
Group=button
X=78
Y=94
Group=Icons
UpdateDivider=1
Hidden=1

[a2txt]
Meter=STRING
MeasureName=Name2
Group=button
X=32
Y=15
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
Hidden=1

[a3txt]
Meter=STRING
MeasureName=Name3
Group=button
X=216
Y=121
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
Hidden=1

[a4txt]
Meter=STRING
MeasureName=Name4
Group=button
X=124
Y=15
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
Hidden=1

[a5txt]
Meter=STRING
MeasureName=Name5
Group=button
X=170
Y=41
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
Hidden=1

[a6txt]
Meter=String
MeasureName=Name6
Group=button
X=77
Y=200
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
Hidden=1

[b1txt]
Meter=STRING
MeasureName=Name7
Group=button
X=216
Y=176
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
Hidden=1

[b2txt]
Meter=STRING
MeasureName=Name8
Group=button
X=32
Y=227
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
Hidden=1

[b3txt]
Meter=STRING
MeasureName=Name9
Group=button
X=170
Y=148
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
Hidden=1

[b4txt]
Meter=STRING
MeasureName=Name10
Group=button
X=170
Y=256
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
Hidden=1

[b5txt]
Meter=STRING
MeasureName=Name11
Group=button
X=78
Y=41
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
Hidden=1

[b6txt]
Meter=STRING
MeasureName=Name12
Group=button
X=124
Y=227
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
Hidden=1

[b7txt]
Meter=STRING
MeasureName=Name13
Group=button
X=32
Y=121
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
Hidden=1

[b8txt]
Meter=STRING
MeasureName=Name14
Group=button
X=124
Y=121
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
Hidden=1

[b9txt]
Meter=STRING
MeasureName=Name15
Group=button
X=170
Y=94
MeterStyle=TextStyle
Group=Icons
UpdateDivider=1
Hidden=1
