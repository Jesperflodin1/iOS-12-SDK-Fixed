//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HMSymptomsHandler, NSSet;

@protocol HMSymptomsHandlerDelegate <NSObject>

@optional
- (void)symptomsHandler:(HMSymptomsHandler *)arg1 didUpdateFixState:(long long)arg2;
- (void)symptomsHandler:(HMSymptomsHandler *)arg1 didUpdateCanInitiateFix:(_Bool)arg2;
- (void)fixSessionAvailabilityDidUpdateForSymptomsHandler:(HMSymptomsHandler *)arg1;
- (void)symptomsHandler:(HMSymptomsHandler *)arg1 didUpdateSymptoms:(NSSet *)arg2;
@end
