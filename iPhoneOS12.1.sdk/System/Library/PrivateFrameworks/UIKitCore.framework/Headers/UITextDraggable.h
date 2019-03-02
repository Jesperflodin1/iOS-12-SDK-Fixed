/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIDragInteraction;


@protocol UITextDraggable <UITextInput>
@property (assign,nonatomic,__weak) id<UITextDragDelegate> textDragDelegate; 
@property (nonatomic,readonly) UIDragInteraction * textDragInteraction; 
@property (getter=isTextDragActive,nonatomic,readonly) BOOL textDragActive; 
@property (assign,nonatomic) long long textDragOptions; 
@required
-(id<UITextDragDelegate>)textDragDelegate;
-(void)setTextDragDelegate:(id)arg1;
-(UIDragInteraction *)textDragInteraction;
-(BOOL)isTextDragActive;
-(long long)textDragOptions;
-(void)setTextDragOptions:(long long)arg1;

@end
