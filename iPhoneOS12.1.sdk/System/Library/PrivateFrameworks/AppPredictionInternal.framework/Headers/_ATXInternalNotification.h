/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:55 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSString;

@interface _ATXInternalNotification : NSObject {

	NSString* _notificationName;
	id _token;
	opaque_pthread_mutex_t _lock;

}
+(void)postData:(id)arg1 forNotificationNamed:(id)arg2 ;
-(id)initWithNotificationName:(id)arg1 ;
-(void)registerForNotifications:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end
