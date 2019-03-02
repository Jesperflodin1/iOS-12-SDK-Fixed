//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSSocialService.h>

@class CLSCalendarEventsCache, CNContact, CNContactStore, NSMutableSet;

@interface CLSSocialServiceCalendar : CLSSocialService
{
    CNContactStore *_contactStore;
    CNContact *_meContact;
    CLSCalendarEventsCache *_calendarEventsCache;
    NSMutableSet *_prefetchedDateIntervals;
}

+ (_Bool)eventAtLocation:(id)arg1 withAttendeeNames:(id)arg2 matchesClueCollection:(id)arg3;
+ (_Bool)shouldKeepEvent:(id)arg1 withClueCollection:(id)arg2;
- (void).cxx_destruct;
- (id)eventsForClueCollection:(id)arg1;
- (void)_enumerateEventsFromDate:(id)arg1 toDate:(id)arg2 fetchIfNeeded:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)prefetchEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 forAssetCollectionsSortedByStartDate:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)_hasAlreadyPrefetchedEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2;
- (_Bool)_sortedAssetCollections:(id)arg1 containsEvent:(id)arg2;
- (void)invalidateMemoryCaches;
- (id)eventsForDates:(id)arg1;
- (_Bool)_isCalendarRelevant:(id)arg1;
- (id)eventFromProxyEvent:(id)arg1;
- (id)_fullNameWithContact:(id)arg1;
- (id)meContact;
- (id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2;

@end
