
;========================================================================;
;                             FEEDS PAGE 2                               ;
;========================================================================;

;FEED PAGE TITLE ========================================================

[MeasureFeedTitleRSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds2]
RegExp=(?siU)(?(?=.*<title>).*<title>(.*)</title>)
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedTitleRSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedTitleRSSDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedTitleAtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds2]
RegExp=(?siU)(?(?=.*<title.*>).*<title.*>(.*)</title>)
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedTitleAtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedTitleAtomDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedTitleOPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds2]
RegExp=(?siU)(?(?=.*<title>).*<head>.*<title>(.*)</title>.*</head>)
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedTitleOPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedTitleOPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEED PAGE LINK =========================================================

[MeasureFeedLinkRSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds2]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedLinkRSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkRSSDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="^(.*)/.*$":"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedLinkAtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds2]
RegExp=(?siU)^(.*)<entry>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedLinkAtomData1B]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomDataB]
RegExp=(?siU).*<link(.*)/>
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedLinkAtomData2B]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomDataB]
RegExp=(?siU).*<link(.*)/>.*<link(.*)/>
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedLinkAtomData3B]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomDataB]
RegExp=(?siU).*<link(.*)/>.*<link(.*)/>.*<link(.*)/>
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedLinkAtom1B]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomData1B]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute='^.*rel="self".*$':"",'^.*rel="hub".*$':"",'^.*href="(.*)"':"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedLinkAtom2B]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomData2B]
StringIndex=2
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute='^.*rel="self".*$':"",'^.*rel="hub".*$':"",'^.*href="(.*)"':"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedLinkAtom3B]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkAtomData3B]
StringIndex=3
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute='^.*rel="self".*$':"",'^.*rel="hub".*$':"",'^.*href="(.*)"':"\1"
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedLinkOPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds2]
RegExp=(?siU)(?(?=.*<title>).*<head>.*<link>(.*)</link>.*</head>)
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedLinkOPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedLinkOPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEEDS ITEM =============================================================

[MeasureItem10RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds2]
RegExp=(?siU).*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>.*<item>(.*)</item>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureItem10RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds2]
RegExp=(?siU).*</items>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>.*<item.*>(.*)</item>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureItem10AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds2]
RegExp=(?siU).*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>.*<entry>(.*)</entry>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureItem10OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeeds2]
RegExp=(?siU).*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>.*<outline(.*)/>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEEDS RSS TITLE ========================================================

[MeasureTitle1RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=1
DecodeCharacterReference=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle1RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1RSSDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle2RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle2RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2RSSDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle3RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle3RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3RSSDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle4RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle4RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4RSSDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle5RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle5RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5RSSDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle6RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle6RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6RSSDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle7RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle7RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7RSSDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle8RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle8RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8RSSDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle9RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle9RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9RSSDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle10RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle10RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10RSSDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEEDS RSS LINK =========================================================

[MeasureLink1RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink1RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink1RSSDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink2RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink2RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink2RSSDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink3RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink3RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink3RSSDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink4RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink4RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink4RSSDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink5RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink5RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink5RSSDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink6RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink6RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink6RSSDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink7RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink7RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink7RSSDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink8RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink8RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink8RSSDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink9RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink9RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink9RSSDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink10RSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink10RSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink10RSSDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

;LAST FEED RSS DATA =====================================================

[MeasureFeedRSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePubDateRSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataB]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublisherRSSDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<media:credit role="author" scheme="urn:ebu">(.*)</media:credit>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublisherRSSB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublisherRSSDataB]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

;------------------------------------------------------------------------

[MeasureFeedRSSDataB1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePubDateRSSB1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataB1]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedRSSDataB2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePubDateRSSB2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataB2]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedRSSDataB3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePubDateRSSB3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataB3]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedRSSDataB4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePubDateRSSB4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataB4]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedRSSDataB5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePubDateRSSB5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataB5]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedRSSDataB6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePubDateRSSB6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataB6]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedRSSDataB7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePubDateRSSB7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataB7]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedRSSDataB8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePubDateRSSB8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataB8]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureFeedRSSDataB9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RSSB]
RegExp=(?siU).*<pubDate>(.*)</pubDate>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePubDateRSSB9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureFeedRSSDataB9]
StringIndex=1
Substitute=#FeedDate#
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEEDS RDF TITLE ========================================================

