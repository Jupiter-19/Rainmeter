
;========================================================================;
;                             FEEDS PAGE 1                               ;
;========================================================================;

;FEED PAGE TITLE ========================================================

[MeasureFeedTitleRSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds1]
RegExp=(?siU)(?(?=.*<title>).*<title>(.*)</title>)
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedTitleRSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedTitleRSSDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedTitleAtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds1]
RegExp=(?siU)(?(?=.*<title.*>).*<title.*>(.*)</title>)
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedTitleAtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedTitleAtomDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedTitleOPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds1]
RegExp=(?siU)(?(?=.*<title>).*<head>.*<title>(.*)</title>.*</head>)
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedTitleOPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedTitleOPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEED PAGE LINK =========================================================

[MeasureFeedLinkRSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds1]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedLinkRSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkRSSDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="^(.*)/.*$":"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedLinkAtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds1]
RegExp=(?siU)^(.*)<entry>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedLinkAtomData1A]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomDataA]
RegExp=(?siU).*<link(.*)/>
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedLinkAtom1A]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomData1A]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute='^.*rel="self".*$':"",'^.*rel="hub".*$':"",'^.*href="(.*)"':"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedLinkAtomData2A]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomDataA]
RegExp=(?siU).*<link(.*)/>.*<link(.*)/>
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedLinkAtom2A]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomData2A]
StringIndex=2
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute='^.*rel="self".*$':"",'^.*rel="hub".*$':"",'^.*href="(.*)"':"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedLinkAtomData3A]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomDataA]
RegExp=(?siU).*<link(.*)/>.*<link(.*)/>.*<link(.*)/>
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedLinkAtom3A]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomData3A]
StringIndex=3
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute='^.*rel="self".*$':"",'^.*rel="hub".*$':"",'^.*href="(.*)"':"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedLinkOPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds1]
RegExp=(?siU)(?(?=.*<title>).*<head>.*<link>(.*)</link>.*</head>)
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedLinkOPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkOPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEEDS ITEM =============================================================

[MeasureItem10RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds1]
RegExp=(?siU).*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureItem10RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds1]
RegExp=(?siU).*</items>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureItem10AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds1]
RegExp=(?siU).*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureItem10OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds1]
RegExp=(?siU).*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEEDS RSS TITLE ========================================================

[MeasureTitle1RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=1
DecodeCharacterReference=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle1RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1RSSDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle2RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle2RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2RSSDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle3RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle3RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3RSSDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle4RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle4RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4RSSDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1

[MeasureTitle5RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle5RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5RSSDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle6RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle6RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6RSSDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle7RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle7RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7RSSDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle8RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle8RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8RSSDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle9RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle9RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9RSSDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle10RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle10RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10RSSDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEEDS RSS LINK =========================================================

[MeasureLink1RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink1RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink1RSSDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink2RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink2RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink2RSSDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink3RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink3RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink3RSSDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink4RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink4RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink4RSSDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink5RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink5RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink5RSSDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink6RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink6RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink6RSSDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink7RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink7RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink7RSSDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink8RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink8RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink8RSSDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink9RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink9RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink9RSSDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink10RSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink10RSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink10RSSDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

;LAST FEED RSS DATA =====================================================

[MeasureFeedRSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePubDateRSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataA]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublisherRSSDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<media:credit role="author" scheme="urn:ebu">(.*)</media:credit>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublisherRSSA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublisherRSSDataA]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

;------------------------------------------------------------------------

[MeasureFeedRSSDataA1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePubDateRSSA1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataA1]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedRSSDataA2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePubDateRSSA2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataA2]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedRSSDataA3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePubDateRSSA3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataA3]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedRSSDataA4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePubDateRSSA4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataA4]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedRSSDataA5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePubDateRSSA5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataA5]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedRSSDataA6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePubDateRSSA6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataA6]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedRSSDataA7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePubDateRSSA7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataA7]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedRSSDataA8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePubDateRSSA8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataA8]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureFeedRSSDataA9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSA]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePubDateRSSA9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataA9]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEEDS RDF TITLE ========================================================

