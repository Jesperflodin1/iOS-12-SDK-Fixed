//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DownloadAgentState.h"

@interface DownloadingDownloadAgentState : DownloadAgentState
{
}

- (void)_updateDatabaseMetrics:(id)arg1;
- (void)_didRestart;
- (void)_didRefreshRateLimitWithRateLimit:(long long)arg1;
- (void)_didRefreshPriorityWithPriority:(double)arg1;
- (void)_didPause;
- (void)_didCompleteWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_didCancel;
- (void)onMessage:(id)arg1;
- (void)onEnter;

@end
