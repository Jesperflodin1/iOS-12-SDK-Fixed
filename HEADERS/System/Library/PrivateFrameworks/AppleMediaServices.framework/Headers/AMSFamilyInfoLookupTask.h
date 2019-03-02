//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class NSString;
@protocol AMSFamilyInfoLookupBagContract;

@interface AMSFamilyInfoLookupTask : AMSTask
{
    id <AMSFamilyInfoLookupBagContract> _bagContract;
    NSString *_logKey;
}

+ (id)_processURLResult:(id)arg1;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) id <AMSFamilyInfoLookupBagContract> bagContract; // @synthesize bagContract=_bagContract;
- (void).cxx_destruct;
- (id)_pathForCachedFamilyInfoLookupResult;
- (id)_currentCachedFamilyInfo;
- (id)_cachedFamilyInfoLookupResultForAccount:(id)arg1;
- (void)_cacheFamilyInfoLookupResult:(id)arg1 forAccount:(id)arg2;
- (id)_performFamilyInfoRequestForAccount:(id)arg1 error:(id *)arg2;
- (id)performFamilyInfoLookup;
- (id)initWithBagContract:(id)arg1;

@end
