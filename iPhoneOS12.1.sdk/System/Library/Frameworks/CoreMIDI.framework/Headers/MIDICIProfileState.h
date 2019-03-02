/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MIDICIProfileState : NSObject <NSSecureCoding> {

	NSArray* enabledProfiles;
	NSArray* disabledProfiles;

}

@property (nonatomic,readonly) NSArray * enabledProfiles; 
@property (nonatomic,readonly) NSArray * disabledProfiles; 
+(BOOL)supportsSecureCoding;
-(id)initWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2 ;
-(void)updateWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2 ;
-(NSArray *)enabledProfiles;
-(NSArray *)disabledProfiles;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
