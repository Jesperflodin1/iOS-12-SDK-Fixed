//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSString, UIImage;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification
{
    UIImage *_image;
    NSString *_uuid;
}

+ (id)notification;
@property(readonly, retain, nonatomic) NSString *assetUUID;
@property(readonly, retain, nonatomic) UIImage *image;
- (id)description;
- (id)object;
- (id)userInfo;
- (id)name;
- (void)dealloc;
- (id)init;
- (id)_init;

@end
