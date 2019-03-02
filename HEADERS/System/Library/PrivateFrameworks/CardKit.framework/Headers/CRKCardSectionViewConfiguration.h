//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CRKCardSectionViewController, NSString, UIView, UIViewController, _CRKDebugOverlayView;
@protocol CRCardSection, CRKCardSectionView, CRKCardSectionViewControlling, CRKFeedbackDelegateProxying;

@interface CRKCardSectionViewConfiguration : NSObject
{
    _Bool _debugModeEnabled;
    id <CRCardSection> _cardSection;
    UIView<CRKCardSectionView> *_cardSectionView;
    id <CRKFeedbackDelegateProxying> _feedbackDelegateProxy;
    UIViewController<CRKCardSectionViewControlling> *_cardSectionViewController;
    NSString *_providerIdentifier;
    _CRKDebugOverlayView *_debugOverlayView;
    CRKCardSectionViewController *_cardKitCardSectionViewController;
}

@property(retain, nonatomic, getter=_cardKitCardSectionViewController, setter=_setCardKitCardSectionViewController:) CRKCardSectionViewController *cardKitCardSectionViewController; // @synthesize cardKitCardSectionViewController=_cardKitCardSectionViewController;
@property(nonatomic, getter=_debugModeEnabled, setter=_setDebugModeEnabled:) _Bool debugModeEnabled; // @synthesize debugModeEnabled=_debugModeEnabled;
@property(retain, nonatomic, getter=_debugOverlayView, setter=_setDebugOverlayView:) _CRKDebugOverlayView *debugOverlayView; // @synthesize debugOverlayView=_debugOverlayView;
@property(copy, nonatomic, getter=_providerIdentifier, setter=_setProviderIdentifier:) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(retain, nonatomic) UIViewController<CRKCardSectionViewControlling> *cardSectionViewController; // @synthesize cardSectionViewController=_cardSectionViewController;
@property(retain, nonatomic) id <CRKFeedbackDelegateProxying> feedbackDelegateProxy; // @synthesize feedbackDelegateProxy=_feedbackDelegateProxy;
@property(retain, nonatomic) UIView<CRKCardSectionView> *cardSectionView; // @synthesize cardSectionView=_cardSectionView;
@property(retain, nonatomic) id <CRCardSection> cardSection; // @synthesize cardSection=_cardSection;
- (void).cxx_destruct;
- (void)_updateDebugOverlayViewText:(id)arg1;

@end
