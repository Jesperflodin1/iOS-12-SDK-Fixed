/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol HUControlView <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate; 
@property (nonatomic,retain) id value; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted; 
@optional
-(BOOL)canBeHighlighted;
-(void)setCanBeHighlighted:(BOOL)arg1;

@required
+(Class)valueClass;
-(BOOL)isDisabled;
-(NSString *)identifier;
-(void)setDelegate:(id)arg1;
-(id<HUControlViewDelegate>)delegate;
-(void)setIdentifier:(id)arg1;
-(id)value;
-(void)setValue:(id)arg1;
-(void)setDisabled:(BOOL)arg1;

@end
