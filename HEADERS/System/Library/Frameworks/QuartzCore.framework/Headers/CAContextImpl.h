/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:20 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAContext.h>

@interface CAContextImpl : CAContext {

	Context* _impl;

}
-(id)initWithOptions:(id)arg1 localContext:(BOOL)arg2 ;
-(id)initRemoteWithOptions:(id)arg1 ;
-(unsigned)commitPriority;
-(BOOL)colorMatchUntaggedContent;
-(void)setColorMatchUntaggedContent:(BOOL)arg1 ;
-(void)orderBelow:(unsigned)arg1 ;
-(float)desiredDynamicRange;
-(void)setFence:(unsigned)arg1 count:(unsigned)arg2 ;
-(void)invalidateFences;
-(unsigned)createImageSlot:(CGSize)arg1 hasAlpha:(BOOL)arg2 extendedColors:(BOOL)arg3 ;
-(unsigned)hitTestContext:(CGPoint)arg1 ;
-(ContextRef)renderContext;
-(void)setDesiredDynamicRange:(float)arg1 ;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(void)dealloc;
-(id)layer;
-(void)invalidate;
-(BOOL)valid;
-(id)options;
-(void)orderAbove:(unsigned)arg1 ;
-(void)setCommitPriority:(unsigned)arg1 ;
-(void)setLevel:(float)arg1 ;
-(void)setLayer:(id)arg1 ;
-(void)setFencePort:(unsigned)arg1 commitHandler:(/*^block*/id)arg2 ;
-(void)setFencePort:(unsigned)arg1 ;
-(unsigned)createFencePort;
-(unsigned)contextId;
-(float)level;
-(unsigned)createSlot;
-(void)setObject:(id)arg1 forSlot:(unsigned)arg2 ;
-(void)deleteSlot:(unsigned)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(BOOL)isSecure;
-(void)setSecure:(BOOL)arg1 ;
-(unsigned)createImageSlot:(CGSize)arg1 hasAlpha:(BOOL)arg2 ;
-(id)contentsFormat;
-(void)setContentsFormat:(id)arg1 ;
@end

