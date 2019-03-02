/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:04 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIWindow;

@interface _UIDragEventSample : NSObject {

	BOOL _isApplicationEnter;
	BOOL _isApplicationWithin;
	BOOL _isApplicationExit;
	BOOL _isDragEnd;
	BOOL _hasBeenDelivered;
	unsigned _windowServerHitTestContextID;
	UIWindow* _window;
	CGPoint _sceneLocation;
	CGPoint _locationInWindow;

}

@property (nonatomic,readonly) UIWindow * window;                                  //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) CGPoint sceneLocation;                              //@synthesize sceneLocation=_sceneLocation - In the implementation block
@property (nonatomic,readonly) CGPoint locationInWindow;                           //@synthesize locationInWindow=_locationInWindow - In the implementation block
@property (nonatomic,readonly) BOOL isApplicationEnter;                            //@synthesize isApplicationEnter=_isApplicationEnter - In the implementation block
@property (nonatomic,readonly) BOOL isApplicationWithin;                           //@synthesize isApplicationWithin=_isApplicationWithin - In the implementation block
@property (nonatomic,readonly) BOOL isApplicationExit;                             //@synthesize isApplicationExit=_isApplicationExit - In the implementation block
@property (nonatomic,readonly) BOOL isDragEnd;                                     //@synthesize isDragEnd=_isDragEnd - In the implementation block
@property (nonatomic,readonly) unsigned windowServerHitTestContextID;              //@synthesize windowServerHitTestContextID=_windowServerHitTestContextID - In the implementation block
@property (assign,nonatomic) BOOL hasBeenDelivered;                                //@synthesize hasBeenDelivered=_hasBeenDelivered - In the implementation block
+(id)sampleFromHIDEvent:(IOHIDEventRef)arg1 ;
+(id)interpolatedSampleFromSample:(id)arg1 ;
-(UIWindow *)window;
-(id)description;
-(CGPoint)locationInWindow;
-(BOOL)isDragEnd;
-(BOOL)isApplicationExit;
-(unsigned)windowServerHitTestContextID;
-(CGPoint)sceneLocation;
-(id)hitTestWithEvent:(id)arg1 constrainToWindowServerHitTestContext:(BOOL)arg2 ;
-(BOOL)isApplicationEnter;
-(BOOL)isApplicationWithin;
-(BOOL)hasBeenDelivered;
-(void)setHasBeenDelivered:(BOOL)arg1 ;
@end
