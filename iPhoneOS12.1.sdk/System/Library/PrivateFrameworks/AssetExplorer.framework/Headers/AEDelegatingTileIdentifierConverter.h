//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetExplorer/PXTileIdentifierConverter-Protocol.h>

@class NSString;
@protocol PXTileIdentifierConverter;

__attribute__((visibility("hidden")))
@interface AEDelegatingTileIdentifierConverter : NSObject <PXTileIdentifierConverter>
{
    id <PXTileIdentifierConverter> __wrappedConverter;
}

@property(readonly, nonatomic) id <PXTileIdentifierConverter> _wrappedConverter; // @synthesize _wrappedConverter=__wrappedConverter;
- (void).cxx_destruct;
- (_Bool)transformTileIdentifier:(struct PXTileIdentifier *)arg1 group:(unsigned long long *)arg2;
- (id)initWithWrappedConverter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

