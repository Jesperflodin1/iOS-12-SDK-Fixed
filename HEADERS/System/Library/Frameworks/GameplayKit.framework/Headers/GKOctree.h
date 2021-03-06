/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:41:51 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKOctree : NSObject {

	GKCOctree<NSObject>* _cOctree;

}
+(id)octreeWithBoundingBox:(GKBoxRef)arg1 minimumCellSize:(float)arg2 ;
-(id)addElement:(id)arg1 ;
-(id)elementsAtPoint:;
-(BOOL)removeElement:(id)arg1 withNode:(id)arg2 ;
-(id)initWithBoundingBox:(GKBoxRef)arg1 minimumCellSize:(float)arg2 ;
-(id)addElement:(id)arg1 withBox:(GKBoxRef)arg2 ;
-(id)elementsInBox:(GKBoxRef)arg1 ;
-(BOOL)removeElement:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

