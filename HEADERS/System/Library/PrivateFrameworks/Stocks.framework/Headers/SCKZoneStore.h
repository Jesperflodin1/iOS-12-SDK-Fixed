/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:36:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, CKServerChangeToken, NSArray;


@protocol SCKZoneStore
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (nonatomic,copy) NSDate * lastDirtyDate; 
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken; 
@property (nonatomic,copy) NSArray * serverRecords; 
@property (nonatomic,copy) NSArray * pendingCommands; 
@required
-(NSArray *)serverRecords;
-(void)applyServerRecordsDiff:(id)arg1;
-(void)addPendingCommands:(id)arg1;
-(void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
-(void)setServerRecords:(id)arg1;
-(NSDate *)lastDirtyDate;
-(void)setLastDirtyDate:(id)arg1;
-(NSArray *)pendingCommands;
-(void)setPendingCommands:(id)arg1;
-(NSDate *)lastSyncDate;
-(CKServerChangeToken *)serverChangeToken;
-(void)setLastSyncDate:(id)arg1;
-(void)setServerChangeToken:(id)arg1;

@end

