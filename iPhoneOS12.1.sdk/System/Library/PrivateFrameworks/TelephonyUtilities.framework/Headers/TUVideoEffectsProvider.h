/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:15 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TUVideoEffect, NSArray;


@protocol TUVideoEffectsProvider <NSObject>
@property (nonatomic,retain) TUVideoEffect * currentVideoEffect; 
@property (nonatomic,readonly) NSArray * availableVideoEffects; 
@required
-(void)setCurrentVideoEffect:(id)arg1;
-(TUVideoEffect *)currentVideoEffect;
-(NSArray *)availableVideoEffects;
-(id)thumbnailImageForVideoEffectName:(id)arg1;

@end
