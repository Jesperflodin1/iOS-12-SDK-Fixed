/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:15 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _UIAutologgingDeallocSentinel : NSObject {

	BOOL _called;
	NSString* _message;

}

@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL called;                   //@synthesize called=_called - In the implementation block
-(void)dealloc;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(BOOL)called;
-(void)setCalled:(BOOL)arg1 ;
@end
