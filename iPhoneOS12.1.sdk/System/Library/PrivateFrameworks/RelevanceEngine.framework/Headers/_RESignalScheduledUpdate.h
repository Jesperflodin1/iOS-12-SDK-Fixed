//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _RESignalScheduledUpdate : NSObject
{
    double _interval;
    CDUnknownBlockType _completion;
    NSDate *_lastFireDate;
}

@property(retain, nonatomic) NSDate *lastFireDate; // @synthesize lastFireDate=_lastFireDate;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;

@end
