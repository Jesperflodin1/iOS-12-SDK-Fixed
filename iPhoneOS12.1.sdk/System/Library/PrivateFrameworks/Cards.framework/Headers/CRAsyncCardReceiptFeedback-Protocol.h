//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cards/CRFeedback-Protocol.h>

@protocol CRCard;

@protocol CRAsyncCardReceiptFeedback <CRFeedback>
@property(retain, nonatomic) id <CRCard> receivedCard;
@property(retain, nonatomic) id <CRCard> requestedCard;
@property(retain, nonatomic) id <CRCard> baseCard;
@end
