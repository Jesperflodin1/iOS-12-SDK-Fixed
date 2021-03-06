/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:50 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSBatchDeleteRequest : NSPersistentStoreRequest {

	unsigned long long _resultType;
	NSFetchRequest* _deleteTarget;
	long long _flags;

}

@property (assign) unsigned long long resultType;                     //@synthesize resultType=_resultType - In the implementation block
@property (copy,readonly) NSFetchRequest * fetchRequest; 
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
-(id)encodeForXPC;
-(BOOL)_secureOperation;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(void)setShouldPerformSecureOperation:(BOOL)arg1 ;
-(BOOL)shouldPerformSecureOperation;
-(unsigned long long)requestType;
-(unsigned long long)resultType;
-(id)initWithFetchRequest:(id)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(id)initWithObjectIDs:(id)arg1 ;
-(void)setResultType:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
@end