[MeasureTitle1RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle1RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1RDFDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle2RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle2RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2RDFDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle3RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle3RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3RDFDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle4RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle4RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4RDFDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle5RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle5RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5RDFDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle6RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle6RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6RDFDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle7RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle7RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7RDFDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle8RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle8RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8RDFDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle9RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle9RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9RDFDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle10RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<title>(.*)</title>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle10RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10RDFDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEEDS RDF LINK =========================================================

[MeasureLink1RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink1RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink1RDFDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink2RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink2RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink2RDFDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink3RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink3RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink3RDFDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink4RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink4RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink4RDFDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink5RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink5RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink5RDFDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink6RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink6RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink6RDFDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink7RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink7RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink7RDFDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink8RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink8RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink8RDFDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink9RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink9RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink9RDFDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink10RDFDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10RDFB]
RegExp=(?siU).*<link>(.*)</link>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink10RDFB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink10RDFDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEEDS ATOM TITLE =======================================================

[MeasureTitle1AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle1AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1AtomDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle2AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle2AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2AtomDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle3AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle3AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3AtomDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle4AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle4AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4AtomDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle5AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle5AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5AtomDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle6AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle6AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6AtomDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle7AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle7AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7AtomDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle8AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle8AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8AtomDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle9AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle9AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9AtomDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle10AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<title.*>(.*)</title>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle10AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10AtomDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEEDS ATOM LINK ========================================================

[MeasureLink1AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink1AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink1AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink2AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink2AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink2AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink3AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink3AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink3AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink4AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink4AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink4AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink5AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink5AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink5AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink6AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink6AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink6AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink7AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink7AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink7AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink8AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink8AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink8AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink9AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink9AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink9AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink10AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<link.*href="(.*)".*>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink10AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureLink10AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEEDS ATOM ID ==========================================================

[MeasureID1AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID1AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID1AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID2AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID2AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID2AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID3AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID3AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID3AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID4AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID4AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID4AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID5AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID5AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID5AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID6AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID6AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID6AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID7AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID7AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID7AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID8AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID8AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID8AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID9AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID9AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID9AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID10AtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<id>(.*)</id>
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureID10AtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureID10AtomDataB]
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

;LAST FEED ATOM DATA ====================================================

[MeasurePublishedAtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataB]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublisherAtomDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*<a href="">(.*)</a>
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublisherAtomB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublisherAtomDataB]
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

;------------------------------------------------------------------------

[MeasurePublishedAtomDataB1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomB1]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataB1]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomDataB2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomB2]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataB2]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomDataB3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomB3]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataB3]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomDataB4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomB4]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataB4]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomDataB5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomB5]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataB5]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomDataB6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomB6]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataB6]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomDataB7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomB7]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataB7]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomDataB8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomB8]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataB8]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomDataB9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10AtomB]
RegExp=(?siU).*</a> —(.*)</p>
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasurePublishedAtomB9]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasurePublishedAtomDataB9]
StringIndex=1
RegExpSubstitute=1
Substitute=#FeedDate#
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEEDS OPML TITLE =======================================================

