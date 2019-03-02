/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface INUIInterfaceSection : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _interactiveBehavior;
	NSSet* _parameters;

}

@property (nonatomic,readonly) unsigned long long interactiveBehavior;              //@synthesize interactiveBehavior=_interactiveBehavior - In the implementation block
@property (nonatomic,copy,readonly) NSSet * parameters;                             //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)interactiveBehavior;
-(id)initWithInteractiveBehavior:(unsigned long long)arg1 parameters:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)parameters;
@end
