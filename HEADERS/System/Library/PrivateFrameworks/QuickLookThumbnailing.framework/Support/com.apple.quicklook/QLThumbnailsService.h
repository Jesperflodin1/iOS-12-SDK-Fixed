//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLThumbnailsInterface-Protocol.h"

@protocol OS_dispatch_queue;

@interface QLThumbnailsService : NSObject <QLThumbnailsInterface>
{
    int _pid;
    NSObject<OS_dispatch_queue> *_backgroundGenerationQueue;
    NSObject<OS_dispatch_queue> *_utilityGenerationQueue;
    CDStruct_4c969caf _auditToken;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *utilityGenerationQueue; // @synthesize utilityGenerationQueue=_utilityGenerationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundGenerationQueue; // @synthesize backgroundGenerationQueue=_backgroundGenerationQueue;
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (void)thumbnailForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestThumbnailOfMaximumSize:(struct CGSize)arg1 scale:(double)arg2 forThumbnailItem:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestWritingThumbnailOfMaximumSize:(struct CGSize)arg1 forDocumentAtURL:(id)arg2 sandboxExtension:(id)arg3 toFileHandle:(id)arg4 atBackgroundPriority:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)requestWritingThumbnailOfMaximumSize:(struct CGSize)arg1 forThumbnailItem:(id)arg2 toFileHandle:(id)arg3 atBackgroundPriority:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)makeQueueWithBackgroundPriority:(_Bool)arg1;
- (void)askThumbnailAdditionIndex:(CDUnknownBlockType)arg1;
- (void)hasThumbnailForURLWrapper:(id)arg1 updateLastHitDate:(_Bool)arg2 andSize:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeThumbnailAdditionsOnURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)thumbnailsStoreURLForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithClientProcessIdentifier:(int)arg1 auditToken:(CDStruct_4c969caf)arg2;

@end
