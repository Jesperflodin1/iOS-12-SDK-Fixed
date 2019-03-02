//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol CPLEngineTransportGroup;

@protocol CPLEngineTransportTask <NSObject>
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(nonatomic) _Bool foreground;
- (void)cancel;
- (void)run;
@end
