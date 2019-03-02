/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface _ANERequest : NSObject {

	NSArray* _inputArray;
	NSArray* _inputNameArray;
	NSArray* _outputArray;
	NSArray* _outputNameArray;
	NSString* _procedureName;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSArray * inputArray;                       //@synthesize inputArray=_inputArray - In the implementation block
@property (nonatomic,readonly) NSArray * inputNameArray;                   //@synthesize inputNameArray=_inputNameArray - In the implementation block
@property (nonatomic,readonly) NSArray * outputArray;                      //@synthesize outputArray=_outputArray - In the implementation block
@property (nonatomic,readonly) NSArray * outputNameArray;                  //@synthesize outputNameArray=_outputNameArray - In the implementation block
@property (nonatomic,copy,readonly) NSString * procedureName;              //@synthesize procedureName=_procedureName - In the implementation block
@property (copy) id completionHandler;                                     //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)requestWithInputs:(id)arg1 inputNames:(id)arg2 outputs:(id)arg3 outputNames:(id)arg4 procedureName:(id)arg5 ;
-(NSArray *)inputArray;
-(NSArray *)inputNameArray;
-(NSArray *)outputArray;
-(NSArray *)outputNameArray;
-(NSString *)procedureName;
-(id)initWithInputs:(id)arg1 inputNames:(id)arg2 outputs:(id)arg3 outputNames:(id)arg4 procedureName:(id)arg5 ;
-(id)description;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)validate;
@end
