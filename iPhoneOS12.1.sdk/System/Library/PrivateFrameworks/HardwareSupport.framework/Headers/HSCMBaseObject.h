/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:02 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <libobjc.A.dylib/HSCMBaseObjectInterface.h>

@class NSString;

@interface HSCMBaseObject : NSObject <HSCMBaseObjectInterface> {

	OpaqueCMBaseObjectRef _object;

}

@property (assign,nonatomic) OpaqueCMBaseObjectRef object;              //@synthesize object=_object - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)describeStatus:(int)arg1 ;
-(id)valueForProperty:(CFStringRef)arg1 error:(id*)arg2 ;
-(BOOL)setValue:(id)arg1 forProperty:(CFStringRef)arg2 error:(id*)arg3 ;
-(OpaqueCMBaseObjectRef)object;
-(void)setObject:(OpaqueCMBaseObjectRef)arg1 ;
-(id)initWithObject:(OpaqueCMBaseObjectRef)arg1 ;
@end
