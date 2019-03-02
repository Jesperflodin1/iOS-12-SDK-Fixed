/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:59 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/PHAssetWriter.h>

@class NSData;

@interface PHImageAssetWriter : PHAssetWriter {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
-(id)transfer;
-(unsigned long long)estimatedOutputSizeWithError:(id*)arg1 ;
-(id)request;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end
