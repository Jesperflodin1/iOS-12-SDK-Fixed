/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:41:49 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, MLMultiArray;

@interface gan_modelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _input;

}

@property (nonatomic,retain) MLMultiArray * input;                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(void)setInput:(MLMultiArray *)arg1 ;
-(id)initWithInput:(id)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)input;
@end

