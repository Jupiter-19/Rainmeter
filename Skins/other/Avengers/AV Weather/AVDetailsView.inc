
;Displays the Location details, informations downloaded from www.weather.com

;Button to hide Details skin ============================================

[MeterDetailsViewButton1]
Meter=Button
ButtonImage=#@#Images\AVWeather\SatButton.png
x=23
y=34
LeftMouseUpAction=[!HideMeter MeterDetailsViewButton1][!ShowMeter MeterDetailsViewButton2][!HideMeterGroup GroupDet][!SetOption Variables DetClose 1][!WriteKeyValue Variables DetClose 1][!SetOption Variables DetClose2 0][!WriteKeyValue Variables DetClose2 0][!Update][!Redraw]
ToolTipType=0
ToolTipText="#MoreD2#"
Hidden=#DetClose#
MouseOverAction=[!SetOption MeterLocationName FontColor "#HighlightColor#"][!UpdateMeter MeterLocationName][!Redraw]
MouseLeaveAction=[!SetOption MeterLocationName FontColor ""][!UpdateMeter MeterLocationName][!Redraw]
UpdateDivider=-1

;Button to show Details skin ============================================

[MeterDetailsViewButton2]
Meter=Button
ButtonImage=#@#Images\AVWeather\SatButton.png
x=r
y=r
LeftMouseUpAction=[!HideMeter MeterDetailsViewButton2][!ShowMeter MeterDetailsViewButton1][!ShowMeterGroup GroupDet][!SetOption Variables DetClose 0][!WriteKeyValue Variables DetClose 0][!SetOption Variables DetClose2 1][!WriteKeyValue Variables DetClose2 1][!Update][!Redraw]
ToolTipType=0
ToolTipText="#MoreD1#"
Hidden=#DetClose2#
MouseOverAction=[!SetOption MeterLocationName FontColor 165,250,245,200][!UpdateMeter MeterLocationName][!Redraw]
MouseLeaveAction=[!SetOption MeterLocationName FontColor ""][!UpdateMeter MeterLocationName][!Redraw]
UpdateDivider=-1

;MEASURES ===============================================================

[MeasureSunrise]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureBase]
StringIndex=12
RegExpSubstitute=1
Substitute=#DetailsList#
UpdateDivider=-1
Group=WeatherAll

[MeasureSunRiseCalc]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureBase]
StringIndex=12
RegExpSubstitute=1
Substitute="^$":"00:00 AM","(.*):(.*) (.*)":"((\1*60)+(\2) \3"," AM":"+0)"," PM":"+720)"
UpdateDivider=-1
Group=WeatherAll

[MeasureSunRiseTime]
Measure=Calc
Formula=[MeasureSunRiseCalc]
DynamicVariables=1
UpdateDivider=-1
Group=WeatherAll

[MeasureSunset]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureBase]
StringIndex=13
RegExpSubstitute=1
Substitute=#DetailsList#
UpdateDivider=-1
Group=WeatherAll

[MeasureSunSetCalc]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureBase]
StringIndex=13
RegExpSubstitute=1
Substitute="^$":"00:00 AM","(.*):(.*) (.*)":"((\1*60)+(\2) \3"," AM":"+0)"," PM":"+720)"
UpdateDivider=-1
Group=WeatherAll

[MeasureSunSetTime]
Measure=Calc
Formula=[MeasureSunSetCalc]
DynamicVariables=1
UpdateDivider=-1
Group=WeatherAll

[MeasureVisibility]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureBase]
StringIndex=28
UpdateDivider=-1
Group=WeatherAll

[MeasureVisUnits]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureBase]
StringIndex=3
UpdateDivider=-1
Group=WeatherAll

[MeasurePressUnits]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureBase]
StringIndex=5
UpdateDivider=-1
Group=WeatherAll

[MeasureFeelsLike]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureBase]
StringIndex=18
UpdateDivider=-1
Group=WeatherAll

;PRESSURE -----------------------------

[MeasurePressureForBar]
Measure=Calc
Formula=(MeasureBase*1)
MinValue=850
MaxValue=1095
UpdateDivider=-1
OnChangeAction=[!UpdateMeter MeterPressureBar][!Redraw]
Group=WeatherAll

[MeasurePressureTendencyIcon]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureBase]
StringIndex=22
Substitute=" rapidly":""
UpdateDivider=-1
OnChangeAction=[!UpdateMeter MeterDisplayTendency][!UpdateMeter MeterPressureNow][!UpdateMeter MeterPressureTendencyNow][!Redraw]
Group=WeatherAll

;POSITION ===============================================================

;LATITUDE ---------------------------------------------------------------

[MeasurePositionLat]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureBase]
StringIndex=10
RegExpSubstitute=1
Substitute="^$":"0° 0'","^(\d+).(\d+)$":"\1° \2' N","^-(\d+).(\d+)$":"\1° \2' S"
UpdateDivider=-1
Group=WeatherAll

;LONGITUDE --------------------------------------------------------------

