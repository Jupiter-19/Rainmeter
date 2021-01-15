
;======== Traduction en FRANÇAIS ======== de fonpaolo.deviantart.com ========

;N'hésitez pas à modifier comme vous le souhaitez la traduction ou si vous trouvez une erreur.

;Si vous voulez, vous pouvez faire une nouvelle traduction dans une autre langue qui n'existe pas dans la liste.
;Utilisez "Language Guide.txt" comme guide pour traduire, copier et coller le texte traduit pour créer la langue correcte traduit.


;RAPPELEZ-VOUS: SAUVER AVEC NOM... avec l'abréviation de langage, par exemple, "Espanol" -> sauver avec nom -> "LanguageES.inc"


[Variables]

;DATE ===========================================

DateMonthList="January":"Janvier","February":"Février","March":"Mars","April":"Avril","May":"Mai","June":"Juin","July":"Juillet","August":"Août","September":"Septembre","October":"Octobre","November":"Novembre","December":"Décembre"

DaysList="Sunday":"Dimanche","Monday":"Lundi","Tuesday":"Mardi","Wednesday":"Mercredi","Thursday":"Jeudi","Friday":"Vendredi","Saturday":"Samedi"

Year=Année

;CALENDAR =======================================

TitleCAL=Calendrier
WeekN=SEMAINE
Nof=de
Days=JOURS
DayTot=JOUR
Rem=RESTANT
Calendar1=Ferme Calendrier
Calendar2=Ouvrir Calendrier
CalendOpt=Inizia mese con
CalendTooltip=Dimanche ou Lundi
DayCal0=Dimanche
DayCal1=Lundi

;Changez les deux premières lettres du jour avec votre traduction, cela fera apparaître le nom des jours dans votre langue.

Day1=Lu
Day2=Ma
Day3=Me
Day4=Je
Day5=Ve
Day6=Sa
Day7=Di

;AV WEATHER =====================================

TitleW=Météo
Weather1=Ferme Météo
Weather2=Ouvrir Météo

Day=Jour
Humidity=Humidité
IndexUV=Indice UV
Night=Nuit
TodayT=Aujourd'hui
TonightT=Ce Soir
Tomorrow=Demain
Updated at=Mis à jour
Wind=Vent
WindGust=Rafales de vent
WindChill=Refroidissement éolien

TitleSat=Vue Satellite
TitleDet=Identification locale
TitleDescr=Détails emplacement actuel

SunR=Lever du soleil  :
SunS=Coucher du soleil:

MoreD1=Exposer détails
MoreD2=Cacher détails
More1=Ouvrir vue satellite
More2=Ferme vue satellite
Lat=Latitude
Lon=Longitude
Press=Pression
Tend=Tendance
Visib=Visibilité
FeelsL=Se sent comme
West=O

DetailedWeatherList="^1$/(..)/(..)":"01/\1/\2","^2$/(..)/(..)":"02/\1\/2","3/(..)/(..)":"03/\1/\2","4/(..)/(..)":"04/\1/\2","5/(..)/(..)":"05/\1/\2","6/(..)/(..)":"06/\1/\2","7/(..)/(..)":"07/\1/\2","8/(..)/(..)":"08/\1/\2","9/(..)/(..)":"09/\1/\2","(\d+)/(\d+)/(\d+) (\d+):(\d+) (\w+)":"le \2/\1/20\3 à \4:\5 \6","12:(..) AM .*$":"0:\1"," AM .*$":"","3:(..) PM .*$":"15:\1","4:(..) PM .*$":"16:\1","5:(..) PM .*$":"17:\1","6:(..) PM .*$":"18:\1","7:(..) PM .*$":"19:\1","8:(..) PM .*$":"20:\1","9:(..) PM .*$":"21:\1","10:(..) PM .*$":"22:\1","11:(..) PM .*$":"23:\1","12:(..) PM .*$":"12:\1","2:(..) PM .*$":"14:\1","1:(..) PM .*$":"13:\1","Low":"Basse","Moderate":"Modéré","High":"Haut","Very High":"Très Haut","Extreme":"Extrême","steady":"constant","rising":"hausse","falling":"chute","rapidly":"","mb":"mb","in":"in","calm":"0","N/A":"-"," CEST":""," CET":""

