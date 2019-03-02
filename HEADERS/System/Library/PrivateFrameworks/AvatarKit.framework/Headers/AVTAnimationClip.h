//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAAnimation, NSArray, NSMutableArray, NSString;

@interface AVTAnimationClip : NSObject
{
    NSString *_name;
    CAAnimation *_animation;
    NSArray *_extraAssets;
    double _heroFrame;
    NSMutableArray *_extraNodes;
}

+ (id)animationClipNamed:(id)arg1;
+ (id)animationFromURL:(id)arg1;
@property(readonly) double heroFrame; // @synthesize heroFrame=_heroFrame;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)didComplete;
- (void)runAnimationClipOnAvatar:(id)arg1 usingSceneTime:(_Bool)arg2;
@property(readonly) CAAnimation *animation;
- (void)setup;
- (id)initWithName:(id)arg1;

@end
