/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyedUnarchiver.h>
#import <MPSCore/MPSDeviceProvider.h>

@protocol MTLDevice;
@interface MPSKeyedUnarchiver : NSKeyedUnarchiver <MPSDeviceProvider> {

	id<MTLDevice> _device;

}
+(id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
+(id)unarchiveObjectWithData:(id)arg1 device:(id)arg2 ;
+(id)unarchiveTopLevelObjectWithData:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
+(id)unarchiveObjectWithFile:(id)arg1 device:(id)arg2 ;
+(id)unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
-(id)initForReadingFromData:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(id)mpsMTLDevice;
-(id)initForReadingWithData:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
@end
