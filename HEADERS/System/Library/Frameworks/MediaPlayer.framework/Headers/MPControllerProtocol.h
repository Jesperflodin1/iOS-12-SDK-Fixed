/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:57 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPAVItem, MPAVController, UIView;


@protocol MPControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id delegate; 
@property (nonatomic,retain) MPAVItem * item; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,retain) MPAVController * player; 
@property (nonatomic,retain,readonly) UIView * view; 
@required
-(void)setOrientation:(long long)arg1 animate:(BOOL)arg2;
-(void)clearWeakReferencesToObject:(id)arg1;
-(void)noteIgnoredChangeTypes:(unsigned long long)arg1;
-(MPAVController *)player;
-(void)setPlayer:(id)arg1;
-(void)setDelegate:(id)arg1;
-(UIView *)view;
-(void)setItem:(id)arg1;
-(MPAVItem *)item;
-(id)delegate;
-(long long)orientation;
-(void)setOrientation:(long long)arg1;

@end

