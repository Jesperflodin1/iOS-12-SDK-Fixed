/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPreviewItem;
@class NSURL;

@interface QLEditedItem : NSObject {

	id<QLPreviewItem> _item;
	NSURL* _editedFileURL;

}

@property (nonatomic,copy) id<QLPreviewItem> item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSURL * editedFileURL;               //@synthesize editedFileURL=_editedFileURL - In the implementation block
-(id)initWithItem:(id)arg1 editedFileURL:(id)arg2 ;
-(void)setEditedFileURL:(NSURL *)arg1 ;
-(void)setItem:(id<QLPreviewItem>)arg1 ;
-(id<QLPreviewItem>)item;
-(NSURL *)editedFileURL;
@end

