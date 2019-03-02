/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:25:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPProvider.h>

@class NSURL, NSString;

@interface FPExtensionProvider : FPProvider {

	NSURL* _bundleURL;
	BOOL _supportsEnumeration;
	BOOL _isAvailableSystemWide;
	NSString* _containingBundleIdentifier;

}
+(id)beginMonitoringProviderChangesWithHandler:(/*^block*/id)arg1 ;
+(void)endMonitoringProviderChanges:(id)arg1 ;
-(id)initWithProperties:(id)arg1 domain:(id)arg2 ;
-(BOOL)supportsEnumeration;
-(BOOL)isAvailableSystemWide;
-(id)_initWithIdentifier:(id)arg1 domain:(id)arg2 localizedName:(id)arg3 storageURL:(id)arg4 supportedFileTypes:(id)arg5 type:(long long)arg6 bundleURL:(id)arg7 supportsEnumeration:(BOOL)arg8 isAvailableSystemWide:(BOOL)arg9 isReadOnly:(BOOL)arg10 isEnabled:(BOOL)arg11 containingBundleIdentifier:(id)arg12 usesUniqueItemIdentifiers:(BOOL)arg13 ;
-(id)containingBundleIdentifier;
-(id)bundleURL;
@end
