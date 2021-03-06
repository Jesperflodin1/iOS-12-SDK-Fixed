/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:52 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_DUIImageComponentWithoutSlot.h>

@interface _DUIImageComponent : _DUIImageComponentWithoutSlot {

	BOOL _hidesImage;
	unsigned _slotID;
	unsigned _contextID;
	unsigned long long _renderID;

}

@property (assign,nonatomic) unsigned slotID;                          //@synthesize slotID=_slotID - In the implementation block
@property (assign,nonatomic) unsigned long long renderID;              //@synthesize renderID=_renderID - In the implementation block
@property (assign,nonatomic) unsigned contextID;                       //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,readonly) BOOL representsPortal; 
@property (assign,nonatomic) BOOL hidesImage;                          //@synthesize hidesImage=_hidesImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)portalView;
-(unsigned)slotID;
-(unsigned long long)renderID;
-(unsigned)contextID;
-(BOOL)hidesImage;
-(void)_configurePortalLayer:(id)arg1 ;
-(BOOL)representsPortal;
-(id)imageComponentWithoutSlot;
-(id)addPortalLayerToView:(id)arg1 ;
-(void)setSlotID:(unsigned)arg1 ;
-(void)setRenderID:(unsigned long long)arg1 ;
-(void)setContextID:(unsigned)arg1 ;
-(void)setHidesImage:(BOOL)arg1 ;
@end

