//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSNumber, NSShadow, NSString, UIColor;

@interface VUITextLayout : NSObject <NSCopying>
{
    unsigned int _fontTraits;
    int _blendMode;
    long long _textStyle;
    NSString *_maximumContentSizeCategory;
    long long _fontWeight;
    double _fontSize;
    UIColor *_color;
    UIColor *_highlightOrSelectedColor;
    long long _textTransform;
    long long _alignment;
    unsigned long long _numberOfLines;
    unsigned long long _numberOfLinesAXSmall;
    unsigned long long _numberOfLinesAXLarge;
    double _minimumScaleFactor;
    NSShadow *_shadow;
    NSNumber *_letterSpacing;
    struct UIEdgeInsets _margin;
}

@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(retain, nonatomic) NSNumber *letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(retain, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(nonatomic) unsigned long long numberOfLinesAXLarge; // @synthesize numberOfLinesAXLarge=_numberOfLinesAXLarge;
@property(nonatomic) unsigned long long numberOfLinesAXSmall; // @synthesize numberOfLinesAXSmall=_numberOfLinesAXSmall;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) long long textTransform; // @synthesize textTransform=_textTransform;
@property(retain, nonatomic) UIColor *highlightOrSelectedColor; // @synthesize highlightOrSelectedColor=_highlightOrSelectedColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) unsigned int fontTraits; // @synthesize fontTraits=_fontTraits;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) long long fontWeight; // @synthesize fontWeight=_fontWeight;
@property(retain, nonatomic) NSString *maximumContentSizeCategory; // @synthesize maximumContentSizeCategory=_maximumContentSizeCategory;
@property(nonatomic) long long textStyle; // @synthesize textStyle=_textStyle;
- (void).cxx_destruct;
- (id)attributedStringWithString:(id)arg1 view:(id)arg2;
- (id)attributedStringWithString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
