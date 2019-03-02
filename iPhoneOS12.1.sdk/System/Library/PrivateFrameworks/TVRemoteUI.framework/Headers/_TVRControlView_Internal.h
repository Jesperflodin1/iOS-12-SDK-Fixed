/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:36 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVRemoteUI/TVRTouchProcessorDelegate.h>
#import <TVRemoteUI/_TVRButtonsViewDelegate.h>
#import <TVRemoteUI/_TVRDropDownViewDelegate.h>

@protocol _TVRControlViewInternalDelegate;
@class TVRTouchProcessor, UIView, _TVRButtonsView, _TVRDropDownView, _TVRMessageView, TVRTouchpadView, NSString;

@interface _TVRControlView_Internal : UIView <TVRTouchProcessorDelegate, _TVRButtonsViewDelegate, _TVRDropDownViewDelegate> {

	double _continuousCornerRadius;
	id<_TVRControlViewInternalDelegate> _delegate;
	TVRTouchProcessor* _touchProcessor;
	UIView* _psuedoTouchpadView;
	_TVRButtonsView* _buttonsView;
	_TVRDropDownView* _dropdownView;
	_TVRMessageView* _messageView;
	TVRTouchpadView* _touchpadView;
	UIView* _touchpadClippingView;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) UIView * psuedoTouchpadView;                                      //@synthesize psuedoTouchpadView=_psuedoTouchpadView - In the implementation block
@property (nonatomic,retain) _TVRButtonsView * buttonsView;                                    //@synthesize buttonsView=_buttonsView - In the implementation block
@property (nonatomic,retain) _TVRDropDownView * dropdownView;                                  //@synthesize dropdownView=_dropdownView - In the implementation block
@property (nonatomic,retain) _TVRMessageView * messageView;                                    //@synthesize messageView=_messageView - In the implementation block
@property (assign,nonatomic,__weak) TVRTouchpadView * touchpadView;                            //@synthesize touchpadView=_touchpadView - In the implementation block
@property (nonatomic,retain) UIView * touchpadClippingView;                                    //@synthesize touchpadClippingView=_touchpadClippingView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double continuousCornerRadius;                                    //@synthesize continuousCornerRadius=_continuousCornerRadius - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRControlViewInternalDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TVRTouchProcessor * touchProcessor;                               //@synthesize touchProcessor=_touchProcessor - In the implementation block
@property (nonatomic,readonly) unsigned long long messageType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)messageType;
-(void)setDevices:(id)arg1 ;
-(_TVRMessageView *)messageView;
-(void)setMessageView:(_TVRMessageView *)arg1 ;
-(void)setContinuousCornerRadius:(double)arg1 ;
-(double)continuousCornerRadius;
-(_TVRButtonsView *)buttonsView;
-(void)setButtonsView:(_TVRButtonsView *)arg1 ;
-(void)dropdownView:(id)arg1 didUpdateState:(BOOL)arg2 ;
-(void)dropdownView:(id)arg1 selectedDevice:(id)arg2 ;
-(void)didChangeToExpanded:(BOOL)arg1 ;
-(void)disableAllButtons;
-(void)_applyCornerRadius:(double)arg1 ;
-(TVRTouchpadView *)touchpadView;
-(void)enableButtons:(id)arg1 ;
-(void)supportedButtonsAdded:(id)arg1 removed:(id)arg2 ;
-(void)showMessageWithError:(id)arg1 andDevice:(id)arg2 ;
-(void)showMessageWithTitle:(id)arg1 message:(id)arg2 ;
-(void)showNoAssociatedNetworkMessage;
-(void)showNoWIFIConnectionMessage;
-(void)showLoadingSpinner;
-(void)showSearchingSpinner;
-(void)touchProcessor:(id)arg1 generatedTouchEvent:(id)arg2 ;
-(void)touchProcessor:(id)arg1 generatedButtonEvent:(id)arg2 ;
-(void)touchProcessor:(id)arg1 generatedGameControllerEvent:(id)arg2 ;
-(void)buttonsView:(id)arg1 generatedbuttonEvent:(id)arg2 ;
-(void)buttonsViewRequestedKeyboardPresentation:(id)arg1 ;
-(void)setTouchProcessor:(TVRTouchProcessor *)arg1 ;
-(void)disableButtonsAndSetTitle:(id)arg1 ;
-(void)hidePicker:(BOOL)arg1 ;
-(void)expandPicker:(BOOL)arg1 ;
-(void)showKeyboardButton:(BOOL)arg1 ;
-(void)clearMessageContent;
-(TVRTouchProcessor *)touchProcessor;
-(UIView *)psuedoTouchpadView;
-(void)setPsuedoTouchpadView:(UIView *)arg1 ;
-(_TVRDropDownView *)dropdownView;
-(void)setDropdownView:(_TVRDropDownView *)arg1 ;
-(void)setTouchpadView:(TVRTouchpadView *)arg1 ;
-(UIView *)touchpadClippingView;
-(void)setTouchpadClippingView:(UIView *)arg1 ;
-(id)init;
-(void)setDelegate:(id<_TVRControlViewInternalDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)layoutSubviews;
-(id<_TVRControlViewInternalDelegate>)delegate;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
@end
