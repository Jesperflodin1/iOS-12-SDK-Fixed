/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CTMessageAddress.h>

@class NSString;

@interface CTAsciiAddress : NSObject <NSCopying, CTMessageAddress> {

	NSString* _address;

}

@property (readonly) NSString * address;              //@synthesize address=_address - In the implementation block
+(id)asciiAddressWithString:(id)arg1 ;
-(id)encodedString;
-(NSString *)address;
-(id)initWithAddress:(id)arg1 ;
-(id)canonicalFormat;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
