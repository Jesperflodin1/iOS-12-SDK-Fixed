//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMAssociatedMessageChatItem.h>

@class NSString;

@interface IMAssociatedStickerChatItem : IMAssociatedMessageChatItem
{
    NSString *_transferGUID;
}

@property(readonly, copy, nonatomic) NSString *transferGUID; // @synthesize transferGUID=_transferGUID;
- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 transferGUID:(id)arg3;
- (_Bool)canDelete;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
