//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSData, NSString, NSURL;

@interface AskPermissionActionOperation : ISOperation
{
    NSData *_clientAuditTokenData;
    NSString *_requestIdentifier;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (void)run;
@property(retain) NSData *clientAuditTokenData;
@property(readonly, copy) NSString *requestIdentifier;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

