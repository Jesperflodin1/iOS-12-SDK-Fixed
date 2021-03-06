/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AUAudioUnitProperty : NSObject <NSSecureCoding> {

	NSString* _key;
	unsigned _scope;
	unsigned _element;

}
+(id)propertyWithKey:(id)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
+(id)propertyWithKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithKey:(id)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
-(id)initWithKey:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

