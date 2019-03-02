/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class UIAttachmentBehavior;

@interface _UIPlatterMenuSnapBehavior : UIDynamicBehavior {

	UIAttachmentBehavior* _spring1;
	UIAttachmentBehavior* _spring2;

}

@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double frequency; 
@property (assign,nonatomic) CGPoint anchorPoint; 
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)anchorPoint;
-(id)initWithItem:(id)arg1 attachedToAnchor:(CGPoint)arg2 ;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
@end
