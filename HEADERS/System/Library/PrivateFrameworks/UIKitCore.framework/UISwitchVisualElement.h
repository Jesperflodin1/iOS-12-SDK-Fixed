//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIImpactFeedbackGenerator;
@protocol UISwitchControl;

__attribute__((visibility("hidden")))
@interface UISwitchVisualElement : UIView
{
    _Bool _enabled;
    id <UISwitchControl> _switchControl;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    double _enabledAlpha;
}

+ (struct CGSize)preferredContentSize;
@property(nonatomic) double enabledAlpha; // @synthesize enabledAlpha=_enabledAlpha;
@property(retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // @synthesize impactFeedbackGenerator=_impactFeedbackGenerator;
@property(nonatomic) __weak id <UISwitchControl> switchControl; // @synthesize switchControl=_switchControl;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)setShowsOnOffLabel:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setOffImage:(id)arg1;
- (void)setOnImage:(id)arg1;
- (void)setThumbTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setOnTintColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

