//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet;

@interface PXAggregatedDataSection : NSObject
{
    NSArray *_childDataSourcesWithContent;
    NSIndexSet *_childDataSourceIndexes;
    NSArray *_dataSources;
    long long _numberOfItems;
}

@property(readonly, nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(readonly, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
- (void).cxx_destruct;
- (id)objectAtIndex:(long long)arg1;
- (id)_childDataSourceForIndex:(long long)arg1 adjustedIndex:(long long *)arg2;
- (id)initWithDataSources:(id)arg1;

@end
