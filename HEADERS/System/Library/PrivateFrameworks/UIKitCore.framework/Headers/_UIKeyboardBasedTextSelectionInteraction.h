/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKeyboardTextSelectionInteraction.h>

@interface _UIKeyboardBasedTextSelectionInteraction : _UIKeyboardTextSelectionInteraction
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)owner;
-(void)oneFingerForcePan:(id)arg1 ;
-(void)oneFingerForcePress:(id)arg1 ;
-(BOOL)enclosingScrollViewIsScrolling;
-(void)transitionFromBlockMagnifyToBlockSelectWithLocation:(CGPoint)arg1 viaDrag:(BOOL)arg2 ;
-(void)endOneFingerSelectWithExecutionContext:(id)arg1 ;
-(void)updateOneFingerSelectWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)beginOneFingerSelectWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
@end

