/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:17 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMDBackingStore;


@protocol HMDAccountManager <NSObject>
@property (nonatomic,retain) HMDBackingStore * backingStore; 
@optional
-(id)primaryHandleForAccount:(id)arg1;

@required
-(HMDBackingStore *)backingStore;
-(void)setBackingStore:(id)arg1;
-(BOOL)shouldCacheAccount:(id)arg1;
-(BOOL)shouldSyncAccount:(id)arg1;
-(BOOL)shouldSyncDevice:(id)arg1;
-(BOOL)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;
-(BOOL)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;

@end

