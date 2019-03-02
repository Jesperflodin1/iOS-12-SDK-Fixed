//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicLibraryAdaptiveViewConfiguration.h>

@class MusicLibraryAlbumsCollectionViewConfiguration;

@interface MusicLibraryAlbumsViewConfiguration : MusicLibraryAdaptiveViewConfiguration
{
    MusicLibraryAlbumsCollectionViewConfiguration *_collectionViewConfiguration;
    _Bool _shouldForwardBasePropertyValues;
}

- (void).cxx_destruct;
- (_Bool)pushAlbumViewWithAlbumPersistentID:(unsigned long long)arg1 fromViewController:(id)arg2;
- (void)addQueryFilterPredicate:(id)arg1;
- (id)loadRegularWidthConfiguration;
- (id)loadCompactWidthConfiguration;
- (void)setTitle:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIconName:(id)arg1;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (_Bool)canPreviewEntityValueContext:(id)arg1;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)entityViewDescriptor;
- (id)initForMainAlbumsList:(_Bool)arg1 includeCompilations:(_Bool)arg2;
- (id)init;

@end
