/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:22:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CTCellInfo : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _legacyInfo;

}

@property (nonatomic,retain) NSArray * legacyInfo;              //@synthesize legacyInfo=_legacyInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)legacyInfo;
-(void)setLegacyInfo:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

