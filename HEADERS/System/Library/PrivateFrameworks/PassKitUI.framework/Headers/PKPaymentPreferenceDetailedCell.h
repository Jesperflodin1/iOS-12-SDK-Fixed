//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentPreferenceCell.h>

@class UITextField;

@interface PKPaymentPreferenceDetailedCell : PKPaymentPreferenceCell
{
    UITextField *_textField;
    _Bool _isLeftToRight;
    double _minimumCellHeight;
    _Bool _inlineEditingEnabled;
    double _leadingOffset;
}

@property(nonatomic) double minimumCellHeight; // @synthesize minimumCellHeight=_minimumCellHeight;
@property(nonatomic) double leadingOffset; // @synthesize leadingOffset=_leadingOffset;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) _Bool inlineEditingEnabled; // @synthesize inlineEditingEnabled=_inlineEditingEnabled;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showTextField:(_Bool)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end