[MeasurePositionLon]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureBase]
StringIndex=11
RegExpSubstitute=1
Substitute="^$":"0° 0'","^(\d+).(\d+)$":"\1° \2' E","^-(\d+).(\d+)$":"\1° \2' #West#"
UpdateDivider=-1
Group=WeatherAll

;SUN/MOON POSITION ------------------------------------------------------

[MeasureSunMoonTimeM]
Measure=Time
Format=%M
OnChangeAction=[!UpdateMeasure MeasureSunMoonTimeH][!UpdateMeasure MeasureSunMoonTime][!UpdateMeasure MeasureMoonIcon][!UpdateMeasure MeasureSunIcon][!UpdateMeasure MeasurePosX][!UpdateMeasure MeasurePosY][!UpdateMeter MeterSunImage][!UpdateMeter MeterMoonImage][!Redraw]

[MeasureSunMoonTimeH]
Measure=Time
Format=%H
UpdateDivider=-1

[MeasureSunMoonTime]
Measure=Calc
Formula=((MeasureSunMoonTimeH*60)+MeasureSunMoonTimeM)
UpdateDivider=-1

[MeasureMoonIcon]
Measure=Calc
Formula=((MeasureSunMoonTime<31)? 1:((MeasureSunMoonTime<41)? 2:((MeasureSunMoonTime<61)? 3:((MeasureSunMoonTime<81)? 4:((MeasureSunMoonTime<116)? 5:((MeasureSunMoonTime<141)? 6:((MeasureSunMoonTime<1301)? 0:((MeasureSunMoonTime<1326)? 6:((MeasureSunMoonTime<1361)? 5:((MeasureSunMoonTime<1381)? 4:((MeasureSunMoonTime<1401)? 3:((MeasureSunMoonTime<1411)? 2:(MeasureSunMoonTime>1410)? 1: 0))))))))))))
Substitute="1":"Det_M[MeasureMoonphaseIcon]a","2":"Det_M[MeasureMoonphaseIcon]b","3":"Det_M[MeasureMoonphaseIcon]c","4":"Det_M[MeasureMoonphaseIcon]d","5":"Det_M[MeasureMoonphaseIcon]e","6":"Det_M[MeasureMoonphaseIcon]f","0":"Det_M[MeasureMoonphaseIcon]_"
OnChangeAction=[!UpdateMeter MeterMoonImage][!Redraw]
DynamicVariables=1
UpdateDivider=-1
Group=WeatherAll

[MeasureSunIcon]
Measure=Calc
Formula=((MeasureSunMoonTime<MeasureSunriseTime)? 10:((MeasureSunMoonTime<(MeasureSunRiseTime+3))? 9:((MeasureSunMoonTime<(MeasureSunRiseTime+5))? 8:((MeasureSunMoonTime<(MeasureSunRiseTime+7))? 7:((MeasureSunMoonTime<(MeasureSunRiseTime+9))? 6:((MeasureSunMoonTime<(MeasureSunRiseTime+11))? 5:((MeasureSunMoonTime<(MeasureSunRiseTime+13))? 4:((MeasureSunMoonTime<(MeasureSunRiseTime+15))? 3:((MeasureSunMoonTime<(MeasureSunRiseTime+17))? 2:((MeasureSunMoonTime<(MeasureSunRiseTime+19))? 1:((MeasureSunMoonTime<(MeasureSunSetTime-19))? 0:((MeasureSunMoonTime<(MeasureSunSetTime-17))? 1:((MeasureSunMoonTime<(MeasureSunSetTime-15))? 2:((MeasureSunMoonTime<(MeasureSunSetTime-13))? 3:((MeasureSunMoonTime<(MeasureSunSetTime-11))? 4:((MeasureSunMoonTime<(MeasureSunSetTime-9))? 5:((MeasureSunMoonTime<(MeasureSunSetTime-7))? 6:((MeasureSunMoonTime<(MeasureSunSetTime-5))? 7:((MeasureSunMoonTime<(MeasureSunSetTime-3))? 8:((MeasureSunMoonTime<MeasureSunSetTime)? 9:((MeasureSunMoonTime>MeasureSunSetTime)? 10: 0)))))))))))))))))))))
OnChangeAction=[!UpdateMeter MeterSunImage][!Redraw]
UpdateDivider=-1
Group=WeatherAll

[MeasurePosX]
Measure=Calc
Formula=Round(164+(22*(Cos(Rad(MeasureSunMoonTime*0.125)))))
OnChangeAction=[!UpdateMeter MeterSunImage][!UpdateMeter MeterMoonImage][!Redraw]
UpdateDivider=-1
Group=WeatherAll

[MeasurePosY]
Measure=Calc
Formula=Round(310-(22*(Sin(Rad(MeasureSunMoonTime*0.125)))))
OnChangeAction=[!UpdateMeter MeterSunImage][!UpdateMeter MeterMoonImage][!Redraw]
UpdateDivider=-1
Group=WeatherAll

;BACKGROUND =============================================================

[MeterDetailsBackground]
Meter=Image
ImageName=#@#Images\AVWeather\DetailsView#Color1#.png
x=4
y=214
AntiAlias=1
Group=GroupDet
UpdateDivider=-1
Hidden=#DetClose#

