/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:02 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <libobjc.A.dylib/HSIOHIDManagerInterface.h>

@interface HSHIDManager : NSObject <HSIOHIDManagerInterface> {

	IOHIDManagerRef _managerRef;
	BOOL _active;
	BOOL _cancelled;
	/*^block*/id _deviceEnumeratedCallback;
	/*^block*/id _deviceRemovedCallback;

}

@property (nonatomic,copy) id deviceEnumeratedCallback;              //@synthesize deviceEnumeratedCallback=_deviceEnumeratedCallback - In the implementation block
@property (nonatomic,copy) id deviceRemovedCallback;                 //@synthesize deviceRemovedCallback=_deviceRemovedCallback - In the implementation block
-(BOOL)open:(id*)arg1 ;
-(id)devices;
-(BOOL)setValue:(id)arg1 forProperty:(CFStringRef)arg2 ;
-(BOOL)close:(id*)arg1 ;
-(void)scheduleWithRunLoop:(CFRunLoopRef)arg1 mode:(const CFStringRef)arg2 ;
-(void)unscheduleFromRunLoop:(CFRunLoopRef)arg1 mode:(const CFStringRef)arg2 ;
-(void)setDeviceRemovedCallback:(id)arg1 ;
-(id)deviceRemovedCallback;
-(id)initWithManagerRef:(IOHIDManagerRef)arg1 ;
-(void)enumerateDevicesMatching:(id)arg1 ;
-(void)setDeviceEnumeratedCallback:(id)arg1 ;
-(id)deviceEnumeratedCallback;
-(id)init;
-(void)dealloc;
-(id)valueForProperty:(CFStringRef)arg1 ;
@end
