//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@protocol VCConnectionProtocol;

@protocol VCConnectionManagerDelegate <NSObject>
- (void)didEnableDuplication:(_Bool)arg1 activeConnection:(id <VCConnectionProtocol>)arg2;
- (void)connectionCallback:(id <VCConnectionProtocol>)arg1 isInitialConnection:(_Bool)arg2;
- (void)primaryConnectionChanged:(id <VCConnectionProtocol>)arg1 oldPrimaryConnection:(id <VCConnectionProtocol>)arg2;

@optional
- (void)optOutAllStreamsForConnection:(id <VCConnectionProtocol>)arg1;
- (void)resetParticipantGenerationCounter;
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;
- (void)discardConnection:(id <VCConnectionProtocol>)arg1;
@end
