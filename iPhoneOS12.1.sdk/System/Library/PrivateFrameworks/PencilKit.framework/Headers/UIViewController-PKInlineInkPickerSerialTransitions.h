//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (PKInlineInkPickerSerialTransitions)
+ (void)_pk_unblockSerialTransitionsUsingSemaphore:(id)arg1;
+ (void)_pk_blockSerialTransitionsOnQueue:(id)arg1 semaphore:(id)arg2;
- (_Bool)_pk_canPresentViewController:(id)arg1;
- (_Bool)_pk_canDismissViewController;
- (void)_pk_seriallyDismissViewControllerOnQueue:(id)arg1 animated:(_Bool)arg2 willDismiss:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_pk_seriallyPresentViewController:(id)arg1 queue:(id)arg2 animated:(_Bool)arg3 willPresent:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
@end