[MeasureTitle1OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle1OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle1OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle2OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle2OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle2OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle3OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle3OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle3OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle4OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle4OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle4OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle5OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle5OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle5OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle6OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle6OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle6OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle7OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle7OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle7OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle8OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle8OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle8OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle9OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle9OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle9OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle10OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*title=").*title="(.*)")
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle10OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureTitle10OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEEDS OPML HTML LINK ===================================================

[MeasureHTMLURL1OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL1OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL1OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL2OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL2OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL2OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL3OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL3OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL3OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL4OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL4OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL4OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL5OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL5OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL5OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL6OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL6OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL6OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL7OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL7OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL7OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL8OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL8OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL8OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL9OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL9OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL9OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL10OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*htmlURL=").*htmlURL="(.*)")
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureHTMLURL10OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureHTMLURL10OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEEDS OPML XML LINK ====================================================

[MeasureXMLURL1OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=1
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL1OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL1OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL2OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=2
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL2OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL2OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL3OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=3
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL3OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL3OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL4OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=4
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL4OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL4OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL5OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=5
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL5OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL5OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL6OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=6
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL6OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL6OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL7OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=7
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL7OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL7OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL8OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=8
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL8OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL8OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL9OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=9
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL9OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL9OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL10OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*xmlUrl=").*xmlUrl="(.*)")
StringIndex=10
DecodeCharacterReference=0
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureXMLURL10OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureXMLURL10OPMLDataB]
StringIndex=1
DecodeCharacterReference=0
RegExpSubstitute=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEEDS OPML TEXT ========================================================

[MeasureText1OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=1
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText1OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText1OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText2OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=2
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText2OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText2OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText3OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=3
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText3OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText3OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText4OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=4
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText4OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText4OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText5OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=5
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText5OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText5OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText6OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=6
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText6OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText6OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText7OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=7
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText7OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText7OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText8OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=8
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText8OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText8OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText9OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=9
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText9OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText9OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText10OPMLDataB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureItem10OPMLB]
RegExp=(?siU)(?(?=.*text=").*text="(.*)")
StringIndex=10
DecodeCharacterReference=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureText10OPMLB]
Measure=Plugin
Plugin=WebParser.dll
Url=[MeasureText10OPMLDataB]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#FeedSubstitute#
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEEDS TITLE DISPLAYED ==================================================

[MeasureTitleFeedB]
Measure=Calc
Formula=1
Substitute="1":"[MeasureFeedTitleRSSB]","":"[MeasureFeedTitleAtomB]","":"[MeasureFeedTitleOPMLB]","":"#FeedSrch#…","€€€€":'"',"0":"#FeedSrch#…"
OnUpdateAction=[!UpdateMeasure MeasureTitleFeedBTxtNum][!UpdateMeter MeterTitleBBackground][!UpdateMeter MeterTitleB]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitleFeedBTxtNum]
Measure=String
String=[MeasureTitleFeedB]
RegExpSubstitute=1
Substitute="(.)":"+6.15"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLinkFeedB]
Measure=Calc
Formula=1
Substitute="1":"[MeasureFeedLinkRSSB]","":"[MeasureFeedLinkAtom1B]","":"[MeasureFeedLinkAtom2B]","":"[MeasureFeedLinkAtom3B]","":"[MeasureFeedLinkOPMLB]","€€€€":'"'
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle1B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle1RSSB]","":"[MeasureTitle1RDFB]","":"[MeasureTitle1AtomB]","":"[MeasureTitle1OPMLB]","":"[MeasureText1OPMLB]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine1B]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink1B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink1RSSB]","":"[MeasureLink1RDFB]","":"[MeasureLink1AtomB]","":"[MeasureHTMLURL1OPMLB]","":"[MeasureXMLURL1OPMLB]","":"[MeasureID1AtomB]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle2B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle2RSSB]","":"[MeasureTitle2RDFB]","":"[MeasureTitle2AtomB]","":"[MeasureTitle2OPMLB]","":"[MeasureText2OPMLB]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine2B]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink2B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink2RSSB]","":"[MeasureLink2RDFB]","":"[MeasureLink2AtomB]","":"[MeasureHTMLURL2OPMLB]","":"[MeasureXMLURL2OPMLB]","":"[MeasureID2AtomB]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle3B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle3RSSB]","":"[MeasureTitle3RDFB]","":"[MeasureTitle3AtomB]","":"[MeasureTitle3OPMLB]","":"[MeasureText3OPMLB]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine3B]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink3B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink3RSSB]","":"[MeasureLink3RDFB]","":"[MeasureLink3AtomB]","":"[MeasureHTMLURL3OPMLB]","":"[MeasureXMLURL3OPMLB]","":"[MeasureID3AtomB]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle4B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle4RSSB]","":"[MeasureTitle4RDFB]","":"[MeasureTitle4AtomB]","":"[MeasureTitle4OPMLB]","":"[MeasureText4OPMLB]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine4B]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink4B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink4RSSB]","":"[MeasureLink4RDFB]","":"[MeasureLink4AtomB]","":"[MeasureHTMLURL4OPMLB]","":"[MeasureXMLURL4OPMLB]","":"[MeasureID4AtomB]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle5B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle5RSSB]","":"[MeasureTitle5RDFB]","":"[MeasureTitle5AtomB]","":"[MeasureTitle5OPMLB]","":"[MeasureText5OPMLB]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine5B]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink5B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink5RSSB]","":"[MeasureLink5RDFB]","":"[MeasureLink5AtomB]","":"[MeasureHTMLURL5OPMLB]","":"[MeasureXMLURL5OPMLB]","":"[MeasureID5AtomB]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle6B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle6RSSB]","":"[MeasureTitle6RDFB]","":"[MeasureTitle6AtomB]","":"[MeasureTitle6OPMLB]","":"[MeasureText6OPMLB]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine6B]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink6B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink6RSSB]","":"[MeasureLink6RDFB]","":"[MeasureLink6AtomB]","":"[MeasureHTMLURL6OPMLB]","":"[MeasureXMLURL6OPMLB]","":"[MeasureID6AtomB]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle7B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle7RSSB]","":"[MeasureTitle7RDFB]","":"[MeasureTitle7AtomB]","":"[MeasureTitle7OPMLB]","":"[MeasureText7OPMLB]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine7B]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink7B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink7RSSB]","":"[MeasureLink7RDFB]","":"[MeasureLink7AtomB]","":"[MeasureHTMLURL7OPMLB]","":"[MeasureXMLURL7OPMLB]","":"[MeasureID7AtomB]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle8B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle8RSSB]","":"[MeasureTitle8RDFB]","":"[MeasureTitle8AtomB]","":"[MeasureTitle8OPMLB]","":"[MeasureText8OPMLB]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine8B]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink8B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink8RSSB]","":"[MeasureLink8RDFB]","":"[MeasureLink8AtomB]","":"[MeasureHTMLURL8OPMLB]","":"[MeasureXMLURL8OPMLB]","":"[MeasureID8AtomB]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle9B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle9RSSB]","":"[MeasureTitle9RDFB]","":"[MeasureTitle9AtomB]","":"[MeasureTitle9OPMLB]","":"[MeasureText9OPMLB]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine9B]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink9B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink9RSSB]","":"[MeasureLink9RDFB]","":"[MeasureLink9AtomB]","":"[MeasureHTMLURL9OPMLB]","":"[MeasureXMLURL9OPMLB]","":"[MeasureID9AtomB]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureTitle10B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureTitle10RSSB]","":"[MeasureTitle10RDFB]","":"[MeasureTitle10AtomB]","":"[MeasureTitle10OPMLB]","":"[MeasureText10OPMLB]","€€€€":'"'
OnUpdateAction=[!UpdateMeter MeterLine10B]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLink10B]
Measure=Calc
Formula=1
Substitute="1":"[MeasureLink10RSSB]","":"[MeasureLink10RDFB]","":"[MeasureLink10AtomB]","":"[MeasureHTMLURL10OPMLB]","":"[MeasureXMLURL10OPMLB]","":"[MeasureID10AtomB]"
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

