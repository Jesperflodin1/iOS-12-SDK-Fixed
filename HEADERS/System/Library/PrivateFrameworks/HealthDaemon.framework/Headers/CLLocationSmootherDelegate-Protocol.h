//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/CLLocationManagerDelegateInternal-Protocol.h>

@class CLLocationSmoother, NSArray;

@protocol CLLocationSmootherDelegate <CLLocationManagerDelegateInternal>

@optional
- (void)locationManager:(CLLocationSmoother *)arg1 didSmoothLocations:(NSArray *)arg2 ofType:(int)arg3;
@end