[MeasureTitle1RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle1RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1RDFDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle2RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle2RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2RDFDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle3RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle3RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3RDFDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle4RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle4RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4RDFDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle5RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle5RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5RDFDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle6RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle6RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6RDFDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle7RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle7RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7RDFDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle8RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle8RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8RDFDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle9RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle9RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9RDFDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle10RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle10RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10RDFDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEEDS RDF LINK =========================================================

[MeasureLink1RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink1RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink1RDFDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink2RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink2RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink2RDFDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink3RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink3RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink3RDFDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink4RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink4RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink4RDFDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink5RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink5RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink5RDFDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink6RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink6RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink6RDFDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink7RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink7RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink7RDFDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink8RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink8RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink8RDFDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink9RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink9RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink9RDFDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink10RDFDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFA]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink10RDFA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink10RDFDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEEDS ATOM TITLE =======================================================

[MeasureTitle1AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle1AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1AtomDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle2AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle2AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2AtomDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle3AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle3AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3AtomDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle4AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle4AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4AtomDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle5AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle5AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5AtomDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle6AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle6AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6AtomDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle7AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle7AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7AtomDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle8AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle8AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8AtomDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle9AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle9AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9AtomDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle10AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle10AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10AtomDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEEDS ATOM LINK ========================================================

[MeasureLink1AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink1AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink1AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink2AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink2AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink2AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink3AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink3AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink3AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink4AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink4AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink4AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink5AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink5AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink5AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink6AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink6AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink6AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink7AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink7AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink7AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink8AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink8AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink8AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink9AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink9AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink9AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink10AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink10AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink10AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEEDS ATOM ID ==========================================================

[MeasureID1AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID1AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID1AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID2AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID2AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID2AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID3AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID3AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID3AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID4AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID4AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID4AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID5AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID5AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID5AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID6AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID6AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID6AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID7AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID7AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID7AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID8AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID8AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID8AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID9AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID9AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID9AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID10AtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureID10AtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID10AtomDataA]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

;LAST FEED ATOM DATA ====================================================

[MeasurePublishedAtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataA]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublisherAtomDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*<a href="">(.*)</a>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublisherAtomA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublisherAtomDataA]
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

;------------------------------------------------------------------------

[MeasurePublishedAtomDataA1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomA1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataA1]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomDataA2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomA2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataA2]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomDataA3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomA3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataA3]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomDataA4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomA4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataA4]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomDataA5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomA5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataA5]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomDataA6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomA6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataA6]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomDataA7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomA7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataA7]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomDataA8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomA8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataA8]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomDataA9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomA]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasurePublishedAtomA9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataA9]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEEDS OPML TITLE =======================================================

[MeasureTitle1OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle1OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle2OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle2OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle3OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle3OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle4OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle4OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle5OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle5OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle6OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle6OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle7OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle7OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle8OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle8OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle9OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle9OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle10OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle10OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEEDS OPML HTML LINK ===================================================

[MeasureHTMLURL1OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL1OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL1OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL2OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL2OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL2OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL3OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL3OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL3OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL4OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL4OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL4OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL5OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL5OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL5OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL6OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL6OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL6OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL7OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL7OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL7OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL8OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL8OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL8OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL9OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL9OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL9OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL10OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureHTMLURL10OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL10OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEEDS OPML XML LINK ====================================================

[MeasureXMLURL1OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL1OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL1OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL2OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL2OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL2OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL3OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL3OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL3OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL4OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL4OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL4OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL5OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL5OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL5OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL6OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL6OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL6OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL7OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL7OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL7OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL8OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL8OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL8OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL9OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL9OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL9OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL10OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureXMLURL10OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL10OPMLDataA]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEEDS OPML TEXT ========================================================

[MeasureText1OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText1OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText1OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText2OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText2OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText2OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText3OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText3OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText3OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText4OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText4OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText4OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText5OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText5OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText5OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText6OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText6OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText6OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText7OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText7OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText7OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText8OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText8OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText8OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText9OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText9OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText9OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText10OPMLDataA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLA]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureText10OPMLA]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText10OPMLDataA]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEEDS TITLE DISPLAYED ==================================================

