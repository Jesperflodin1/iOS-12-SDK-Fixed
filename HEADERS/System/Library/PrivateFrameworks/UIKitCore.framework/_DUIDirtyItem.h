//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@interface _DUIDirtyItem : NSObject <NSSecureCoding>
{
    unsigned long long _index;
    unsigned long long _reasons;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long reasons; // @synthesize reasons=_reasons;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

