/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:35:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MPCPlayerSeekCommand <MPCPlayerCommand>
@property (nonatomic,copy,readonly) NSArray * preferredBackwardJumpIntervals; 
@property (nonatomic,copy,readonly) NSArray * preferredForwardJumpIntervals; 
@required
-(id)endSeek;
-(id)changePositionToElapsedInterval:(double)arg1;
-(id)beginSeekWithDirection:(long long)arg1;
-(NSArray *)preferredBackwardJumpIntervals;
-(id)jumpByInterval:(double)arg1;
-(NSArray *)preferredForwardJumpIntervals;

@end