[MeasureTitleFeedA]
Measure=Calc
Formula=1
Substitute="1":"[MeasureFeedTitleRSSA]","":"[MeasureFeedTitleAtomA]","":"[MeasureFeedTitleOPMLA]","":"#FeedSrch#…","€€€€":'"',"0":"#FeedSrch#…"
OnUpdateAction=[!UpdateMeasure MeasureTitleFeedATxtNum][!UpdateMeter MeterTitleABackground][!UpdateMeter MeterTitleA]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitleFeedATxtNum]
Measure=String
String=[MeasureTitleFeedA]
RegExpSubstitute=1
Substitute="(.)":"+6.15"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLinkFeedA]
Measure=Calc
Formula=1
Substitute="1":"[MeasureFeedLinkRSSA]","":"[MeasureFeedLinkAtom1A]","":"[MeasureFeedLinkAtom2A]","":"[MeasureFeedLinkAtom3A]","":"[MeasureFeedLinkOPMLA]","€€€€":'"'
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle1A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle1RSSA]","":"[MeasureTitle1RDFA]","":"[MeasureTitle1AtomA]","":"[MeasureTitle1OPMLA]","":"[MeasureText1OPMLA]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine1A]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink1A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink1RSSA]","":"[MeasureLink1RDFA]","":"[MeasureLink1AtomA]","":"[MeasureHTMLURL1OPMLA]","":"[MeasureXMLURL1OPMLA]","":"[MeasureID1AtomA]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle2A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle2RSSA]","":"[MeasureTitle2RDFA]","":"[MeasureTitle2AtomA]","":"[MeasureTitle2OPMLA]","":"[MeasureText2OPMLA]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine2A]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink2A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink2RSSA]","":"[MeasureLink2RDFA]","":"[MeasureLink2AtomA]","":"[MeasureHTMLURL2OPMLA]","":"[MeasureXMLURL2OPMLA]","":"[MeasureID2AtomA]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle3A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle3RSSA]","":"[MeasureTitle3RDFA]","":"[MeasureTitle3AtomA]","":"[MeasureTitle3OPMLA]","":"[MeasureText3OPMLA]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine3A]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink3A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink3RSSA]","":"[MeasureLink3RDFA]","":"[MeasureLink3AtomA]","":"[MeasureHTMLURL3OPMLA]","":"[MeasureXMLURL3OPMLA]","":"[MeasureID3AtomA]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle4A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle4RSSA]","":"[MeasureTitle4RDFA]","":"[MeasureTitle4AtomA]","":"[MeasureTitle4OPMLA]","":"[MeasureText4OPMLA]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine4A]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink4A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink4RSSA]","":"[MeasureLink4RDFA]","":"[MeasureLink4AtomA]","":"[MeasureHTMLURL4OPMLA]","":"[MeasureXMLURL4OPMLA]","":"[MeasureID4AtomA]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle5A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle5RSSA]","":"[MeasureTitle5RDFA]","":"[MeasureTitle5AtomA]","":"[MeasureTitle5OPMLA]","":"[MeasureText5OPMLA]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine5A]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink5A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink5RSSA]","":"[MeasureLink5RDFA]","":"[MeasureLink5AtomA]","":"[MeasureHTMLURL5OPMLA]","":"[MeasureXMLURL5OPMLA]","":"[MeasureID5AtomA]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle6A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle6RSSA]","":"[MeasureTitle6RDFA]","":"[MeasureTitle6AtomA]","":"[MeasureTitle6OPMLA]","":"[MeasureText6OPMLA]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine6A]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink6A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink6RSSA]","":"[MeasureLink6RDFA]","":"[MeasureLink6AtomA]","":"[MeasureHTMLURL6OPMLA]","":"[MeasureXMLURL6OPMLA]","":"[MeasureID6AtomA]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle7A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle7RSSA]","":"[MeasureTitle7RDFA]","":"[MeasureTitle7AtomA]","":"[MeasureTitle7OPMLA]","":"[MeasureText7OPMLA]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine7A]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink7A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink7RSSA]","":"[MeasureLink7RDFA]","":"[MeasureLink7AtomA]","":"[MeasureHTMLURL7OPMLA]","":"[MeasureXMLURL7OPMLA]","":"[MeasureID7AtomA]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle8A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle8RSSA]","":"[MeasureTitle8RDFA]","":"[MeasureTitle8AtomA]","":"[MeasureTitle8OPMLA]","":"[MeasureText8OPMLA]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine8A]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink8A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink8RSSA]","":"[MeasureLink8RDFA]","":"[MeasureLink8AtomA]","":"[MeasureHTMLURL8OPMLA]","":"[MeasureXMLURL8OPMLA]","":"[MeasureID8AtomA]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle9A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle9RSSA]","":"[MeasureTitle9RDFA]","":"[MeasureTitle9AtomA]","":"[MeasureTitle9OPMLA]","":"[MeasureText9OPMLA]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine9A]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink9A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink9RSSA]","":"[MeasureLink9RDFA]","":"[MeasureLink9AtomA]","":"[MeasureHTMLURL9OPMLA]","":"[MeasureXMLURL9OPMLA]","":"[MeasureID9AtomA]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureTitle10A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle10RSSA]","":"[MeasureTitle10RDFA]","":"[MeasureTitle10AtomA]","":"[MeasureTitle10OPMLA]","":"[MeasureText10OPMLA]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine10A]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLink10A]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink10RSSA]","":"[MeasureLink10RDFA]","":"[MeasureLink10AtomA]","":"[MeasureHTMLURL10OPMLA]","":"[MeasureXMLURL10OPMLA]","":"[MeasureID10AtomA]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

;FEEDS PUBLICATION DATE =================================================

