[InputCityCode]
Measure=Plugin
Plugin=InputText
SolidColor=76A0E8FF
FontColor=255,255,255
FontFace=HelvLight Regular
StringStyle=Italic
FontSize=10
X=350
Y=230
W=150
H=20
DefaultValue="³ÇÊÐÆ´Òô»òºº×Ö..."
Command1=!WriteKeyValue Variables CityCode "$UserInput$"
Command2=!Refresh

[WeatherCore]
Measure=Plugin
Plugin=CNWeather
CityCode=#CityCode#
DynamicVariables=1
WeatherType=Today
ItemName=temp_curr
DefaultValue=NA

[MeasureCityName]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=citynm
DefaultValue=NA

[WeatherHumi]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=humidity
DefaultValue=NA

[WeatherWinp]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=winp
DefaultValue=NA

[WeatherWind]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=wind
DefaultValue=NA

[MeasureCurrIcon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=weatid
DefaultValue=NA

[MeasureTodayIcon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=0
DefaultValue=NA

[MeasureTodayTempHigh]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=0
DefaultValue=NA

[MeasureTodayTempLow]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=0
DefaultValue=NA

[MeasureTodayWeather]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weather
Day=0
DefaultValue=NA

[MeasureTodayWind]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=wind
Day=0
DefaultValue=NA

[MeasureTodayHumidity]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=humidity
Day=0
DefaultValue=NA

[MeasureOneIcon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=1
DefaultValue=NA

[MeasureOneTempHigh]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=1
DefaultValue=NA

[MeasureOneTempLow]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=1
DefaultValue=NA

[MeasureOneWeather]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weather
Day=1
DefaultValue=NA

[MeasureOneWind]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=wind
Day=1
DefaultValue=NA

[MeasureOneHumidity]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=humidity
Day=1
DefaultValue=NA

[MeasureTwoIcon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=2
DefaultValue=NA

[MeasureThreeIcon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=3
DefaultValue=NA

[MeasureFourIcon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=4
DefaultValue=NA

[MeasureFiveIcon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=5
DefaultValue=NA

[MeasureSixIcon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=6
DefaultValue=NA

[MeasureTwoTempHigh]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=2
DefaultValue=NA

[MeasureTwoTempLow]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=2
DefaultValue=NA

[MeasureThreeTempHigh]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=3
DefaultValue=NA

[MeasureThreeTempLow]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=3
DefaultValue=NA

[MeasureFourTempHigh]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=4
DefaultValue=NA

[MeasureFourTempLow]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=4
DefaultValue=NA

[MeasureFiveTempHigh]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=5
DefaultValue=NA

[MeasureFiveTempLow]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=5
DefaultValue=NA

[MeasureSixTempHigh]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=6
DefaultValue=NA

[MeasureSixTempLow]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=6
DefaultValue=NA

[MeasureTwoWeather]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weather
Day=2
DefaultValue=NA

[MeasureTwoWind]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=wind
Day=2
DefaultValue=NA

[MeasureTwoHumidity]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=humidity
Day=2
DefaultValue=NA

[MeasureThreeWeather]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weather
Day=3
DefaultValue=NA

[MeasureThreeWind]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=wind
Day=3
DefaultValue=NA

[MeasureThreeHumidity]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=humidity
Day=3
DefaultValue=NA

[MeasureFourWeather]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weather
Day=4
DefaultValue=NA

[MeasureFourWind]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=wind
Day=4
DefaultValue=NA

[MeasureFourHumidity]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=humidity
Day=4
DefaultValue=NA

[MeasureFiveWeather]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weather
Day=5
DefaultValue=NA

[MeasureFiveWind]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=wind
Day=5
DefaultValue=NA

[MeasureFiveHumidity]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=humidity
Day=5
DefaultValue=NA

[MeasureSixWeather]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weather
Day=6
DefaultValue=NA

[MeasureSixWind]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=wind
Day=6
DefaultValue=NA

[MeasureSixHumidity]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=humidity
Day=6
DefaultValue=NA

[MeasureTodayDate]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=0
DefaultValue=NA

[MeasureOneDate]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=1
DefaultValue=NA

[MeasureTwoDate]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=2
DefaultValue=NA

[MeasureThreeDate]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=3
DefaultValue=NA

[MeasureFourDate]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=4
DefaultValue=NA

[MeasureFiveDate]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=5
DefaultValue=NA

[MeasureSixDate]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=6
DefaultValue=NA

[MeasureAirLv]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Aqi
ItemName=aqi_levnm
DefaultValue=NA

[MeasureAirRemark]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Aqi
ItemName=aqi_remark
DefaultValue=NA
