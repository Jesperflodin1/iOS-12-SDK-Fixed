/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:45 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIDragSession;
@interface _UICollectionViewDragSourceControllerSessionState : NSObject {

	id<UIDragSession> _dragSession;

}

@property (nonatomic,retain) id<UIDragSession> dragSession;              //@synthesize dragSession=_dragSession - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
-(id)description;
-(BOOL)isActive;
-(id<UIDragSession>)dragSession;
-(void)setDragSession:(id<UIDragSession>)arg1 ;
@end
