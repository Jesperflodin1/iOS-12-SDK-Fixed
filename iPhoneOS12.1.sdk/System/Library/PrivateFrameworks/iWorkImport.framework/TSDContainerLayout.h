//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDLayout.h>

@class NSObject;
@protocol TSDContainerInfo;

__attribute__((visibility("hidden")))
@interface TSDContainerLayout : TSDLayout
{
}

@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (void)updateChildrenFromInfo;
- (void)processChangedProperty:(int)arg1;
- (id)additionalInfosForChildLayouts;
- (id)initWithInfo:(id)arg1;

@end
