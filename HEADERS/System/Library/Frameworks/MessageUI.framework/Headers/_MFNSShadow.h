/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:35:13 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSShadow;

@interface _MFNSShadow : NSObject <NSSecureCoding> {

	NSShadow* _shadow;

}

@property (nonatomic,retain) NSShadow * shadow;              //@synthesize shadow=_shadow - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithShadow:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSShadow *)shadow;
-(void)setShadow:(NSShadow *)arg1 ;
@end
