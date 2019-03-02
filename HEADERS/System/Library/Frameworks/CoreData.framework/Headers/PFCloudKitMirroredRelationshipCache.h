/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:49 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectModel, NSMutableDictionary, NSMutableArray, NSMutableSet, NSArray;

@interface PFCloudKitMirroredRelationshipCache : NSObject {

	NSManagedObjectModel* _model;
	NSMutableDictionary* _recordNameToMirroredRelationships;
	NSMutableDictionary* _recordNameToPendingRelationships;
	NSMutableDictionary* _ckRecordNameToMirroredRelationship;
	NSMutableArray* _pendingMirroredRelationships;
	NSMutableDictionary* _mtmKeyToMirroredRelationship;
	NSMutableSet* _accessedMtmKeys;
	NSMutableArray* _insertedMirroredRelationships;
	NSMutableArray* _updatedMirroredRelationships;
	NSMutableArray* _deletedMirroredRelationships;
	NSMutableArray* _deletedPendingRelationships;
	BOOL _initialized;

}

@property (nonatomic,readonly) NSArray * pendingMirroredRelationships;              //@synthesize pendingMirroredRelationships=_pendingMirroredRelationships - In the implementation block
@property (nonatomic,readonly) NSArray * deletedMirroredRelationships;              //@synthesize deletedMirroredRelationships=_deletedMirroredRelationships - In the implementation block
-(void)initializeForRecordNames:(id)arg1 mirroredRelationshipRecordNames:(id)arg2 withSQLCore:(id)arg3 ;
-(NSArray *)pendingMirroredRelationships;
-(void)deleteMirroredRelationshipWithCKRecordID:(id)arg1 ;
-(void)_cacheMirroredRelationship:(id)arg1 noteAccess:(BOOL)arg2 ;
-(id)_mtmKeyForObjectWithRecordName:(id)arg1 relatedToObjectWithRecordName:(id)arg2 byRelationship:(id)arg3 withInverse:(id)arg4 ;
-(id)mirroredRelationshipForKey:(id)arg1 ;
-(id)addMirroredManyToMany:(id)arg1 ;
-(void)processDeleteForObjectWithRecordName:(id)arg1 andObjectID:(id)arg2 ;
-(id)mirroredRelationshipForManyToMany:(id)arg1 ;
-(id)mtmKeyForObjectWithRecordName:(id)arg1 relatedToObjectWithRecordName:(id)arg2 byRelationship:(id)arg3 withInverse:(id)arg4 ;
-(void)markAccessedRelationshipsUploadedAndPrune;
-(void)noteUpdateForMirroredRelationship:(id)arg1 ;
-(void)applyChangesToSQLCore:(id)arg1 ;
-(id)purgeMirroredRelationshipsForDeletedRecordIDs:(id)arg1 ;
-(NSArray *)deletedMirroredRelationships;
-(id)init;
-(void)dealloc;
@end
