//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKCompactNavigationContainedNavigationController.h>

@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationServiceViewController;
@protocol UIViewControllerTransitioningDelegate;

@interface PKPaymentAuthorizationServiceNavigationController : PKCompactNavigationContainedNavigationController
{
    PKPaymentAuthorizationLayout *_layout;
    PKPaymentAuthorizationServiceViewController *_authorizationViewController;
    id <UIViewControllerTransitioningDelegate> _paymentTransitioningDelegate;
}

@property(retain, nonatomic) id <UIViewControllerTransitioningDelegate> paymentTransitioningDelegate; // @synthesize paymentTransitioningDelegate=_paymentTransitioningDelegate;
@property(readonly, nonatomic) PKPaymentAuthorizationServiceViewController *authorizationViewController; // @synthesize authorizationViewController=_authorizationViewController;
- (void).cxx_destruct;
- (id)_backgroundColorForModalFormSheet;
- (void)traitCollectionDidChange:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