DetailsList="12:(..) AM":"0:\1"," AM":"","3:(..) PM":"15:\1","4:(..) PM":"16:\1","5:(..) PM":"17:\1","6:(..) PM":"18:\1","7:(..) PM":"19:\1","8:(..) PM":"20:\1","9:(..) PM":"21:\1","10:(..) PM":"22:\1","11:(..) PM":"23:\1","12:(..) PM":"12:\1","2:(..) PM":"14:\1","1:(..) PM":"13:\1"

ConditionsList="T-Storms":"Orages","T-Storm":"Orage","Scattered T-Storms":"Orages épars","Scattered Showers":"Averses éparses","to":"à","Clearing":"Beau Temps","Thunderstorms":"Tonnerre","Heavy T-Storm":"Orages Forts","Windy Rain":"Giboulées","Rain Snow":"Pluie Neigeuse","Sleet":"Neige Fondue","Snow/Rain Icy Mix":"Mélange Neige/Pluie verglaçante","Freezing Drizzle":"Bruine verglaçante","Drizzle":"Bruine","Freezing Rain":"Pluie verglaçante","T-Showers":"Averses orageuses","Showers":"Averses","Light Rain":"Pluie légère","Heavy Rain":"Pluie abondante","Snow Flurries":"Tempête de neige","Grains":"Grêle","Light Snow":"Neige légère","Snowflakes":"Flocons de Neige","Heavy Snow":"Neige abondante","Hail":"Grêle","Dust":"Poudre","Foggy":"Brumeuse","Haze":"Brume légère","Smoke":"Fumée","Fog":"Brouillard","Windy":"Vent","Frigid":"Glacé","Partly Cloudy":"Peu Nuageux","Clouds":"Nuages","Mostly Cloudy":"Plutôt Nuageux","Cloudy":"Nuageux","Clear":"Clair","Sunny":"Ensoleillé","Fair":"Ciel Dégagé","Mostly Clear":"Beau Temps","Mostly Sunny":"Plutôt Ensoleillé","Hot":"Chaud","Isolated Thunder":"Orage Isolés","Scattered Rain":"Pluies éparses","Scattered Snow":"Neige éparse","Windy/Snowy":"Neigeux/Venteux","Snowy":"Neigeux","Ice":"Glace","and":"et","Shower":"Averses","Mostly":"","Scattered":"épars","Partial":"Partiel","Rain":"Pluie","Snow":"Neige","Wind":"Vent","Early ":""," Early":""," Late":"","Late ":"","PM ":"","AM ":"","Sun":"Soleil","Cloud":"Nuageux","Light":"Léger","Snow Shower":"Averses de Neige","Widespread":"Généralisé","Few":"Quelques","Isolated":"Isolé","Mist":"Brume","Thunder":"Orage","with":"avec","in the Vicinity":"dans le voisinage","Clearing":"Clairière","Shallow":"Peu","Heavy":"Fort"

ConditionsListN="T-Storms":"Orages","T-Storm":"Orage","Scattered T-Storms":"Orages épars","Scattered Showers":"Averses éparses","to":"à","Clearing":"Beau Temps","Thunderstorms":"Tonnerre","Heavy T-Storm":"Orages Forts","Windy Rain":"Giboulées","Rain Snow":"Pluie Neigeuse","Sleet":"Neige Fondue","Snow/Rain Icy Mix":"Mélange Neige/Pluie verglaçante","Freezing Drizzle":"Bruine verglaçante","Drizzle":"Bruine","Freezing Rain":"Pluie verglaçante","T-Showers":"Orages","Showers":"Averses","Light Rain":"Pluie légère","Heavy Rain":"Pluie abondante","Snow Flurries":"Tempête de neige","Grains":"Grêle","Light Snow":"Neige légère","Snowflakes":"Flocons de Neige","Heavy Snow":"Neige abondante","Hail":"Grêle","Dust":"Poudre","Foggy":"Brumeuse","Haze":"Brume légère","Smoke":"Fumée","Fog":"Brouillard","Windy":"Vent","Frigid":"Glacé","Partly Cloudy":"Peu Nuageux","Clouds":"Nuages","Mostly Cloudy":"Plutôt Nuageux","Cloudy":"Nuageux","Clear":"Clair","Sunny":"Clair","Fair":"Ciel Dégagé","Mostly Clear":"Beau Temps","Mostly Sunny":"Beau Temps","Hot":"Chaud","Isolated Thunder":"Orage Isolés","Scattered Rain":"Pluies éparses","Scattered Snow":"Neige éparse","Windy/Snowy":"Neigeux/Venteux","Snowy":"Neigeux","Ice":"Glace","and":"et","Shower":"Averses","Mostly":"","Scattered":"épars","Partial":"Partiel","Rain":"Pluie","Snow":"Neige","Wind":"Vent","Early ":""," Early":""," Late":"","Late ":"","PM ":"","AM ":"","Sun":"Clair","Cloud":"Nuageux","Light":"Léger","Snow Shower":"Averses de Neige","Widespread":"Généralisé","Few":"Quelques","Isolated":"Isolé","Mist":"Brume","Thunder":"Orage","with":"avec","in the Vicinity":"dans le voisinage","Clearing":"Clairière","Shallow":"Peu","Heavy":"Fort"

