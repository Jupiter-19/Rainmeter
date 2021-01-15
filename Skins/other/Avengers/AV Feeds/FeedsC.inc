
;========================================================================;
;                             FEEDS PAGE 3                               ;
;========================================================================;

;FEED PAGE TITLE ========================================================

[MeasureFeedTitleRSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds3]
RegExp=(?siU)(?(?=.*<title>).*<title>(.*)</title>)
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedTitleRSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedTitleRSSDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedTitleAtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds3]
RegExp=(?siU)(?(?=.*<title.*>).*<title.*>(.*)</title>)
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedTitleAtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedTitleAtomDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedTitleOPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds3]
RegExp=(?siU)(?(?=.*<title>).*<head>.*<title>(.*)</title>.*</head>)
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedTitleOPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedTitleOPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEED PAGE LINK =========================================================

[MeasureFeedLinkRSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds3]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedLinkRSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkRSSDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="^(.*)/.*$":"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedLinkAtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds3]
RegExp=(?siU)^(.*)<entry>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedLinkAtomData1C]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomDataC]
RegExp=(?siU).*<link(.*)/>
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedLinkAtomData2C]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomDataC]
RegExp=(?siU).*<link(.*)/>.*<link(.*)/>
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedLinkAtomData3C]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomDataC]
RegExp=(?siU).*<link(.*)/>.*<link(.*)/>.*<link(.*)/>
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedLinkAtom1C]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomData1C]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute='^.*rel="self".*$':"",'^.*rel="hub".*$':"",'^.*href="(.*)"':"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedLinkAtom2C]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomData2C]
StringIndex=2
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute='^.*rel="self".*$':"",'^.*rel="hub".*$':"",'^.*href="(.*)"':"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedLinkAtom3C]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomData3C]
StringIndex=3
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute='^.*rel="self".*$':"",'^.*rel="hub".*$':"",'^.*href="(.*)"':"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedLinkOPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds3]
RegExp=(?siU)(?(?=.*<title>).*<head>.*<link>(.*)</link>.*</head>)
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedLinkOPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkOPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEEDS ITEM =============================================================

[MeasureItem10RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds3]
RegExp=(?siU).*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureItem10RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds3]
RegExp=(?siU).*</items>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureItem10AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds3]
RegExp=(?siU).*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureItem10OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds3]
RegExp=(?siU).*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEEDS RSS TITLE ========================================================

[MeasureTitle1RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=1
DecodeCharacterReference=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle1RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1RSSDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle2RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle2RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2RSSDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle3RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle3RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3RSSDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle4RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle4RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4RSSDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle5RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle5RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5RSSDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle6RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle6RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6RSSDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle7RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle7RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7RSSDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle8RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle8RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8RSSDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle9RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle9RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9RSSDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle10RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle10RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10RSSDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEEDS RSS LINK =========================================================

[MeasureLink1RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink1RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink1RSSDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink2RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink2RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink2RSSDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink3RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink3RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink3RSSDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink4RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink4RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink4RSSDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink5RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink5RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink5RSSDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink6RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink6RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink6RSSDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink7RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink7RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink7RSSDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink8RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink8RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink8RSSDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink9RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink9RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink9RSSDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink10RSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink10RSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink10RSSDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

;LAST FEED RSS DATA =====================================================

[MeasureFeedRSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePubDateRSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataC]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublisherRSSDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<media:credit role="author" scheme="urn:ebu">(.*)</media:credit>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublisherRSSC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublisherRSSDataC]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

;------------------------------------------------------------------------

[MeasureFeedRSSDataC1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePubDateRSSC1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataC1]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedRSSDataC2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePubDateRSSC2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataC2]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedRSSDataC3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePubDateRSSC3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataC3]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedRSSDataC4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePubDateRSSC4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataC4]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedRSSDataC5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePubDateRSSC5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataC5]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedRSSDataC6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePubDateRSSC6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataC6]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedRSSDataC7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePubDateRSSC7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataC7]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedRSSDataC8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePubDateRSSC8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataC8]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureFeedRSSDataC9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSC]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePubDateRSSC9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataC9]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEEDS RDF TITLE ========================================================

