/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:27:16 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEExtensionProviderHostContext.h>
#import <libobjc.A.dylib/NEFilterExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEFilterExtensionProviderHostProtocol.h>

@protocol NEFilterExtensionProviderProtocol;
@class NSString;

@interface NEFilterExtensionProviderHostContext : NEExtensionProviderHostContext <NEFilterExtensionProviderProtocol, NEFilterExtensionProviderHostProtocol> {

	id<NEFilterExtensionProviderProtocol> _vendorContext;

}

@property (readonly) id<NEFilterExtensionProviderProtocol> vendorContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NEFilterExtensionProviderProtocol>)vendorContext;
-(void)setExtensionIdentifier:(id)arg1 deviceIdentifier:(id)arg2 ;
-(void)startFilterWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateConfiguration:(id)arg1 ;
@end
