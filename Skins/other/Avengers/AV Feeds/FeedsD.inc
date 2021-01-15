
;========================================================================;
;                             FEEDS PAGE 4                               ;
;========================================================================;

;FEED PAGE TITLE ========================================================

[MeasureFeedTitleRSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds4]
RegExp=(?siU)(?(?=.*<title>).*<title>(.*)</title>)
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedTitleRSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedTitleRSSDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedTitleAtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds4]
RegExp=(?siU)(?(?=.*<title.*>).*<title.*>(.*)</title>)
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedTitleAtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedTitleAtomDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedTitleOPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds4]
RegExp=(?siU)(?(?=.*<title>).*<head>.*<title>(.*)</title>.*</head>)
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedTitleOPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedTitleOPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEED PAGE LINK =========================================================

[MeasureFeedLinkRSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds4]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedLinkRSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkRSSDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="^(.*)/.*$":"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedLinkAtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds4]
RegExp=(?siU)^(.*)<entry>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedLinkAtomData1D]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomDataD]
RegExp=(?siU).*<link(.*)/>
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedLinkAtomData2D]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomDataD]
RegExp=(?siU).*<link(.*)/>.*<link(.*)/>
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedLinkAtomData3D]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomDataD]
RegExp=(?siU).*<link(.*)/>.*<link(.*)/>.*<link(.*)/>
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedLinkAtom1D]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomData1D]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute='^.*rel="self".*$':"",'^.*rel="hub".*$':"",'^.*href="(.*)"':"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedLinkAtom2D]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomData2D]
StringIndex=2
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute='^.*rel="self".*$':"",'^.*rel="hub".*$':"",'^.*href="(.*)"':"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedLinkAtom3D]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomData3D]
StringIndex=3
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute='^.*rel="self".*$':"",'^.*rel="hub".*$':"",'^.*href="(.*)"':"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedLinkOPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds4]
RegExp=(?siU)(?(?=.*<title>).*<head>.*<link>(.*)</link>.*</head>)
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedLinkOPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkOPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEEDS ITEM =============================================================

[MeasureItem10RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds4]
RegExp=(?siU).*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureItem10RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds4]
RegExp=(?siU).*</items>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureItem10AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds4]
RegExp=(?siU).*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureItem10OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds4]
RegExp=(?siU).*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEEDS RSS TITLE ========================================================

[MeasureTitle1RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=1
DecodeCharacterReference=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle1RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1RSSDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle2RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle2RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2RSSDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle3RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle3RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3RSSDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle4RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle4RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4RSSDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle5RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle5RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5RSSDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle6RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle6RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6RSSDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle7RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle7RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7RSSDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle8RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle8RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8RSSDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle9RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle9RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9RSSDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle10RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle10RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10RSSDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEEDS RSS LINK =========================================================

[MeasureLink1RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink1RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink1RSSDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink2RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink2RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink2RSSDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink3RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink3RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink3RSSDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink4RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink4RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink4RSSDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink5RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink5RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink5RSSDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink6RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink6RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink6RSSDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink7RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink7RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink7RSSDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink8RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink8RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink8RSSDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink9RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink9RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink9RSSDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink10RSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink10RSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink10RSSDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

;LAST FEED RSS DATA =====================================================

[MeasureFeedRSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePubDateRSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataD]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublisherRSSDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<media:credit role="author" scheme="urn:ebu">(.*)</media:credit>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublisherRSSD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublisherRSSDataD]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

;------------------------------------------------------------------------

[MeasureFeedRSSDataD1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePubDateRSSD1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataD1]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedRSSDataD2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePubDateRSSD2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataD2]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedRSSDataD3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePubDateRSSD3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataD3]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedRSSDataD4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePubDateRSSD4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataD4]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedRSSDataD5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePubDateRSSD5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataD5]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedRSSDataD6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePubDateRSSD6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataD6]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedRSSDataD7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePubDateRSSD7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataD7]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedRSSDataD8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePubDateRSSD8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataD8]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureFeedRSSDataD9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSD]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePubDateRSSD9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataD9]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEEDS RDF TITLE ========================================================

