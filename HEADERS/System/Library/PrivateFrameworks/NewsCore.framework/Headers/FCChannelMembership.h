//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCInterestToken, NSString, NTPBChannelMembershipRecord;

@interface FCChannelMembership : NSObject
{
    _Bool _isAllowedToSeeDrafts;
    NSString *_channelID;
    NSString *_draftListID;
    NTPBChannelMembershipRecord *_record;
    FCInterestToken *_interestToken;
}

@property(retain, nonatomic) FCInterestToken *interestToken; // @synthesize interestToken=_interestToken;
@property(retain, nonatomic) NTPBChannelMembershipRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) NSString *draftListID; // @synthesize draftListID=_draftListID;
@property(nonatomic) _Bool isAllowedToSeeDrafts; // @synthesize isAllowedToSeeDrafts=_isAllowedToSeeDrafts;
@property(retain, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2;

@end