[MeasureTitle1RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle1RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1RDFDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle2RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle2RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2RDFDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle3RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle3RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3RDFDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle4RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle4RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4RDFDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle5RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle5RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5RDFDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle6RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle6RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6RDFDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle7RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle7RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7RDFDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle8RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle8RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8RDFDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle9RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle9RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9RDFDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle10RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle10RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10RDFDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEEDS RDF LINK =========================================================

[MeasureLink1RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink1RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink1RDFDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink2RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink2RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink2RDFDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink3RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink3RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink3RDFDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink4RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink4RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink4RDFDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink5RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink5RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink5RDFDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink6RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink6RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink6RDFDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink7RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink7RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink7RDFDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink8RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink8RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink8RDFDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink9RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink9RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink9RDFDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink10RDFDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFC]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink10RDFC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink10RDFDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEEDS ATOM TITLE =======================================================

[MeasureTitle1AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle1AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1AtomDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle2AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle2AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2AtomDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle3AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle3AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3AtomDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle4AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle4AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4AtomDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle5AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle5AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5AtomDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle6AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle6AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6AtomDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle7AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle7AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7AtomDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle8AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle8AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8AtomDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle9AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle9AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9AtomDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle10AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle10AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10AtomDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEEDS ATOM LINK ========================================================

[MeasureLink1AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink1AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink1AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink2AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink2AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink2AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink3AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink3AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink3AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink4AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink4AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink4AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink5AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink5AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink5AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink6AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink6AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink6AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink7AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink7AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink7AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink8AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink8AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink8AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink9AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink9AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink9AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink10AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink10AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink10AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEEDS ATOM ID ==========================================================

[MeasureID1AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID1AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID1AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID2AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID2AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID2AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID3AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID3AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID3AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID4AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID4AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID4AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID5AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID5AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID5AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID6AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID6AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID6AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID7AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID7AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID7AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID8AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID8AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID8AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID9AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID9AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID9AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID10AtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureID10AtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID10AtomDataC]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

;LAST FEED ATOM DATA ====================================================

[MeasurePublishedAtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataC]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublisherAtomDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*<a href="">(.*)</a>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublisherAtomC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublisherAtomDataC]
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

;------------------------------------------------------------------------

[MeasurePublishedAtomDataC1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomC1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataC1]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomDataC2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomC2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataC2]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomDataC3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomC3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataC3]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomDataC4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomC4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataC4]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomDataC5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomC5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataC5]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomDataC6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomC6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataC6]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomDataC7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomC7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataC7]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomDataC8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomC8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataC8]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomDataC9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomC]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasurePublishedAtomC9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataC9]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEEDS OPML TITLE =======================================================

