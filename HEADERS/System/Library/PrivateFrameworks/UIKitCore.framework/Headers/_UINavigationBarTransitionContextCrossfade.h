/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UINavigationBarTransitionContext.h>

@class UIView;

@interface _UINavigationBarTransitionContextCrossfade : _UINavigationBarTransitionContext {

	UIView* _fromCanvasView;
	UIView* _toCanvasView;

}
-(void)animate;
-(void)_prepareContentView;
-(void)prepare;
-(int)transition;
-(void)complete;
-(void)cancel;
-(double)contentViewMaxY;
-(void)_prepareLargeTitleView;
-(void)_animateContentView;
-(void)_animateLargeTitleView;
-(void)_prepareCanvasViews;
-(void)_animateAsTwoPartsIfNecessaryPartOne:(/*^block*/id)arg1 partTwo:(/*^block*/id)arg2 ;
-(void)_animateCanvasViews;
-(void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2 ;
@end
