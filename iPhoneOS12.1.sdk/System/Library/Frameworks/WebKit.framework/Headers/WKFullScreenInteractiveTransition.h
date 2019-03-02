/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@class WKFullscreenAnimationController, NSString;

@interface WKFullScreenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning> {

	RetainPtr<WKFullscreenAnimationController>* _animator;
	RetainPtr<id<UIViewControllerContextTransitioning> >* _context;
	CGPoint _anchor;

}

@property (nonatomic,readonly) WKFullscreenAnimationController * animator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(id)initWithAnimator:(id)arg1 anchor:(CGPoint)arg2 ;
-(void)updateInteractiveTransition:(double)arg1 withTranslation:(CGSize)arg2 ;
-(void)updateInteractiveTransition:(double)arg1 withScale:(double)arg2 andTranslation:(CGSize)arg3 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(BOOL)wantsInteractiveStart;
-(WKFullscreenAnimationController *)animator;
@end
