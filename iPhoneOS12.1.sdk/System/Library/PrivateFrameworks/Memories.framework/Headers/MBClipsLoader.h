/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:59 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface MBClipsLoader : NSObject {

	BOOL _loading;
	BOOL _showOnlyFavorites;
	NSMutableArray* _clips;
	NSArray* _previousClips;

}

@property (retain) NSMutableArray * clips;                               //@synthesize clips=_clips - In the implementation block
@property (assign,nonatomic) BOOL showOnlyFavorites;                     //@synthesize showOnlyFavorites=_showOnlyFavorites - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;              //@synthesize loading=_loading - In the implementation block
@property (retain) NSArray * previousClips;                              //@synthesize previousClips=_previousClips - In the implementation block
-(void)setClips:(NSMutableArray *)arg1 ;
-(void)startLoading;
-(void)setLoading:(BOOL)arg1 ;
-(NSMutableArray *)clips;
-(id)initWithShowOnlyFavorites:(BOOL)arg1 ;
-(BOOL)showOnlyFavorites;
-(NSArray *)previousClips;
-(void)setShowOnlyFavorites:(BOOL)arg1 ;
-(void)setPreviousClips:(NSArray *)arg1 ;
-(void)load;
-(BOOL)isLoading;
-(void)stopLoading;
@end
