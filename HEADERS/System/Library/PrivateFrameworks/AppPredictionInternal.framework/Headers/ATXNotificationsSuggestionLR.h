/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:56 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MLModel;

@interface ATXNotificationsSuggestionLR : NSObject {

	MLModel* _model;

}

@property (nonatomic,readonly) MLModel * model;              //@synthesize model=_model - In the implementation block
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromAppPopularity:(double)arg1 totalLaunches:(double)arg2 received:(double)arg3 ignored:(double)arg4 cleared:(double)arg5 engaged:(double)arg6 defaultActions:(double)arg7 orbs:(double)arg8 suppActions:(double)arg9 tapCoalesce:(double)arg10 engage_rate:(double)arg11 app_bias:(double)arg12 error:(id*)arg13 ;
-(id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(MLModel *)model;
@end
