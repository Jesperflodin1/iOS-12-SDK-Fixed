/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:55 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFReaderEnabledWebViewControllerDelegate <SFWebViewControllerDelegate>
@optional
-(void)webViewControllerReaderDidBecomeReady:(id)arg1;

@required
-(void)webViewControllerDidDetermineReaderAvailability:(id)arg1 dueToSameDocumentNavigation:(BOOL)arg2;
-(void)webViewController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;
-(void)createReaderWebViewForWebViewController:(id)arg1;

@end

