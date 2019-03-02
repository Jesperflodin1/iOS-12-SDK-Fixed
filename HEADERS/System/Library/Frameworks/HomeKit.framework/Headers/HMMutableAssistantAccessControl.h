/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:22 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAssistantAccessControl.h>

@class NSArray;

@interface HMMutableAssistantAccessControl : HMAssistantAccessControl

@property (getter=isEnabled) BOOL enabled; 
@property (assign) BOOL allowUnauthenticatedRequests; 
@property (copy) NSArray * accessories; 
-(BOOL)allowUnauthenticatedRequests;
-(void)setAllowUnauthenticatedRequests:(BOOL)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(NSArray *)accessories;
-(void)addAccessory:(id)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
@end
