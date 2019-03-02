/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:15 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIWindowAnimationController.h>

@interface _UIHostedWindowAnimationController : _UIWindowAnimationController {

	/*^block*/id _transitionActions;
	double _duration;

}

@property (nonatomic,copy) id transitionActions;              //@synthesize transitionActions=_transitionActions - In the implementation block
@property (assign,nonatomic) double duration;                 //@synthesize duration=_duration - In the implementation block
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(void)setTransitionActions:(id)arg1 ;
-(id)transitionActions;
@end
