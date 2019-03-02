/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CAMediaTimingFunction : NSObject <NSSecureCoding> {

	CAMediaTimingFunctionPrivate* _priv;

}
+(id)sigmoidFunction;
+(id)_kbTimingFunction;
+(id)uiFunctionWithControlPoints:(const CGPoint*)arg1 ;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)functionWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
+(id)functionWithName:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)_getPoints:(double*)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(unsigned long long)CA_copyNumericValue:(double)arg1 ;
-(id)CAMLType;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)getControlPointAtIndex:(unsigned long long)arg1 values:(float)arg2 ;
-(float)_solveForInput:(float)arg1 ;
-(id)initWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
@end
