//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface BLOSTransaction : NSObject
{
    NSObject<OS_os_transaction> *_osTransaction;
}

@property(retain, nonatomic) NSObject<OS_os_transaction> *osTransaction; // @synthesize osTransaction=_osTransaction;
- (void).cxx_destruct;
- (void)dealloc;
- (void)endTransaction;
- (id)initWithTransactionName:(const char *)arg1;

@end
