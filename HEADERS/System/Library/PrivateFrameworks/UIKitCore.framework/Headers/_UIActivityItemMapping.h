/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:04 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIActivityItemMapping : NSObject
+(id)_activeActivityViewControllers;
+(id)_attachmentNameForActivityItem:(id)arg1 activityType:(id)arg2 ;
+(id)_subjectForActivityItem:(id)arg1 activityType:(id)arg2 ;
+(id)_thumbnailImageDataForActivityItem:(id)arg1 thumbnailSize:(CGSize)arg2 activityType:(id)arg3 ;
+(id)_thumbnailImageForActivityItem:(id)arg1 thumbnailSize:(CGSize)arg2 activityType:(id)arg3 ;
+(id)_dataTypeIdentifierForActivityItem:(id)arg1 activityType:(id)arg2 ;
+(id)_openURLAnnotationForActivityItem:(id)arg1 activityType:(id)arg2 ;
+(id)_itemProviderForActivityItem:(id)arg1 typeIdentifier:(id)arg2 thumbnailSize:(CGSize)arg3 activityType:(id)arg4 ;
+(id)_activityViewControllerForActivityItem:(id)arg1 ;
+(void)_addToActiveActivityViewControllers:(id)arg1 ;
+(void)_removeFromActiveActivityViewControllers:(id)arg1 ;
+(void)_addActivityItem:(id)arg1 activityViewController:(id)arg2 originalActivityItem:(id)arg3 ;
+(void)_clearActivityItems:(id)arg1 ;
@end
