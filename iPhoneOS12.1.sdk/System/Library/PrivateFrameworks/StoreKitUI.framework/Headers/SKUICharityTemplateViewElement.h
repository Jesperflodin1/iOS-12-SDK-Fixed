//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUICharityTemplateViewElement : SKUIViewElement
{
    NSString *_campaignIdentifier;
    NSString *_charityMetadataURLString;
}

@property(readonly, nonatomic) NSString *charityMetadataURLString; // @synthesize charityMetadataURLString=_charityMetadataURLString;
@property(readonly, nonatomic) NSString *campaignIdentifier; // @synthesize campaignIdentifier=_campaignIdentifier;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
