/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:02 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HSIOHIDManagerInterface
@required
-(BOOL)open:(id*)arg1;
-(id)devices;
-(BOOL)setValue:(id)arg1 forProperty:(const CFStringRef)arg2;
-(BOOL)close:(id*)arg1;
-(void)scheduleWithRunLoop:(CFRunLoopRef)arg1 mode:(const CFStringRef)arg2;
-(void)unscheduleFromRunLoop:(CFRunLoopRef)arg1 mode:(const CFStringRef)arg2;
-(void)setDeviceRemovedCallback:(/*^block*/id)arg1;
-(void)enumerateDevicesMatching:(id)arg1;
-(void)setDeviceEnumeratedCallback:(/*^block*/id)arg1;
-(id)valueForProperty:(const CFStringRef)arg1;

@end
