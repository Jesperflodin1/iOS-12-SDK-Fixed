/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:52 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTileDecoder <NSObject>
@required
-(BOOL)canDecodeTile:(const GEOTileKey*)arg1 quickly:(BOOL*)arg2;
-(id)decodeTile:(id)arg1 forKey:(const GEOTileKey*)arg2;

@end
