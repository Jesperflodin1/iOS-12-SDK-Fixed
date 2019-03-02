//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;

@interface PXCMMCollectionViewStackLayout : UICollectionViewLayout
{
    NSMutableDictionary *_layoutAttributesForIndexPath;
    struct CGSize _contentSize;
    unsigned long long _stackDepth;
}

@property(nonatomic) unsigned long long stackDepth; // @synthesize stackDepth=_stackDepth;
- (void).cxx_destruct;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (void)invalidateLayout;
- (id)init;

@end
