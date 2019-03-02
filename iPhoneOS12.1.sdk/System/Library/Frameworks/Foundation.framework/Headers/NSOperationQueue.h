/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:45 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NSOperationQueue : NSObject {

	id _private;
	void* _reserved;

}

@property (copy,readonly) NSArray * operations; 
@property (readonly) unsigned long long operationCount; 
@property (assign) long long maxConcurrentOperationCount; 
@property (getter=isSuspended) BOOL suspended; 
@property (copy) NSString * name; 
@property (assign) long long qualityOfService; 
@property (assign) NSObject*<OS_dispatch_queue> underlyingQueue; 
+(id)ic_sharedRequestOperationQueueWithQualityOfService:(long long)arg1 ;
+(id)aa_operationQueueWithUnderlyingQueue:(id)arg1 ;
+(id)currentQueue;
+(id)mainQueue;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)overcommitsOperations;
-(void)setOvercommitsOperations:(BOOL)arg1 ;
-(id)__graphDescription;
-(void)_fc_addUncancellableOperationForReactorID:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_fc_addUncancellableOperationWithBlock:(/*^block*/id)arg1 ;
-(void)setUnderlyingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)maxConcurrentOperationCount;
-(long long)qualityOfService;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(void)addOperation:(id)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)underlyingQueue;
-(BOOL)isSuspended;
-(NSArray *)operations;
-(void)cancelAllOperations;
-(void)waitUntilAllOperationsAreFinished;
-(void)setSuspended:(BOOL)arg1 ;
-(unsigned long long)operationCount;
-(void)setQualityOfService:(long long)arg1 ;
@end
