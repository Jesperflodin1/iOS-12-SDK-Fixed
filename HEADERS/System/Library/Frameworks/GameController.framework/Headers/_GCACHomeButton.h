/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:43:14 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/_GCControllerButtonInput.h>

@protocol _GCACHomeButtonDelegate;
@interface _GCACHomeButton : _GCControllerButtonInput {

	id<_GCACHomeButtonDelegate> _delegate;
	BOOL needsReset;

}
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
@end
