//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEAGLLayer;

@interface PKOpenGLESView : UIView
{
    _Bool _isWideGamut;
    _Bool _isFixedPixelSize;
    struct CGSize _fixedPixelSize;
}

+ (Class)layerClass;
@property(readonly, nonatomic) struct CGSize fixedPixelSize; // @synthesize fixedPixelSize=_fixedPixelSize;
@property(readonly, nonatomic) _Bool isFixedPixelSize; // @synthesize isFixedPixelSize=_isFixedPixelSize;
@property(readonly, nonatomic) _Bool isWideGamut; // @synthesize isWideGamut=_isWideGamut;
@property(readonly, nonatomic) CAEAGLLayer *glLayer;
- (id)initWithFrame:(struct CGRect)arg1 andPixelSize:(struct CGSize)arg2 isWideGamut:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 isWideGamut:(_Bool)arg2;
- (void)initLayer;

@end
