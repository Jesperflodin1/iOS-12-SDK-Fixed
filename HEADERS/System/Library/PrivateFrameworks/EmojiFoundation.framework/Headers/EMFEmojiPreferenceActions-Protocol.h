//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmojiFoundation/NSObject-Protocol.h>

@class EMFEmojiToken, NSString;

@protocol EMFEmojiPreferenceActions <NSObject>
- (void)didDisplaySkinToneHelp;
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(NSString *)arg2;
- (void)didUseEmoji:(EMFEmojiToken *)arg1 usageMode:(NSString *)arg2 typingName:(NSString *)arg3;
- (void)didUseEmoji:(EMFEmojiToken *)arg1 usageMode:(NSString *)arg2;
- (void)didUseEmoji:(EMFEmojiToken *)arg1;
@end
