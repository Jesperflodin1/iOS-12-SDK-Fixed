/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@class MTLIOAccelResource;

@interface MTLIOMemoryInfo : NSObject {

	void* memlist_key;
	MTLIOAccelResource* fResourceListHead;
	os_unfair_lock_s _memoryInfoLock;

}
+(id)initialize;
-(void)addResourceToList:(id)arg1 ;
-(void)removeResourceFromList:(id)arg1 ;
-(CFArrayRef)annotationList;
-(void)shutdown;
-(void*)addDataSource:(/*^block*/id)arg1 ;
-(void)removeDataSource:(void*)arg1 ;
-(id)init;
-(void)dealloc;
@end

