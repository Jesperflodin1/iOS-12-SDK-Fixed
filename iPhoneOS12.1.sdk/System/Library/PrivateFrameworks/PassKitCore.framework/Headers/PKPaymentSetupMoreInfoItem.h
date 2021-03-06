//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL;

@interface PKPaymentSetupMoreInfoItem : NSObject
{
    NSString *_title;
    NSString *_body;
    NSURL *_imageURL;
    NSData *_imageData;
}

@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithMoreInfoDictionary:(id)arg1 imageData:(id)arg2;
- (id)initWithMoreInfoDictionary:(id)arg1;

@end

