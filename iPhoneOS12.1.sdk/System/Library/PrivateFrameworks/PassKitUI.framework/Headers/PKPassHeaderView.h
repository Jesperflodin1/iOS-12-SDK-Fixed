//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKPass, PKPassView, PKPeerPaymentAccount, PKRemoteDataAccessor, PKTransitPassProperties, UIColor, UIImageView, UILabel;
@protocol PKPassHeaderViewDelegate, PKPassLibraryDataProvider;

@interface PKPassHeaderView : UIView
{
    PKRemoteDataAccessor *_remoteDataAccessor;
    UIView *_passMaskView;
    UIImageView *_maskShadow;
    UILabel *_title;
    UILabel *_type;
    UILabel *_modificationDate;
    UILabel *_valueTitle;
    UILabel *_value;
    _Bool _largeStyle;
    _Bool _showModificationDate;
    _Bool _valueLabelsShouldStack;
    PKPass *_pass;
    PKPassView *_passView;
    PKTransitPassProperties *_transitProperties;
    PKPeerPaymentAccount *_peerPaymentAccount;
    unsigned long long _suppressedContent;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
    id <PKPassHeaderViewDelegate> _delegate;
    id <PKPassLibraryDataProvider> _passLibraryOverride;
}

@property(retain, nonatomic) id <PKPassLibraryDataProvider> passLibraryOverride; // @synthesize passLibraryOverride=_passLibraryOverride;
@property(nonatomic) __weak id <PKPassHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(nonatomic) _Bool valueLabelsShouldStack; // @synthesize valueLabelsShouldStack=_valueLabelsShouldStack;
@property(nonatomic) _Bool showModificationDate; // @synthesize showModificationDate=_showModificationDate;
@property(nonatomic, getter=isLargeStyle) _Bool largeStyle; // @synthesize largeStyle=_largeStyle;
@property(nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property(retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // @synthesize peerPaymentAccount=_peerPaymentAccount;
@property(retain, nonatomic) PKTransitPassProperties *transitProperties; // @synthesize transitProperties=_transitProperties;
@property(readonly, nonatomic) PKPassView *passView; // @synthesize passView=_passView;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (id)_secondaryTextColor;
- (id)_primaryTextColor;
- (void)_passLibraryDidChange:(id)arg1;
- (void)updateModifiedDate;
- (struct CGSize)passViewSizeForHeight:(double)arg1;
- (void)_updateTextContent;
- (void)_updateContent;
- (CDStruct_bc00259c)passSizeInfoForHeight:(double)arg1;
- (void)updateShadow:(double)arg1;
- (_Bool)titleAndValueLabelCouldOverlapAtHeaderViewSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithPass:(id)arg1;

@end
