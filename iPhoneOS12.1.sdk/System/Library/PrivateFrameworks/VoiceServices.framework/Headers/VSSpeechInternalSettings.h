//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface VSSpeechInternalSettings : NSObject
{
    _Bool _internalBuild;
    _Bool _isInternalBuild;
    NSUserDefaults *_internalDefaults;
}

+ (id)standardInstance;
@property(retain, nonatomic) NSUserDefaults *internalDefaults; // @synthesize internalDefaults=_internalDefaults;
@property(nonatomic) _Bool isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property(readonly, nonatomic) _Bool internalBuild; // @synthesize internalBuild=_internalBuild;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableNewBackend;
@property(nonatomic) _Bool disableServerTimeoutFallback;
@property(nonatomic) _Bool forceServerTTS;
@property(nonatomic) float serverTTSTimeout;
@property(nonatomic) _Bool enableHomePodSimulation;
@property(nonatomic) _Bool enableLocalVoices;
@property(nonatomic) _Bool disableAssetCleaning;
@property(nonatomic) _Bool disableCache;
@property(nonatomic) _Bool enableAudioDump;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end
