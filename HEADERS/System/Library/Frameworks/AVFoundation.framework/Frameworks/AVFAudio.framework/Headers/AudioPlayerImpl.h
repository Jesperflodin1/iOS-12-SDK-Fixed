/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:20 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAudioPlayerDelegate, OS_dispatch_queue;
#import <AVFAudio/AVFAudio-Structs.h>
@class NSData, NSURL, NSDictionary, AVAudioFormat, NSArray, AVAudioSession, NSObject;

@interface AudioPlayerImpl : NSObject {

	id<AVAudioPlayerDelegate> _delegate;
	NSData* _data;
	NSURL* _url;
	NSDictionary* _actualSettings;
	AVAudioFormat* _format;
	BOOL _playRetain;
	NSArray* _channelAssignments;
	AVAudioSession* _audioSession;
	AVAudioPlayerCpp* _localPlayer;
	NSObject*<OS_dispatch_queue> _gcd;

}
-(id)init;
-(void)dealloc;
@end

