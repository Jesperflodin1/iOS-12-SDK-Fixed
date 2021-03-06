//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSMutableCopying-Protocol.h>

@class NSData, NSDictionary, NSString, SBSApplicationShortcutItem, UIApplicationShortcutIcon;

@interface UIApplicationShortcutItem : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_type;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    UIApplicationShortcutIcon *_icon;
    unsigned long long _activationMode;
    NSData *_userInfoData;
}

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)_sbsActivationModeFromUIActivationMode:(unsigned long long)arg1;
+ (unsigned long long)_uiActivationModeFromSBSActivationMode:(unsigned long long)arg1;
@property(copy, nonatomic) NSData *userInfoData; // @synthesize userInfoData=_userInfoData;
@property(nonatomic) unsigned long long activationMode; // @synthesize activationMode=_activationMode;
@property(copy, nonatomic) UIApplicationShortcutIcon *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *userInfo;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_initWithType:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 icon:(id)arg4 userInfoData:(id)arg5 activationMode:(unsigned long long)arg6;
- (id)initWithType:(id)arg1 localizedTitle:(id)arg2;
- (id)initWithType:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 icon:(id)arg4 userInfo:(id)arg5;
- (id)init;
@property(readonly, copy, nonatomic) SBSApplicationShortcutItem *sbsShortcutItem;
- (id)initWithSBSApplicationShortcutItem:(id)arg1;

@end

