/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNConstantScaleConstraint : SCNConstraint {

	float _scale;
	BOOL _screenSpace;

}

@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) BOOL screenSpace; 
+(id)constantScaleConstraint;
+(BOOL)supportsSecureCoding;
-(BOOL)screenSpace;
-(void)setScreenSpace:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScale:(float)arg1 ;
@end
