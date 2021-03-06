/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:45 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Swift/libswiftCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libswiftCore.dylib/libswiftCore.dylib-Structs.h>
#import <libswiftCore.dylib/Swift._SwiftNativeNSSet.h>
#import <libobjc.A.dylib/Swift._NSSetCore.h>

@interface Swift._RawNativeSetStorage : Swift._SwiftNativeNSSet <Swift._NSSetCore> {

	 bucketCount;
	 count;
	 initializedEntries;
	 keys;
	 seed;

}

@property (assign,nonatomic) long long count; 
-(id)enumerator;
-(long long)countByEnumeratingWithState:(SCD_Struct_Sw0*)arg1 objects:(id*)arg2 count:(long long)arg3 ;
-(long long)count;
-(id)copyWithZone:(void*)arg1 ;
-(id)objectEnumerator;
-(void)setCount:(long long)arg1 ;
-(id)member:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(long long)arg2 ;
@end

