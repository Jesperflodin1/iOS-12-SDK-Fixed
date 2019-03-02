//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTPingSubscriptionInfo-Protocol.h>

@class NSString;

@interface BLTPingHandlerHolder : NSObject <BLTPingSubscriptionInfo>
{
    id _pingHandler;
    _Bool _forBulletin;
    NSString *_sectionID;
    unsigned long long _ackType;
}

@property(nonatomic) unsigned long long ackType; // @synthesize ackType=_ackType;
@property(nonatomic) _Bool forBulletin; // @synthesize forBulletin=_forBulletin;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (void).cxx_destruct;
- (void)pingWithBulletin:(id)arg1 ack:(CDUnknownBlockType)arg2;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(CDUnknownBlockType)arg3;
- (void)_performPingWithAckableForwardBlock:(CDUnknownBlockType)arg1 ackableNoParametersBlock:(CDUnknownBlockType)arg2 noAckBlock:(CDUnknownBlockType)arg3 clientAck:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) _Bool canAck;
- (id)initWithPingHandler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
