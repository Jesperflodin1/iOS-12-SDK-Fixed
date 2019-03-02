/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:20 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@class HMFUnfairLock, HMCameraView, _HMContext, NSNumber, NSUUID, NSString;

@interface _HMCameraSource : NSObject <HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	HMCameraView* _cameraView;
	_HMContext* _context;
	NSNumber* _aspectRatio;
	NSUUID* _profileUniqueIdentifier;
	NSNumber* _slotIdentifier;
	NSString* _sessionID;

}

@property (nonatomic,readonly) _HMContext * context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * aspectRatio;                                   //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * profileUniqueIdentifier;                         //@synthesize profileUniqueIdentifier=_profileUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * slotIdentifier;                                //@synthesize slotIdentifier=_slotIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionID;                                     //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic,__weak) HMCameraView * cameraView;                                //@synthesize cameraView=_cameraView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(NSNumber *)aspectRatio;
-(id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 context:(id)arg3 profileUniqueIdentifier:(id)arg4 aspectRatio:(id)arg5 ;
-(void)setCameraView:(HMCameraView *)arg1 ;
-(HMCameraView *)cameraView;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSNumber *)slotIdentifier;
-(NSUUID *)profileUniqueIdentifier;
-(_HMContext *)context;
-(NSString *)sessionID;
@end
