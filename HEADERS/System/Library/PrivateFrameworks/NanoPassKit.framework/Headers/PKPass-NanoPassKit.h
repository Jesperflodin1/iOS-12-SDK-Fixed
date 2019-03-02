//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPass.h>

@class NSData, PKBarcode;

@interface PKPass (NanoPassKit)
+ (void)npkClearTransitValuePendingStateIfNecessaryForPassWithID:(id)arg1 withBalance:(id)arg2;
+ (void)npkHandleTransitValuePendingAmount:(id)arg1 withBalance:(id)arg2 forPassWithID:(id)arg3;
- (id)npkLastAddValueAmount;
- (_Bool)npkIsAddValuePending;
@property(readonly) _Bool npkHasValidNFCPayload;
@property(readonly) _Bool hasLogoImageSet;
- (id)npkCompleteHashForWatchOSVersion:(unsigned long long)arg1;
@property(readonly) NSData *npkCompleteHash;
@property(readonly) _Bool npkExpired;
@property(readonly) _Bool npkSupportsHidingAccessory;
@property(readonly) PKBarcode *npkWatchBarcode;
- (long long)npkAccessoryType;
@end
