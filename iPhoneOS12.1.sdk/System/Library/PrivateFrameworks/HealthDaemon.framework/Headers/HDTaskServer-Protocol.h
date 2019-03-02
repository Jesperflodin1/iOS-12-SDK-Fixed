//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/_HKXPCExportable-Protocol.h>

@class HDProfile, HDXPCClient, HKTaskConfiguration, NSArray, NSString, NSUUID;
@protocol HDTaskServerDelegate;

@protocol HDTaskServer <_HKXPCExportable>
+ (NSArray *)requiredEntitlements;
+ (NSString *)taskIdentifier;
- (NSUUID *)taskUUID;
- (id)initWithUUID:(NSUUID *)arg1 configuration:(HKTaskConfiguration *)arg2 client:(HDXPCClient *)arg3 profile:(HDProfile *)arg4 delegate:(id <HDTaskServerDelegate>)arg5;

@optional
+ (_Bool)validateConfiguration:(HKTaskConfiguration *)arg1 error:(out id *)arg2;
+ (id)createTaskServerWithUUID:(NSUUID *)arg1 configuration:(HKTaskConfiguration *)arg2 client:(HDXPCClient *)arg3 profile:(HDProfile *)arg4 delegate:(id <HDTaskServerDelegate>)arg5 error:(id *)arg6;
+ (Class)configurationClass;
@end
