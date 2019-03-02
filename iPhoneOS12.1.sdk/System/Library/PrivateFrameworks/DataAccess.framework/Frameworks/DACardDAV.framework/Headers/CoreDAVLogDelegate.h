/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreDAVLogDelegate <NSObject>
@optional
-(void)coreDAVLogRequestBody:(id)arg1;
-(void)coreDAVLogResponseBody:(id)arg1;
-(void)triggerOSLogFault;

@required
-(long long)coreDAVLogLevel;
-(long long)coreDAVOutputLevel;
-(void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2;
-(BOOL)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1;
-(void)coreDAVTransmittedDataFinished;

@end
