/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSArray;

@interface MiroPosterContainerView : UIView {

	NSArray* _images;
	NSArray* _imageViews;

}

@property (nonatomic,retain) NSArray * imageViews;              //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) NSArray * images;                  //@synthesize images=_images - In the implementation block
-(void)layoutSubviews;
-(NSArray *)images;
-(void)setImages:(NSArray *)arg1 ;
-(void)setImageViews:(NSArray *)arg1 ;
-(NSArray *)imageViews;
@end

