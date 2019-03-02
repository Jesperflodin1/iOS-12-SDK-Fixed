/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:38 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface NMSSyncStatesDict : NSObject <NSCopying> {

	NSMutableDictionary* _syncStatesDict;

}
+(id)assetTypeForMediaType:(unsigned long long)arg1 ;
+(unsigned long long)mediaTypeForAssetType:(id)arg1 ;
-(void)setSyncState:(unsigned long long)arg1 forMediaType:(unsigned long long)arg2 ;
-(void)setSyncStateForAllMediaTypes:(unsigned long long)arg1 ;
-(unsigned long long)syncStateForMediaType:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
