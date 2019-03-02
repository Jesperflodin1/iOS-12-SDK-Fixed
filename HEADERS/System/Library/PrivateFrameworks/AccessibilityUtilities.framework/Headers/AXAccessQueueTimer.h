/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXAccessQueueTimer <NSObject>
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@required
-(BOOL)isPending;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2;
-(BOOL)isActive;
-(void)cancel;

@end
