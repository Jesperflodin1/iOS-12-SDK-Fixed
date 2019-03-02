/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:27 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError;

@interface AVOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	long long _status;
	NSError* _error;

}

@property (readonly) long long status; 
@property (readonly) NSError * error; 
+(long long)statusOfOperations:(id)arg1 error:(id*)arg2 ;
+(void)initialize;
-(BOOL)evaluateDependenciesAndMarkAsExecuting;
-(void)markAsCancelled;
-(void)markAsFailedWithError:(id)arg1 ;
-(void)markAsCompleted;
-(void)didEnterTerminalState;
-(BOOL)_setStatus:(long long)arg1 error:(id)arg2 resultingStatus:(long long*)arg3 failureReason:(id*)arg4 ;
-(BOOL)isReady;
-(void)finalize;
-(id)init;
-(void)dealloc;
-(BOOL)isFinished;
-(long long)status;
-(NSError *)error;
-(BOOL)isExecuting;
@end