AlertTxt="From:":"de","Until:":"à","jpg":"png","Sun":"Dim","Mon":"Lun","Tue":"Mar","Wed":"Mer","Thu":"Jeu","Fri":"Ven","Sat":"Sam","Feb":"Fév","Apr":"Avr","May":"Mai","Jun":"Juin","Jul":"Jui","Aug":"Aoû","Dec":"Déc"

Upd=Agg.
Hour=à
NoInfo1=Aujourd'hui - Pas de alerte
NoInfo2=Demain      - Pas de alerte
MoreAlert1=Ferme MeteoAlert
MoreAlert2=Ouvrir MeteoAlert

;MUSIC ==========================================

TitleMP=Media
SpectrTitle=Analyseur de spectre
SpectrType1=Complete - pic 1
SpectrType1a=Complete - pic 2
SpectrType1b=Complete - pic 3
SpectrType2=Seuls les bars
SpectrType3=Seul le niveau de crête
SpectrPos=Mettre à jour la position
NoArt="":"Pas de Artiste"
NoAlb="":"Pas de Albums"
NoTrk="":"Pas de Titre"
NoYear="^0$":"Pas de Date"

;SHUTDOWN =======================================

SHDWN=Arrêter
REST=Redémarrer
LGOFF=Déconnecter

;NOTES ==========================================

NoteT=Note
CloseT=Ferme

Note1Txt=Mémo
Note2Txt=à faire
Note3Txt=échéances
Note4Txt=Liste

;FEEDS ==========================================

FeedsT=Feeds
FeedUpdate= Feeds
FeedSrch=Rechercher
FeedUpd=Dernière mise à jour
FeedPost=Publié par
FeedDate="Sun":"Dim","Mon":"Lun","Tue":"Mar","Wed":"Mer","Thu":"Jeu","Fri":"Ven","Sat":"Sam","Feb":"Fév","Apr":"Avr","May":"Mai","Jun":"Juin","Jul":"Jui","Aug":"Aoû","Dec":"Déc","Today":"Aujourd'hui","Yesterday":"Hier","PDT":"","PST":"","GMT":"","T":"","deltawp, p...":"","Statistics:":"","Posted by":"","ago":"Il ya","less than a minute":"moins d'une minute"

;UPTIME =========================================

TitleUPT=Temps passé
Upt1=j
Upt2=h
Upt3=m

UptDet1=Désactiver fenêtre détails
UptDet2=Activer fenêtre détails
UptDet3=Activer détails retractable
UptDet4=Désactiver détails retractable

;TIME ===========================================

InfoCLA1=Activer fermeture automatique
InfoCLA2=Désactiver fermeture automatique
TotTxt=Total
Free=Libre
USBRem=Clic droit#CRLF#pour éjecter

;LAUNCHERS 2 ====================================

SmLTxt1=Désactiver Launchers
SmLTxt2=Activer Launchers

;SYS LAUNCHERS ==================================

Sys1=Système
Sys2=Dispositifs
Sys3=Réseaux
Sys4=Performance
Sys5=Computer
Sys6=Mémoire

;SYS STATISTICS =================================

TitleT=Télémétrie

;DISK STATISTICS ================================

TitleS=Surveillance

Sys7=écrire
Sys8=Lire

;WI-FI STATISTICS ===============================

TitleWF=Connexions
TitleLabel=Système PERFORMANCE MONITORS
HideTitleLabel=Cacher Titre Label
ShowTitleLabel=Exposer Titre Label

Sys9=Signal
Sys10=Upload
Sys11=Download

;AV RECYCLER ====================================

