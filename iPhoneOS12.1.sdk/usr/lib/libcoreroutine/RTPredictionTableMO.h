/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSSet;

@interface RTPredictionTableMO : NSManagedObject

@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSSet * predictions; 
+(id)managedObjectWithName:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)awakeFromInsert;
@end
