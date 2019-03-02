/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:04 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKEphemeralWritableEventSequence
@required
-(void)loadFromKnowledgeStreamNamed:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)removeAllEventsSavedInKnowledgeStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)appendEvent:(id)arg1;
-(void)writeEventsToKnowledgeStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end