[MeasureTitle1OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle1OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle2OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle2OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle3OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle3OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle4OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle4OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle5OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle5OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle6OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle6OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle7OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle7OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle8OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle8OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle9OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle9OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle10OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle10OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEEDS OPML HTML LINK ===================================================

[MeasureHTMLURL1OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL1OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL1OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL2OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL2OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL2OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL3OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL3OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL3OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL4OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL4OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL4OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL5OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL5OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL5OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL6OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL6OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL6OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL7OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL7OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL7OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL8OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL8OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL8OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL9OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL9OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL9OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL10OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureHTMLURL10OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL10OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEEDS OPML XML LINK ====================================================

[MeasureXMLURL1OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL1OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL1OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL2OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL2OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL2OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL3OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL3OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL3OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL4OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL4OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL4OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL5OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL5OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL5OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL6OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL6OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL6OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL7OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL7OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL7OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL8OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL8OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL8OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL9OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL9OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL9OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL10OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureXMLURL10OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL10OPMLDataC]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEEDS OPML TEXT ========================================================

[MeasureText1OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText1OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText1OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText2OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText2OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText2OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText3OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText3OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText3OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText4OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText4OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText4OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText5OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText5OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText5OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText6OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText6OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText6OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText7OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText7OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText7OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText8OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText8OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText8OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText9OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText9OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText9OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText10OPMLDataC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLC]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureText10OPMLC]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText10OPMLDataC]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEEDS TITLE DISPLAYED ==================================================

[MeasureTitleFeedC]
Measure=Calc
Formula=1
Substitute="1":"[MeasureFeedTitleRSSC]","":"[MeasureFeedTitleAtomC]","":"[MeasureFeedTitleOPMLC]","":"#FeedSrch#…","€€€€":'"',"0":"#FeedSrch#…"
OnUpdateAction=[!UpdateMeasure MeasureTitleFeedCTxtNum][!UpdateMeter MeterTitleCBackground][!UpdateMeter MeterTitleC]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitleFeedCTxtNum]
Measure=String
String=[MeasureTitleFeedC]
RegExpSubstitute=1
Substitute="(.)":"+6.15"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLinkFeedC]
Measure=Calc
Formula=1
Substitute="1":"[MeasureFeedLinkRSSC]","":"[MeasureFeedLinkAtom1C]","":"[MeasureFeedLinkAtom2C]","":"[MeasureFeedLinkAtom3C]","":"[MeasureFeedLinkOPMLC]","€€€€":'"'
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle1C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle1RSSC]","":"[MeasureTitle1RDFC]","":"[MeasureTitle1AtomC]","":"[MeasureTitle1OPMLC]","":"[MeasureText1OPMLC]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine1C]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink1C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink1RSSC]","":"[MeasureLink1RDFC]","":"[MeasureLink1AtomC]","":"[MeasureHTMLURL1OPMLC]","":"[MeasureXMLURL1OPMLC]","":"[MeasureID1AtomC]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle2C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle2RSSC]","":"[MeasureTitle2RDFC]","":"[MeasureTitle2AtomC]","":"[MeasureTitle2OPMLC]","":"[MeasureText2OPMLC]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine2C]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink2C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink2RSSC]","":"[MeasureLink2RDFC]","":"[MeasureLink2AtomC]","":"[MeasureHTMLURL2OPMLC]","":"[MeasureXMLURL2OPMLC]","":"[MeasureID2AtomC]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle3C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle3RSSC]","":"[MeasureTitle3RDFC]","":"[MeasureTitle3AtomC]","":"[MeasureTitle3OPMLC]","":"[MeasureText3OPMLC]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine3C]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink3C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink3RSSC]","":"[MeasureLink3RDFC]","":"[MeasureLink3AtomC]","":"[MeasureHTMLURL3OPMLC]","":"[MeasureXMLURL3OPMLC]","":"[MeasureID3AtomC]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle4C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle4RSSC]","":"[MeasureTitle4RDFC]","":"[MeasureTitle4AtomC]","":"[MeasureTitle4OPMLC]","":"[MeasureText4OPMLC]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine4C]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink4C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink4RSSC]","":"[MeasureLink4RDFC]","":"[MeasureLink4AtomC]","":"[MeasureHTMLURL4OPMLC]","":"[MeasureXMLURL4OPMLC]","":"[MeasureID4AtomC]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle5C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle5RSSC]","":"[MeasureTitle5RDFC]","":"[MeasureTitle5AtomC]","":"[MeasureTitle5OPMLC]","":"[MeasureText5OPMLC]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine5C]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink5C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink5RSSC]","":"[MeasureLink5RDFC]","":"[MeasureLink5AtomC]","":"[MeasureHTMLURL5OPMLC]","":"[MeasureXMLURL5OPMLC]","":"[MeasureID5AtomC]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle6C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle6RSSC]","":"[MeasureTitle6RDFC]","":"[MeasureTitle6AtomC]","":"[MeasureTitle6OPMLC]","":"[MeasureText6OPMLC]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine6C]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink6C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink6RSSC]","":"[MeasureLink6RDFC]","":"[MeasureLink6AtomC]","":"[MeasureHTMLURL6OPMLC]","":"[MeasureXMLURL6OPMLC]","":"[MeasureID6AtomC]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle7C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle7RSSC]","":"[MeasureTitle7RDFC]","":"[MeasureTitle7AtomC]","":"[MeasureTitle7OPMLC]","":"[MeasureText7OPMLC]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine7C]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink7C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink7RSSC]","":"[MeasureLink7RDFC]","":"[MeasureLink7AtomC]","":"[MeasureHTMLURL7OPMLC]","":"[MeasureXMLURL7OPMLC]","":"[MeasureID7AtomC]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle8C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle8RSSC]","":"[MeasureTitle8RDFC]","":"[MeasureTitle8AtomC]","":"[MeasureTitle8OPMLC]","":"[MeasureText8OPMLC]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine8C]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink8C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink8RSSC]","":"[MeasureLink8RDFC]","":"[MeasureLink8AtomC]","":"[MeasureHTMLURL8OPMLC]","":"[MeasureXMLURL8OPMLC]","":"[MeasureID8AtomC]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle9C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle9RSSC]","":"[MeasureTitle9RDFC]","":"[MeasureTitle9AtomC]","":"[MeasureTitle9OPMLC]","":"[MeasureText9OPMLC]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine9C]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink9C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink9RSSC]","":"[MeasureLink9RDFC]","":"[MeasureLink9AtomC]","":"[MeasureHTMLURL9OPMLC]","":"[MeasureXMLURL9OPMLC]","":"[MeasureID9AtomC]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureTitle10C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle10RSSC]","":"[MeasureTitle10RDFC]","":"[MeasureTitle10AtomC]","":"[MeasureTitle10OPMLC]","":"[MeasureText10OPMLC]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine10C]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLink10C]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink10RSSC]","":"[MeasureLink10RDFC]","":"[MeasureLink10AtomC]","":"[MeasureHTMLURL10OPMLC]","":"[MeasureXMLURL10OPMLC]","":"[MeasureID10AtomC]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

