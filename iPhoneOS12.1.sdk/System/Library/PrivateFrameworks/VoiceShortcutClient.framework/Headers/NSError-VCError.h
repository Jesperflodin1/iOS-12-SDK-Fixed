//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (VCError)
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)vc_partialPersistenceErrorWithPartialErrors:(id)arg1;
+ (id)vc_persistenceErrorWithUnderlyingError:(id)arg1;
+ (id)_vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 reason:(id)arg2;
@end
