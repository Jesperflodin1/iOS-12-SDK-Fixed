/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_queue, AVRoutePickerViewDelegate;
@class NSObject, UIColor, UIButton, UIViewPropertyAnimator, AVObservationController, AVMicaPackage, MPMediaControlsViewController;

@interface AVRoutePickerView : UIView {

	NSObject*<OS_dispatch_queue> _getAirPlayStatusQueue;
	UIColor* _activeTintColor;
	UIButton* _routePickerButton;
	UIButton* _customButton;
	CGSize _oldSize;
	UIViewPropertyAnimator* _buttonHighlightAnimator;
	AVObservationController* _observationController;
	BOOL _airPlayActive;
	AVMicaPackage* _routePickerButtonMicaPackage;
	MPMediaControlsViewController* _routePickerViewController;
	id<AVRoutePickerViewDelegate> _delegate;
	long long _routePickerButtonStyle;

}

@property (assign,nonatomic,__weak) id<AVRoutePickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * activeTintColor; 
@property (assign,nonatomic) long long routePickerButtonStyle;                           //@synthesize routePickerButtonStyle=_routePickerButtonStyle - In the implementation block
-(id)customButton;
-(void)updateButtonAppearance;
-(void)setActiveTintColor:(UIColor *)arg1 ;
-(BOOL)isAirPlayActive;
-(void)setAirPlayActive:(BOOL)arg1 ;
-(void)setCustomButton:(id)arg1 ;
-(void)_createOrUpdateRoutePickerButton;
-(void)_routePickerButtonTapped:(id)arg1 ;
-(void)_routePickerButtonTouchDown:(id)arg1 ;
-(void)_routePickerButtonTouchDragEnter:(id)arg1 ;
-(void)_routePickerButtonTouchUp:(id)arg1 ;
-(void)_setRoutePickerButtonAlpha:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateAirPlayActive;
-(BOOL)_isAirPlayActive;
-(id)_defaultActiveTintColor;
-(long long)routePickerButtonStyle;
-(void)setRoutePickerButtonStyle:(long long)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<AVRoutePickerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<AVRoutePickerViewDelegate>)delegate;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)didMoveToWindow;
-(void)_registerNotifications;
-(UIColor *)activeTintColor;
@end
