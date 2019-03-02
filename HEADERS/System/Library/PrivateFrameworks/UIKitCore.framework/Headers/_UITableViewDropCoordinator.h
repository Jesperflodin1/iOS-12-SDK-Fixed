/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:07 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSIndexPath, UITableViewDropProposal;


@protocol _UITableViewDropCoordinator <UITableViewDropCoordinator>
@property (nonatomic,readonly) NSArray * _items; 
@property (nonatomic,readonly) NSIndexPath * _destinationIndexPath; 
@property (nonatomic,readonly) UITableViewDropProposal * _dropProposal; 
@property (nonatomic,readonly) id<UIDropSession> _dropSession; 
@required
-(NSArray *)_items;
-(NSIndexPath *)_destinationIndexPath;
-(id<UIDropSession>)_dropSession;
-(UITableViewDropProposal *)_dropProposal;
-(void)_dropItem:(id)arg1 toRowAtIndexPath:(id)arg2;
-(id)_dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(/*^block*/id)arg5;
-(void)_dropItem:(id)arg1 toTarget:(id)arg2;

@end
