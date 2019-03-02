/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class NSString;

@interface _UICompositingEffectViewEntry : _UIVisualEffectViewEntry {

	NSString* _filterType;

}

@property (nonatomic,copy) NSString * filterType;              //@synthesize filterType=_filterType - In the implementation block
-(id)description;
-(void)setFilterType:(NSString *)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(NSString *)filterType;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
@end