;FEEDS PUBLICATION DATE =================================================

[MeasureLastPubDateB]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSB]","":"[MeasurePublishedAtomB]","":"No info","+0000":""
OnUpdateAction=[!UpdateMeter MeterPubDateB]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLastPubDateB1]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSB1]","":"[MeasurePublishedAtomB1]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLastPubDateB2]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSB2]","":"[MeasurePublishedAtomB2]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLastPubDateB3]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSB3]","":"[MeasurePublishedAtomB3]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLastPubDateB4]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSB4]","":"[MeasurePublishedAtomB4]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLastPubDateB5]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSB5]","":"[MeasurePublishedAtomB5]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLastPubDateB6]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSB6]","":"[MeasurePublishedAtomB6]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLastPubDateB7]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSB7]","":"[MeasurePublishedAtomB7]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLastPubDateB8]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSB8]","":"[MeasurePublishedAtomB8]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

[MeasureLastPubDateB9]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePubDateRSSB9]","":"[MeasurePublishedAtomB9]","":"No info","+0000":""
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

;LAST FEEDS PUBLISHER ===================================================

[MeasureLastPublisherB]
Measure=Calc
Formula=1
Substitute="1":"[MeasurePublisherRSSB]","":"[MeasurePublisherAtomB]","":"No info"
OnUpdateAction=[!UpdateMeter MeterPublisherB]
DynamicVariables=1
UpdateDivider=-1
Group=GroupMeasureFeedsB

