/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NTSectionDescriptor <NTSectionDisplayDescriptor,NTSectionFetchDescriptor,NSObject,NFCopying>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * compactName; 
@property (nonatomic,copy,readonly) NSString * referralBarName; 
@property (nonatomic,copy,readonly) NSString * personalizationFeatureID; 
@property (nonatomic,readonly) unsigned long long cachedResultCutoffTime; 
@property (nonatomic,readonly) unsigned long long fallbackOrder; 
@property (nonatomic,readonly) unsigned long long minimumStoriesAllocation; 
@property (nonatomic,readonly) unsigned long long maximumStoriesAllocation; 
@property (nonatomic,readonly) int readArticlesFilterMethod; 
@property (nonatomic,readonly) int seenArticlesFilterMethod; 
@property (nonatomic,readonly) long long seenArticlesMinimumTimeSinceFirstSeenToFilter; 
@property (nonatomic,readonly) long long supplementalInterSectionFilterOptions; 
@property (nonatomic,readonly) long long supplementalIntraSectionFilterOptions; 
@property (nonatomic,readonly) int leadingCellPromotionPolicy; 
@property (nonatomic,readonly) BOOL openVideoPlaylistInApp; 
@required
-(unsigned long long)cachedResultCutoffTime;
-(int)readArticlesFilterMethod;
-(int)seenArticlesFilterMethod;
-(int)leadingCellPromotionPolicy;
-(unsigned long long)fallbackOrder;
-(unsigned long long)maximumStoriesAllocation;
-(long long)seenArticlesMinimumTimeSinceFirstSeenToFilter;
-(NSString *)personalizationFeatureID;
-(NSString *)compactName;
-(NSString *)referralBarName;
-(BOOL)openVideoPlaylistInApp;
-(unsigned long long)minimumStoriesAllocation;
-(long long)supplementalInterSectionFilterOptions;
-(long long)supplementalIntraSectionFilterOptions;
-(NSString *)identifier;

@end
