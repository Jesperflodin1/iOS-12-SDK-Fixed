/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@interface __NSCFData : NSMutableData {

	unsigned long long _cfinfoa;
	long long _length;
	long long _capacity;
	CFAllocatorRef _bytesDeallocator;
	char* _bytes;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)_providesConcreteBacking;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const void*)bytes;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)setLength:(unsigned long long)arg1 ;
-(void*)mutableBytes;
@end
