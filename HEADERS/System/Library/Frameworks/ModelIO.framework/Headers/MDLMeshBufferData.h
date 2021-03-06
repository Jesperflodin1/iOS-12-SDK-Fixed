/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:27:14 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLMeshBuffer.h>

@protocol MDLMeshBufferAllocator;
@class MDLMeshBufferZoneDefault, NSMutableData, NSString, NSData;

@interface MDLMeshBufferData : NSObject <MDLMeshBuffer> {

	MDLMeshBufferZoneDefault* _zone;
	MDLMeshBufferZoneDefault* _zoneDefault;
	NSMutableData* _data;
	unsigned long long _length;
	id<MDLMeshBufferAllocator> _allocator;
	unsigned long long _type;
	NSString* _name;

}

@property (nonatomic,retain,readonly) NSData * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> allocator; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferZone> zone; 
@property (nonatomic,readonly) unsigned long long type; 
-(id)map;
-(id<MDLMeshBufferAllocator>)allocator;
-(id)initWithType:(unsigned long long)arg1 length:(unsigned long long)arg2 ;
-(id)initWithLength:(unsigned long long)arg1 data:(id)arg2 allocator:(id)arg3 zone:(id)arg4 ;
-(void)fillData:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)initWithType:(unsigned long long)arg1 data:(id)arg2 ;
-(unsigned long long)length;
-(void)dealloc;
-(id)name;
-(void)setName:(id)arg1 ;
-(id<MDLMeshBufferZone>)zone;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(NSData *)data;
@end

