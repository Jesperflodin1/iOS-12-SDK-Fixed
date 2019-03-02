/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:02 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMapTable;

@interface VNPersonsModelFaceModel : NSObject <NSSecureCoding> {

	NSMapTable* _serialNumberToPersonUniqueIdentifierMapTable;
	shared_ptr<vision::mod::FaceIDModel>* _faceIDModel;
	int _maximumElementsPerID;

}
+(id)modelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id*)arg4 ;
+(shared_ptr<vision::mod::ImageDescriptorBufferFloat32>*)_concatenateFaceprintImageDescriptorBuffer:(shared_ptr<vision::mod::ImageDescriptorBufferFloat32>*)arg1 withFaceprints:(id)arg2 forIdentityWithSerialNumber:(int)arg3 faceprintLabels:(vector<int, std::__1::allocator<int> >*)arg4 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)personCount;
-(id)personPredictionsForFace:(id)arg1 withDescriptor:(const ImageDescriptorBufferFloat32*)arg2 limit:(unsigned long long)arg3 canceller:(id)arg4 error:(id*)arg5 ;
-(id)personUniqueIdentifiers;
-(unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1 ;
-(id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1 ;
-(id)faceCountsForAllPersons;
-(id)initWithFaceIDModel:(shared_ptr<vision::mod::FaceIDModel>*)arg1 maximumElementsPerID:(unsigned long long)arg2 personUniqueIdentifierToSerialNumberMapping:(id)arg3 ;
-(id)_personPredictionsForFace:(id)arg1 withDescriptor:(const ImageDescriptorBufferFloat32*)arg2 limit:(unsigned long long)arg3 faceIDCanceller:(CVMLCanceller*)arg4 error:(id*)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
