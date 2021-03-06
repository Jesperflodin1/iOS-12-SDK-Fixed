/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:58 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CNAvatarView, UILabel;

@interface CNUIPeopleGroupCell : UICollectionViewCell {

	CNAvatarView* _avatarView;
	UILabel* _nameLabel;

}

@property (nonatomic,readonly) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                    //@synthesize nameLabel=_nameLabel - In the implementation block
-(CNAvatarView *)avatarView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)nameLabel;
@end

