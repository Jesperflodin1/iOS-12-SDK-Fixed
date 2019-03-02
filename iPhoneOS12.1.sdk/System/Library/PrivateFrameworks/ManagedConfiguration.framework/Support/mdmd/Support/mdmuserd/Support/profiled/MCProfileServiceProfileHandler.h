//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCProfileHandler.h"

@class NSData;

@interface MCProfileServiceProfileHandler : MCProfileHandler
{
    struct __SecIdentity *_identity;
    NSData *_persistentID;
}

- (void).cxx_destruct;
- (void)remove;
- (void)unsetAside;
- (void)setAsideWithInstaller:(id)arg1;
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;
- (id)fetchFinalProfileWithClient:(id)arg1 outProfileData:(id *)arg2 outError:(id *)arg3;
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;
- (id)_badIdentityError;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

@end
