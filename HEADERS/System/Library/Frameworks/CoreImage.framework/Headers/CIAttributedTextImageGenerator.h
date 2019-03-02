/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class NSAttributedString, NSNumber;

@interface CIAttributedTextImageGenerator : CIFilter {

	NSAttributedString* inputText;
	NSNumber* inputScaleFactor;

}

@property (nonatomic,retain) NSAttributedString * inputText; 
@property (nonatomic,retain) NSNumber * inputScaleFactor; 
+(id)customAttributes;
-(NSNumber *)inputScaleFactor;
-(void)setInputScaleFactor:(NSNumber *)arg1 ;
-(NSAttributedString *)inputText;
-(void)setInputText:(NSAttributedString *)arg1 ;
-(id)outputImage;
@end
