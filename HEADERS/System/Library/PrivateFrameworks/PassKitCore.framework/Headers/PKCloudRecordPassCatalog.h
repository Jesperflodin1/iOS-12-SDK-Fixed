//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKCloudRecordObject.h>

@class PKCatalog;

@interface PKCloudRecordPassCatalog : PKCloudRecordObject
{
    PKCatalog *_catalog;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) PKCatalog *catalog; // @synthesize catalog=_catalog;
- (void).cxx_destruct;
- (id)_descriptionWithIncludeItem:(_Bool)arg1;
- (id)description;
- (id)descriptionWithItem:(_Bool)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;

@end
