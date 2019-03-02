//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPPropertySet;

@interface MPCModelRadioStationBuilder : NSObject
{
    struct {
        unsigned int initialized:1;
        unsigned int beats1:1;
        unsigned int name:1;
        unsigned int editorNotes:1;
        unsigned int shortEditorNotes:1;
        unsigned int explicit;
        unsigned int artwork:1;
        unsigned int allowsItemLiking:1;
    } _requestedRadioStationProperties;
    MPPropertySet *_requestedProperties;
}

@property(readonly, copy, nonatomic) MPPropertySet *requestedProperties; // @synthesize requestedProperties=_requestedProperties;
- (void).cxx_destruct;
- (id)modelRadioStationForMetadata:(id)arg1;
- (id)initWithRequestedProperties:(id)arg1;

@end
