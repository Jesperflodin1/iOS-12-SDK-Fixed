/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLImageItemContents.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface QLImageItemDataContents : QLImageItemContents <NSSecureCoding> {

	NSData* _imageData;

}

@property (nonatomic,retain) NSData * imageData;              //@synthesize imageData=_imageData - In the implementation block
+(id)imageItemContentsWithImage:(id)arg1 imageData:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(NSData *)imageData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
@end