;FEEDS PUBLICATION DATE =================================================

[MeasureLastPubDateC]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSC]","":"[MeasurePublishedAtomC]","":"No info","+0000":""
OnUpdateAction=[!UpdateMeter MeterPubDateC]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLastPubDateC1]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSC1]","":"[MeasurePublishedAtomC1]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLastPubDateC2]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSC2]","":"[MeasurePublishedAtomC2]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLastPubDateC3]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSC3]","":"[MeasurePublishedAtomC3]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLastPubDateC4]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSC4]","":"[MeasurePublishedAtomC4]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLastPubDateC5]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSC5]","":"[MeasurePublishedAtomC5]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLastPubDateC6]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSC6]","":"[MeasurePublishedAtomC6]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLastPubDateC7]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSC7]","":"[MeasurePublishedAtomC7]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLastPubDateC8]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSC8]","":"[MeasurePublishedAtomC8]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

[MeasureLastPubDateC9]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSC9]","":"[MeasurePublishedAtomC9]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

;LAST FEEDS PUBLISHER ===================================================

[MeasureLastPublisherC]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePublisherRSSC]","":"[MeasurePublisherAtomC]","":"No info"
OnUpdateAction=[!UpdateMeter MeterPublisherC]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsC

;TEXT METERS ============================================================

