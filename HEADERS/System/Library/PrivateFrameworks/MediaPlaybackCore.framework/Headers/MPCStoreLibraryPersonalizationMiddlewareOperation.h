//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

#import <MediaPlaybackCore/MPMiddlewareAutomaticDependencyOperation-Protocol.h>

@class MPCPlayerRequest, MPCStoreLibraryPersonalizationMiddleware, NSArray, NSError, NSMapTable, NSString;

@interface MPCStoreLibraryPersonalizationMiddlewareOperation : MPAsyncOperation <MPMiddlewareAutomaticDependencyOperation>
{
    struct NSMapTable *_inputOperations;
    CDUnknownBlockType _invalidationHandler;
    NSArray *_invalidationObservers;
    MPCStoreLibraryPersonalizationMiddleware *_middleware;
    MPCPlayerRequest *_playerRequest;
}

@property(retain, nonatomic) MPCPlayerRequest *playerRequest; // @synthesize playerRequest=_playerRequest;
@property(retain, nonatomic) MPCStoreLibraryPersonalizationMiddleware *middleware; // @synthesize middleware=_middleware;
@property(readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSMapTable *inputOperations; // @synthesize inputOperations=_inputOperations;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *outputProtocols;
@property(readonly, nonatomic) NSArray *inputsProtocols;
- (void)execute;
- (id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
