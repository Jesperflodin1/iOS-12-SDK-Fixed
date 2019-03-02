/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ATXHeuristicResultCache, NSArray, NSSet;

@interface ATXHeuristicResultCacheEntry : NSObject {

	NSString* _heuristicName;
	ATXHeuristicResultCache* _cache;
	NSArray* _actions;
	NSSet* _expirers;

}
-(id)initWithHeuristic:(id)arg1 cache:(id)arg2 ;
-(void)setActions:(id)arg1 expirers:(id)arg2 ;
-(void)dealloc;
@end
