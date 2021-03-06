/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:57 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSArray;

@interface CNRepeatingGradientSeparatorView : UIView {

	UIColor* _startColor;
	UIColor* _endColor;
	long long _lineCount;

}

@property (nonatomic,readonly) NSArray * gradientColors; 
@property (nonatomic,retain) UIColor * startColor;                    //@synthesize startColor=_startColor - In the implementation block
@property (nonatomic,retain) UIColor * endColor;                      //@synthesize endColor=_endColor - In the implementation block
@property (assign,nonatomic) long long lineCount;                     //@synthesize lineCount=_lineCount - In the implementation block
-(void)_updateGradients;
-(long long)lineCount;
-(void)setLineCount:(long long)arg1 ;
-(void)setStartColor:(UIColor *)arg1 ;
-(void)setEndColor:(UIColor *)arg1 ;
-(UIColor *)startColor;
-(UIColor *)endColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(NSArray *)gradientColors;
@end

