//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STGroupSpecifierProvider.h>

@class PSSpecifier, STUsageItem;

@interface STAppDetailsGroupSpecifierProvider : STGroupSpecifierProvider
{
    STUsageItem *_appUsageItem;
    PSSpecifier *_appIconSpecifier;
    PSSpecifier *_ageRatingSpecifier;
    PSSpecifier *_developerSpecifier;
}

@property(readonly, nonatomic) PSSpecifier *developerSpecifier; // @synthesize developerSpecifier=_developerSpecifier;
@property(readonly, nonatomic) PSSpecifier *ageRatingSpecifier; // @synthesize ageRatingSpecifier=_ageRatingSpecifier;
@property(readonly, nonatomic) PSSpecifier *appIconSpecifier; // @synthesize appIconSpecifier=_appIconSpecifier;
@property(readonly, nonatomic) STUsageItem *appUsageItem; // @synthesize appUsageItem=_appUsageItem;
- (void).cxx_destruct;
- (void)_didFetchAppInfo:(id)arg1;
- (void)_registerForAppInfoCacheNotifications;
- (id)developer:(id)arg1;
- (id)ageRating:(id)arg1;
- (id)category:(id)arg1;
- (id)usageItem:(id)arg1;
- (id)initWithAppUsageItem:(id)arg1;

@end
