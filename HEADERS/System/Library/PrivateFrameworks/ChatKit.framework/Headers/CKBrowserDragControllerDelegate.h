/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:29 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKBrowserDragControllerDelegate <NSObject>
@optional
-(void)dragManager:(id)arg1 didBeginDraggingItem:(id)arg2;
-(void)dragManager:(id)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4 wasCancelled:(BOOL*)arg5;

@required
-(BOOL)dragManager:(id)arg1 canScaleItem:(id)arg2;
-(BOOL)dragManager:(id)arg1 canRotateItem:(id)arg2;
-(BOOL)dragManager:(id)arg1 canPeelItem:(id)arg2;
-(void)dragManager:(id)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
-(void)dragManager:(id)arg1 didDragItem:(id)arg2 toDragTarget:(id)arg3;
-(BOOL)dragManager:(id)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;

@end
