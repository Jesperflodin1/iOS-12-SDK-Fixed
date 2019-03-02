//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface CAMSubjectIndicatorView : UIView
{
    UIImageView *__imageView;
}

+ (struct CGSize)_fixedSubjectIndicatorSizeForReferenceBounds:(struct CGSize)arg1;
@property(readonly, nonatomic) UIImageView *_imageView; // @synthesize _imageView=__imageView;
- (void).cxx_destruct;
@property(nonatomic, getter=isPulsing) _Bool pulsing;
- (void)stopScalingWithDuration:(double)arg1;
- (void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3 timingFunction:(id)arg4;
- (void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic, getter=isInactive) _Bool inactive;
- (id)initWithFrame:(struct CGRect)arg1;

@end
