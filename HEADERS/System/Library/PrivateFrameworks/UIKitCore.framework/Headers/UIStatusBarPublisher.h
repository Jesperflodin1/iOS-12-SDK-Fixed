/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableSet;

@interface UIStatusBarPublisher : NSObject {

	CFMachPortRef _machPort;
	int _styleOverrides;
	NSMutableSet* _statusBarItems;

}
-(void)dealloc;
-(int)addStyleOverrides:(int)arg1 ;
-(int)removeStyleOverrides:(int)arg1 ;
-(void)addStatusBarItem:(int)arg1 ;
-(void)removeStatusBarItem:(int)arg1 ;
-(unsigned)publisherPort;
-(id)initWithCFMachPort:(CFMachPortRef)arg1 ;
-(id)statusBarItems;
-(int)styleOverrides;
@end
