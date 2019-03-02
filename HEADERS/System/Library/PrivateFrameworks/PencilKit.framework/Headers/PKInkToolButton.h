/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:02 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIColor;


@protocol PKInkToolButton
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) unsigned long long sizeState; 
@property (assign,nonatomic) BOOL isUsedOnDarkBackground; 
@property (assign,nonatomic) unsigned long long attributeSet; 
@required
+(id)buttonWithIdentifier:(id)arg1 color:(id)arg2 sizeState:(unsigned long long)arg3;
-(void)setAttributeSet:(unsigned long long)arg1;
-(void)setIsUsedOnDarkBackground:(BOOL)arg1;
-(BOOL)isUsedOnDarkBackground;
-(unsigned long long)sizeState;
-(void)setSizeState:(unsigned long long)arg1;
-(id)initWithIdentifier:(id)arg1 color:(id)arg2 sizeState:(unsigned long long)arg3;
-(CGSize*)sizeThatFits:(CGSize)arg1 sizeState:(unsigned long long)arg2;
-(void)setColor:(id)arg1 animated:(BOOL)arg2;
-(unsigned long long)attributeSet;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(UIColor *)color;
-(void)setColor:(id)arg1;

@end
