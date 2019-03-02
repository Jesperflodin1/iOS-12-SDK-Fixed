/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:56 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView;

@interface _MPModelLibraryRequestItemsQueryOperation : MPAsyncOperation {

	MPMediaLibraryView* _libraryView;
	/*^block*/id _resultHandler;
	shared_ptr<mlcore::Query>* _query;

}

@property (nonatomic,retain) MPMediaLibraryView * libraryView;              //@synthesize libraryView=_libraryView - In the implementation block
@property (assign,nonatomic) shared_ptr<mlcore::Query>* query;              //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) id resultHandler;                                //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)setLibraryView:(MPMediaLibraryView *)arg1 ;
-(MPMediaLibraryView *)libraryView;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(void)setQuery:(shared_ptr<mlcore::Query>*)arg1 ;
-(void)execute;
-(shared_ptr<mlcore::Query>*)query;
@end
