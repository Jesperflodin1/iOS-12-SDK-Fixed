/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:27:14 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLTransformOp.h>

@class NSString, MDLAnimatedVector3;

@interface MDLTransformTranslateOp : NSObject <MDLTransformOp> {

	BOOL _inverse;
	NSString* _name;
	MDLAnimatedVector3* _animatedValue;

}

@property (assign,nonatomic) BOOL inverse;                                      //@synthesize inverse=_inverse - In the implementation block
@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) MDLAnimatedVector3 * animatedValue;              //@synthesize animatedValue=_animatedValue - In the implementation block
-(BOOL)inverse;
-(MDLAnimatedVector3 *)animatedValue;
-(SCD_Struct_MD1)float4x4AtTime:(double)arg1 ;
-(SCD_Struct_MD1)double4x4AtTime:(double)arg1 ;
-(BOOL)IsInverseOp;
-(id)initWithName:(id)arg1 inverse:(BOOL)arg2 data:(id)arg3 ;
-(void)setInverse:(BOOL)arg1 ;
-(NSString *)name;
@end

