/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:17 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWGraphStatusDelegate.h>

@class NSString;

@interface BWFigCaptureSessionExternal : NSObject <BWGraphStatusDelegate> {

	OpaqueFigCaptureSessionRef _captureSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)graphDidPrepareNodes:(id)arg1 ;
-(void)graph:(id)arg1 didFinishStartingWithError:(int)arg2 ;
-(id)initWithFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
@end