[MeterTWCIcon]
Meter=Image
ImageName=#@#\Images\AVWeather\TWC_logo.png
x=167r
y=37r
H=35
AntiAlias=1
Group=GroupDet
UpdateDivider=-1
Hidden=#DetClose#

;TITLE TEXT =============================================================

[MeterDetailsLabel]
Meter=String
Text=#TitleDet#
MeterStyle=TextStyle1
StringCase=UPPER
x=25
y=218
UpdateDivider=-1
Hidden=#DetClose#
Group=GroupDet

[MeterCurrentDetails]
Meter=String
Text=#TitleDescr#
MeterStyle=TextStyle1
StringCase=UPPER
FontSize=8
x=r
y=16r
UpdateDivider=-1
Hidden=#DetClose#
Group=GroupDet

;ADDITIONAL LOCATION DATA ===============================================

[MeterVisibilityTxt]
Meter=String
MeasureName=MeasureVisibility
MeasureName2=MeasureVisUnits
MeterStyle=TextStyle1
StringAlign=Left
x=r
y=18r
Text=#Visib#: %1 %2
Hidden=#DetClose#
UpdateDivider=-1
Group=GroupDet| WeatherDet

[MeterFeelsLikeTxt]
Meter=String
MeasureName=MeasureFeelsLike
MeterStyle=TextStyle1
StringAlign=Left
x=r
y=16r
Text=#FeelsL#:  %1° #WFUN#
Hidden=#DetClose#
UpdateDivider=-1
Group=GroupDet| WeatherDet

[MeterSunriseTxt]
Meter=String
MeasureName=MeasureSunrise
MeterStyle=TextStyle1
StringAlign=Left
x=1r
y=22r
Text="#SunR#  %1"
Hidden=#DetClose#
UpdateDivider=-1
Group=GroupDet| WeatherDet

[MeterSunsetTxt]
Meter=String
MeasureName=MeasureSunset
MeterStyle=TextStyle1
StringAlign=Left
x=r
y=16r
Text="#SunS# %1"
Hidden=#DetClose#
UpdateDivider=-1
Group=GroupDet| WeatherDet

;SUN/MOON CURRENT POSITION ==============================================

[MeterMoonImage]
Meter=Image
ImagePath=#@#Images\AVWeather\DetIcons
MeasureName=MeasureMoonIcon
;ImageName=#@#\Images\AVWeather\DetIcons\Det_M[MeasureMoonIcon].png
x=[MeasurePosX]
y=[MeasurePosY]
DynamicVariables=1
Hidden=#DetClose#
UpdateDivider=-1
Group=GroupDet

[MeterSunImage]
Meter=Image
ImageName=#@#\Images\AVWeather\DetIcons\Det_S[MeasureSunIcon].png
x=[MeasurePosX]
y=[MeasurePosY]
DynamicVariables=1
Hidden=#DetClose#
UpdateDivider=-1
Group=GroupDet

;ADDITIONAL PRESSURE DETAILS ============================================

[MeterPressureTxt]
Meter=String
MeasureName=MeasurePressUnits
MeterStyle=TextStyle2
StringAlign=Left
x=233
y=246
Text=#Press##CRLF#       %1
Hidden=#DetClose#
UpdateDivider=-1
Group=GroupDet| WeatherDet

[MeterPressureNow]
Meter=String
MeasureName=MeasurePressureNow
MeterStyle=TextStylePress
x=24r
y=14r
Hidden=#DetClose#
UpdateDivider=-1
Group=GroupDet| WeatherDet

[MeterTendencyTxt]
Meter=String
MeterStyle=TextStyle2
StringAlign=Left
x=-22r
y=24r
Text=#Tend#
Hidden=#DetClose#
UpdateDivider=-1
Group=GroupDet| WeatherDet

[MeterPressureTendencyNow]
Meter=String
MeasureName=MeasurePressureTendency
MeterStyle=TextStyle1
StringAlign=Right
x=36r
y=15r
Hidden=#DetClose#
UpdateDivider=-1
Group=GroupDet| WeatherDet

;BAR ====================================================================

[MeterPressureBar]
Meter=Bar
MeasureName=MeasurePressureForBar
BarImage=#@#\Images\AVWeather\PressBar#Color1#.png
x=217
y=245
AntiAlias=1
Hidden=#DetClose#
Group=GroupDet

;TENDENCY ICON ==========================================================

[MeterDisplayTendency]
Meter=Image
ImagePath=#@#\Images\AVWeather\
MeasureName=MeasurePressureTendencyIcon
x=218
y=282
AntiAlias=1
DynamicVariables=1
Hidden=#DetClose#
UpdateDivider=-1
Group=GroupDet| WeatherDet

;LATITUDE AND LONGITUDE =================================================

[MeterLocalizationLatLon]
Meter=String
MeasureName=MeasurePositionLat
MeasureName2=MeasurePositionLon
MeterStyle=TextStyle1
StringAlign=Center
FontSize=9
x=115
y=326
Text=LOC:  %1  /  %2
Hidden=#DetClose#
UpdateDivider=-1
Group=GroupDet| WeatherDet
