//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocumentManagerUICore/NSObject-Protocol.h>

@class DOCThumbnailBaseOperation, UIImage;

@protocol DOCThumbnailOperationDelegate <NSObject>
- (void)thumbnailOperationFailedToLoadThumbnail:(DOCThumbnailBaseOperation *)arg1;
- (void)thumbnailOperation:(DOCThumbnailBaseOperation *)arg1 didLoadThumbnail:(UIImage *)arg2 representativeIcon:(_Bool)arg3;
@end
