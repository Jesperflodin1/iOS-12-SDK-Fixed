/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:52 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISpringLoadedInteractionBehavior_Private.h>

@protocol UISpringLoadedInteractionBehaviorDelegate, UISpringLoadedInteractionContext;
@class CADisplayLink, _UIVelocityIntegrator, NSString;

@interface _UISpringLoadedHysteresisBehavior : NSObject <UISpringLoadedInteractionBehavior_Private> {

	id<UISpringLoadedInteractionBehaviorDelegate> delegate;
	double _beginningVelocityThreshold;
	double _cancelingVelocityThreshold;
	CADisplayLink* _displayLink;
	_UIVelocityIntegrator* _velocityIntegrator;
	id<UISpringLoadedInteractionContext> _context;

}

@property (nonatomic,retain) CADisplayLink * displayLink;                                                //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) _UIVelocityIntegrator * velocityIntegrator;                                 //@synthesize velocityIntegrator=_velocityIntegrator - In the implementation block
@property (assign,nonatomic,__weak) id<UISpringLoadedInteractionContext> context;                        //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double beginningVelocityThreshold;                                          //@synthesize beginningVelocityThreshold=_beginningVelocityThreshold - In the implementation block
@property (assign,nonatomic) double cancelingVelocityThreshold;                                          //@synthesize cancelingVelocityThreshold=_cancelingVelocityThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<UISpringLoadedInteractionBehaviorDelegate> delegate; 
-(void)setDelegate:(id<UISpringLoadedInteractionBehaviorDelegate>)arg1 ;
-(id<UISpringLoadedInteractionBehaviorDelegate>)delegate;
-(void)setContext:(id<UISpringLoadedInteractionContext>)arg1 ;
-(id<UISpringLoadedInteractionContext>)context;
-(BOOL)shouldAllowInteraction:(id)arg1 withContext:(id)arg2 ;
-(void)interactionDidFinish:(id)arg1 ;
-(_UIVelocityIntegrator *)velocityIntegrator;
-(void)setVelocityIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(void)_tick:(id)arg1 ;
-(void)setBeginningVelocityThreshold:(double)arg1 ;
-(void)setCancelingVelocityThreshold:(double)arg1 ;
-(void)setupDisplayLink;
-(double)beginningVelocityThreshold;
-(double)cancelingVelocityThreshold;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
@end
