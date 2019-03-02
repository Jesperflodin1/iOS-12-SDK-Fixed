//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import <TemplateKit/NUIContainerStackViewDelegate-Protocol.h>

@class NSString, TLKFormattedText, TLKStackView, TLKTextAreaView, TLKVibrantLabel;

@interface TLKAuxilliaryTextView : TLKView <NUIContainerStackViewDelegate>
{
    TLKFormattedText *_topText;
    TLKFormattedText *_middleText;
    TLKFormattedText *_bottomText;
    TLKVibrantLabel *_topLabel;
    TLKVibrantLabel *_middleLabel;
    TLKVibrantLabel *_bottomLabel;
    TLKStackView *_stackView;
    TLKTextAreaView *_textAreaViewForAlignment;
}

+ (_Bool)formattedTextHasTextContent:(id)arg1;
+ (id)largeMiddleTextFont;
@property(retain) TLKTextAreaView *textAreaViewForAlignment; // @synthesize textAreaViewForAlignment=_textAreaViewForAlignment;
@property(retain) TLKStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) TLKVibrantLabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain) TLKVibrantLabel *middleLabel; // @synthesize middleLabel=_middleLabel;
@property(retain) TLKVibrantLabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) TLKFormattedText *bottomText; // @synthesize bottomText=_bottomText;
@property(retain, nonatomic) TLKFormattedText *middleText; // @synthesize middleText=_middleText;
@property(retain, nonatomic) TLKFormattedText *topText; // @synthesize topText=_topText;
- (void).cxx_destruct;
- (id)bottomLabelString;
- (id)middleLabelString;
- (id)topLabelString;
- (id)bottomLabelFont;
- (id)middleLabelFont;
- (struct UIEdgeInsets)containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2;
- (void)generateAndSizeTextAreaViewIfNeeded;
- (void)matchBaselineOfLabel:(id)arg1 toView:(id)arg2;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (void)observedPropertiesChanged;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
