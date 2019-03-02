/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPopoverPresentationController.h>

@interface _UISharingViewPresentationController : UIPopoverPresentationController {

	BOOL _suppressDismissalHandlerUnlessDimmingViewTapped;
	/*^block*/id _dismissalHandler;

}

@property (nonatomic,copy) id dismissalHandler;                                                 //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (assign,nonatomic) BOOL suppressDismissalHandlerUnlessDimmingViewTapped;              //@synthesize suppressDismissalHandlerUnlessDimmingViewTapped=_suppressDismissalHandlerUnlessDimmingViewTapped - In the implementation block
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
-(void)setSuppressDismissalHandlerUnlessDimmingViewTapped:(BOOL)arg1 ;
-(BOOL)suppressDismissalHandlerUnlessDimmingViewTapped;
@end
