/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:45 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueMutableArray.h>

@class NSMutableArray;

@interface NSKeyValueNotifyingMutableArray : NSKeyValueMutableArray {

	NSMutableArray* _mutableArray;

}
+(id)_proxyShare;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
-(void)addObject:(id)arg1 ;
-(unsigned long long)count;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
@end
