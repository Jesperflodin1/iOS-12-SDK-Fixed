//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIAlertControllerVisualStyle.h>

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyleAlert : UIAlertControllerVisualStyle
{
}

- (_Bool)placementAvoidsKeyboard;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;
- (long long)permittedActionLayoutDirection;
- (id)textFieldContainingViewWithTextField:(id)arg1;
- (struct UIEdgeInsets)contentInsetsForContainerView:(id)arg1;
- (double)maximumWidth;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginAboveMessageLabelFirstBaseline;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (double)marginBelowTitleLabelLastBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (id)titleLabelColor;
- (id)titleLabelFont;

@end

