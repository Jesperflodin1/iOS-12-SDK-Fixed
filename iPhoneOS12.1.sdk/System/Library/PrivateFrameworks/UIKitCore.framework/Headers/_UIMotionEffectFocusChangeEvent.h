/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIMotionEffectEvent.h>

@interface _UIMotionEffectFocusChangeEvent : _UIMotionEffectEvent {

	CGPoint _focusPosition;

}

@property (nonatomic,readonly) CGPoint focusPosition;              //@synthesize focusPosition=_focusPosition - In the implementation block
-(CGPoint)focusPosition;
-(id)copyWithTimestamp:(double)arg1 ;
-(double)velocityRelativeToPreviousEvent:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 focusPosition:(CGPoint)arg2 ;
@end
