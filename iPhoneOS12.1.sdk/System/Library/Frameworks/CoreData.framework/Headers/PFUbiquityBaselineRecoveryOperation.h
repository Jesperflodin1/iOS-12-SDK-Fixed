/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:50 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFUbiquityBaselineOperation.h>

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property (assign) NSObject*<PFUbiquityBaselineRecoveryOperationDelegate> delegate; 
-(BOOL)electBaselineURLFromVersions:(id)arg1 withBaseline:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasCurrentBaseline;
-(BOOL)conflictsExistForBaseline:(id)arg1 ;
-(BOOL)resolveConflictsForBaseline:(id)arg1 withError:(id*)arg2 ;
-(BOOL)shouldReplaceLocalStoreWithBaseline:(id)arg1 ;
-(BOOL)replaceLocalStoreWithBaseline:(id)arg1 error:(id*)arg2 ;
-(id)electAncestorBaselineForConflictedBaselines:(id)arg1 dissentingBaselines:(id*)arg2 ;
-(id)retainedDelegate;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRecoveryOperationDelegate>)arg1 ;
-(NSObject*<PFUbiquityBaselineRecoveryOperationDelegate>)delegate;
-(void)main;
@end
