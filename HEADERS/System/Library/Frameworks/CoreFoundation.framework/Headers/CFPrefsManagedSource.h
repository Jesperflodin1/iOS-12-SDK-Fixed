/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsPlistSource.h>

@interface CFPrefsManagedSource : CFPrefsPlistSource
-(BOOL)managed;
-(long long)sendMessageSettingValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)alreadylocked_setPrecopiedValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 from:(id)arg4 ;
-(id)initWithDomain:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 containingPreferences:(id)arg4 ;
@end

