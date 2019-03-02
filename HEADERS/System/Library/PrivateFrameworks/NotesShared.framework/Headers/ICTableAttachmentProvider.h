//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CRTTCompatibleDocument, ICAttachment, ICTable;
@protocol ICTableAttachmentProviderDelegate;

@interface ICTableAttachmentProvider : NSObject
{
    _Bool _needsToUpdateTableFromBackgroundAttachment;
    ICAttachment *_attachment;
    ICTable *_table;
    CRTTCompatibleDocument *_tableDoc;
    id <ICTableAttachmentProviderDelegate> _delegate;
    ICAttachment *_backgroundAttachment;
}

+ (id)backgroundManagedObjectContext;
+ (void)saveAttachmentOnMainThread:(id)arg1;
+ (void)notifyProviderForRefreshToAttachment:(id)arg1;
+ (id)sharedProviderForAttachment:(id)arg1;
+ (id)mergeNotificationRegister;
+ (id)providerMapping;
@property(nonatomic) _Bool needsToUpdateTableFromBackgroundAttachment; // @synthesize needsToUpdateTableFromBackgroundAttachment=_needsToUpdateTableFromBackgroundAttachment;
@property(retain, nonatomic) ICAttachment *backgroundAttachment; // @synthesize backgroundAttachment=_backgroundAttachment;
@property(nonatomic) __weak id <ICTableAttachmentProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CRTTCompatibleDocument *tableDoc; // @synthesize tableDoc=_tableDoc;
- (void).cxx_destruct;
- (void)notifyDelegateTableAttachmentDidMerge;
- (void)notifyDelegateTableAttachmentWillMerge;
- (void)updateTableFromMOC;
- (void)didRefreshBackgroundTableAttachment:(id)arg1;
@property(nonatomic) _Bool isBeingEditedLocallyOnDevice;
@property(readonly, nonatomic) ICTable *table; // @synthesize table=_table;
- (void)setTableFromDocument:(id)arg1;
@property(nonatomic) __weak ICAttachment *attachment; // @synthesize attachment=_attachment;

@end