CleanTxt=Vide la Corbeille
TitleREC=Corbeille
REC1=élém.

;SYS MONITOR ====================================

TitleMON=Moniteur
SysTxt1=Réduire
SysTxt2=Agrandir

;RES MONITOR ====================================

TitleRES=System Monitor
Res1=RAM Usé
Res2=Usé
Res3=SWAP Usé
Res4=Batterie
Res5=Statut
BatteryStatus="0":"LIGNE AC","1":"CHARGE","2":"VIDE","3":"BAS","4":"CHARGÉES"

;CPU ============================================

OSYS=système d'exploitation
OpenTask=Ouvrir Task Manager

;NETWORK (Wi-Fi) ================================

TitleNET=WiFi

Net0=Upl.
Net1=Dnl.
Net2=Band
Net3=Protection
Net4=Temps passé

;OPTIONS ========================================

ConfigTxt=CONFIGURATION
SkinTipTxt=(APPUYEZ ENTRER POUR ENREGISTRER CHANGEMENTS)
MusicTxt=(Pour une liste complète de lecteurs de musique et leurs respectifs codecs, consultez la section du plugin NowPlaying de manuel de Rainmeter)
PlayerTxt=Plus utilisé: Nom -> code#CRLF#AIMP - AIMP3      ->  AIMP#CRLF#iTunes                   ->  iTunes#CRLF#MediaMonkey     -> MediaMonkey#CRLF#Winamp               ->  Winamp#CRLF#WindowsMediaPlayer ->   WMP#CRLF#foobar2000          ->  CAD#CRLF#MusicBee             ->  CAD#CRLF#VLC                       ->  CAD
LangTooltip="DE"= Deutch, "EN"= English, "FR"= Francais, "IT"= Italiano #CRLF#Pour créer une nouvelle traduction, allez dans le dossier @Resources, éditer une #CRLF#existant, sauver avec nom... ajoutant l'abréviation de langage

NetTooltip=Mesures en bytes, 500 kb= 524288, 1 Mb= 1048576 #CRLF#2 Mb= 2097152, 4 Mb= 4194304, 6 Mb= 6291456 #CRLF#10 Mb= 10485760, 20Mb= 20971520
NetTimeTooltip=0= Activé, 1= Désactivé
NetCounter=Utilisez compteur
NetShow=* cette option permet et indique la durée totale d'utilisation

HDDTxt=(Les informations affichées en la skin Time)
HDDTooltip=Doit contenir le côlon p. ex "C:"
HDD1Txt=Lettre Disque Primaire
HDD2Txt=Lettre Deuxième Disque
HDD3Txt=Lettre Troisième Disque
HDD4Txt=Lettre Quatrième Disque
HDD5Txt=Lettre Cinquième Disque
HDDOnOffTooltip=Minimum 1, Maximum 5
HDDSTxt=Disques/partitions utilisé
USB1Txt=Lettre Première Drive
USB2Txt=Lettre Deuxième Drive
USB3Txt=Lettre Troisième Drive
USBTooltip=Doit contenir le côlon p. ex "H:", laisser vide si non utilisé
DVDInfo=ATTENTION: insérant un disque, peut provoquer le bloc de Rainmeter pour certaines secondes
RWText=ACTIVITÈ DISQUES: Max Lecture / Écriture
RW1Txt=Disque Primaire
RW2Txt=Autre/s Disque/s
RWOpt1=HDD standard
RWOpt2=HDD gamme haute
RWOpt3=SSD standard
RWOpt4=SSD gamme haute
RWOpt0=Pas de disque

Lang1Txt=LANGUAGE
Lang2Txt=utilisé
ExtCountry="DE":"Deutch","EN":"English","FR":"Francais","IT":"Italiano"

WebN=Nom Site Web
WebAd=Adresse Web
WebTxt=Pour ouvrir vos six sites préférés directement à partir de la skin Time.

FeedDelayTxt=Temps alternance        secondes
FeedRotTxt=Activer/Désactiver rotation pages
FeedDelayTooltip=Durée affichage d'une page#CRLF#avant de passer à la prochaine

ShTagTooltip=Maximum 27 caractères lorsqu'il est utilisé sans PLUS D'INFO#CRLF#Maximum 12 caractères chacune lorsque les deux utilisé
ShTagTooltip1=Maximum 12 caractères

