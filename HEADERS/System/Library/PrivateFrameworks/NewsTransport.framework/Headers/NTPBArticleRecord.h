//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort, NSData, NSMutableArray, NSString, NTPBDate, NTPBRecordBase;

@interface NTPBArticleRecord : PBCodable <NSCopying>
{
    long long _backendArticleVersion;
    long long _behaviorFlags;
    long long _minimumNewsVersion;
    long long _publisherArticleVersion;
    long long _thumbnailFocalFrame;
    long long _thumbnailHQMetadata;
    long long _thumbnailLQMetadata;
    long long _thumbnailMediumMetadata;
    long long _thumbnailMetadata;
    long long _thumbnailUltraHQMetadata;
    long long _thumbnailWidgetHQMetadata;
    long long _thumbnailWidgetLQMetadata;
    long long _thumbnailWidgetMetadata;
    double _videoDuration;
    NSString *_accessoryText;
    NSMutableArray *_allowedStorefrontIDs;
    NSData *_articleRecirculationConfiguration;
    NTPBRecordBase *_base;
    NSMutableArray *_blockedStorefrontIDs;
    NSString *_clusterID;
    int _contentType;
    NSString *_contentURL;
    NSString *_coverArt;
    NSString *_excerptURL;
    NSMutableArray *_experimentalTitles;
    NSString *_flintDocumentURL;
    NSMutableArray *_flintFontResourceIDs;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *_globalCohort;
    NSMutableArray *_iAdCategories;
    NSMutableArray *_iAdKeywords;
    NSMutableArray *_iAdSectionIDs;
    NSMutableArray *_moreFromPublisherArticleIDs;
    NSString *_primaryAudience;
    NTPBDate *_publishDate;
    NSMutableArray *_publisherSpecifiedArticleIds;
    NSString *_referencedArticleID;
    NSMutableArray *_relatedArticleIDs;
    NSString *_shortExcerpt;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *_sourceChannelCohort;
    NSString *_sourceChannelTagID;
    NSString *_stocksClusterID;
    NSString *_stocksMetadata;
    NSString *_stocksScores;
    int _storyType;
    NSString *_subtitle;
    NSString *_thumbnailHQURL;
    NSString *_thumbnailLQURL;
    NSString *_thumbnailMediumURL;
    NSString *_thumbnailURL;
    NSString *_thumbnailUltraHQURL;
    NSString *_thumbnailWidgetHQTaggedURL;
    NSString *_thumbnailWidgetHQURL;
    NSString *_thumbnailWidgetLQTaggedURL;
    NSString *_thumbnailWidgetLQURL;
    NSString *_thumbnailWidgetTaggedURL;
    NSString *_thumbnailWidgetURL;
    NSString *_title;
    NSString *_titleCompact;
    NSMutableArray *_topics;
    NSString *_videoCallToActionTitle;
    NSString *_videoCallToActionURL;
    NSString *_videoURL;
    _Bool _isDraft;
    _Bool _isFeatureCandidate;
    _Bool _isPaid;
    _Bool _isSponsored;
    struct {
        unsigned int backendArticleVersion:1;
        unsigned int behaviorFlags:1;
        unsigned int minimumNewsVersion:1;
        unsigned int publisherArticleVersion:1;
        unsigned int thumbnailFocalFrame:1;
        unsigned int thumbnailHQMetadata:1;
        unsigned int thumbnailLQMetadata:1;
        unsigned int thumbnailMediumMetadata:1;
        unsigned int thumbnailMetadata:1;
        unsigned int thumbnailUltraHQMetadata:1;
        unsigned int thumbnailWidgetHQMetadata:1;
        unsigned int thumbnailWidgetLQMetadata:1;
        unsigned int thumbnailWidgetMetadata:1;
        unsigned int videoDuration:1;
        unsigned int contentType:1;
        unsigned int storyType:1;
        unsigned int isDraft:1;
        unsigned int isFeatureCandidate:1;
        unsigned int isPaid:1;
        unsigned int isSponsored:1;
    } _has;
}

