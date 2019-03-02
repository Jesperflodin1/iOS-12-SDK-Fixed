/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:59 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MiroMemoryPosterStore : NSObject
-(void)deletePosterStoreForMemory:(id)arg1 ;
-(BOOL)posterImageExistsForMemory:(id)arg1 generationInfo:(id)arg2 ;
-(id)posterImageForMemory:(id)arg1 generationInfo:(id)arg2 ;
-(void)clearOldPostersForMemory:(id)arg1 saveInfo:(id)arg2 ;
-(void)storePosterImageWithData:(id)arg1 forMemory:(id)arg2 generationInfo:(id)arg3 ;
-(id)_sanitizedFullPosterFilename:(id)arg1 generationInfo:(id)arg2 ;
-(id)_storedPosterImageDirectoryForMemory:(id)arg1 ;
-(id)_sanitizedPosterDirectoryName:(id)arg1 ;
-(id)posterImageStorePathBase;
-(id)_storedPosterImagePathForMemory:(id)arg1 generationInfo:(id)arg2 ;
@end
