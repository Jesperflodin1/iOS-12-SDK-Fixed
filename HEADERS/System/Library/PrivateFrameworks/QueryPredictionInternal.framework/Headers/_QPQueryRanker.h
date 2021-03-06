/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:54:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _QPQueryRankerDelegate, _DKKnowledgeQuerying_DKKnowledgeDeleting;
@class _QPQueryRankerConfiguration, _QPQueryRankerParameters;

@interface _QPQueryRanker : NSObject {

	_QPQueryRankerConfiguration* _configuration;
	_QPQueryRankerParameters* _parameters;
	id<_QPQueryRankerDelegate> _delegate;
	id<_DKKnowledgeQuerying><_DKKnowledgeDeleting> _store;

}

@property (retain) id<_DKKnowledgeQuerying><_DKKnowledgeDeleting> store;              //@synthesize store=_store - In the implementation block
@property (retain) _QPQueryRankerParameters * parameters;                             //@synthesize parameters=_parameters - In the implementation block
@property (__weak) id<_QPQueryRankerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
+(id)rankerWithParameters:(id)arg1 ;
+(/*^block*/id)functionFromExpressionString:(id)arg1 ;
+(id)rankerWithParameters:(id)arg1 store:(id)arg2 ;
-(id)rank;
-(id<_DKKnowledgeQuerying><_DKKnowledgeDeleting>)store;
-(void)setStore:(id<_DKKnowledgeQuerying><_DKKnowledgeDeleting>)arg1 ;
-(id)_fetchQueryEvents;
-(id)_rankForQueryEvents:(id)arg1 ;
-(void)setupConfiguration;
-(id)initWithParameters:(id)arg1 store:(id)arg2 ;
-(BOOL)deleteAllQueryEvents;
-(void)setDelegate:(id<_QPQueryRankerDelegate>)arg1 ;
-(id<_QPQueryRankerDelegate>)delegate;
-(_QPQueryRankerParameters *)parameters;
-(void)setParameters:(_QPQueryRankerParameters *)arg1 ;
@end

