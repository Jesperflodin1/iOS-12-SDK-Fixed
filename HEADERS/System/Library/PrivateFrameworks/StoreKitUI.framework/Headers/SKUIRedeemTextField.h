//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class UIView;

@interface SKUIRedeemTextField : UITextField
{
    UIView *_bottomBorderView;
    UIView *_topBorderView;
    UIView *_backdropView;
    _Bool _backdropBackground;
    _Bool _suppressBorder;
}

@property(nonatomic) _Bool suppressBorder; // @synthesize suppressBorder=_suppressBorder;
@property(nonatomic) _Bool backdropBackground; // @synthesize backdropBackground=_backdropBackground;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
