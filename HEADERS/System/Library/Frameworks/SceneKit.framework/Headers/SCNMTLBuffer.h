/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
@interface SCNMTLBuffer : NSObject {

	long long _usedCount;
	id<MTLBuffer> _buffer;
	unsigned long long _offset;
	id _dataSource;

}

@property (assign) long long usedCount;                              //@synthesize usedCount=_usedCount - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> buffer;                   //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) void* contents; 
@property (assign,nonatomic) id dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
-(id<MTLBuffer>)buffer;
-(void)setBuffer:(id<MTLBuffer>)arg1 ;
-(long long)decrementUsedCount;
-(void)incrementUsedCount;
-(void)setUsedCount:(long long)arg1 ;
-(long long)usedCount;
-(void)dealloc;
-(void*)contents;
-(id)dataSource;
-(void)setDataSource:(id)arg1 ;
-(unsigned long long)offset;
-(void)setOffset:(unsigned long long)arg1 ;
@end