CloseLL1Txt0=Désactivé Launcher
CloseLL1Txt1=Activé Launcher
CloseLL1Explain=Launcher Désactivé#CRLF#Utiliser la commande à droite

ChPathTxt=Changer chemin entre Application et Dossier
ChFileTxt=Chemin d'application
ChFolderTxt=Chemin du dossier

LLLabel=Nom de l'application
LLLabel2=Nom de dossier
LLAppP=Chemin d'application
LLAppP2=Chemin du dossier
LLIco=Choisir une icône

ProgramNum=Instances programme *              (Minimum 1, Maximum 4)
ProgramNumExpl=* Limite MAXIMALE d'instances du programme actif en même temps, si ce est permis par le programme.

FLD1L=DOSSIER 1 - LISTE
FLDN=Nom
Folder=DOSSIER
FLDNam=Nom de dossier
FLDPat=Chemin du dossier
FLD7L=DOSSIER 7 - LISTE

SHTagTitle=Titre options
SHTagTop1=S.H.I.E.L.D. OS
SHTagTop2=Date complète
SHTagOth=PLUS D'INFO
ShTagOpt=Visualiser Icon
ShTag0=Image
ShTag1=Texte
ShTagIco=Choisissez l'image
ShTagT=Saisissez du texte
SHTagTxt=(Ici, vous pouvez ajouter votre nom et d'autres informations affichées au bas de la skin S.H.I.E.L.D. Tag)

WeatUn1=°C Celsius
WeatUn2=°F Farhenheit
WeatCod=Code Localité
UpdFr=Mise à jour
SEC=secondes

WeatAttn=IMPORTANT! Réglez cette section APRÈS vous configurez TOUT LE RESTE, si vous êtes connecté à Internet.
WeatTXt1=*ATTENTION! Une requête est envoyée au serveur du météo avec cette fréquence! Utilisez 1800 (30 minutes, minimum), 2700 (45 minutes), 3600 (1 heure) ou plus. MAINTENIR les paramètres d'origine, peut être BLOQUE ou INTERDIT du site si vous envoyez trop de demandes de mise à jour!
WeatTxt2=(Pour trouver le Code de votre localité: allez à http://www.weather.com et recherchez votre ville. Une fois dans la page web, aller à la barre d'adresse et copiez le code à 8 chiffres (par exemple - FRXX0076), et collez-le dans le code de localisation. Pour les données météo, Vous pouvez également modifier le site, http://weather.yahoo.com ou autre, mais avec prudence, parce que le format de l'information peut ne pas être utilisable)

SySMonTxt=Utilisez Speedfan pour lire informations sur le matériel. Allez à http://www.almico.com/speedfan.php. Installez le programme, cliquez "Exotics", si ne voyez rien cliquez "Show the magic" trouver les éléments à afficher.#CRLF#Le premier, dans haut à gauche, est "Fan 0", ce qui suit à droit est "Fan 1" et ainsi de suite.

SySUn=UNITÉS (°C ou °F)
SysUnTxt=Il faut être comme les réglages en SpeedFan.
SensorN=NUMÉRO CAPTEUR
NOSensors=Désactiver

SysAlTxt=RÉGLAGE ALARMES DE TEMPERATURE SURCHAUFFE
FanAlTxt=RÉGLAGE ALARMES MINIMUM ROTATION FAN
CPUFLw=RPM minimum

FanTxt=Quand un capteur atteint la valeur d'alerte, le meter correspondant devient rouge.
SoundAlm=ALARMES SONORES
AlarmSTemp=Alarme température
AlarmSFan=Alarme fans
AlarmTempTxt=* Sélectionnez le son .wav à utiliser pour les signaux sonores, laissez en blanc si non utilisé.
CPUCoresTxt1=Pour vérifier le nombre de Core de CPU, cliquez
CPUCoresTxt2=section RENDEMENT, compter le nombre de fenêtres, à droite de UTILISATION CPU, chaque fenêtre est un Core.
CPUOptTxt=Graphique CPU
CPUTxt1=CPU et Core
CPUTxt2=Seulement Core

;UTILITY BUTTONS ================================

TitleUB2=Chercher
TitleUB3=Manuel
Search1=Recherche fichiers et programmes
Search2=Recherche sur Internet
TitleList=Options de recherche
Comm1List=Recherche sur PC
Comm2List=Rechercher Google
Comm3List=Rechercher Yahoo
Comm4List=Rechercher Bing
