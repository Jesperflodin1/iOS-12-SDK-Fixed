/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:04 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString, UIImage;

@interface _UISearchToken : NSObject {

	id<NSObject> _representedObject;
	NSString* _text;
	UIImage* _image;

}

@property (nonatomic,copy) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) id<NSObject> representedObject;              //@synthesize representedObject=_representedObject - In the implementation block
+(id)tokenWithImage:(id)arg1 ;
+(id)tokenWithIcon:(id)arg1 text:(id)arg2 ;
-(id)init;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(id<NSObject>)representedObject;
-(id)_makeAtomView;
-(id)_initToken;
-(id)initWithRepresentedObject:(id)arg1 text:(id)arg2 image:(id)arg3 ;
@end
