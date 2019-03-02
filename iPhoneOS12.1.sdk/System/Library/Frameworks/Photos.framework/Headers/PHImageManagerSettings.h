/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:20 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHSettings.h>

@interface PHImageManagerSettings : PHSettings {

	BOOL _allowImageRequests;
	BOOL _allowCaching;

}

@property (assign,nonatomic) BOOL allowImageRequests;              //@synthesize allowImageRequests=_allowImageRequests - In the implementation block
@property (assign,nonatomic) BOOL allowCaching;                    //@synthesize allowCaching=_allowCaching - In the implementation block
+(id)sharedSettings;
+(id)settingsControllerModule;
-(BOOL)allowImageRequests;
-(BOOL)allowCaching;
-(void)setAllowImageRequests:(BOOL)arg1 ;
-(void)setAllowCaching:(BOOL)arg1 ;
-(void)setDefaultValues;
-(id)parentSettings;
@end
