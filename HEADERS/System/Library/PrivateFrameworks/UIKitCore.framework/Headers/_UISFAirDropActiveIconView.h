/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:04 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIView;

@interface _UISFAirDropActiveIconView : UIImageView {

	UIView* _circleMaskView;
	BOOL _masked;

}

@property (assign,getter=isMasked,nonatomic) BOOL masked;              //@synthesize masked=_masked - In the implementation block
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 grayscale:(BOOL)arg2 ;
-(void)setMasked:(BOOL)arg1 ;
-(BOOL)isMasked;
@end
