/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol VUIHomeShareMediaLibraryManager <NSObject>
@property (assign,nonatomic,__weak) id<VUIHomeShareMediaLibraryManagerDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * homeShareMediaLibraries; 
@required
-(id)initWithManager:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<VUIHomeShareMediaLibraryManagerDelegate>)delegate;
-(NSArray *)homeShareMediaLibraries;

@end

