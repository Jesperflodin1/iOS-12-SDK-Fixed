/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:38 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class NSArray;

@interface NMSStoreModelLookupRequest : MPStoreModelRequest {

	NSArray* _containerIDs;

}

@property (nonatomic,copy) NSArray * containerIDs;              //@synthesize containerIDs=_containerIDs - In the implementation block
-(NSArray *)containerIDs;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setContainerIDs:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
