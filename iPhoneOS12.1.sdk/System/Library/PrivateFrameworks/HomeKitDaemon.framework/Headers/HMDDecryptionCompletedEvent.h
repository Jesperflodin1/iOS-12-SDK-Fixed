//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDDecryptionCompletedEvent : HMDLogEvent
{
    _Bool _didDecryptionFail;
}

+ (id)decryptionCompletedWithFailure:(_Bool)arg1;
+ (id)uuid;
@property(nonatomic) _Bool didDecryptionFail; // @synthesize didDecryptionFail=_didDecryptionFail;
- (id)initWithFailure:(_Bool)arg1;

@end
