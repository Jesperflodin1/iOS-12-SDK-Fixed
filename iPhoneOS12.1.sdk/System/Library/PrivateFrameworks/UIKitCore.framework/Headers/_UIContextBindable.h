/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CAContext, _UIContextBinder;


@protocol _UIContextBindable <_UIContextDescribing>
@property (assign,setter=_setBoundContext:,nonatomic,__weak) CAContext * _boundContext; 
@property (assign,setter=_setContextBinder:,nonatomic,__weak) _UIContextBinder * _contextBinder; 
@required
-(_UIContextBinder *)_contextBinder;
-(void)_setContextBinder:(id)arg1;
-(CAContext *)_boundContext;
-(void)_setBoundContext:(id)arg1;
-(double)_bindableLevel;
-(id)_bindingLayer;
-(BOOL)_isVisible;

@end
