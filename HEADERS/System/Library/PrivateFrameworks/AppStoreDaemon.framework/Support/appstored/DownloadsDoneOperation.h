//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class KeepAlive;

@interface DownloadsDoneOperation : ISOperation
{
    KeepAlive *_keepAlive;
}

+ (id)storeOperationForItemID:(id)arg1 finishURL:(id)arg2 storeTransationID:(id)arg3 storeAccountID:(id)arg4;
- (void).cxx_destruct;
- (void)run;
- (id)init;

@end
