//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface AMSMetricsBatch : NSObject
{
    ACAccount *_account;
    NSURL *_reportURL;
    NSArray *_events;
    NSArray *_eventDictionaries;
}

@property(retain, nonatomic) NSArray *eventDictionaries; // @synthesize eventDictionaries=_eventDictionaries;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSURL *reportURL; // @synthesize reportURL=_reportURL;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;

@end
