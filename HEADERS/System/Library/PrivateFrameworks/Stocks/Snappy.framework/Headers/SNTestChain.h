/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:13 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SNTestChain : NSObject {

	NSMutableArray* _linkBlocks;

}

@property (nonatomic,readonly) NSMutableArray * linkBlocks;              //@synthesize linkBlocks=_linkBlocks - In the implementation block
-(void)addLink:(/*^block*/id)arg1 ;
-(NSMutableArray *)linkBlocks;
-(void)popAndRunWithCompletion:(/*^block*/id)arg1 testFailure:(id)arg2 ;
-(id)init;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
@end