[MeterTitleCBackground]
Meter=Image
ImageName=#@#Images\AV Feeds\FeedsTitle.png
x=19
Y=28
W=([MeasureTitleFeedCTxtNum]<220? ([MeasureTitleFeedCTxtNum]<100? 100: [MeasureTitleFeedCTxtNum]): 220)
H=14
Scalemargins=3,3,3,3
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsC

[MeterTitleC]
Meter=String
MeasureName=MeasureTitleFeedC
MeterStyle=TextStyle
x=24
y=27
W=(([MeasureTitleFeedCTxtNum]<220)? [MeasureTitleFeedCTxtNum] :220)
H=18
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLinkFeedC]"][!DisableMeasure CounterRot][!HideMeter MeterFeedButton1 "Avengers\AV Feeds Button"][!Hide "Avengers\AV Feeds"][!ShowMeter MeterFeedButton2 "Avengers\AV Feeds Button"][!Update "Avengers\AV Feeds Button"][!Redraw]
ToolTipType=0
TooltipText=[MeasureTitleFeedC]
ClipString=2
ClipStringW=208
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsC

[MeterLine1C]
Meter=String
MeasureName=MeasureTitle1C
MeterStyle=TextStyle1
x=-9r
y=51
W=240
H=18
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink1C]"]
ToolTipType=0
TooltipText=[MeasureTitle1C]#CRLF#([MeasureLastPubDateC])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsC

[MeterLine2C]
Meter=String
MeasureName=MeasureTitle2C
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink2C]"]
ToolTipType=0
TooltipText=[MeasureTitle2C]#CRLF#([MeasureLastPubDateC1])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsC

[MeterLine3C]
Meter=String
MeasureName=MeasureTitle3C
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink3C]"]
ToolTipType=0
TooltipText=[MeasureTitle3C]#CRLF#([MeasureLastPubDateC2])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsC

[MeterLine4C]
Meter=String
MeasureName=MeasureTitle4C
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink4C]"]
ToolTipType=0
TooltipText=[MeasureTitle4C]#CRLF#([MeasureLastPubDateC3])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsC

[MeterLine5C]
Meter=String
MeasureName=MeasureTitle5C
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink5C]"]
ToolTipType=0
TooltipText=[MeasureTitle5C]#CRLF#([MeasureLastPubDateC4])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsC

[MeterLine6C]
Meter=String
MeasureName=MeasureTitle6C
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink6C]"]
ToolTipType=0
TooltipText=[MeasureTitle6C]#CRLF#([MeasureLastPubDateC5])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsC

[MeterLine7C]
Meter=String
MeasureName=MeasureTitle7C
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink7C]"]
ToolTipType=0
TooltipText=[MeasureTitle7C]#CRLF#([MeasureLastPubDateC6])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsC

[MeterLine8C]
Meter=String
MeasureName=MeasureTitle8C
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink8C]"]
ToolTipType=0
TooltipText=[MeasureTitle8C]#CRLF#([MeasureLastPubDateC7])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsC

[MeterLine9C]
Meter=String
MeasureName=MeasureTitle9C
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink9C]"]
ToolTipType=0
TooltipText=[MeasureTitle9C]#CRLF#([MeasureLastPubDateC8])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsC

[MeterLine10C]
Meter=String
MeasureName=MeasureTitle10C
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink10C]"]
ToolTipType=0
TooltipText=[MeasureTitle10C]#CRLF#([MeasureLastPubDateC9])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsC

[MeterPubDateC]
Meter=String
MeasureName=MeasureLastPubDateC
MeterStyle=TextStyle1
FontSize=8
x=-4r
y=24r
W=220
H=14
Text=#FeedUpd#: %1
ClipString=1
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsC

[MeterPublisherCTxt]
Meter=String
MeterStyle=TextStyle1
FontSize=8
x=r
y=19r
W=220
H=14
Text=#FeedPost#:
ClipString=1
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsC

[MeterPublisherC]
Meter=String
MeasureName=MeasureLastPublisherC
MeterStyle=TextStyle1
FontSize=9
x=63
y=-1r
W=95
H=14
ClipString=1
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsC
