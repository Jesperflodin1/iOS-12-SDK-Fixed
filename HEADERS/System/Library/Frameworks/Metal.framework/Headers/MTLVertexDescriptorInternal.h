/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLVertexDescriptor.h>

@class MTLVertexBufferLayoutDescriptorArrayInternal, MTLVertexAttributeDescriptorArrayInternal;

@interface MTLVertexDescriptorInternal : MTLVertexDescriptor {

	MTLVertexBufferLayoutDescriptorArrayInternal* _vertexBufferArray;
	MTLVertexAttributeDescriptorArrayInternal* _attributeArray;

}
+(id)vertexDescriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)newSerializedDescriptor;
-(BOOL)validateWithVertexFunction:(id)arg1 error:(id*)arg2 ;
-(id)layouts;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(id)attributes;
@end