+ (Class)experimentalTitlesType;
+ (Class)publisherSpecifiedArticleIdsType;
+ (Class)topicsType;
+ (Class)moreFromPublisherArticleIDsType;
+ (Class)relatedArticleIDsType;
+ (Class)allowedStorefrontIDsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)iAdSectionIDsType;
+ (Class)iAdKeywordsType;
+ (Class)iAdCategoriesType;
+ (Class)flintFontResourceIDsType;
@property(retain, nonatomic) NSMutableArray *experimentalTitles; // @synthesize experimentalTitles=_experimentalTitles;
@property(retain, nonatomic) NSString *stocksScores; // @synthesize stocksScores=_stocksScores;
@property(retain, nonatomic) NSString *stocksMetadata; // @synthesize stocksMetadata=_stocksMetadata;
@property(retain, nonatomic) NSString *stocksClusterID; // @synthesize stocksClusterID=_stocksClusterID;
@property(retain, nonatomic) NSMutableArray *publisherSpecifiedArticleIds; // @synthesize publisherSpecifiedArticleIds=_publisherSpecifiedArticleIds;
@property(retain, nonatomic) NSData *articleRecirculationConfiguration; // @synthesize articleRecirculationConfiguration=_articleRecirculationConfiguration;
@property(retain, nonatomic) NSString *videoCallToActionURL; // @synthesize videoCallToActionURL=_videoCallToActionURL;
@property(retain, nonatomic) NSString *videoCallToActionTitle; // @synthesize videoCallToActionTitle=_videoCallToActionTitle;
@property(retain, nonatomic) NSString *titleCompact; // @synthesize titleCompact=_titleCompact;
@property(retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *globalCohort; // @synthesize globalCohort=_globalCohort;
@property(retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *sourceChannelCohort; // @synthesize sourceChannelCohort=_sourceChannelCohort;
@property(retain, nonatomic) NSMutableArray *topics; // @synthesize topics=_topics;
@property(nonatomic) long long thumbnailWidgetHQMetadata; // @synthesize thumbnailWidgetHQMetadata=_thumbnailWidgetHQMetadata;
@property(retain, nonatomic) NSString *thumbnailWidgetHQTaggedURL; // @synthesize thumbnailWidgetHQTaggedURL=_thumbnailWidgetHQTaggedURL;
@property(retain, nonatomic) NSString *thumbnailWidgetHQURL; // @synthesize thumbnailWidgetHQURL=_thumbnailWidgetHQURL;
@property(nonatomic) long long thumbnailWidgetMetadata; // @synthesize thumbnailWidgetMetadata=_thumbnailWidgetMetadata;
@property(retain, nonatomic) NSString *thumbnailWidgetTaggedURL; // @synthesize thumbnailWidgetTaggedURL=_thumbnailWidgetTaggedURL;
@property(retain, nonatomic) NSString *thumbnailWidgetURL; // @synthesize thumbnailWidgetURL=_thumbnailWidgetURL;
@property(nonatomic) long long thumbnailWidgetLQMetadata; // @synthesize thumbnailWidgetLQMetadata=_thumbnailWidgetLQMetadata;
@property(retain, nonatomic) NSString *thumbnailWidgetLQTaggedURL; // @synthesize thumbnailWidgetLQTaggedURL=_thumbnailWidgetLQTaggedURL;
@property(retain, nonatomic) NSString *thumbnailWidgetLQURL; // @synthesize thumbnailWidgetLQURL=_thumbnailWidgetLQURL;
@property(nonatomic) _Bool isPaid; // @synthesize isPaid=_isPaid;
@property(retain, nonatomic) NSString *coverArt; // @synthesize coverArt=_coverArt;
@property(nonatomic) long long minimumNewsVersion; // @synthesize minimumNewsVersion=_minimumNewsVersion;
@property(nonatomic) long long behaviorFlags; // @synthesize behaviorFlags=_behaviorFlags;
@property(nonatomic) long long thumbnailUltraHQMetadata; // @synthesize thumbnailUltraHQMetadata=_thumbnailUltraHQMetadata;
@property(retain, nonatomic) NSString *thumbnailUltraHQURL; // @synthesize thumbnailUltraHQURL=_thumbnailUltraHQURL;
@property(nonatomic) long long thumbnailHQMetadata; // @synthesize thumbnailHQMetadata=_thumbnailHQMetadata;
@property(retain, nonatomic) NSString *thumbnailHQURL; // @synthesize thumbnailHQURL=_thumbnailHQURL;
@property(nonatomic) long long thumbnailMediumMetadata; // @synthesize thumbnailMediumMetadata=_thumbnailMediumMetadata;
@property(retain, nonatomic) NSString *thumbnailMediumURL; // @synthesize thumbnailMediumURL=_thumbnailMediumURL;
@property(nonatomic) long long thumbnailFocalFrame; // @synthesize thumbnailFocalFrame=_thumbnailFocalFrame;
@property(nonatomic) long long thumbnailMetadata; // @synthesize thumbnailMetadata=_thumbnailMetadata;
@property(retain, nonatomic) NSString *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain, nonatomic) NSMutableArray *moreFromPublisherArticleIDs; // @synthesize moreFromPublisherArticleIDs=_moreFromPublisherArticleIDs;
@property(retain, nonatomic) NSMutableArray *relatedArticleIDs; // @synthesize relatedArticleIDs=_relatedArticleIDs;
@property(nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(retain, nonatomic) NSMutableArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(retain, nonatomic) NSMutableArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(retain, nonatomic) NSMutableArray *iAdSectionIDs; // @synthesize iAdSectionIDs=_iAdSectionIDs;
@property(retain, nonatomic) NSMutableArray *iAdKeywords; // @synthesize iAdKeywords=_iAdKeywords;
@property(retain, nonatomic) NSMutableArray *iAdCategories; // @synthesize iAdCategories=_iAdCategories;
@property(nonatomic) _Bool isSponsored; // @synthesize isSponsored=_isSponsored;
@property(nonatomic) _Bool isFeatureCandidate; // @synthesize isFeatureCandidate=_isFeatureCandidate;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) NSMutableArray *flintFontResourceIDs; // @synthesize flintFontResourceIDs=_flintFontResourceIDs;
@property(retain, nonatomic) NSString *flintDocumentURL; // @synthesize flintDocumentURL=_flintDocumentURL;
@property(retain, nonatomic) NSString *clusterID; // @synthesize clusterID=_clusterID;
@property(retain, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(retain, nonatomic) NSString *accessoryText; // @synthesize accessoryText=_accessoryText;
@property(retain, nonatomic) NSString *shortExcerpt; // @synthesize shortExcerpt=_shortExcerpt;
@property(retain, nonatomic) NSString *excerptURL; // @synthesize excerptURL=_excerptURL;
@property(retain, nonatomic) NSString *primaryAudience; // @synthesize primaryAudience=_primaryAudience;
@property(nonatomic) long long thumbnailLQMetadata; // @synthesize thumbnailLQMetadata=_thumbnailLQMetadata;
@property(retain, nonatomic) NSString *thumbnailLQURL; // @synthesize thumbnailLQURL=_thumbnailLQURL;
@property(nonatomic) long long backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) long long publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(retain, nonatomic) NTPBDate *publishDate; // @synthesize publishDate=_publishDate;
@property(retain, nonatomic) NSString *sourceChannelTagID; // @synthesize sourceChannelTagID=_sourceChannelTagID;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *referencedArticleID; // @synthesize referencedArticleID=_referencedArticleID;
@property(retain, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)experimentalTitlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)experimentalTitlesCount;
- (void)addExperimentalTitles:(id)arg1;
- (void)clearExperimentalTitles;
@property(readonly, nonatomic) _Bool hasStocksScores;
@property(readonly, nonatomic) _Bool hasStocksMetadata;
@property(readonly, nonatomic) _Bool hasStocksClusterID;
- (id)publisherSpecifiedArticleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)publisherSpecifiedArticleIdsCount;
- (void)addPublisherSpecifiedArticleIds:(id)arg1;
- (void)clearPublisherSpecifiedArticleIds;
@property(readonly, nonatomic) _Bool hasArticleRecirculationConfiguration;
@property(readonly, nonatomic) _Bool hasVideoCallToActionURL;
@property(readonly, nonatomic) _Bool hasVideoCallToActionTitle;
@property(readonly, nonatomic) _Bool hasTitleCompact;
@property(readonly, nonatomic) _Bool hasGlobalCohort;
@property(readonly, nonatomic) _Bool hasSourceChannelCohort;
- (id)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;
- (void)addTopics:(id)arg1;
- (void)clearTopics;
@property(nonatomic) _Bool hasThumbnailWidgetHQMetadata;
@property(readonly, nonatomic) _Bool hasThumbnailWidgetHQTaggedURL;
@property(readonly, nonatomic) _Bool hasThumbnailWidgetHQURL;
@property(nonatomic) _Bool hasThumbnailWidgetMetadata;
@property(readonly, nonatomic) _Bool hasThumbnailWidgetTaggedURL;
@property(readonly, nonatomic) _Bool hasThumbnailWidgetURL;
@property(nonatomic) _Bool hasThumbnailWidgetLQMetadata;
@property(readonly, nonatomic) _Bool hasThumbnailWidgetLQTaggedURL;
@property(readonly, nonatomic) _Bool hasThumbnailWidgetLQURL;
@property(nonatomic) _Bool hasIsPaid;
@property(readonly, nonatomic) _Bool hasCoverArt;
@property(nonatomic) _Bool hasMinimumNewsVersion;
@property(nonatomic) _Bool hasBehaviorFlags;
@property(nonatomic) _Bool hasStoryType;
@property(nonatomic) int storyType; // @synthesize storyType=_storyType;
@property(nonatomic) _Bool hasThumbnailUltraHQMetadata;
@property(readonly, nonatomic) _Bool hasThumbnailUltraHQURL;
@property(nonatomic) _Bool hasThumbnailHQMetadata;
@property(readonly, nonatomic) _Bool hasThumbnailHQURL;
@property(nonatomic) _Bool hasThumbnailMediumMetadata;
@property(readonly, nonatomic) _Bool hasThumbnailMediumURL;
@property(nonatomic) _Bool hasThumbnailFocalFrame;
@property(nonatomic) _Bool hasThumbnailMetadata;
@property(readonly, nonatomic) _Bool hasThumbnailURL;
- (id)moreFromPublisherArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moreFromPublisherArticleIDsCount;
- (void)addMoreFromPublisherArticleIDs:(id)arg1;
- (void)clearMoreFromPublisherArticleIDs;
- (id)relatedArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedArticleIDsCount;
- (void)addRelatedArticleIDs:(id)arg1;
- (void)clearRelatedArticleIDs;
@property(nonatomic) _Bool hasIsDraft;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allowedStorefrontIDsCount;
- (void)addAllowedStorefrontIDs:(id)arg1;
- (void)clearAllowedStorefrontIDs;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)blockedStorefrontIDsCount;
- (void)addBlockedStorefrontIDs:(id)arg1;
- (void)clearBlockedStorefrontIDs;
- (id)iAdSectionIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)iAdSectionIDsCount;
- (void)addIAdSectionIDs:(id)arg1;
- (void)clearIAdSectionIDs;
- (id)iAdKeywordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)iAdKeywordsCount;
- (void)addIAdKeywords:(id)arg1;
- (void)clearIAdKeywords;
- (id)iAdCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)iAdCategoriesCount;
- (void)addIAdCategories:(id)arg1;
- (void)clearIAdCategories;
@property(nonatomic) _Bool hasIsSponsored;
@property(nonatomic) _Bool hasIsFeatureCandidate;
@property(nonatomic) _Bool hasVideoDuration;
@property(readonly, nonatomic) _Bool hasVideoURL;
- (id)flintFontResourceIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)flintFontResourceIDsCount;
- (void)addFlintFontResourceIDs:(id)arg1;
- (void)clearFlintFontResourceIDs;
@property(readonly, nonatomic) _Bool hasFlintDocumentURL;
@property(readonly, nonatomic) _Bool hasClusterID;
@property(nonatomic) _Bool hasContentType;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) _Bool hasContentURL;
@property(readonly, nonatomic) _Bool hasAccessoryText;
@property(readonly, nonatomic) _Bool hasShortExcerpt;
@property(readonly, nonatomic) _Bool hasExcerptURL;
@property(readonly, nonatomic) _Bool hasPrimaryAudience;
@property(nonatomic) _Bool hasThumbnailLQMetadata;
@property(readonly, nonatomic) _Bool hasThumbnailLQURL;
@property(nonatomic) _Bool hasBackendArticleVersion;
@property(nonatomic) _Bool hasPublisherArticleVersion;
@property(readonly, nonatomic) _Bool hasPublishDate;
@property(readonly, nonatomic) _Bool hasSourceChannelTagID;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasReferencedArticleID;
@property(readonly, nonatomic) _Bool hasBase;
- (void)dealloc;

@end

