/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface VNModelFilesCache : NSObject {

	unique_ptr<cvml::util::model_file_cache, std::__1::default_delete<cvml::util::model_file_cache> >* m_impl;

}
+(id)sharedInstance;
-(id)load:(id)arg1 ;
-(void)unload:(id)arg1 ;
-(void)purgeAll;
-(id)init;
@end
