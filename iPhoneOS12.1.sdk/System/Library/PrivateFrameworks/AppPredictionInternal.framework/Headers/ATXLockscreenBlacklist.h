/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:55 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock;

@interface ATXLockscreenBlacklist : NSObject {

	_PASLock* _lock;
	id _notificationCenterToken;
	int _libnotifyToken;

}
+(id)sharedInstance;
-(id)blacklist;
-(BOOL)isPredictionGloballyDisabled;
-(id)init;
-(void)dealloc;
@end