[MeasureTitle1RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle1RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1RDFDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle2RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle2RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2RDFDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle3RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle3RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3RDFDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle4RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle4RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4RDFDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle5RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle5RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5RDFDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle6RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle6RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6RDFDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle7RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle7RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7RDFDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle8RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle8RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8RDFDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle9RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle9RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9RDFDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle10RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle10RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10RDFDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEEDS RDF LINK =========================================================

[MeasureLink1RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink1RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink1RDFDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink2RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink2RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink2RDFDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink3RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink3RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink3RDFDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink4RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink4RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink4RDFDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink5RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink5RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink5RDFDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink6RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink6RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink6RDFDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink7RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink7RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink7RDFDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink8RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink8RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink8RDFDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink9RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink9RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink9RDFDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink10RDFDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFD]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink10RDFD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink10RDFDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEEDS ATOM TITLE =======================================================

[MeasureTitle1AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle1AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1AtomDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle2AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle2AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2AtomDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle3AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle3AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3AtomDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle4AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle4AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4AtomDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle5AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle5AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5AtomDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle6AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle6AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6AtomDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle7AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle7AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7AtomDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle8AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle8AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8AtomDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle9AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle9AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9AtomDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle10AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle10AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10AtomDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEEDS ATOM LINK ========================================================

[MeasureLink1AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink1AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink1AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink2AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink2AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink2AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink3AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink3AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink3AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink4AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink4AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink4AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink5AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink5AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink5AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink6AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink6AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink6AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink7AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink7AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink7AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink8AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink8AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink8AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink9AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink9AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink9AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink10AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink10AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink10AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEEDS ATOM ID ==========================================================

[MeasureID1AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID1AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID1AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID2AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID2AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID2AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID3AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID3AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID3AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID4AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID4AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID4AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID5AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID5AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID5AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID6AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID6AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID6AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID7AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID7AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID7AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID8AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID8AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID8AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID9AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID9AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID9AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID10AtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureID10AtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID10AtomDataD]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

;LAST FEED ATOM DATA ====================================================

[MeasurePublishedAtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataD]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublisherAtomDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*<a href="">(.*)</a>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublisherAtomD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublisherAtomDataD]
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

;------------------------------------------------------------------------

[MeasurePublishedAtomDataD1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomD1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataD1]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomDataD2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomD2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataD2]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomDataD3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomD3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataD3]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomDataD4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomD4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataD4]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomDataD5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomD5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataD5]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomDataD6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomD6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataD6]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomDataD7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomD7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataD7]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomDataD8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomD8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataD8]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomDataD9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomD]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasurePublishedAtomD9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataD9]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEEDS OPML TITLE =======================================================

[MeasureTitle1OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle1OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle2OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle2OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle3OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle3OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle4OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle4OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle5OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle5OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle6OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle6OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle7OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle7OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle8OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle8OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle9OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle9OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle10OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle10OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEEDS OPML HTML LINK ===================================================

[MeasureHTMLURL1OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL1OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL1OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL2OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL2OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL2OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL3OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL3OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL3OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL4OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL4OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL4OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL5OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL5OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL5OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL6OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL6OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL6OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL7OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL7OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL7OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL8OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL8OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL8OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL9OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL9OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL9OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL10OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureHTMLURL10OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL10OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEEDS OPML XML LINK ====================================================

[MeasureXMLURL1OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL1OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL1OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL2OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL2OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL2OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL3OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL3OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL3OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL4OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL4OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL4OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL5OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL5OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL5OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL6OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL6OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL6OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL7OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL7OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL7OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL8OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL8OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL8OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL9OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL9OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL9OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL10OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureXMLURL10OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL10OPMLDataD]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEEDS OPML TEXT ========================================================

[MeasureText1OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText1OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText1OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText2OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText2OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText2OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText3OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText3OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText3OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText4OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText4OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText4OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText5OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText5OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText5OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText6OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText6OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText6OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText7OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText7OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText7OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText8OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText8OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText8OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText9OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText9OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText9OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText10OPMLDataD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLD]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureText10OPMLD]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText10OPMLDataD]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEEDS TITLE DISPLAYED ==================================================

