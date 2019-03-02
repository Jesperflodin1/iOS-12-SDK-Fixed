/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsWorld, SCNPhysicsBody;

@interface SCNPhysicsConeTwistJoint : SCNPhysicsBehavior {

	SCD_Struct_SC125 _definition;
	btConeTwistConstraint* _constraint;
	SCNPhysicsWorld* _world;

}

@property (nonatomic,readonly) SCNPhysicsBody * bodyA; 
@property (assign,nonatomic) SCNMatrix4 frameA; 
@property (nonatomic,readonly) SCNPhysicsBody * bodyB; 
@property (assign,nonatomic) SCNMatrix4 frameB; 
@property (assign,nonatomic) double maximumAngularLimit1; 
@property (assign,nonatomic) double maximumAngularLimit2; 
@property (assign,nonatomic) double maximumTwistAngle; 
+(id)jointWithBodyA:(id)arg1 frameA:(SCNMatrix4)arg2 bodyB:(id)arg3 frameB:(SCNMatrix4)arg4 ;
+(id)jointWithBody:(id)arg1 frame:(SCNMatrix4)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)_addToPhysicsWorld:(id)arg1 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg1 ;
-(id)initWithBodyA:(id)arg1 frameA:(SCNMatrix4)arg2 bodyB:(id)arg3 frameB:(SCNMatrix4)arg4 ;
-(id)initWithBody:(id)arg1 frame:(SCNMatrix4)arg2 ;
-(SCNMatrix4)frameA;
-(void)setFrameA:(SCNMatrix4)arg1 ;
-(SCNMatrix4)frameB;
-(void)setFrameB:(SCNMatrix4)arg1 ;
-(double)maximumAngularLimit1;
-(void)setMaximumAngularLimit1:(double)arg1 ;
-(double)maximumAngularLimit2;
-(void)setMaximumAngularLimit2:(double)arg1 ;
-(double)maximumTwistAngle;
-(void)setMaximumTwistAngle:(double)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCNPhysicsBody *)bodyA;
-(SCNPhysicsBody *)bodyB;
@end
