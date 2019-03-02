/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:35 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSInputStream.h>

@class SLRequestMultiPart, NSData;

@interface SLRequestMultiPartInputStream : NSInputStream {

	SLRequestMultiPart* _multiPart;
	unsigned long long _streamStatus;
	unsigned long long _bytesReadInState;
	unsigned long long _totalBytesRead;
	NSData* _srcData;
	int _currentState;

}
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(unsigned long long)readStateSourceData:(id)arg1 toBuffer:(char*)arg2 offset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 ;
-(long long)currentStateRead:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)initWithMultiPart:(id)arg1 ;
-(void)transitionState;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)hasBytesAvailable;
-(unsigned long long)length;
-(void)open;
-(void)close;
@end
