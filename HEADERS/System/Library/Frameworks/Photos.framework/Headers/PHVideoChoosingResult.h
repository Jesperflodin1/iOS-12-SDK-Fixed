/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLResourceDataStore;
@class NSURL, PLInternalResource;

@interface PHVideoChoosingResult : NSObject {

	BOOL _isSufficientQuality;
	BOOL _isMaximumQuality;
	BOOL _isLocallyAvailable;
	BOOL _canStream;
	BOOL _isRemotelyAvailable;
	NSURL* _fileURLIfLocal;
	PLInternalResource* _resource;
	id<PLResourceDataStore> _dataStore;

}

@property (assign,nonatomic) BOOL isSufficientQuality;                       //@synthesize isSufficientQuality=_isSufficientQuality - In the implementation block
@property (assign,nonatomic) BOOL isMaximumQuality;                          //@synthesize isMaximumQuality=_isMaximumQuality - In the implementation block
@property (assign,nonatomic) BOOL isLocallyAvailable;                        //@synthesize isLocallyAvailable=_isLocallyAvailable - In the implementation block
@property (assign,nonatomic) BOOL canStream;                                 //@synthesize canStream=_canStream - In the implementation block
@property (assign,nonatomic) BOOL isRemotelyAvailable;                       //@synthesize isRemotelyAvailable=_isRemotelyAvailable - In the implementation block
@property (nonatomic,retain) NSURL * fileURLIfLocal;                         //@synthesize fileURLIfLocal=_fileURLIfLocal - In the implementation block
@property (nonatomic,retain) PLInternalResource * resource;                  //@synthesize resource=_resource - In the implementation block
@property (nonatomic,retain) id<PLResourceDataStore> dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
+(id)resultFromInternalResource:(id)arg1 asset:(id)arg2 desiredQuality:(unsigned)arg3 isMaxQuality:(BOOL)arg4 managedObjectContext:(id)arg5 ;
-(PLInternalResource *)resource;
-(void)setDataStore:(id<PLResourceDataStore>)arg1 ;
-(BOOL)isLocallyAvailable;
-(void)setResource:(PLInternalResource *)arg1 ;
-(void)setIsLocallyAvailable:(BOOL)arg1 ;
-(void)setIsSufficientQuality:(BOOL)arg1 ;
-(void)setFileURLIfLocal:(NSURL *)arg1 ;
-(void)setCanStream:(BOOL)arg1 ;
-(void)setIsRemotelyAvailable:(BOOL)arg1 ;
-(void)setIsMaximumQuality:(BOOL)arg1 ;
-(BOOL)isSufficientQuality;
-(BOOL)isMaximumQuality;
-(BOOL)canStream;
-(BOOL)isRemotelyAvailable;
-(NSURL *)fileURLIfLocal;
-(id<PLResourceDataStore>)dataStore;
@end
