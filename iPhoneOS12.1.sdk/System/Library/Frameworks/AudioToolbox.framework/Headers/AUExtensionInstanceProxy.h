/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:17 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioToolbox/AudioToolbox-Structs.h>
@interface AUExtensionInstanceProxy : NSObject {

	AUv3InstanceBase* _auInstance;

}

@property (assign,nonatomic) AUv3InstanceBase* auInstance;              //@synthesize auInstance=_auInstance - In the implementation block
-(AUv3InstanceBase*)auInstance;
-(void)setAuInstance:(AUv3InstanceBase*)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
