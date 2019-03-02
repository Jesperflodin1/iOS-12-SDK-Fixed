/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSNumber, HKHealthStore, HKKeyValueDomain, NSUserDefaults, NPSManager, HKObserverSet, HKActiveWatchFeatureAvailabilityDataSource, HKMobileCountryCodeManager;

@interface HKHeartRhythmAvailability : NSObject {

	os_unfair_lock_s _cacheLock;
	NSNumber* _isAtrialFibrillationDetectionDisabledCache;
	int _onboardingStateDidChangeNotificationToken;
	int _featureAvailabilityConditionsDidUpdateNotificationToken;
	HKHealthStore* _healthStore;
	HKKeyValueDomain* _keyValueDomain;
	NSUserDefaults* _userDefaults;
	NPSManager* _syncManager;
	HKObserverSet* _heartRhythmAvailabilityObservers;
	HKActiveWatchFeatureAvailabilityDataSource* _availabilityDataSource;
	HKMobileCountryCodeManager* _mobileCountryCodeManager;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                                                                                //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKKeyValueDomain * keyValueDomain;                                                                                          //@synthesize keyValueDomain=_keyValueDomain - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                                                                                              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                                                                                                   //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,retain) HKObserverSet * heartRhythmAvailabilityObservers;                                                                           //@synthesize heartRhythmAvailabilityObservers=_heartRhythmAvailabilityObservers - In the implementation block
@property (nonatomic,retain) HKActiveWatchFeatureAvailabilityDataSource * availabilityDataSource;                                                        //@synthesize availabilityDataSource=_availabilityDataSource - In the implementation block
@property (assign,nonatomic) int onboardingStateDidChangeNotificationToken;                                                                              //@synthesize onboardingStateDidChangeNotificationToken=_onboardingStateDidChangeNotificationToken - In the implementation block
@property (assign,nonatomic) int featureAvailabilityConditionsDidUpdateNotificationToken;                                                                //@synthesize featureAvailabilityConditionsDidUpdateNotificationToken=_featureAvailabilityConditionsDidUpdateNotificationToken - In the implementation block
@property (nonatomic,retain) HKMobileCountryCodeManager * mobileCountryCodeManager;                                                                      //@synthesize mobileCountryCodeManager=_mobileCountryCodeManager - In the implementation block
@property (getter=isElectrocardiogramOnboardingCompleted,nonatomic,readonly) BOOL electrocardiogramOnboardingCompleted; 
@property (assign,getter=isElectrocardiogramFirstRecordingCompleted,nonatomic) BOOL electrocardiogramFirstRecordingCompleted; 
@property (getter=isElectrocardiogramRecordingDisabled,nonatomic,readonly) BOOL electrocardiogramRecordingDisabled; 
@property (getter=isAtrialFibrillationDetectionOnboardingCompleted,nonatomic,readonly) BOOL atrialFibrillationDetectionOnboardingCompleted; 
@property (getter=isAtrialFibrillationDetectionDisabled,nonatomic,readonly) BOOL atrialFibrillationDetectionDisabled; 
+(BOOL)isElectrocardiogramSupportedOnWatch:(id)arg1 ;
+(BOOL)shouldAdvertiseElectrocardiogramForWatch:(id)arg1 ;
+(BOOL)_isElectrocardiogramSupportedOnPhone:(id)arg1 ;
+(unsigned long long)atrialFibrillationDetectionSupportedStateForWatch:(id)arg1 ;
+(BOOL)_isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnWatch:(id)arg1 ;
+(BOOL)atrialFibrillationDetectionSupportedForDevice:(id)arg1 ;
+(unsigned long long)_atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg1 ;
+(BOOL)isDeviceSeries3OrOlder:(id)arg1 ;
+(BOOL)_isAtrialFibrillationDetectionDisabledWithDataSource:(id)arg1 ;
+(BOOL)shouldAdvertiseAtrialFibrillationDetectionForWatch:(id)arg1 ;
+(BOOL)_isAtrialFibrillationDetectionSupportedOnPhone:(id)arg1 ;
+(BOOL)isHeartRateEnabledInPrivacy;
+(BOOL)shouldInstallWatchApp;
+(BOOL)isElectrocardiogramSupportedOnAnyWatch;
+(BOOL)isElectrocardiogramSupportedOnAllWatches;
+(BOOL)shouldAdvertiseElectrocardiogramForActiveWatch;
+(BOOL)isElectrocardiogramSupportedOnPairedPhone;
+(long long)currentElectrocardiogramOnboardingVersion;
+(BOOL)isAtrialFibrillationDetectionSettingEnabled;
+(BOOL)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnAnyWatch;
+(BOOL)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnActiveWatch;
+(BOOL)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnAllWatches;
+(unsigned long long)atrialFibrillationDetectionSupportedStateForActiveWatch;
+(unsigned long long)atrialFibrillationDetectionSupportedState;
+(BOOL)shouldAdvertiseAtrialFibrillationDetectionForActiveWatch;
+(BOOL)isAtrialFibrillationDetectionSupportedOnPairedPhone;
+(BOOL)isAtrialFibrillationDetectionDisabledForOnboardingCountryCode:(id)arg1 ;
+(long long)currentAtrialFibrillationDetectionOnboardingVersion;
+(BOOL)isElectrocardiogramSupportedOnActiveWatch;
-(void)_localeDidChange;
-(id)_atrialFibrillationDetectionOnboardingCountryCode;
-(void)notifyHeartRhythmAvailabilityDidUpdate;
-(void)_featureAvailabilityConditionsDidUpdate;
-(void)_pairedOrActiveDevicesDidChange:(id)arg1 ;
-(void)_resetIsAtrialFibrillationDetectionDisabledCache;
-(HKKeyValueDomain *)keyValueDomain;
-(BOOL)_isOnboardingCompletedForKey:(id)arg1 version:(long long)arg2 ;
-(void)_setOnboardingVersionCompleted:(long long)arg1 forKey:(id)arg2 additionalValues:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setAtrialFibrillationDetectionOnboardingCompletedForVersion:(long long)arg1 inCountryCode:(id)arg2 ;
-(HKMobileCountryCodeManager *)mobileCountryCodeManager;
-(HKActiveWatchFeatureAvailabilityDataSource *)availabilityDataSource;
-(void)addHeartRhythmAvailabilityObserver:(id)arg1 ;
-(void)removeHeartRhythmAvailabilityObserver:(id)arg1 ;
-(BOOL)isElectrocardiogramOnboardingCompleted;
-(void)setElectrocardiogramOnboardingCompleted;
-(BOOL)isElectrocardiogramFirstRecordingCompleted;
-(void)setElectrocardiogramFirstRecordingCompleted:(BOOL)arg1 ;
-(void)resetElectrocardiogramOnboarding;
-(BOOL)isElectrocardiogramRecordingDisabled;
-(BOOL)isAtrialFibrillationDetectionOnboardingCompleted;
-(void)setAtrialFibrillationDetectionOnboardingCompletedForCountryCode:(id)arg1 ;
-(void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocation:(/*^block*/id)arg1 ;
-(BOOL)isAtrialFibrillationDetectionDisabled;
-(void)resetAtrialFibrillationDetectionOnboarding;
-(void)setKeyValueDomain:(HKKeyValueDomain *)arg1 ;
-(HKObserverSet *)heartRhythmAvailabilityObservers;
-(void)setHeartRhythmAvailabilityObservers:(HKObserverSet *)arg1 ;
-(void)setAvailabilityDataSource:(HKActiveWatchFeatureAvailabilityDataSource *)arg1 ;
-(int)onboardingStateDidChangeNotificationToken;
-(void)setOnboardingStateDidChangeNotificationToken:(int)arg1 ;
-(int)featureAvailabilityConditionsDidUpdateNotificationToken;
-(void)setFeatureAvailabilityConditionsDidUpdateNotificationToken:(int)arg1 ;
-(void)setMobileCountryCodeManager:(HKMobileCountryCodeManager *)arg1 ;
-(void)_unregisterForNotifications;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(NPSManager *)syncManager;
-(void)_registerForNotifications;
-(id)initWithHealthStore:(id)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)dealloc;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
@end
