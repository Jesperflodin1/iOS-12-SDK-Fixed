/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:07 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCDPlayableContentQueueManagerDelegate <NSObject>
@required
-(void)contentManagerReloadData:(id)arg1;
-(void)contentManager:(id)arg1 displayItemIndex:(long long)arg2 totalItemCount:(long long)arg3;
-(void)contentManager:(id)arg1 shouldShowPlaybackQueue:(BOOL)arg2;
-(void)contentManagerInitiatedPlaybackFromPlaybackQueue:(id)arg1;
-(void)contentManager:(id)arg1 presentViewController:(id)arg2;
-(void)contentManagerCompletedAllPlayback:(id)arg1;

@end

