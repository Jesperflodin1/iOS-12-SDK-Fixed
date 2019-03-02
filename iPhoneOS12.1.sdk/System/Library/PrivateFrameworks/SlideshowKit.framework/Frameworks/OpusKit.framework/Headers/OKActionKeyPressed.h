/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:09 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionKeyPressedExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface OKActionKeyPressed : OKAction <OKActionKeyPressedExports, NSSecureCoding> {

	BOOL isKeyUp;
	NSString* keyPressed;
	double timestamp;

}

@property (nonatomic,retain) NSString * keyPressed; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) BOOL isKeyUp; 
+(void)setupJavascriptContext:(id)arg1 ;
+(id)keyPressedActionWithKey:(id)arg1 atTime:(double)arg2 isKeyUp:(BOOL)arg3 withLocation:(CGPoint)arg4 context:(id)arg5 ;
+(BOOL)supportsSecureCoding;
-(void)setKeyPressed:(NSString *)arg1 ;
-(NSString *)keyPressed;
-(BOOL)isKeyUp;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
@end
