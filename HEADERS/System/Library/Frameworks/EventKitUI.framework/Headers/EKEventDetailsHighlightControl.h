/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSArray, NSString, UIColor, UIImageView, UILabel, NSLayoutConstraint;

@interface EKEventDetailsHighlightControl : UIControl {

	NSArray* _titleAndSubtitleVisibleContraints;
	NSArray* _justTitleVisibleContraints;
	NSArray* _justSubtitleVisibleContraints;
	NSArray* _justTitleAndActionVisibleContraints;
	NSString* _actionText;
	NSString* _subtitleText;
	UIColor* _actionColor;
	UIImageView* _iconStack;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _actionLabel;
	NSLayoutConstraint* _topMarginConstraint;
	NSLayoutConstraint* _interLabelPaddingConstraint;
	NSLayoutConstraint* _bottomMarginConstraint;

}

@property (nonatomic,retain,readonly) NSLayoutConstraint * topMarginConstraint;                      //@synthesize topMarginConstraint=_topMarginConstraint - In the implementation block
@property (nonatomic,retain,readonly) NSLayoutConstraint * interLabelPaddingConstraint;              //@synthesize interLabelPaddingConstraint=_interLabelPaddingConstraint - In the implementation block
@property (nonatomic,retain,readonly) NSLayoutConstraint * bottomMarginConstraint;                   //@synthesize bottomMarginConstraint=_bottomMarginConstraint - In the implementation block
@property (nonatomic,readonly) UIImageView * iconStack;                                              //@synthesize iconStack=_iconStack - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * actionLabel;                                                //@synthesize actionLabel=_actionLabel - In the implementation block
+(id)subtitleColor;
+(double)topMarginConstant;
+(double)interLabelBaselineDeltaConstant;
+(double)bottomMarginConstant;
+(BOOL)requiresConstraintBasedLayout;
+(id)titleFont;
+(id)subtitleFont;
-(UILabel *)actionLabel;
-(void)setActionText:(id)arg1 color:(id)arg2 ;
-(void)_updateTitleAndSubtitleConstraints;
-(void)_updateSubtitleAndActionText;
-(void)setSubtitleAttributedText:(id)arg1 ;
-(UIImageView *)iconStack;
-(NSLayoutConstraint *)topMarginConstraint;
-(NSLayoutConstraint *)interLabelPaddingConstraint;
-(NSLayoutConstraint *)bottomMarginConstraint;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setIconImage:(id)arg1 ;
-(void)setSubtitleText:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleText:(id)arg1 ;
@end

