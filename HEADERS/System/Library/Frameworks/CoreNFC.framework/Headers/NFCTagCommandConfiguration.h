/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:46 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreNFC/CoreNFC-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NFCTagCommandConfiguration : NSObject <NSCopying> {

	unsigned long long _maximumRetries;
	double _retryInterval;

}

@property (assign,nonatomic) unsigned long long maximumRetries;              //@synthesize maximumRetries=_maximumRetries - In the implementation block
@property (assign,nonatomic) double retryInterval;                           //@synthesize retryInterval=_retryInterval - In the implementation block
-(double)retryInterval;
-(unsigned long long)maximumRetries;
-(void)setMaximumRetries:(unsigned long long)arg1 ;
-(void)setRetryInterval:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

