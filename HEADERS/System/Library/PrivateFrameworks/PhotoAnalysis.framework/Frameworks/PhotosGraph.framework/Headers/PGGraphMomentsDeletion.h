//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphMomentsDeletion : PGGraphChange
{
    NSSet *_momentLocalIdentifiers;
}

@property(readonly, nonatomic) NSSet *momentLocalIdentifiers; // @synthesize momentLocalIdentifiers=_momentLocalIdentifiers;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (id)initWithMomentLocalIdentifiers:(id)arg1;

@end
