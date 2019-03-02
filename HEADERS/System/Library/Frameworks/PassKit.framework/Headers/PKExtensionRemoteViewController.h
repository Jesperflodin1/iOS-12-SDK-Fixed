/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:43:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationExtensionViewHostProtocol.h>

@protocol PKExtensionRemoteViewControllerDelegate;
@class NSString;

@interface PKExtensionRemoteViewController : _UIRemoteViewController <PKPaymentAuthorizationExtensionViewHostProtocol> {

	id<PKExtensionRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<PKExtensionRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setDelegate:(id<PKExtensionRemoteViewControllerDelegate>)arg1 ;
-(id<PKExtensionRemoteViewControllerDelegate>)delegate;
-(id)serviceViewControllerInterface;
-(id)exportedInterface;
@end
