//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (HMFError)
+ (id)hmfErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmfErrorWithCode:(long long)arg1;
+ (id)hmfErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmfErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
@property(readonly, nonatomic, getter=isHMFError) _Bool hmfError;
@end
