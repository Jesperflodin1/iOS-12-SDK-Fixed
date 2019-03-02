//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPeerPaymentContactResolverDelegate-Protocol.h>

@class NSString, PKPaymentPass, PKPaymentTransaction, PKPeerPaymentContactResolver, PKStackedTextItemGroup, PKStackedTextItemGroupView, PKTransitPassProperties, UIImageView;

@interface PKFooterTransactionView : UIView <PKPeerPaymentContactResolverDelegate>
{
    PKStackedTextItemGroup *_displayItem;
    PKStackedTextItemGroupView *_headerView;
    UIView *_separatorView;
    PKStackedTextItemGroupView *_contentView;
    UIImageView *_imageView;
    _Bool _animated;
    unsigned long long _deferUpdateCounter;
    _Bool _needsContentUpdate;
    PKPaymentPass *_pass;
    PKPaymentTransaction *_transaction;
    PKTransitPassProperties *_transitProperties;
    PKPeerPaymentContactResolver *_peerPaymentContactResolver;
}

@property(readonly, nonatomic) PKPeerPaymentContactResolver *peerPaymentContactResolver; // @synthesize peerPaymentContactResolver=_peerPaymentContactResolver;
@property(readonly, nonatomic) PKTransitPassProperties *transitProperties; // @synthesize transitProperties=_transitProperties;
@property(readonly, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)contactsDidChangeForContactResolver:(id)arg1;
@property(readonly, nonatomic) _Bool hasContent;
- (void)endUpdates:(_Bool)arg1;
- (void)beginUpdates;
- (void)setTransitProperties:(id)arg1 animated:(_Bool)arg2;
- (void)setTransaction:(id)arg1 animated:(_Bool)arg2;
- (void)setPass:(id)arg1 animated:(_Bool)arg2;
- (id)_image;
- (id)_peerPaymentCounterpart;
- (_Bool)_deemphasizeAmount;
- (_Bool)_strikethroughAmount;
- (id)_relativeDateText;
- (id)_statusText;
- (id)_locationText;
- (id)_merchantText;
- (void)_updateContentAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)layoutIfNeededAnimated:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 peerPaymentContactResolver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
