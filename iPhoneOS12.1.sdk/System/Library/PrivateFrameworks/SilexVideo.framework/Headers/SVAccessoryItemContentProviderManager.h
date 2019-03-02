//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVAccessoryItemContentManager-Protocol.h>
#import <SilexVideo/SVAccessoryItemContentProviderManager-Protocol.h>

@class NSMapTable, NSString;

@interface SVAccessoryItemContentProviderManager : NSObject <SVAccessoryItemContentProviderManager, SVAccessoryItemContentManager>
{
    NSMapTable *_contentProviders;
}

@property(readonly, nonatomic) NSMapTable *contentProviders; // @synthesize contentProviders=_contentProviders;
- (void).cxx_destruct;
- (void)updateAccessoryItem:(id)arg1 forVideo:(id)arg2 animated:(_Bool)arg3;
- (void)registerAccessoryItem:(id)arg1 withContentProvider:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
