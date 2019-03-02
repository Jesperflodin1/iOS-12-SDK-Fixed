//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GEORoadMatch : NSObject
{
    CDStruct_a2ef2718 *_roadFeature;
    NSString *_roadName;
    CDStruct_2c43369c _coordinateOnRoad;
    double _courseOnRoad;
    double _distanceFromRoad;
    double _roadWidth;
    double _distanceFromJunction;
    double _junctionRadius;
}

@property(nonatomic) double junctionRadius; // @synthesize junctionRadius=_junctionRadius;
@property(nonatomic) double distanceFromJunction; // @synthesize distanceFromJunction=_distanceFromJunction;
@property(nonatomic) double roadWidth; // @synthesize roadWidth=_roadWidth;
@property(nonatomic) double distanceFromRoad; // @synthesize distanceFromRoad=_distanceFromRoad;
@property(nonatomic) double courseOnRoad; // @synthesize courseOnRoad=_courseOnRoad;
@property(nonatomic) CDStruct_c3b9c2ee coordinateOnRoad; // @synthesize coordinateOnRoad=_coordinateOnRoad;
@property(copy, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property(readonly, nonatomic) CDStruct_a2ef2718 *roadFeature; // @synthesize roadFeature=_roadFeature;
- (void).cxx_destruct;
- (void)setRoadFeature:(CDStruct_a2ef2718 *)arg1;
- (void)dealloc;
- (id)initWithCoordinateOnRoad:(CDStruct_c3b9c2ee)arg1 courseOnRoad:(double)arg2;

@end
