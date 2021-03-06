/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVFullScreenViewControllerDelegate <NSObject>
@required
-(void)fullScreenViewControllerWillBeginFullScreenPresentation:(id)arg1;
-(void)fullScreenViewControllerWillEndFullScreenPresentation:(id)arg1;
-(id)viewForFullScreenViewController:(id)arg1;
-(void)fullScreenViewController:(id)arg1 viewWillTransitionToSize:(CGSize)arg2 coordinator:(id)arg3;
-(BOOL)prefersStatusBarHiddenForFullScreenViewController:(id)arg1;
-(long long)preferredStatusStyleForFullScreenViewController:(id)arg1;
-(void)fullScreenViewControllerNeedsAppBasedStatusBarAppearanceUpdate:(id)arg1;
-(id)keyCommandResponderForFullScreenViewController:(id)arg1;

@end

