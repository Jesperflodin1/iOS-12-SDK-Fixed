//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskMessage.h>

@class CATTaskRequest;

@interface CATTaskMessageStart : CATTaskMessage
{
    CATTaskRequest *_request;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CATTaskRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1 request:(id)arg2;

@end
