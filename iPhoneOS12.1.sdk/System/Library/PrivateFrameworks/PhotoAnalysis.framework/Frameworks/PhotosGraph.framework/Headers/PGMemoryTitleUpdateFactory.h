//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, PGGraph, PHMemory;

@interface PGMemoryTitleUpdateFactory : NSObject
{
    PGGraph *_graph;
    PHMemory *_memory;
    NSSet *_momentNodes;
}

@property(retain, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(retain, nonatomic) PHMemory *memory; // @synthesize memory=_memory;
@property(retain, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
- (void).cxx_destruct;
- (id)_predominantSuperset;
- (id)_areaNodeForAreaMemory;
- (id)_personNodeForPersonMemory;
- (id)_predominantNeighborNodeFromMomentNodes:(id)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3 ignoredNodes:(id)arg4;
- (id)_predominantNeighborNodeFromMomentNodes:(id)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3;
- (long long)_predominantYearForYearSummaryMemory;
- (id)_startMomentNodeFromMomentNodes:(id)arg1;
- (id)_momentNodesFromMemory:(id)arg1;
- (id)titleGeneratorWithError:(id *)arg1;
- (id)initWithMemory:(id)arg1 graph:(id)arg2;

@end
