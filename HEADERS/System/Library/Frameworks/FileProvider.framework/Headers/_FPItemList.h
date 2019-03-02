/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:25:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FileProvider/FileProvider-Structs.h>
@class NSMutableOrderedSet, NSMutableDictionary;

@interface _FPItemList : NSObject {

	NSMutableOrderedSet* _orderedSet;
	NSMutableDictionary* _itemsByIDs;

}
-(unsigned long long)indexOfItemID:(id)arg1 ;
-(void)removeObjectWithID:(id)arg1 ;
-(id)mutableCopy;
-(void)addObject:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)removeLastObject;
-(id)allObjects;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)sortUsingDescriptors:(id)arg1 ;
@end
