//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface CKTransientReplicaButtonContainer : UIView
{
    UIView *_sendButtonCircle;
    UIView *_cancelButtonCircle;
    CALayer *_sendButtonGlyphLayer;
    CALayer *_cancelButtonGlyphLayer;
}

@property(readonly, nonatomic) CALayer *cancelButtonGlyphLayer; // @synthesize cancelButtonGlyphLayer=_cancelButtonGlyphLayer;
@property(readonly, nonatomic) CALayer *sendButtonGlyphLayer; // @synthesize sendButtonGlyphLayer=_sendButtonGlyphLayer;
@property(readonly, nonatomic) UIView *cancelButtonCircle; // @synthesize cancelButtonCircle=_cancelButtonCircle;
@property(readonly, nonatomic) UIView *sendButtonCircle; // @synthesize sendButtonCircle=_sendButtonCircle;
- (void).cxx_destruct;
- (id)_glyphLayerForButtonAnimationWithGlyphName:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 hasDarkVibrancy:(_Bool)arg2 color:(BOOL)arg3;

@end

