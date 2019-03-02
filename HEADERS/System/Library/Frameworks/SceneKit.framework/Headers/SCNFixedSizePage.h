/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
@class NSMutableIndexSet;

@interface SCNFixedSizePage : NSObject {

	id<MTLBuffer> _buffer;
	unsigned long long _elementSize;
	NSMutableIndexSet* _freeIndices;

}

@property (nonatomic,readonly) id<MTLBuffer> buffer;              //@synthesize buffer=_buffer - In the implementation block
-(id<MTLBuffer>)buffer;
-(void)deallocateElementAtOffset:(unsigned long long)arg1 ;
-(unsigned long long)_allocateElement;
-(id)initWithBuffer:(id)arg1 elementSize:(unsigned long long)arg2 ;
-(BOOL)hasFreeElementsLeft;
-(id)newSubBuffer;
-(BOOL)isFull;
-(void)dealloc;
@end
