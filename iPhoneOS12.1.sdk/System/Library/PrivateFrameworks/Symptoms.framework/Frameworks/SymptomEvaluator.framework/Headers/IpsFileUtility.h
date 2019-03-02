/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IpsFileUtility : NSObject
+(id)_createIpsFileNameWithPrefix:(id)arg1 date:(id)arg2 inDirectory:(id)arg3 ;
+(id)_createDataForCrashReporterIpsHeaderWithBugType:(id)arg1 contentType:(id)arg2 date:(id)arg3 additionalFields:(id)arg4 ;
+(id)formattedDateForFilename:(id)arg1 ;
-(BOOL)createIpsFileWithBugType:(id)arg1 contentType:(id)arg2 additionalIpsHeaders:(id)arg3 ipsData:(id)arg4 inDirectory:(id)arg5 fileNamePrefix:(id)arg6 ;
-(BOOL)_checkDirectoryAndCreateIfNecessary:(id)arg1 ;
-(BOOL)_writeIpsFileWithBugType:(id)arg1 contentType:(id)arg2 additionalIpsHeaders:(id)arg3 ipsData:(id)arg4 inDirectory:(id)arg5 fileNamePrefix:(id)arg6 ;
-(BOOL)createIpsFileWithBugType:(id)arg1 contentType:(id)arg2 additionalIpsHeaders:(id)arg3 ipsContent:(id)arg4 inDirectory:(id)arg5 fileNamePrefix:(id)arg6 ;
-(void)dealloc;
@end
