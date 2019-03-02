//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDKeyedObject-Protocol.h>

@class CHDTitle, EDResources, NSArray, NSString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDAxis : NSObject <EDKeyedObject>
{
    _Bool mReverseOrder;
    _Bool mSecondary;
    _Bool mDateTimeFormattingFlag;
    _Bool mLineVisible;
    _Bool mDeleted;
    _Bool mAutoMinimumValue;
    _Bool mAutoMaximumValue;
    _Bool mAutoCrossValue;
    _Bool mContentFormatDerived;
    int mAxisId;
    unsigned long long mContentFormatId;
    unsigned long long mFontIndex;
    double mScalingMaximum;
    double mScalingMinimum;
    int mOrientation;
    double mCrossAxisId;
    double mCrossesAt;
    int mMajorTickMark;
    int mMinorTickMark;
    int mAxisPosition;
    int mAxisType;
    int mTickLabelPosition;
    CHDTitle *mTitle;
    OADGraphicProperties *mMinorGridLinesGraphicProperties;
    OADGraphicProperties *mMajorGridLinesGraphicProperties;
    OADGraphicProperties *mAxisGraphicProperties;
    int mCrossBetween;
    int mCrosses;
    double mTickLabelRotation;
    _Bool mIsAutoRotation;
    unsigned long long mTickLabelColorIndex;
    EDResources *mResources;
    NSArray *mLabelEffects;
}

@property(readonly, copy) NSString *description;
- (void)setLabelEffects:(id)arg1;
- (id)labelEffects;
- (void)adjustAxisPositionForHorizontalChart;
- (void)setTickLabelAutoRotation:(_Bool)arg1;
- (_Bool)isTickLabelAutoRotation;
- (void)setTickLabelRotationAngle:(double)arg1;
- (double)tickLabelRotationAngle;
- (void)setDateTimeFormattingFlag:(_Bool)arg1;
- (_Bool)isDateTimeFormattingFlag;
- (_Bool)isDate;
- (long long)key;
- (void)setCrosses:(int)arg1;
- (int)crosses;
- (void)setCrossBetween:(int)arg1;
- (int)crossBetween;
- (void)setAxisGraphicProperties:(id)arg1;
- (id)axisGraphicProperties;
- (void)setMajorGridLinesGraphicProperties:(id)arg1;
- (id)majorGridLinesGraphicProperties;
- (void)setMinorGridLinesGraphicProperties:(id)arg1;
- (id)minorGridLinesGraphicProperties;
- (void)setTitle:(id)arg1;
- (id)title;
- (_Bool)isTickLabelVisible;
- (void)setTickLabelPosition:(int)arg1;
- (int)tickLabelPosition;
- (void)setAxisType:(int)arg1;
- (int)axisType;
- (void)setAxisPosition:(int)arg1;
- (int)axisPosition;
- (void)setMinorTickMark:(int)arg1;
- (int)minorTickMark;
- (void)setMajorTickMark:(int)arg1;
- (int)majorTickMark;
- (void)setCrossesAt:(double)arg1;
- (double)crossesAt;
- (void)setCrossAxisId:(double)arg1;
- (double)crossAxisIdForXml;
- (double)crossAxisId;
- (void)setOrientation:(int)arg1;
- (int)orientation;
- (void)setScalingMinimum:(double)arg1;
- (double)scalingMinimum;
- (void)setScalingMaximum:(double)arg1;
- (double)scalingMaximum;
- (void)setIsContentFormatDerivedFromDataPoints:(_Bool)arg1;
- (_Bool)isContentFormatDerivedFromDataPoints;
- (void)setContentFormat:(id)arg1;
- (id)defaultDateTimeContentFormat;
- (id)contentFormat;
- (void)setFont:(id)arg1;
- (id)font;
- (_Bool)isHorizontalPosition;
- (_Bool)isAutoCrossValue;
- (_Bool)isAutoMaximumValue;
- (_Bool)isAutoMinimumValue;
- (void)setDeleted:(_Bool)arg1;
- (_Bool)isDeleted;
- (void)setLineVisible:(_Bool)arg1;
- (_Bool)isLineVisible;
- (void)setSecondary:(_Bool)arg1;
- (_Bool)isSecondary;
- (void)setReverseOrder:(_Bool)arg1;
- (_Bool)isReverseOrder;
- (void)setAxisId:(int)arg1;
- (int)axisIdForXml;
- (int)axisId;
- (void)dealloc;
- (id)initWithResources:(id)arg1;
- (id)tickLabelColor;
- (void)setTickLabelColorIndex:(unsigned long long)arg1;
- (unsigned long long)tickLabelColorIndex;
- (void)setFontIndex:(unsigned long long)arg1;
- (unsigned long long)fontIndex;
- (void)setContentFormatId:(unsigned long long)arg1;
- (unsigned long long)contentFormatId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
