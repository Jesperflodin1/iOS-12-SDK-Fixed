/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MPStoreItemLibraryImport : NSObject {

	BOOL _addToCloudLibrary;
	NSArray* _importElements;

}

@property (nonatomic,readonly) NSArray * importElements;              //@synthesize importElements=_importElements - In the implementation block
@property (nonatomic,readonly) BOOL addToCloudLibrary;                //@synthesize addToCloudLibrary=_addToCloudLibrary - In the implementation block
-(id)initWithImportElements:(id)arg1 usingCloudLibraryDestination:(BOOL)arg2 ;
-(NSArray *)importElements;
-(BOOL)addToCloudLibrary;
@end
