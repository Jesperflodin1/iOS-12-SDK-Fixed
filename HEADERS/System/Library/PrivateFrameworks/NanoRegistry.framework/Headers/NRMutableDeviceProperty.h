//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoRegistry/NRMutableStateBase.h>

@class NRPBMutableDeviceProperty;
@protocol NSObject><NSCopying;

@interface NRMutableDeviceProperty : NRMutableStateBase
{
    id <NSObject><NSCopying> _value;
    NRPBMutableDeviceProperty *_protobuf;
}

+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (id)enclosedClassTypes;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NRPBMutableDeviceProperty *protobuf; // @synthesize protobuf=_protobuf;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)applyDiff:(id)arg1 upOnly:(_Bool)arg2 notifyParent:(_Bool)arg3 unconditional:(_Bool)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)init;
- (void)setValue:(id)arg1;
@property(readonly, retain, nonatomic) id <NSObject><NSCopying> value; // @synthesize value=_value;

@end
