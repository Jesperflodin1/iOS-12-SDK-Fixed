//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSMutableArray;
@protocol RestorePodcastItemsOperationDelegate;

@interface RestorePodcastItemsOperation : ISOperation
{
    NSArray *_downloadItems;
    NSMutableArray *_responses;
}

- (void).cxx_destruct;
- (id)_newURLOperationForItem:(id)arg1 error:(id *)arg2;
- (id)_newResponseWithItems:(id)arg1 error:(id)arg2;
- (id)_addResponseForItem:(id)arg1 operation:(id)arg2;
- (void)_addResponse:(id)arg1;
- (void)run;
@property(readonly) NSArray *responses;
@property(readonly) NSArray *downloadItems;
- (id)initWithDownloadItems:(id)arg1;

// Remaining properties
@property __weak id <RestorePodcastItemsOperationDelegate> delegate; // @dynamic delegate;

@end

