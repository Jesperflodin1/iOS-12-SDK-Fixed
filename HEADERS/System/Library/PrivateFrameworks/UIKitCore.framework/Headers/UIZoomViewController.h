/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:15 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIWindow, UIButton;

@interface UIZoomViewController : UIViewController {

	UIWindow* _window;
	UIButton* _zoomButton;

}
-(id)init;
-(void)dealloc;
-(id)screen;
-(id)_window;
-(void)loadView;
-(BOOL)isClassicControlWindow:(id)arg1 ;
-(void)_setupPositioningAndRotationForInterfaceOrientation:(long long)arg1 offscreen:(BOOL)arg2 ;
-(void)_zoomOrientationChange:(id)arg1 ;
-(void)_applicationDidFinishLaunching:(id)arg1 ;
-(void)_suspendAnimationStarted:(id)arg1 ;
-(void)_updateZoomButton;
-(void)_changeZoom:(id)arg1 ;
-(void)_zoomOrientationAnimationFinished:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI27*)arg1 forWindow:(id)arg2 ;
@end
