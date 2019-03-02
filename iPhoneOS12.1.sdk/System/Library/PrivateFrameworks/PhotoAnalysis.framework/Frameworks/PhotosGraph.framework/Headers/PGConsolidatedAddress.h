//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/CLSTimeLocationTuple-Protocol.h>

@class NSArray, NSDate, NSString, PGGraphAddressNode;

@interface PGConsolidatedAddress : NSObject <CLSTimeLocationTuple>
{
    PGGraphAddressNode *_addressNode;
    NSArray *_addressEdgesSortedByTime;
    NSDate *_startDate;
    double _duration;
    NSDate *_expandedStartDate;
    NSDate *_expandedEndDate;
    NSString *_timeLocationIdentifier;
    struct CLLocationCoordinate2D _centerCoordinates;
}

@property(readonly, nonatomic) NSString *timeLocationIdentifier; // @synthesize timeLocationIdentifier=_timeLocationIdentifier;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) struct CLLocationCoordinate2D centerCoordinates; // @synthesize centerCoordinates=_centerCoordinates;
@property(readonly, nonatomic) NSArray *addressEdgesSortedByTime; // @synthesize addressEdgesSortedByTime=_addressEdgesSortedByTime;
@property(readonly, nonatomic) PGGraphAddressNode *addressNode; // @synthesize addressNode=_addressNode;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *expandedEndDate; // @synthesize expandedEndDate=_expandedEndDate;
@property(readonly, nonatomic) NSDate *expandedStartDate; // @synthesize expandedStartDate=_expandedStartDate;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinates;
- (id)initWithAddressNode:(id)arg1 addressEdgesSortedByTime:(id)arg2 centerCoordinates:(struct CLLocationCoordinate2D)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
