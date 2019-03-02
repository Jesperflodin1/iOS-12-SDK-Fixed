//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/MNLocationTracker.h>

@class GEORouteMatcher, MNTransitLocationCoordinator;

__attribute__((visibility("hidden")))
@interface MNSteppingLocationTracker : MNLocationTracker
{
    MNTransitLocationCoordinator *_transitLocationCoordinator;
    GEORouteMatcher *_routeMatcher;
}

- (void).cxx_destruct;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)stopTracking;
- (void)startTracking;
- (id)matchedLocationForLocation:(id)arg1;
- (void)resetForTracePlayerAtLocation:(id)arg1;
- (int)transportType;
- (id)initWithNavigationSession:(id)arg1;

@end