[MeasureTitleFeedD]
Measure=Calc
Formula=1
Substitute="1":"[MeasureFeedTitleRSSD]","":"[MeasureFeedTitleAtomD]","":"[MeasureFeedTitleOPMLD]","":"#FeedSrch#…","€€€€":'"',"0":"#FeedSrch#…"
OnUpdateAction=[!UpdateMeasure MeasureTitleFeedDTxtNum][!UpdateMeter MeterTitleDBackground][!UpdateMeter MeterTitleD]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitleFeedDTxtNum]
Measure=String
String=[MeasureTitleFeedD]
RegExpSubstitute=1
Substitute="(.)":"+6.15"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLinkFeedD]
Measure=Calc
Formula=1
Substitute="1":"[MeasureFeedLinkRSSD]","":"[MeasureFeedLinkAtom1D]","":"[MeasureFeedLinkAtom2D]","":"[MeasureFeedLinkAtom3D]","":"[MeasureFeedLinkOPMLD]","€€€€":'"'
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle1D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle1RSSD]","":"[MeasureTitle1RDFD]","":"[MeasureTitle1AtomD]","":"[MeasureTitle1OPMLD]","":"[MeasureText1OPMLD]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine1D]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink1D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink1RSSD]","":"[MeasureLink1RDFD]","":"[MeasureLink1AtomD]","":"[MeasureHTMLURL1OPMLD]","":"[MeasureXMLURL1OPMLD]","":"[MeasureID1AtomD]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle2D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle2RSSD]","":"[MeasureTitle2RDFD]","":"[MeasureTitle2AtomD]","":"[MeasureTitle2OPMLD]","":"[MeasureText2OPMLD]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine2D]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink2D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink2RSSD]","":"[MeasureLink2RDFD]","":"[MeasureLink2AtomD]","":"[MeasureHTMLURL2OPMLD]","":"[MeasureXMLURL2OPMLD]","":"[MeasureID2AtomD]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle3D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle3RSSD]","":"[MeasureTitle3RDFD]","":"[MeasureTitle3AtomD]","":"[MeasureTitle3OPMLD]","":"[MeasureText3OPMLD]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine3D]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink3D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink3RSSD]","":"[MeasureLink3RDFD]","":"[MeasureLink3AtomD]","":"[MeasureHTMLURL3OPMLD]","":"[MeasureXMLURL3OPMLD]","":"[MeasureID3AtomD]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle4D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle4RSSD]","":"[MeasureTitle4RDFD]","":"[MeasureTitle4AtomD]","":"[MeasureTitle4OPMLD]","":"[MeasureText4OPMLD]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine4D]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink4D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink4RSSD]","":"[MeasureLink4RDFD]","":"[MeasureLink4AtomD]","":"[MeasureHTMLURL4OPMLD]","":"[MeasureXMLURL4OPMLD]","":"[MeasureID4AtomD]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle5D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle5RSSD]","":"[MeasureTitle5RDFD]","":"[MeasureTitle5AtomD]","":"[MeasureTitle5OPMLD]","":"[MeasureText5OPMLD]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine5D]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink5D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink5RSSD]","":"[MeasureLink5RDFD]","":"[MeasureLink5AtomD]","":"[MeasureHTMLURL5OPMLD]","":"[MeasureXMLURL5OPMLD]","":"[MeasureID5AtomD]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle6D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle6RSSD]","":"[MeasureTitle6RDFD]","":"[MeasureTitle6AtomD]","":"[MeasureTitle6OPMLD]","":"[MeasureText6OPMLD]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine6D]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink6D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink6RSSD]","":"[MeasureLink6RDFD]","":"[MeasureLink6AtomD]","":"[MeasureHTMLURL6OPMLD]","":"[MeasureXMLURL6OPMLD]","":"[MeasureID6AtomD]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle7D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle7RSSD]","":"[MeasureTitle7RDFD]","":"[MeasureTitle7AtomD]","":"[MeasureTitle7OPMLD]","":"[MeasureText7OPMLD]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine7D]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink7D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink7RSSD]","":"[MeasureLink7RDFD]","":"[MeasureLink7AtomD]","":"[MeasureHTMLURL7OPMLD]","":"[MeasureXMLURL7OPMLD]","":"[MeasureID7AtomD]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle8D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle8RSSD]","":"[MeasureTitle8RDFD]","":"[MeasureTitle8AtomD]","":"[MeasureTitle8OPMLD]","":"[MeasureText8OPMLD]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine8D]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink8D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink8RSSD]","":"[MeasureLink8RDFD]","":"[MeasureLink8AtomD]","":"[MeasureHTMLURL8OPMLD]","":"[MeasureXMLURL8OPMLD]","":"[MeasureID8AtomD]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle9D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle9RSSD]","":"[MeasureTitle9RDFD]","":"[MeasureTitle9AtomD]","":"[MeasureTitle9OPMLD]","":"[MeasureText9OPMLD]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine9D]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink9D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink9RSSD]","":"[MeasureLink9RDFD]","":"[MeasureLink9AtomD]","":"[MeasureHTMLURL9OPMLD]","":"[MeasureXMLURL9OPMLD]","":"[MeasureID9AtomD]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureTitle10D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle10RSSD]","":"[MeasureTitle10RDFD]","":"[MeasureTitle10AtomD]","":"[MeasureTitle10OPMLD]","":"[MeasureText10OPMLD]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine10D]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLink10D]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink10RSSD]","":"[MeasureLink10RDFD]","":"[MeasureLink10AtomD]","":"[MeasureHTMLURL10OPMLD]","":"[MeasureXMLURL10OPMLD]","":"[MeasureID10AtomD]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

;FEEDS PUBLICATION DATE =================================================

