/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:27:16 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEConfiguration, NEConfigurationManager, NSString, NEDNSProxyProviderProtocol;

@interface NEDNSProxyManager : NSObject <NEPrettyDescription> {

	BOOL _hasLoaded;
	NEConfiguration* _configuration;
	NEConfigurationManager* _configurationManager;

}

@property (assign) BOOL hasLoaded;                                               //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (retain) NEConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NEConfigurationManager * configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (copy) NSString * localizedDescription; 
@property (retain) NEDNSProxyProviderProtocol * providerProtocol; 
@property (getter=isEnabled) BOOL enabled; 
+(id)sharedManager;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createEmptyConfiguration;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initDNSProxyManagerWithPluginType:(id)arg1 ;
-(NEDNSProxyProviderProtocol *)providerProtocol;
-(void)setProviderProtocol:(NEDNSProxyProviderProtocol *)arg1 ;
-(BOOL)hasLoaded;
-(NEConfigurationManager *)configurationManager;
-(id)init;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NEConfiguration *)configuration;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(NSString *)localizedDescription;
@end
