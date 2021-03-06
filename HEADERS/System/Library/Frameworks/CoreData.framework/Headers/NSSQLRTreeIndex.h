/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIndex.h>

@class NSString;

@interface NSSQLRTreeIndex : NSSQLIndex {

	NSString* _tableName;

}

@property (nonatomic,retain,readonly) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2 ;
-(void)generateSQLStrings;
-(id)createStatementsForStore:(id)arg1 ;
-(id)dropStatementsForStore:(id)arg1 ;
-(id)bulkUpdateStatementsForStore:(id)arg1 ;
-(NSString *)tableName;
-(void)dealloc;
@end

