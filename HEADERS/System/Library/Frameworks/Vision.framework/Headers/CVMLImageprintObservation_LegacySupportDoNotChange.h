/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/CVMLObservation_LegacySupportDoNotChange.h>

@class NSUUID, MPImageDescriptor_LegacySupportDoNotChange, NSString;

@interface CVMLImageprintObservation_LegacySupportDoNotChange : CVMLObservation_LegacySupportDoNotChange {

	NSUUID* _identifier;
	MPImageDescriptor_LegacySupportDoNotChange* _imageprintDescriptor;
	NSString* _imageprintType;
	NSString* _imageprintVersion;

}
+(BOOL)supportsSecureCoding;
-(id)serializeAsVNImageprintStateAndReturnError:(id*)arg1 ;
-(unsigned long long)serializedLength;
-(unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
@end
