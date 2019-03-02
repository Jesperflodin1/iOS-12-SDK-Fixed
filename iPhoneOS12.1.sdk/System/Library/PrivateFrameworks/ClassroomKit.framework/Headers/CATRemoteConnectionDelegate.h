/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:41:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATRemoteConnectionDelegate <NSObject>
@optional
-(void)connectionDidClose:(id)arg1;
-(void)connectionWillSecure:(id)arg1;
-(void)connection:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2;
-(void)connectionDidSecure:(id)arg1;
-(void)connection:(id)arg1 didSendData:(id)arg2 userInfo:(id)arg3;
-(void)connection:(id)arg1 didFailToSendData:(id)arg2 userInfo:(id)arg3 error:(id)arg4;
-(void)connection:(id)arg1 didReceiveDataRequestWithURL:(id)arg2;
-(void)connection:(id)arg1 didWriteDataFromStream:(id)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4 userInfo:(id)arg5;
-(void)connection:(id)arg1 didSendDataWithStream:(id)arg2 userInfo:(id)arg3;
-(void)connection:(id)arg1 didFailToSendDataWithStream:(id)arg2 userInfo:(id)arg3 error:(id)arg4;
-(void)connection:(id)arg1 didReceiveStreamData:(id)arg2 moreComing:(BOOL)arg3;
-(void)connection:(id)arg1 didInterruptWithError:(id)arg2;
-(void)connectionDidOpen:(id)arg1;
-(void)connection:(id)arg1 didReceiveData:(id)arg2;

@end
