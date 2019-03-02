/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:41:49 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARAnchor.h>

@class ARReferenceObject;

@interface ARObjectAnchor : ARAnchor {

	ARReferenceObject* _referenceObject;

}

@property (nonatomic,readonly) ARReferenceObject * referenceObject;              //@synthesize referenceObject=_referenceObject - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithAnchor:(id)arg1 ;
-(ARReferenceObject *)referenceObject;
-(id)initWithReferenceObject:(id)arg1 transform:(SCD_Struct_AR16)arg2 ;
-(BOOL)isTracked;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)name;
-(id)description;
@end
