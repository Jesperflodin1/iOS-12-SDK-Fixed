/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:27 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSDInteractiveCanvasController, TSDCanvasView, CALayer, TSDCanvasLayer;


@protocol TSDCanvasLayerHosting <NSObject,TSDErrorPresenter,TSDModalOperationPresenter,TSDMovieCompatibilityAlertPresenter,TSDLayerAndSubviewHosting>
@property (assign,nonatomic) TSDInteractiveCanvasController * interactiveCanvasController; 
@property (nonatomic,readonly) TSDCanvasView * canvasView; 
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) TSDCanvasLayer * canvasLayer; 
@property (nonatomic,readonly) CALayer * clippingLayer; 
@optional
-(id)asiOSCVC;
-(id)asMacCVC;
-(id)viewController;

@required
-(TSDCanvasView *)canvasView;
-(TSDCanvasLayer *)canvasLayer;
-(void)canvasDidUpdateRepsFromLayouts;
-(CALayer *)clippingLayer;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(void)setInteractiveCanvasController:(id)arg1;
-(BOOL)isInFocusedContainer;
-(CALayer *)layer;
-(BOOL)becomeFirstResponder;
-(void)viewDidLoad;
-(BOOL)resignFirstResponder;
-(BOOL)isViewLoaded;
-(void)teardown;
-(id)undoManager;

@end
