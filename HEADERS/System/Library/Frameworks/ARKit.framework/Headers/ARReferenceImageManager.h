/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:41:48 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ARKit/ARKit-Structs.h>
@class NSObject;

@interface ARReferenceImageManager : NSObject {

	CV3DOQContextRef _doqHandle;
	NSObject*<OS_dispatch_queue> _processDataQueue;

}
+(id)sharedImageManager;
+(id)sharedWeakImageManager;
-(void)estimateQuality:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end

