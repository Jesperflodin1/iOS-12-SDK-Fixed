//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _HDHeartRateDateIntervals : NSObject
{
    double _currentStartInterval;
    double _currentEndInterval;
    long long _currentPairIndex;
    NSMutableArray *_intervalPairs;
}

- (void).cxx_destruct;
- (_Bool)insideRanges:(double)arg1;
- (void)addDateRangeFrom:(double)arg1 to:(double)arg2;
- (id)init;

@end
