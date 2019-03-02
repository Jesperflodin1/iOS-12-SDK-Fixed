/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIBezierPath;

@interface PNPPlatterShadowView : UIView

@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowOpacity; 
@property (assign,nonatomic) double shadowRadius; 
@property (nonatomic,retain) UIBezierPath * shadowPath; 
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)shadowRadius;
-(void)setShadowPath:(UIBezierPath *)arg1 ;
-(double)shadowOpacity;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(UIBezierPath *)shadowPath;
@end
