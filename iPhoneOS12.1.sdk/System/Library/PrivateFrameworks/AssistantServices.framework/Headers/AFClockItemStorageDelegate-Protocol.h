//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFClockItemStorage, NSSet;

@protocol AFClockItemStorageDelegate <NSObject>
- (void)clockItemStorageDidUpdate:(AFClockItemStorage *)arg1 insertedItemIDs:(NSSet *)arg2 updatedItemIDs:(NSSet *)arg3 deletedItemIDs:(NSSet *)arg4;
@end
