//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DADaemonSupport/DADClientDelegate.h>

#import <DADaemonSupport/DAEventsCalendarAvailabilityResponseConsumer-Protocol.h>

@class NSArray, NSDate, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface DADClientCalendarAvailabilityResponseDelegate : DADClientDelegate <DAEventsCalendarAvailabilityResponseConsumer>
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_ignoredEventID;
    NSArray *_addresses;
    id _requestID;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)calendarAvailabilityRequestFinishedWithError:(id)arg1;
- (void)calendarAvailabilityRequestReturnedResults:(id)arg1;
- (void)performRequest;
- (void)finishWithError:(id)arg1;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 client:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ignoredEventID:(id)arg5 addresses:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
