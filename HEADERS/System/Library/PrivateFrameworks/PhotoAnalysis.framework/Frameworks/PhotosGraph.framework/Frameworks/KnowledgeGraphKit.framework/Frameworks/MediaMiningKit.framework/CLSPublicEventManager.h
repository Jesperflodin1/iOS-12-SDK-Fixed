//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSPublicEventCache;

@interface CLSPublicEventManager : NSObject
{
    CLSPublicEventCache *_cache;
    double _queryRadius;
}

+ (id)urlForEventsForCacheInvalidation;
@property(nonatomic) double queryRadius; // @synthesize queryRadius=_queryRadius;
@property(readonly, nonatomic) CLSPublicEventCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)loadInvalidationTokensAndInvalidateCachesIfNeeded;
- (void)saveEventsForCacheInvalidation:(id)arg1;
- (id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end
