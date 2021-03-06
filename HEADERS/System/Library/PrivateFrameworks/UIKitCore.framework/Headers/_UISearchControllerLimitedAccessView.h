/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:04 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, UIButton;

@interface _UISearchControllerLimitedAccessView : UIView {

	UIView* _backgroundView;
	UILabel* _keyboardLimitedLabel;
	UIButton* _backButton;

}

@property (nonatomic,retain) UIButton * backButton;              //@synthesize backButton=_backButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(UIButton *)backButton;
-(void)setBackButton:(UIButton *)arg1 ;
@end

