//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSData, PRImageView, PRLikeness, PRMonogramView;

@interface PRLikenessView : UIView
{
    _Bool _circular;
    PRMonogramView *_monogramView;
    PRImageView *_imageView;
    unsigned long long _likenessType;
    NSData *_recipe;
    struct CGRect _cropRect;
    struct CGImage *_staticRepresentation;
    _Bool _highlighted;
    _Bool _shouldDecode;
    PRLikeness *_likeness;
}

+ (void)initialize;
@property(nonatomic) _Bool shouldDecode; // @synthesize shouldDecode=_shouldDecode;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isCircular) _Bool circular; // @synthesize circular=_circular;
@property(retain, nonatomic) PRLikeness *likeness; // @synthesize likeness=_likeness;
- (void).cxx_destruct;
- (void)setNeedsRedraw;
- (void)layoutSubviews;
- (void)_setDisplayedView:(id)arg1;
- (_Bool)_isLikenessEqual:(id)arg1;
- (void)_imageForLikeness:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_imageView;
- (id)_monogramView;
- (_Bool)_shouldRenderStaticRepresentation;
- (void)_updateViewForLikeness:(_Bool)arg1;
- (void)dealloc;
- (id)initWithLikeness:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
