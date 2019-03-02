/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNAddressComponentTextFieldCell.h>

@class UITextField, CNRepeatingGradientSeparatorView;

@interface CNAddressComponentSplitTextFieldCell : CNAddressComponentTextFieldCell {

	UITextField* _textFieldLeft;
	UITextField* _textFieldRight;
	CNRepeatingGradientSeparatorView* _separator;

}

@property (nonatomic,retain) UITextField * textFieldLeft;                               //@synthesize textFieldLeft=_textFieldLeft - In the implementation block
@property (nonatomic,retain) UITextField * textFieldRight;                              //@synthesize textFieldRight=_textFieldRight - In the implementation block
@property (nonatomic,retain) CNRepeatingGradientSeparatorView * separator;              //@synthesize separator=_separator - In the implementation block
+(id)cellIdentifier;
-(void)setTextFieldLeft:(UITextField *)arg1 ;
-(void)setTextFieldRight:(UITextField *)arg1 ;
-(UITextField *)textFieldLeft;
-(UITextField *)textFieldRight;
-(void)setupTextFields;
-(id)currentConstraintsForMetrics:(id)arg1 ;
-(id)textFields;
-(void)prepareForReuse;
-(id)textAttributes;
-(void)setTextAttributes:(id)arg1 ;
-(void)setSeparator:(CNRepeatingGradientSeparatorView *)arg1 ;
-(CNRepeatingGradientSeparatorView *)separator;
@end
