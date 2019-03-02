/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:48 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _LSApplicationState : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	unsigned long long _stateFlags;
	int _ratingRank;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isRemovedSystemApp,nonatomic,readonly) BOOL removedSystemApp; 
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked; 
@property (getter=isAlwaysAvailable,nonatomic,readonly) BOOL alwaysAvailable; 
+(BOOL)supportsSecureCoding;
-(BOOL)isAlwaysAvailable;
-(BOOL)isRemovedSystemApp;
-(BOOL)isBlocked;
-(id)initWithBundleIdentifier:(id)arg1 stateFlags:(unsigned long long)arg2 ratingRank:(int)arg3 ;
-(void)addStateFlag:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPlaceholder;
-(BOOL)isValid;
-(BOOL)isRestricted;
-(BOOL)isInstalled;
@end
