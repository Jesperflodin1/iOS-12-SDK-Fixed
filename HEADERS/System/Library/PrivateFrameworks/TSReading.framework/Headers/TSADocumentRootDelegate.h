/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol TSADocumentRootDelegate <TSKAccessControllerDelegate>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * defaultDraftName; 
@property (nonatomic,readonly) NSString * documentCachePath; 
@optional
-(NSString *)documentCachePath;
-(NSString *)defaultDraftName;
-(void)invalidateRestorableState;
-(void)continueActivityUsingBlock:(/*^block*/id)arg1;
-(void)didAddObserverForICloudTeardown:(id)arg1;
-(void)willRemoveICloudTeardownObserver:(id)arg1;

@required
-(NSString *)name;

@end
