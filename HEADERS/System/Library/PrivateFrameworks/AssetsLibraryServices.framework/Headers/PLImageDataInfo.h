//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface PLImageDataInfo : NSObject
{
    _Bool _deliveredPlaceholder;
    _Bool _canDownloadFromCloud;
    long long _deliveredFormat;
    NSURL *_URL;
    NSString *_sandboxExtensionToken;
    NSString *_UTI;
    long long _EXIFOrientation;
}

@property long long EXIFOrientation; // @synthesize EXIFOrientation=_EXIFOrientation;
@property(retain) NSString *UTI; // @synthesize UTI=_UTI;
@property(retain) NSString *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property _Bool canDownloadFromCloud; // @synthesize canDownloadFromCloud=_canDownloadFromCloud;
@property _Bool deliveredPlaceholder; // @synthesize deliveredPlaceholder=_deliveredPlaceholder;
@property long long deliveredFormat; // @synthesize deliveredFormat=_deliveredFormat;
- (id)description;
- (void)dealloc;

@end
