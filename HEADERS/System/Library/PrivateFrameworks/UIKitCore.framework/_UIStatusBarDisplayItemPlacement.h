//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarPrioritized-Protocol.h>

@class NSDictionary, NSHashTable, NSSet, _UIStatusBarIdentifier;

@interface _UIStatusBarDisplayItemPlacement : NSObject <_UIStatusBarPrioritized>
{
    _Bool _enabled;
    long long _priority;
    _UIStatusBarIdentifier *_identifier;
    NSHashTable *_excludedPlacements;
    NSSet *_excludedRegionIdentifiers;
    NSHashTable *_allRequiredPlacements;
    NSHashTable *_anyRequiredPlacements;
    NSDictionary *_itemInfo;
}

+ (id)placementWithIdentifier:(id)arg1 priority:(long long)arg2;
+ (id)spacerPlacementWithSize:(struct CGSize)arg1 priority:(long long)arg2;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSDictionary *itemInfo; // @synthesize itemInfo=_itemInfo;
@property(readonly, copy, nonatomic) NSHashTable *anyRequiredPlacements; // @synthesize anyRequiredPlacements=_anyRequiredPlacements;
@property(readonly, copy, nonatomic) NSHashTable *allRequiredPlacements; // @synthesize allRequiredPlacements=_allRequiredPlacements;
@property(readonly, copy, nonatomic) NSSet *excludedRegionIdentifiers; // @synthesize excludedRegionIdentifiers=_excludedRegionIdentifiers;
@property(readonly, copy, nonatomic) NSHashTable *excludedPlacements; // @synthesize excludedPlacements=_excludedPlacements;
@property(readonly, copy, nonatomic) _UIStatusBarIdentifier *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)withItemInfo:(id)arg1;
- (id)requiringAnyPlacements:(id)arg1;
- (id)requiringAllPlacements:(id)arg1;
- (id)excludingAllPlacementsInRegions:(id)arg1;
- (id)excludingPlacements:(id)arg1;
- (id)disabledPlacement;

@end
