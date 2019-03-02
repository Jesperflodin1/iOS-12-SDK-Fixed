/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:02 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BKEvent : NSObject {

	unsigned char _cls;
	BOOL _isStart;
	BOOL _isTerminal;
	BOOL _isMetadata;
	BOOL _isHigh;
	BOOL _isLow;
	unsigned _event;

}

@property (readonly) unsigned char cls;              //@synthesize cls=_cls - In the implementation block
@property (readonly) unsigned event;                 //@synthesize event=_event - In the implementation block
@property (readonly) BOOL isStart;                   //@synthesize isStart=_isStart - In the implementation block
@property (readonly) BOOL isTerminal;                //@synthesize isTerminal=_isTerminal - In the implementation block
@property (readonly) BOOL isMetadata;                //@synthesize isMetadata=_isMetadata - In the implementation block
@property (readonly) BOOL isHigh;                    //@synthesize isHigh=_isHigh - In the implementation block
@property (readonly) BOOL isLow;                     //@synthesize isLow=_isLow - In the implementation block
-(BOOL)isTerminal;
-(BOOL)isHigh;
-(BOOL)isLow;
-(id)initWithEventOrCode:(unsigned long long)arg1 ;
-(id)initWithEncodedEventOrCode:(unsigned)arg1 ;
-(void)encodeEventValue:(unsigned*)arg1 secondValue:(unsigned*)arg2 ;
-(unsigned char)cls;
-(BOOL)isMetadata;
-(BOOL)isStart;
-(void)setProperties;
-(id)description;
-(unsigned)event;
@end
