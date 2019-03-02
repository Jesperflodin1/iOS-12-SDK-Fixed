/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/MPMediaControlsClientController.h>

@protocol MPMediaControlsClientController;
@class NSString;

@interface MPMediaControlsRemoteViewController : _UIRemoteViewController <MPMediaControlsClientController> {

	id<MPMediaControlsClientController> _hostViewController;

}

@property (assign,nonatomic,__weak) id<MPMediaControlsClientController> hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setHostViewController:(id<MPMediaControlsClientController>)arg1 ;
-(void)didReceiveInteraction;
-(void)didSelectRoute:(id)arg1 ;
-(id<MPMediaControlsClientController>)hostViewController;
-(void)dismiss;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end
