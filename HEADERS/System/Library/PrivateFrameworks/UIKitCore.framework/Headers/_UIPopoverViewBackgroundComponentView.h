/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:21 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString;

@interface _UIPopoverViewBackgroundComponentView : UIView {

	NSMutableArray* _replicants;
	NSString* _directionSelector;

}

@property (nonatomic,copy) NSString * directionSelector;              //@synthesize directionSelector=_directionSelector - In the implementation block
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)_newReplicant;
-(void)setDirectionSelector:(NSString *)arg1 ;
-(id)replicate;
-(void)updateReplicants;
-(NSString *)directionSelector;
@end
