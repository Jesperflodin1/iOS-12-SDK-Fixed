//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CRKStudentDaemonProxy, NSDictionary, NSString;

@protocol CRKStudentDaemonProxyObserver <NSObject>

@optional
- (void)daemonProxy:(CRKStudentDaemonProxy *)arg1 didReceiveNotificationWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)daemonProxyDidDisconnect:(CRKStudentDaemonProxy *)arg1;
- (void)daemonProxyDidConnect:(CRKStudentDaemonProxy *)arg1;
@end
