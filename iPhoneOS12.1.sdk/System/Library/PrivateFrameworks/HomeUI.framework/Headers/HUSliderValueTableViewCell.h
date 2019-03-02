//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class NSArray, NSString, UIImage, UILabel, UISlider;
@protocol HUSliderValueTableViewCellDelegate;

@interface HUSliderValueTableViewCell : UITableViewCell <HUDisableableCellProtocol>
{
    _Bool _showValue;
    id <HUSliderValueTableViewCellDelegate> _delegate;
    UISlider *_slider;
    UILabel *_valueLabel;
    NSArray *_constraints;
}

@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property(nonatomic) _Bool showValue; // @synthesize showValue=_showValue;
@property(nonatomic) __weak id <HUSliderValueTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setupAutoLayoutConstraints;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(retain, nonatomic) UIImage *maximumValueImage;
@property(retain, nonatomic) UIImage *minimumValueImage;
- (void)_sliderChanged:(id)arg1;
@property(nonatomic) double value;
@property(nonatomic) double maximumValue;
@property(nonatomic) double minimumValue;
- (void)prepareForReuse;
@property(nonatomic, getter=isContinuous) _Bool continuous;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didMoveToSuperview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
