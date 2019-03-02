/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:58 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIViewController.h>

@class MPVolumeView;

@interface MPVolumeViewController : UIViewController {

	MPVolumeView* _volumeView;

}

@property (nonatomic,readonly) MPVolumeView * volumeView;              //@synthesize volumeView=_volumeView - In the implementation block
-(MPVolumeView *)volumeView;
-(id)init;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
@end
