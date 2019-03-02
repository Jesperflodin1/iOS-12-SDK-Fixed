/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface UITextInputMode : NSObject <NSSecureCoding>

@property (nonatomic,readonly) NSString * primaryLanguage; 
+(BOOL)supportsSecureCoding;
+(id)currentInputMode;
+(id)activeInputModes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)primaryLanguage;
@end
