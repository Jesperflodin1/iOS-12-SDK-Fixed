/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureSession, NSObject;

@interface AVCaptureInputInternal : NSObject {

	AVCaptureSession* session;
	NSObject*<OS_dispatch_queue> figCaptureSessionSyncQueue;
	OpaqueFigCaptureSessionRef figCaptureSession;

}
-(id)init;
-(void)dealloc;
@end

