//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CarPlaySupport/NSObject-Protocol.h>

@class NSUUID;

@protocol CPBannerDelegate <NSObject>
- (void)bannerDidDisappearWithIdentifier:(NSUUID *)arg1;
- (void)bannerDidAppearWithIdentifier:(NSUUID *)arg1;
- (void)bannerTappedWithIdentifier:(NSUUID *)arg1;
@end
