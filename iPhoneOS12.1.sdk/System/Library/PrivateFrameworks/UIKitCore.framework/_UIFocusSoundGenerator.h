//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _UIFocusSoundPlayer;

__attribute__((visibility("hidden")))
@interface _UIFocusSoundGenerator : NSObject
{
    id <_UIFocusSoundPlayer> _focusSoundPlayer;
}

+ (void)_uiktest_unregisterURLForIdentifier:(id)arg1;
+ (void)registerURL:(id)arg1 forIdentifier:(id)arg2;
+ (id)defaultGenerator;
@property(readonly, nonatomic) id <_UIFocusSoundPlayer> focusSoundPlayer; // @synthesize focusSoundPlayer=_focusSoundPlayer;
- (void).cxx_destruct;
- (void)playSoundForFocusUpdateInContext:(id)arg1;
- (id)initWithFocusSoundPlayer:(id)arg1;

@end
