/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDSmartPathSource
@property (readonly) unsigned long long numberOfControlKnobs; 
@optional
-(CGPoint*)fixedPointForControlKnobChange;

@required
-(void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(CGPoint)arg2;
-(CGPoint*)getControlKnobPosition:(unsigned long long)arg1;
-(id)getFeedbackStringForKnob:(unsigned long long)arg1;
-(CGPathRef)newFeedbackPathForKnob:(unsigned long long)arg1;
-(unsigned long long)numberOfControlKnobs;

@end

