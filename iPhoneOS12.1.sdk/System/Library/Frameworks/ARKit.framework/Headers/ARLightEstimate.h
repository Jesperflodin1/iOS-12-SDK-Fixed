/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:41:48 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface ARLightEstimate : NSObject <NSSecureCoding> {

	double _ambientIntensity;
	double _ambientColorTemperature;

}

@property (nonatomic,copy,readonly) NSData * sphericalHarmonicsCoefficients; 
@property (nonatomic,readonly) double ambientIntensity;                                   //@synthesize ambientIntensity=_ambientIntensity - In the implementation block
@property (nonatomic,readonly) double ambientColorTemperature;                            //@synthesize ambientColorTemperature=_ambientColorTemperature - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)sphericalHarmonicsCoefficients;
-(double)ambientIntensity;
-(double)ambientColorTemperature;
-(id)initWithAmbientIntensity:(double)arg1 temperature:(double)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
