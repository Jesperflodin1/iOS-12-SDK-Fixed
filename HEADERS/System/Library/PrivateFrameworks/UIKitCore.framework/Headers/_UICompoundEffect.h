/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIVisualEffect.h>

@class NSArray;

@interface _UICompoundEffect : UIVisualEffect {

	NSArray* _effects;

}
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 ;
-(BOOL)_needsUpdateForOption:(id)arg1 ;
-(long long)_expectedUsage;
-(id)initWithEffects:(id)arg1 ;
-(void)_enumerateEffects:(/*^block*/id)arg1 ;
@end

