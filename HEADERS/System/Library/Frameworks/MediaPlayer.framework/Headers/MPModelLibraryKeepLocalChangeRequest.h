/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:57 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelObject;

@interface MPModelLibraryKeepLocalChangeRequest : NSObject <NSCopying> {

	MPModelObject* _modelObject;
	long long _enableState;

}

@property (nonatomic,retain) MPModelObject * modelObject;              //@synthesize modelObject=_modelObject - In the implementation block
@property (assign,nonatomic) long long enableState;                    //@synthesize enableState=_enableState - In the implementation block
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(long long)enableState;
-(void)setEnableState:(long long)arg1 ;
-(MPModelObject *)modelObject;
-(void)setModelObject:(MPModelObject *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

