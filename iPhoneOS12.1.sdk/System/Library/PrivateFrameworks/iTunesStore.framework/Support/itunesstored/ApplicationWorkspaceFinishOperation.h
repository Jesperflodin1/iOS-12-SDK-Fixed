//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ApplicationWorkspaceOperation.h"

@interface ApplicationWorkspaceFinishOperation : ApplicationWorkspaceOperation
{
    _Bool _isPlaceholderRestore;
}

- (void)runWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithApplicationHandle:(id)arg1 isPlaceholderRestore:(_Bool)arg2;
- (id)initWithApplicationHandle:(id)arg1;

@end

