/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIViewPropertyAnimator;

@interface AVVolumeWarningView : UIView {

	BOOL _stopping;
	UIViewPropertyAnimator* _animator;

}

@property (assign,nonatomic,__weak) UIViewPropertyAnimator * animator;              //@synthesize animator=_animator - In the implementation block
@property (assign,getter=isStopping,nonatomic) BOOL stopping;                       //@synthesize stopping=_stopping - In the implementation block
-(void)stopAnimatingAndRemoveFromSuperview;
-(void)continueAnimating;
-(BOOL)isStopping;
-(void)setStopping:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)animator;
-(void)startAnimating;
@end
