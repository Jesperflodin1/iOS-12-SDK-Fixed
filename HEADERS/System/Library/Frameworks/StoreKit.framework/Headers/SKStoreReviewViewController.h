/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:17 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKRemoteReviewViewControllerDelegate.h>

@protocol SKUIServiceReviewViewController;
@class SKInvocationQueueProxy, _UIAsyncInvocation, SKRemoteReviewViewController, NSString;

@interface SKStoreReviewViewController : UIViewController <SKRemoteReviewViewControllerDelegate> {

	SKInvocationQueueProxy*<SKUIServiceReviewViewController> _serviceProxy;
	_UIAsyncInvocation* _cancelRequest;
	SKRemoteReviewViewController* _remoteViewController;
	NSString* _reviewRequestToken;

}

@property (nonatomic,retain) SKInvocationQueueProxy*<SKUIServiceReviewViewController> serviceProxy;              //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * cancelRequest;                                                 //@synthesize cancelRequest=_cancelRequest - In the implementation block
@property (nonatomic,retain) SKRemoteReviewViewController * remoteViewController;                                //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) NSString * reviewRequestToken;                                                      //@synthesize reviewRequestToken=_reviewRequestToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_requestRemoteViewController;
-(void)_addRemoteView;
-(void)setServiceProxy:(SKInvocationQueueProxy*<SKUIServiceReviewViewController>)arg1 ;
-(SKInvocationQueueProxy*<SKUIServiceReviewViewController>)serviceProxy;
-(_UIAsyncInvocation *)cancelRequest;
-(void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2 ;
-(void)remoteReviewViewControllerTerminatedWithError:(id)arg1 ;
-(NSString *)reviewRequestToken;
-(void)setCancelRequest:(_UIAsyncInvocation *)arg1 ;
-(id)initWithReviewRequestToken:(id)arg1 ;
-(void)setReviewRequestToken:(NSString *)arg1 ;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(SKRemoteReviewViewController *)remoteViewController;
-(void)setRemoteViewController:(SKRemoteReviewViewController *)arg1 ;
@end