;TEXT METERS ============================================================

[MeterTitleBBackground]
Meter=Image
ImageName=#@#Images\AV Feeds\FeedsTitle.png
x=19
Y=28
W=([MeasureTitleFeedBTxtNum]<220? ([MeasureTitleFeedBTxtNum]<100? 100: [MeasureTitleFeedBTxtNum]): 220)
H=14
Scalemargins=3,3,3,3
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsB

[MeterTitleB]
Meter=String
MeasureName=MeasureTitleFeedB
MeterStyle=TextStyle
x=24
y=27
W=(([MeasureTitleFeedBTxtNum]<220)? [MeasureTitleFeedBTxtNum] :220)
H=18
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLinkFeedB]"][!DisableMeasure CounterRot][!HideMeter MeterFeedButton1 "Avengers\AV Feeds Button"][!Hide "Avengers\AV Feeds"][!ShowMeter MeterFeedButton2 "Avengers\AV Feeds Button"][!Update "Avengers\AV Feeds Button"][!Redraw]
ToolTipType=0
TooltipText=[MeasureTitleFeedB]
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsB

[MeterLine1B]
Meter=String
MeasureName=MeasureTitle1B
MeterStyle=TextStyle1
x=-9r
y=51
W=240
H=18
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink1B]"]
ToolTipType=0
TooltipText=[MeasureTitle1B]#CRLF#([MeasureLastPubDateB])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsB

[MeterLine2B]
Meter=String
MeasureName=MeasureTitle2B
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink2B]"]
ToolTipType=0
TooltipText=[MeasureTitle2B]#CRLF#([MeasureLastPubDateB1])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsB

[MeterLine3B]
Meter=String
MeasureName=MeasureTitle3B
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink3B]"]
ToolTipType=0
TooltipText=[MeasureTitle3B]#CRLF#([MeasureLastPubDateB2])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsB

[MeterLine4B]
Meter=String
MeasureName=MeasureTitle4B
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink4B]"]
ToolTipType=0
TooltipText=[MeasureTitle4B]#CRLF#([MeasureLastPubDateB3])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsB

[MeterLine5B]
Meter=String
MeasureName=MeasureTitle5B
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink5B]"]
ToolTipType=0
TooltipText=[MeasureTitle5B]#CRLF#([MeasureLastPubDateB4])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsB

[MeterLine6B]
Meter=String
MeasureName=MeasureTitle6B
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink6B]"]
ToolTipType=0
TooltipText=[MeasureTitle6B]#CRLF#([MeasureLastPubDateB5])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsB

[MeterLine7B]
Meter=String
MeasureName=MeasureTitle7B
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink7B]"]
ToolTipType=0
TooltipText=[MeasureTitle7B]#CRLF#([MeasureLastPubDateB6])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsB

[MeterLine8B]
Meter=String
MeasureName=MeasureTitle8B
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink8B]"]
ToolTipType=0
TooltipText=[MeasureTitle8B]#CRLF#([MeasureLastPubDateB7])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsB

[MeterLine9B]
Meter=String
MeasureName=MeasureTitle9B
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink9B]"]
ToolTipType=0
TooltipText=[MeasureTitle9B]#CRLF#([MeasureLastPubDateB8])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsB

[MeterLine10B]
Meter=String
MeasureName=MeasureTitle10B
MeterStyle=TextStyle1
x=r
y=22r
W=240
H=14
ClipString=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" FontColor #HighlightColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["[MeasureLink10B]"]
ToolTipType=0
TooltipText=[MeasureTitle10B]#CRLF#([MeasureLastPubDateB9])
ToolTipWidth=280
DynamicVariables=1
UpdateDivider=-1
Hidden=1
Group=GroupFeedsB

[MeterPubDateB]
Meter=String
MeasureName=MeasureLastPubDateB
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
Group=GroupFeedsB

[MeterPublisherBTxt]
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
Group=GroupFeedsB

[MeterPublisherB]
Meter=String
MeasureName=MeasureLastPublisherB
MeterStyle=TextStyle1
FontSize=9
x=63
y=-1r
W=95
H=14
ClipString=1
DynamicVariables=1
UpdateDivider=-1
Group=GroupFeedsB
