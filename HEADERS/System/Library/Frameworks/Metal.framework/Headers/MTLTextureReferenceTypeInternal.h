/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLTextureReferenceType.h>

@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType {

	unsigned long long _dataType;
	unsigned long long _textureDataType;
	unsigned long long _textureType;
	unsigned long long _access;
	BOOL _isDepthTexture;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithDataType:(unsigned long long)arg1 textureType:(unsigned long long)arg2 access:(unsigned long long)arg3 isDepthTexture:(BOOL)arg4 ;
-(BOOL)isDepthTexture;
-(unsigned long long)textureDataType;
-(unsigned long long)textureType;
-(unsigned long long)dataType;
-(unsigned long long)access;
-(void)dealloc;
@end
