/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface VNFaceClassifierBoostedPixelDifference : NSObject {

	shared_ptr<vision::mod::FaceClassifier_BoostedPixelDifference>* mPixelDifferenceFaceClassifier;

}
-(id)predictFaceOnImageCrop:(id)arg1 faceObservation:(id)arg2 error:(id*)arg3 ;
-(id)init;
@end

