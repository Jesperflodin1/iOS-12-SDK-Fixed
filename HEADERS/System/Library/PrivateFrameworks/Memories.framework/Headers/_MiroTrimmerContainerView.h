/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _MiroTrimmerContainerView : UIView {

	UIView* _movieScrubber;
	UIView* _debugOverlay;

}

@property (nonatomic,retain) UIView * movieScrubber;              //@synthesize movieScrubber=_movieScrubber - In the implementation block
@property (nonatomic,retain) UIView * debugOverlay;               //@synthesize debugOverlay=_debugOverlay - In the implementation block
-(UIView *)movieScrubber;
-(UIView *)debugOverlay;
-(void)setMovieScrubber:(UIView *)arg1 ;
-(void)setDebugOverlay:(UIView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
@end
