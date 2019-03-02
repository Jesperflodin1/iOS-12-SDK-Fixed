/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVExternalDeviceIconInternal, NSData;

@interface AVExternalDeviceIcon : NSObject {

	AVExternalDeviceIconInternal* _externalDeviceIcon;

}

@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) NSData * imageData; 
@property (getter=isPrerendered,nonatomic,readonly) BOOL prerendered; 
-(BOOL)isPrerendered;
-(NSData *)imageData;
-(void)finalize;
-(void)dealloc;
-(CGSize)pixelSize;
-(id)initWithDictionary:(id)arg1 ;
@end
