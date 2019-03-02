/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:46 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@interface MiroDurationCalculations : NSObject
+(double)durationForItemCount:(long long)arg1 inPickList:(id)arg2 withBlueprint:(id)arg3 respectTrim:(BOOL)arg4 localOnly:(BOOL)arg5 ;
+(double)rawDurationOfItems:(id)arg1 inRange:(NSRange)arg2 ;
+(long long)itemCountInPickList:(id)arg1 forDuration:(double)arg2 ;
+(double)biasedDurationOfItems:(id)arg1 inRange:(NSRange)arg2 ;
+(id)_itemsForDuration:(double)arg1 inPickList:(id)arg2 blueprint:(id)arg3 localOnly:(BOOL)arg4 respectTrim:(BOOL)arg5 ;
+(long long)itemCountInPickList:(id)arg1 forDuration:(double)arg2 withBlueprint:(id)arg3 respectTrim:(BOOL)arg4 outputResidual:(double*)arg5 ;
+(double)maxPleasantDurationOfItems:(id)arg1 inRange:(NSRange)arg2 ;
+(int)durationRangeForFrozenPickList:(id)arg1 ;
+(Buckets)doAllTheThingsForPickList:(id)arg1 ;
+(double)maxDurationForPickList:(id)arg1 withBlueprint:(id)arg2 ;
@end
