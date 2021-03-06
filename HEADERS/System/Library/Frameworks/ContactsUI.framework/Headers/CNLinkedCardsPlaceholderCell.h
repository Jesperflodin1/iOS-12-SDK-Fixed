/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:46 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyPlaceholderCell.h>

@protocol CNPropertyCellDelegate;
@interface CNLinkedCardsPlaceholderCell : CNPropertyPlaceholderCell {

	id<CNPropertyCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)performDefaultAction;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id<CNPropertyCellDelegate>)delegate;
@end

