//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface UIAutonomousSingleAppModeConfiguration : NSObject <NSCopying>
{
    unsigned long long _style;
}

+ (id)defaultConfigurationForStyle:(unsigned long long)arg1;
+ (id)defaultConfiguration;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
