//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMService.h>

@class HMCharacteristic;

@interface HMService (HFProgrammableSwitchAdditions)
+ (id)hf_programmableSwitchServiceTypes;
- (id)_hf_firstLinkedServiceOfType:(id)arg1;
@property(readonly, nonatomic) HMCharacteristic *hf_labelNamespaceCharacteristic;
@property(readonly, nonatomic) HMCharacteristic *hf_labelIndexCharacteristic;
@property(readonly, nonatomic) unsigned long long hf_fallbackProgrammableSwitchIndex;
@property(readonly, nonatomic) _Bool hf_isProgrammableSwitch;
@end
