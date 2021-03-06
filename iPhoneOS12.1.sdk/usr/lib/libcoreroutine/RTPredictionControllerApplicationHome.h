/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTPredictionControllerApplication.h>

@interface RTPredictionControllerApplicationHome : RTPredictionControllerApplication {

	unsigned long long _maxMicroLocationsForTraining;
	double _minMicroLocationConfidenceThreshold;

}

@property (assign,nonatomic) unsigned long long maxMicroLocationsForTraining;              //@synthesize maxMicroLocationsForTraining=_maxMicroLocationsForTraining - In the implementation block
@property (assign,nonatomic) double minMicroLocationConfidenceThreshold;                   //@synthesize minMicroLocationConfidenceThreshold=_minMicroLocationConfidenceThreshold - In the implementation block
-(void)_unregisterForNotifications;
-(void)_setup;
-(void)_registerForNotifications;
-(id)initWithExperts:(id)arg1 dataProviders:(id)arg2 defaultsManager:(id)arg3 authorizationManager:(id)arg4 persistenceManager:(id)arg5 dataProtectionManager:(id)arg6 metricManager:(id)arg7 locationTagger:(id)arg8 mediaRemote:(id)arg9 predictionTable:(id)arg10 applicationManager:(id)arg11 dataSource:(id)arg12 ;
-(void)onDefaultsUpdate:(id)arg1 ;
-(void)_updateRegisteredDefaults:(/*^block*/id)arg1 ;
-(void)updateValueForKey:(id)arg1 expectedClass:(Class)arg2 handler:(/*^block*/id)arg3 ;
-(void)onAuthorizationUpdate:(id)arg1 ;
-(void)__processData:(/*^block*/id)arg1 ;
-(void)_buildExpertsWithHandler:(/*^block*/id)arg1 ;
-(id)combinePredictions:(id)arg1 withFallbackPredictionsForEvent:(id)arg2 ;
-(id)findUniqueMicroLocations:(id)arg1 limit:(unsigned long long)arg2 minimumProbability:(double)arg3 ;
-(unsigned long long)maxMicroLocationsForTraining;
-(void)setMaxMicroLocationsForTraining:(unsigned long long)arg1 ;
-(double)minMicroLocationConfidenceThreshold;
-(void)setMinMicroLocationConfidenceThreshold:(double)arg1 ;
-(id)init;
-(void)invalidate;
@end

