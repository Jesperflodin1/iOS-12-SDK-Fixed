//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTPresetResourcesProviding-Protocol.h>

@class AVTCoreModelGroup, NSArray, NSString;

@interface AVTAvatarAttributeEditorCategory : NSObject <AVTPresetResourcesProviding>
{
    NSArray *_sections;
    NSString *_localizedName;
    AVTCoreModelGroup *_modelGroup;
}

@property(readonly, nonatomic) AVTCoreModelGroup *modelGroup; // @synthesize modelGroup=_modelGroup;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithSections:(id)arg1 localizedName:(id)arg2 modelGroup:(id)arg3;
- (id)representedAVTPresetResources;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
