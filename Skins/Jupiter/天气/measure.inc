[WeatherCore]
Measure=Plugin
Plugin=CNWeather
DynamicVariables=1
WeatherType=Today
ItemName=temp_curr
DefaultValue=NA
CityCode=#City#
appkey=#appkey#
sign=#sign#
;=============================今天天气
[MeasureCityName]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=citynm
DefaultValue=NA
;===========↑城市地区
[MeasureTempHigh]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=today
ItemName=temp_high

DefaultValue=NA
;===========最高温度↑
[MeasureTempLow]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=today
ItemName=temp_low
DefaultValue=NA
;===========最低温度↑
[Measureweather]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=weather
DefaultValue=NA
;===============天气
[Measurewinp]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=winp
DefaultValue=NA
;==============风力
[Measurewind]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=wind
DefaultValue=NA
;===================风向
[Measurehumidity]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=humidity
DefaultValue=NA
;=================湿度
[MeasureCurrIcon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=weatid
DefaultValue=NA
DynamicVariables=1
;====天气的id   此处用来获取天气图标

[Measuredays1]
Measure=Time
Format="%Yyear%Bmonth%dday"
Substitute="month":":","year":":","day":"  ","January":"1","February":"2","March":"3","April":"4","May":"5","June":"6","July":"7","August":"8","September":"9","October":"10","November":"11","December":"12"

;=============================明天
[Measuredays]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=1
DefaultValue=NA

;=================日期
[MeasureTodayIcon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=1
DefaultValue=NA
;==========天气id
[MeasureTodayTempHigh]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=1
DefaultValue=NA
;===========最高温度↑

[MeasureTodayTempLow]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=1
DefaultValue=NA

;===========最低温度↑
[MeasureTodayWeather]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weather
Day=1
DefaultValue=NA

;===========天气


[MeasureTodayWind]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=wind
Day=1
DefaultValue=NA

;===========风向
[MeasureTodayWinp]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=winp
Day=1
DefaultValue=NA

;===========风力

[MeasureTodayHumidity]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=humidity
Day=1
DefaultValue=NA

;===========湿度
;=============================后天
[Measuredays2]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=2
DefaultValue=NA
;=================日期
[Measure3Icon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=2
DefaultValue=NA
;==========天气id
[MeasureTodayTempHigh2]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=2
DefaultValue=NA
;===========最高温度↑

[MeasureTodayTempLow2]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=2
DefaultValue=NA

;===========最低温度↑
[MeasureTodayWeather3]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weather
Day=2
DefaultValue=NA

;===========天气


[MeasureTodayWind2]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=wind
Day=2
DefaultValue=NA
[MeasureTodayWinp2]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=winp
Day=2
DefaultValue=NA


;===========风向

[MeasureTodayHumidity2]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=humidity
Day=2
DefaultValue=NA

;===========湿度
;=============================第三天
[Measuredays3]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=3
DefaultValue=NA
;=================日期
[Measure4Icon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=3
DefaultValue=NA

;==========天气id
[MeasureTodayTempHigh3]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=3
DefaultValue=NA
;===========最高温度↑

[MeasureTodayTempLow3]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=3
DefaultValue=NA

;===========最低温度↑
[MeasureTodayWeather4]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weather
Day=3
DefaultValue=NA

;===========天气


[MeasureTodayWind3]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=wind
Day=3
DefaultValue=NA

[MeasureTodayWinp3]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=winp
Day=3
DefaultValue=NA


;===========风向

[MeasureTodayHumidity3]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=humidity
Day=3
DefaultValue=NA

;===========湿度



