/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:39 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCBlockOperationContext.h>

@class MCBlockOperation;

@interface _MCBlockOperationContext : NSObject <MCBlockOperationContext> {

	MCBlockOperation* _operation;

}

@property (nonatomic,retain) MCBlockOperation * operation;              //@synthesize operation=_operation - In the implementation block
-(void)endBlockOperation;
-(MCBlockOperation *)operation;
-(void)setOperation:(MCBlockOperation *)arg1 ;
@end
