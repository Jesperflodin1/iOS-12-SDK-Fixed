//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCToggleControl, UIView;

@protocol NCToggleControlDelegate <NSObject>

@optional
- (void)toggleControlDidDismssPreviewInteractionPresentedContent:(NCToggleControl *)arg1;
- (void)toggleControlDidPresentPreviewInteractionPresentedContent:(NCToggleControl *)arg1;
- (void)toggleControlDidBeginPreviewInteraction:(NCToggleControl *)arg1;
- (UIView *)containerViewForToggleControlPreviewInteractionPresentedContent:(NCToggleControl *)arg1;
@end
