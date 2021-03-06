/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:20 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHSettings.h>

@interface PHResourceDownloadSettings : PHSettings {

	BOOL _simulateDownload;
	BOOL _simulateDownloadFailure;

}

@property (assign,nonatomic) BOOL simulateDownload;                     //@synthesize simulateDownload=_simulateDownload - In the implementation block
@property (assign,nonatomic) BOOL simulateDownloadFailure;              //@synthesize simulateDownloadFailure=_simulateDownloadFailure - In the implementation block
+(id)sharedSettings;
+(id)settingsControllerModule;
-(void)setSimulateDownload:(BOOL)arg1 ;
-(void)setSimulateDownloadFailure:(BOOL)arg1 ;
-(BOOL)simulateDownload;
-(BOOL)simulateDownloadFailure;
-(void)setDefaultValues;
-(id)parentSettings;
@end

