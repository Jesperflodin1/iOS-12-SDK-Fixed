/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:40 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCVirtualTTYDeviceDelegate <NSObject>
@required
-(void)device:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
-(void)deviceDidStop:(id)arg1;
-(void)device:(id)arg1 didReceiveCharacter:(unsigned short)arg2;
-(void)device:(id)arg1 didReceiveText:(NSString*)arg2;

@end

