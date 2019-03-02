/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CTServiceDescriptorContainer : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _descriptors;

}

@property (nonatomic,retain) NSArray * descriptors;              //@synthesize descriptors=_descriptors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDescriptors:(id)arg1 ;
-(void)setDescriptors:(NSArray *)arg1 ;
-(NSArray *)descriptors;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
