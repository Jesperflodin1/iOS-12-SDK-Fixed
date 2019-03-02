/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface UIGroupTableViewCellBackground : UIView {

	SCD_Struct_UI20 _groupBackgroundFlags;
	int _sectionLocation;
	long long _selectionStyle;
	long long _separatorStyle;
	UIColor* _selectionTintColor;
	double _sectionBorderWidth;

}

@property (assign,nonatomic) int sectionLocation;                          //@synthesize sectionLocation=_sectionLocation - In the implementation block
@property (assign,nonatomic) long long selectionStyle;                     //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) UIColor * selectionTintColor;                 //@synthesize selectionTintColor=_selectionTintColor - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) double sectionBorderWidth;                    //@synthesize sectionBorderWidth=_sectionBorderWidth - In the implementation block
+(void)initialize;
+(void)_flushCacheOnNotification:(id)arg1 ;
+(id)_roundedRectBezierPathInRect:(CGRect)arg1 withSectionLocation:(int)arg2 sectionCornerRadius:(double)arg3 cornerRadiusAdjustment:(double)arg4 sectionBorderWidth:(double)arg5 forBorder:(BOOL)arg6 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)backgroundColor;
-(BOOL)isSelected;
-(void)displayLayer:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)_fillColor;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(UIColor *)selectionTintColor;
-(long long)separatorStyle;
-(void)setSeparatorStyle:(long long)arg1 ;
-(int)sectionLocation;
-(void)setSectionLocation:(int)arg1 ;
-(double)sectionBorderWidth;
-(void)setSectionBorderWidth:(double)arg1 ;
-(double)_sectionCornerRadius;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1 ;
-(id)_separatorColor;
-(id)_topShadowViewWithColor:(id)arg1 ;
-(void)_layoutSubviews:(BOOL)arg1 ;
-(BOOL)_usesResizableBackgroundImage;
-(CGSize)_backgroundImageSize;
-(UIEdgeInsets)_backgroundImageCapInsets;
-(CGRect)_backgroundImageContentsRect;
-(CGRect)_backgroundImageContentsCenter;
-(id)_bottomShadowColor;
-(id)_sectionBorderColor;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
-(void)_setSectionLocationAnimationDidStop;
-(void)setSelectionTintColor:(id)arg1 layoutSubviews:(BOOL)arg2 ;
-(CGRect)_contentRectForContentHeight:(double)arg1 ;
-(id)_topShadowColor;
-(id)_contentMaskLayer;
@end
