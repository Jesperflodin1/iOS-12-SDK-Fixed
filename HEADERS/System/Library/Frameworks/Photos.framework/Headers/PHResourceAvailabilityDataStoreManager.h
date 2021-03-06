/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:20 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLResourceDataStore;
#import <Photos/Photos-Structs.h>
@interface PHResourceAvailabilityDataStoreManager : NSObject {

	AB _isCancelled;
	os_unfair_lock_s _lock;
	id<PLResourceDataStore> _dataStore;
	unsigned long long _requestID;

}
-(void)makeResourceLocallyAvailable:(id)arg1 asset:(id)arg2 options:(id)arg3 managedObjectContext:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)init;
-(void)cancel;
-(BOOL)isCancelled;
@end

