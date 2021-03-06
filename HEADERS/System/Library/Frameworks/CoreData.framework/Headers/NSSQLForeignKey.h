/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:49 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@class NSString, NSSQLToOne;

@interface NSSQLForeignKey : NSSQLColumn {

	NSString* _name;
	NSSQLToOne* _toOne;

}
-(id)toOneRelationship;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(id)initWithEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(void)dealloc;
-(id)name;
-(void)_setName:(id)arg1 ;
@end

