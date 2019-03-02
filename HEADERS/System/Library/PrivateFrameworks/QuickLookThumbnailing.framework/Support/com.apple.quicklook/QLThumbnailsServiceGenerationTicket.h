//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLThumbnailGenerationRequest-Protocol.h"

@class NSFileHandle, NSString, QLPreviewThumbnailGenerator;
@protocol OS_os_transaction;

@interface QLThumbnailsServiceGenerationTicket : NSObject <QLThumbnailGenerationRequest>
{
    QLPreviewThumbnailGenerator *_generator;
    _Bool _finished;
    _Bool _cancelled;
    _Bool _generationFailed;
    CDUnknownBlockType _completionHandler;
    NSFileHandle *_destinationFileHandle;
    NSObject<OS_os_transaction> *_transaction;
}

@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain) NSFileHandle *destinationFileHandle; // @synthesize destinationFileHandle=_destinationFileHandle;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) QLPreviewThumbnailGenerator *generator; // @synthesize generator=_generator;
- (void).cxx_destruct;
- (void)cancel;
- (void)launchGeneration;
- (void)waitForCompletionWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)finishIfCancelled;
- (void)finish;
- (void)finishWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
