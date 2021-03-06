/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {

	SCD_Struct_AV5 _exposureDuration;
	float _ISO;

}

@property (readonly) SCD_Struct_AV5 exposureDuration;              //@synthesize exposureDuration=_exposureDuration - In the implementation block
@property (readonly) float ISO;                                    //@synthesize ISO=_ISO - In the implementation block
+(id)manualExposureSettingsWithExposureDuration:(SCD_Struct_AV5)arg1 ISO:(float)arg2 ;
-(SCD_Struct_AV5)exposureDuration;
-(float)ISO;
-(id)_initManualExposureSettingsWithExposureDuration:(SCD_Struct_AV5)arg1 ISO:(float)arg2 ;
-(id)description;
-(id)debugDescription;
@end

