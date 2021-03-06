/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:39:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIButton.h>

@interface ADPrerollButton : UIButton {

	UIEdgeInsets _hitRectInsets;
	UIEdgeInsets _alignmentRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                    //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;              //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
+(id)buttonWithType:(long long)arg1 ;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitRectInsets;
-(void)dealloc;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
@end

