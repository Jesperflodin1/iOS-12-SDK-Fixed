//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class TSTCell, TSTCellMap;

@protocol TSTCellWillChangeProtocol
- (void)willRemoveRows:(const vector_4dc5f307 *)arg1;
- (void)willApplyBaseCellMap:(TSTCellMap *)arg1;
- (void)willApplyCell:(TSTCell *)arg1 baseCellCoord:(struct TSUModelCellCoord)arg2;
@end
