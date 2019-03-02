/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:48:43 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>

@class NSString;

@interface FPUIActionExtensionContext : NSExtensionContext {

	NSString* _domainIdentifier;

}

@property (copy) NSString * domainIdentifier;              //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)cancelRequestWithError:(id)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSString *)domainIdentifier;
-(id)_remoteContext;
-(void)completeRequest;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
