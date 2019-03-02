/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRecursiveLock, NSMutableDictionary, NSURLConnection, NSMutableData;

@interface ACFHTTPMethodInvocationInternal : NSObject {

	NSRecursiveLock* _invocationGuard;
	NSRecursiveLock* _schedulingGuard;
	NSMutableDictionary* _runLoops;
	NSURLConnection* _connection;
	BOOL _isFinished;
	NSMutableData* _receivedDataAccumulator;

}

@property (retain) NSRecursiveLock * invocationGuard;                    //@synthesize invocationGuard=_invocationGuard - In the implementation block
@property (retain) NSRecursiveLock * schedulingGuard;                    //@synthesize schedulingGuard=_schedulingGuard - In the implementation block
@property (retain) NSMutableDictionary * runLoops;                       //@synthesize runLoops=_runLoops - In the implementation block
@property (retain) NSURLConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL isFinished;                                      //@synthesize isFinished=_isFinished - In the implementation block
@property (retain) NSMutableData * receivedDataAccumulator;              //@synthesize receivedDataAccumulator=_receivedDataAccumulator - In the implementation block
-(void)setIsFinished:(BOOL)arg1 ;
-(NSRecursiveLock *)invocationGuard;
-(NSMutableDictionary *)runLoops;
-(void)setReceivedDataAccumulator:(NSMutableData *)arg1 ;
-(NSRecursiveLock *)schedulingGuard;
-(NSMutableData *)receivedDataAccumulator;
-(void)setInvocationGuard:(NSRecursiveLock *)arg1 ;
-(void)setSchedulingGuard:(NSRecursiveLock *)arg1 ;
-(void)setRunLoops:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isFinished;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
@end
