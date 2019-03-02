//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSString, PGGraphNode;

@interface PGPotentialBusinessMemory : PGPotentialMemory
{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_businessNode;
    long long _year;
}

@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphNode *businessNode; // @synthesize businessNode=_businessNode;
- (void).cxx_destruct;
- (void)addMomentNode:(id)arg1;
@property(readonly) NSString *business;
- (id)initWithBusinessNode:(id)arg1 year:(long long)arg2;

@end
