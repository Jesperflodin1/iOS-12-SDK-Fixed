//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface REUpNextMLModelManager : NSObject
{
}

+ (void)removeStoredModel;
- (float)predicitedProbabilityForLogicalElement:(id)arg1;
- (id)comparatorWithRules:(id)arg1;
- (void)performTrainingWithFeatureMaps:(id)arg1 events:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;

@end
