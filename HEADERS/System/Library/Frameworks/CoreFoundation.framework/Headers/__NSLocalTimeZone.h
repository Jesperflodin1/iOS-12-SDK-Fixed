/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimeZone.h>

@interface __NSLocalTimeZone : NSTimeZone
+(BOOL)supportsSecureCoding;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(id)localizedName:(long long)arg1 locale:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)name;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)data;
-(Class)classForCoder;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
@end
