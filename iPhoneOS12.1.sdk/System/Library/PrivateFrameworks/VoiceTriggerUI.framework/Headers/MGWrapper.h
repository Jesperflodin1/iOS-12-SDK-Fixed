/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MGWrapper : NSObject
+(id)sharedMGWrapper;
-(id)deviceClass;
-(BOOL)isHeySiriAlwaysOn;
-(BOOL)isRunningOnSimulator;
-(BOOL)MGIsDeviceOneOfTypes:(id)arg1 ;
-(long long)getSimulatorDevice;
-(id)deviceClassiPad;
-(id)deviceClassiPhone;
-(BOOL)MGIsDeviceOneOfType:(long long)arg1 ;
-(BOOL)supportsSideButtonActivation;
-(BOOL)supportsEducationalVideos;
-(BOOL)isDeviceIPad;
@end
