/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:25:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLFloor : NSObject <NSCopying, NSSecureCoding> {

	long long level;

}

@property (nonatomic,readonly) long long level; 
+(BOOL)supportsSecureCoding;
-(id)initWithLevel:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)level;
@end

