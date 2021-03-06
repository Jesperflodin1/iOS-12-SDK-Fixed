/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/HROnboardingPageViewControllerDelegate.h>

@protocol HROnboardingManagerDelegate;
@class NSMutableDictionary, UINavigationController, HROnboardingSequence, NPSManager, HKHealthStore, HKHeartRhythmAvailability, HKDateCache, NSString;

@interface HROnboardingManager : NSObject <UINavigationControllerDelegate, HROnboardingPageViewControllerDelegate> {

	NSMutableDictionary* _userInfo;
	UINavigationController* _navigationController;
	HROnboardingSequence* _sequence;
	unsigned long long _currentPageNumber;
	long long _onboardingIntent;
	NPSManager* _nanoPreferenceSyncManager;
	HKHealthStore* _healthStore;
	HKHeartRhythmAvailability* _availability;
	HKDateCache* _dateCache;
	id<HROnboardingManagerDelegate> _onboardingManagerDelegate;

}

@property (nonatomic,retain) UINavigationController * navigationController;                                 //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) HROnboardingSequence * sequence;                                               //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) unsigned long long currentPageNumber;                                          //@synthesize currentPageNumber=_currentPageNumber - In the implementation block
@property (assign,nonatomic) long long onboardingIntent;                                                    //@synthesize onboardingIntent=_onboardingIntent - In the implementation block
@property (nonatomic,retain) NPSManager * nanoPreferenceSyncManager;                                        //@synthesize nanoPreferenceSyncManager=_nanoPreferenceSyncManager - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                                   //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKHeartRhythmAvailability * availability;                                      //@synthesize availability=_availability - In the implementation block
@property (nonatomic,retain) HKDateCache * dateCache;                                                       //@synthesize dateCache=_dateCache - In the implementation block
@property (assign,nonatomic,__weak) id<HROnboardingManagerDelegate> onboardingManagerDelegate;              //@synthesize onboardingManagerDelegate=_onboardingManagerDelegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInfo;                                                //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentPageNumber:(unsigned long long)arg1 ;
-(unsigned long long)currentPageNumber;
-(HKHeartRhythmAvailability *)availability;
-(void)setAvailability:(HKHeartRhythmAvailability *)arg1 ;
-(HKDateCache *)dateCache;
-(void)setDateCache:(HKDateCache *)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)stepForward;
-(id<HROnboardingManagerDelegate>)onboardingManagerDelegate;
-(id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 onboardingIntent:(long long)arg3 delegate:(id)arg4 ;
-(long long)onboardingIntent;
-(void)_wrappingUpOnboarding;
-(void)_advancingToOnboardingPageNumber:(long long)arg1 ;
-(NPSManager *)nanoPreferenceSyncManager;
-(void)_didStepBackward;
-(void)notNowTapped;
-(id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 onboardingIntent:(long long)arg3 ;
-(id)onboardingNavigationController;
-(void)setOnboardingIntent:(long long)arg1 ;
-(void)setNanoPreferenceSyncManager:(NPSManager *)arg1 ;
-(void)setOnboardingManagerDelegate:(id<HROnboardingManagerDelegate>)arg1 ;
-(NSMutableDictionary *)userInfo;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(UINavigationController *)navigationController;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(HROnboardingSequence *)sequence;
-(void)setSequence:(HROnboardingSequence *)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
@end

