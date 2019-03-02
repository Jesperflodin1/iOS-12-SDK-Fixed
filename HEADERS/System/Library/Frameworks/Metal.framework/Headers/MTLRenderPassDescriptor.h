/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLRenderPassColorAttachmentDescriptorArray, MTLRenderPassDepthAttachmentDescriptor, MTLRenderPassStencilAttachmentDescriptor;

@interface MTLRenderPassDescriptor : NSObject <NSCopying> {

	unsigned long long _imageblockSampleLength;
	unsigned long long _threadgroupMemoryLength;
	unsigned long long _tileWidth;
	unsigned long long _tileHeight;
	unsigned long long _defaultRasterSampleCount;

}

@property (readonly) MTLRenderPassColorAttachmentDescriptorArray * colorAttachments; 
@property (nonatomic,copy) MTLRenderPassDepthAttachmentDescriptor * depthAttachment; 
@property (nonatomic,copy) MTLRenderPassStencilAttachmentDescriptor * stencilAttachment; 
@property (nonatomic,retain) id<MTLBuffer> visibilityResultBuffer; 
@property (assign,nonatomic) unsigned long long renderTargetArrayLength; 
@property (assign,nonatomic) unsigned long long imageblockSampleLength;                               //@synthesize imageblockSampleLength=_imageblockSampleLength - In the implementation block
@property (assign,nonatomic) unsigned long long threadgroupMemoryLength;                              //@synthesize threadgroupMemoryLength=_threadgroupMemoryLength - In the implementation block
@property (assign,nonatomic) unsigned long long tileWidth;                                            //@synthesize tileWidth=_tileWidth - In the implementation block
@property (assign,nonatomic) unsigned long long tileHeight;                                           //@synthesize tileHeight=_tileHeight - In the implementation block
@property (assign,nonatomic) unsigned long long defaultRasterSampleCount;                             //@synthesize defaultRasterSampleCount=_defaultRasterSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long renderTargetWidth; 
@property (assign,nonatomic) unsigned long long renderTargetHeight; 
+(id)renderPassDescriptor;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setSamplePositions:(const SCD_Struct_MT21*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)getSamplePositions:(SCD_Struct_MT21*)arg1 count:(unsigned long long)arg2 ;
-(void)setImageblockSampleLength:(unsigned long long)arg1 ;
-(unsigned long long)threadgroupMemoryLength;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 ;
-(void)setTileWidth:(unsigned long long)arg1 ;
-(void)setTileHeight:(unsigned long long)arg1 ;
-(unsigned long long)defaultRasterSampleCount;
-(void)setDefaultRasterSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)imageblockSampleLength;
-(unsigned long long)tileWidth;
-(unsigned long long)tileHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
