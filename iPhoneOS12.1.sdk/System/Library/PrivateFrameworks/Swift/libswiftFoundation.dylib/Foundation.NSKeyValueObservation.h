/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:35:27 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Swift/libswiftFoundation.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSString;

@interface Foundation.NSKeyValueObservation : NSObject {

	 object;
	 callback;
	 path;

}

@property (assign,__weak,nonatomic) NSObject * object; 
@property (readonly,nonatomic) NSString * path; 
+(id)swizzler;
+(void)setSwizzler:(id)arg1 ;
-(void)_swizzle_me_observeValueForKeyPath:(id)arg1 of:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)dealloc;
-(NSObject *)object;
-(void)invalidate;
-(NSString *)path;
-(void)setObject:(NSObject *)arg1 ;
@end