[MeasureLastPubDateA]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSA]","":"[MeasurePublishedAtomA]","":"No info","+0000":""
OnUpdateAction=[!UpdateMeter MeterPubDateA]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLastPubDateA1]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSA1]","":"[MeasurePublishedAtomA1]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLastPubDateA2]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSA2]","":"[MeasurePublishedAtomA2]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLastPubDateA3]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSA3]","":"[MeasurePublishedAtomA3]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLastPubDateA4]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSA4]","":"[MeasurePublishedAtomA4]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLastPubDateA5]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSA5]","":"[MeasurePublishedAtomA5]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLastPubDateA6]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSA6]","":"[MeasurePublishedAtomA6]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLastPubDateA7]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSA7]","":"[MeasurePublishedAtomA7]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLastPubDateA8]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSA8]","":"[MeasurePublishedAtomA8]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

[MeasureLastPubDateA9]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSA9]","":"[MeasurePublishedAtomA9]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

;LAST FEEDS PUBLISHER ===================================================

[MeasureLastPublisherA]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePublisherRSSA]","":"[MeasurePublisherAtomA]","":"No info"
OnUpdateAction=[!UpdateMeter MeterPublisherA]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsA

;TEXT METERS ============================================================

[MeterTitleABackground]
Meter=Image
ImageName=#@#Images\AV Feeds\FeedsTitle.png
x=19
Y=28
W=([MeasureTitleFeedATxtNum]<220? ([MeasureTitleFeedATxtNum]<100? 100: [MeasureTitleFeedATxtNum]): 220)
H=14
Scalemargins=3,3,3,3
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsA

[MeterTitleA]
Meter=String
MeasureName=MeasureTitleFeedA
MeterStyle=TextStyle
x=24
y=27
W=(([MeasureTitleFeedATxtNum]<220)? [MeasureTitleFeedATxtNum] :220)
H=18
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLinkFeedA]"][!DisableMeasure CounterRot][!HideMeter MeterFeedButton1 "Avengers\AV Feeds Button"][!Hide "Avengers\AV Feeds"][!ShowMeter MeterFeedButton2 "Avengers\AV Feeds Button"][!Update "Avengers\AV Feeds Button"][!Redraw]
ToolTipType=0
TooltipText=[MeasureTitleFeedA]
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsA

[MeterLine1A]
Meter=String
MeasureName=MeasureTitle1A
MeterStyle=TextStyle1
x=-9r
y=51
W=240
H=18
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink1A]"]
ToolTipType=0
TooltipText=[MeasureTitle1A]#CRLF#([MeasureLastPubDateA])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsA

[MeterLine2A]
Meter=String
MeasureName=MeasureTitle2A
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink2A]"]
ToolTipType=0
TooltipText=[MeasureTitle2A]#CRLF#([MeasureLastPubDateA1])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsA

[MeterLine3A]
Meter=String
MeasureName=MeasureTitle3A
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink3A]"]
ToolTipType=0
TooltipText=[MeasureTitle3A]#CRLF#([MeasureLastPubDateA2])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsA

[MeterLine4A]
Meter=String
MeasureName=MeasureTitle4A
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink4A]"]
ToolTipType=0
TooltipText="[MeasureTitle4A]#CRLF#([MeasureLastPubDateA3])"
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsA

[MeterLine5A]
Meter=String
MeasureName=MeasureTitle5A
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink5A]"]
ToolTipType=0
TooltipText=[MeasureTitle5A]#CRLF#([MeasureLastPubDateA4])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsA

[MeterLine6A]
Meter=String
MeasureName=MeasureTitle6A
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink6A]"]
ToolTipType=0
TooltipText=[MeasureTitle6A]#CRLF#([MeasureLastPubDateA5])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsA

[MeterLine7A]
Meter=String
MeasureName=MeasureTitle7A
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink7A]"]
ToolTipType=0
TooltipText=[MeasureTitle7A]#CRLF#([MeasureLastPubDateA6])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsA

[MeterLine8A]
Meter=String
MeasureName=MeasureTitle8A
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink8A]"]
ToolTipType=0
TooltipText=[MeasureTitle8A]#CRLF#([MeasureLastPubDateA7])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsA

[MeterLine9A]
Meter=String
MeasureName=MeasureTitle9A
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink9A]"]
ToolTipType=0
TooltipText=[MeasureTitle9A]#CRLF#([MeasureLastPubDateA8])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsA

[MeterLine10A]
Meter=String
MeasureName=MeasureTitle10A
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink10A]"]
ToolTipType=0
TooltipText=[MeasureTitle10A]#CRLF#([MeasureLastPubDateA9])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsA

[MeterPubDateA]
Meter=String
MeasureName=MeasureLastPubDateA
MeterStyle=TextStyle1
FontSize=8
x=-4r
y=24r
W=240
H=14
Text=#FeedUpd#: %1
ClipString=1
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsA

[MeterPublisherATxt]
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
Group=GroupFeedsA

[MeterPublisherA]
Meter=String
MeasureName=MeasureLastPublisherA
MeterStyle=TextStyle1
FontSize=9
x=63
y=-1r
W=95
H=14
ClipString=1
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsA
