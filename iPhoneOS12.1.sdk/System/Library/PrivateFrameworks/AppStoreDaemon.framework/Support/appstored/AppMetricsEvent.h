//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@interface AppMetricsEvent : AMSMetricsEvent
{
}

+ (id)_sanitizeError:(id)arg1;
+ (id)_defaultProperties;
- (id)description;
- (_Bool)requiresDiagnosticSendingPermission;
- (void)addInstallationDescription:(id)arg1;
- (void)addApplicationDescription:(id)arg1;
- (id)initWithTopic:(id)arg1;

@end

