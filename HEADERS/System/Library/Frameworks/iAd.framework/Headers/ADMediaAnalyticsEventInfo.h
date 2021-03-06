/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:39:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iAd/iAd-Structs.h>
@interface ADMediaAnalyticsEventInfo : NSObject {

	double _totalDuration;
	double _currentPlaybackTime;
	double _visiblePercentage;
	double _volume;

}

@property (assign,nonatomic) double totalDuration;                    //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) double currentPlaybackTime;              //@synthesize currentPlaybackTime=_currentPlaybackTime - In the implementation block
@property (assign,nonatomic) double visiblePercentage;                //@synthesize visiblePercentage=_visiblePercentage - In the implementation block
@property (assign,nonatomic) double volume;                           //@synthesize volume=_volume - In the implementation block
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(double)totalDuration;
-(double)visiblePercentage;
-(void)setVisiblePercentage:(double)arg1 ;
-(void)setTotalDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVolume:(double)arg1 ;
-(double)volume;
@end

