/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NTTodayProtoitem <NFCopying>
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(id)assetHandlesWithOperationInfo:(id)arg1 forLeadingCellAppearance:(BOOL)arg2;
-(id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 assetFileURLsByRemoteURL:(id)arg4 forLeadingCellAppearance:(BOOL)arg5 preferredDynamicSlotAllocation:(unsigned long long)arg6;
-(NSString *)identifier;

@end