[MeasureLastPubDateD]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSD]","":"[MeasurePublishedAtomD]","":"No info","+0000":""
OnUpdateAction=[!UpdateMeter MeterPubDateD]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLastPubDateD1]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSD1]","":"[MeasurePublishedAtomD1]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLastPubDateD2]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSD2]","":"[MeasurePublishedAtomD2]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLastPubDateD3]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSD3]","":"[MeasurePublishedAtomD3]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLastPubDateD4]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSD4]","":"[MeasurePublishedAtomD4]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLastPubDateD5]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSD5]","":"[MeasurePublishedAtomD5]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLastPubDateD6]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSD6]","":"[MeasurePublishedAtomD6]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLastPubDateD7]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSD7]","":"[MeasurePublishedAtomD7]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLastPubDateD8]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSD8]","":"[MeasurePublishedAtomD8]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

[MeasureLastPubDateD9]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSD9]","":"[MeasurePublishedAtomD9]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

;LAST FEEDS PUBLISHER ===================================================

[MeasureLastPublisherD]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePublisherRSSD]","":"[MeasurePublisherAtomD]","":"No info"
OnUpdateAction=[!UpdateMeter MeterPublisherD]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsD

;TEXT METERS ============================================================

[MeterTitleDBackground]
Meter=Image
ImageName=#@#Images\AV Feeds\FeedsTitle.png
x=19
Y=28
W=([MeasureTitleFeedDTxtNum]<220? ([MeasureTitleFeedDTxtNum]<100? 100: [MeasureTitleFeedDTxtNum]): 220)
H=14
Scalemargins=3,3,3,3
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsD

[MeterTitleD]
Meter=String
MeasureName=MeasureTitleFeedD
MeterStyle=TextStyle
x=24
y=27
W=(([MeasureTitleFeedDTxtNum]<220)? [MeasureTitleFeedDTxtNum] :220)
H=18
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLinkFeedD]"][!DisableMeasure CounterRot][!HideMeter MeterFeedButton1 "Avengers\AV Feeds Button"][!Hide "Avengers\AV Feeds"][!ShowMeter MeterFeedButton2 "Avengers\AV Feeds Button"][!Update "Avengers\AV Feeds Button"][!Redraw]
ToolTipType=0
TooltipText=[MeasureTitleFeedD]
ClipString=2
ClipStringW=208
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsD

[MeterLine1D]
Meter=String
MeasureName=MeasureTitle1D
MeterStyle=TextStyle1
x=-9r
y=51
W=240
H=18
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink1D]"]
ToolTipType=0
TooltipText=[MeasureTitle1D]#CRLF#([MeasureLastPubDateD])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsD

[MeterLine2D]
Meter=String
MeasureName=MeasureTitle2D
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink2D]"]
ToolTipType=0
TooltipText=[MeasureTitle2D]#CRLF#([MeasureLastPubDateD1])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsD

[MeterLine3D]
Meter=String
MeasureName=MeasureTitle3D
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink3D]"]
ToolTipType=0
TooltipText=[MeasureTitle3D]#CRLF#([MeasureLastPubDateD2])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsD

[MeterLine4D]
Meter=String
MeasureName=MeasureTitle4D
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink4D]"]
ToolTipType=0
TooltipText=[MeasureTitle4D]#CRLF#([MeasureLastPubDateD3])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsD

[MeterLine5D]
Meter=String
MeasureName=MeasureTitle5D
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink5D]"]
ToolTipType=0
TooltipText=[MeasureTitle5D]#CRLF#([MeasureLastPubDateD4])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsD

[MeterLine6D]
Meter=String
MeasureName=MeasureTitle6D
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink6D]"]
ToolTipType=0
TooltipText=[MeasureTitle6D]#CRLF#([MeasureLastPubDateD5])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsD

[MeterLine7D]
Meter=String
MeasureName=MeasureTitle7D
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink7D]"]
ToolTipType=0
TooltipText=[MeasureTitle7D]#CRLF#([MeasureLastPubDateD6])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsD

[MeterLine8D]
Meter=String
MeasureName=MeasureTitle8D
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink8D]"]
ToolTipType=0
TooltipText=[MeasureTitle8D]#CRLF#([MeasureLastPubDateD7])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsD

[MeterLine9D]
Meter=String
MeasureName=MeasureTitle9D
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink9D]"]
ToolTipType=0
TooltipText=[MeasureTitle9D]#CRLF#([MeasureLastPubDateD8])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsD

[MeterLine10D]
Meter=String
MeasureName=MeasureTitle10D
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink10D]"]
ToolTipType=0
TooltipText=[MeasureTitle10D]#CRLF#([MeasureLastPubDateD9])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsD

[MeterPubDateD]
Meter=String
MeasureName=MeasureLastPubDateD
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
Group=GroupFeedsD

[MeterPublisherDTxt]
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
Group=GroupFeedsD

[MeterPublisherD]
Meter=String
MeasureName=MeasureLastPublisherD
MeterStyle=TextStyle1
FontSize=9
x=63
y=-1r
W=95
H=14
ClipString=1
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsD
