//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RequestOperation.h"

@class NSNumber, NSString;

@interface SystemAppRequestOperation : RequestOperation
{
    NSString *_bundleID;
    _Bool _userInitiated;
    CDUnknownBlockType _resultHandler;
    NSNumber *_storeItemID;
}

+ (void)_showInternalConnectionDialogWithError:(id)arg1;
+ (id)_messageForError:(id)arg1;
@property(nonatomic, getter=isUserInitiated) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(copy, nonatomic) NSNumber *storeItemID; // @synthesize storeItemID=_storeItemID;
@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
- (void).cxx_destruct;
- (void)_importAndStartJob:(id)arg1;
- (id)_createCoordinatorWithPlaceholder:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (void)run;
- (id)initWithBundleID:(id)arg1;

@end
