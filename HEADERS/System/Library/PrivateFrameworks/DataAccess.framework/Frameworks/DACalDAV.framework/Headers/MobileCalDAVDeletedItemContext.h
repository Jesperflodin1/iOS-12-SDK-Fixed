/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:36 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface MobileCalDAVDeletedItemContext : NSObject {

	int _entityType;
	NSNumber* _rowid;

}

@property (nonatomic,retain) NSNumber * rowid;              //@synthesize rowid=_rowid - In the implementation block
@property (assign,nonatomic) int entityType;                //@synthesize entityType=_entityType - In the implementation block
-(void)setRowid:(NSNumber *)arg1 ;
-(NSNumber *)rowid;
-(int)entityType;
-(void)setEntityType:(int)arg1 ;
@end

