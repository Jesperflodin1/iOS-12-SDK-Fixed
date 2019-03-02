/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:27 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTimedMetadataGroup.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup {

	AVTimedMetadataGroupInternal* _mutablePriv;

}

@property (assign,nonatomic) SCD_Struct_AV6 timeRange; 
@property (nonatomic,copy) NSArray * items; 
-(void)setTimeRange:(SCD_Struct_AV6)arg1 ;
-(SCD_Struct_AV6)timeRange;
-(id)initWithItems:(id)arg1 timeRange:(SCD_Struct_AV6)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
@end
