//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SKUIBadgeLabel, SKUIClientContext, UIColor, UIImageView, UILabel;

@interface SKUILockupMetadataView : UIView
{
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    SKUIClientContext *_clientContext;
    SKUIBadgeLabel *_editorialBadgeLabel;
    UILabel *_itemCountLabel;
    UILabel *_itemOfferLabel;
    long long _numberOfUserRatings;
    UILabel *_releaseDateLabel;
    UIColor *_textColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    float _userRating;
    UIImageView *_userRatingImageView;
    UILabel *_userRatingLabel;
    unsigned long long _visibleFields;
}

+ (double)maximumHeightWithVisibleFields:(unsigned long long)arg1;
@property(nonatomic) unsigned long long visibleFields; // @synthesize visibleFields=_visibleFields;
@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
@property(readonly, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_textColor;
@property(nonatomic) long long numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_reloadUserRatingViews;
- (id)_newDefaultLabel;
- (id)_decimalNumberFormatter;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *releaseDateString;
@property(copy, nonatomic) NSString *itemOfferString;
@property(copy, nonatomic) NSString *itemCountString;
- (void)setColoringWithColorScheme:(id)arg1;
@property(copy, nonatomic) NSString *categoryString;
@property(copy, nonatomic) NSString *editorialBadgeString;
@property(copy, nonatomic) NSString *artistName;
- (id)initWithFrame:(struct CGRect)arg1;

@end

