//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXLayoutBlueprint, SXLayoutDataProvider;

@protocol SXBlueprintAnalyzer <NSObject>
- (void)analyzeBlueprint:(SXLayoutBlueprint *)arg1 layoutDataProvider:(SXLayoutDataProvider *)arg2 onMarkerFound:(unsigned long long (^)(id <SXBlueprintMarker>, unsigned long long))arg3 then:(unsigned long long (^)(unsigned long long))arg4 onEndReached:(unsigned long long (^)(void))arg5;
@end
