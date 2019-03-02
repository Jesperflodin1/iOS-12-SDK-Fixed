/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLPreviewInteractionManagerDelegate <NSObject>
@optional
-(id)transitioningDelegateForPreviewInteractionManager:(id)arg1;
-(id)containerViewForPreviewInteractionManager:(id)arg1;
-(BOOL)previewInteractionManager:(id)arg1 shouldBeginInteractionWithTouchAtLocation:(CGPoint)arg2;
-(void)previewInteractionManagerWillBeginUserInteraction:(id)arg1;
-(void)previewInteractionManagerDidEndUserInteraction:(id)arg1;
-(void)previewInteractionManager:(id)arg1 shouldFinishInteractionWithCompletionBlock:(/*^block*/id)arg2;
-(BOOL)previewInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
-(void)previewInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
-(void)previewInteractionManager:(id)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2;
-(BOOL)previewInteractionManagerShouldUseHapticTouch:(id)arg1;

@required
-(id)presentedViewControllerForPreviewInteractionManager:(id)arg1;

@end
