/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNActionGroup.h>

@class NSString;

@interface SCNActionReference : SCNActionGroup {

	NSString* referenceName;

}

@property (nonatomic,copy) NSString * referenceName; 
-(BOOL)_isAReference;
-(void)setReferenceName:(NSString *)arg1 ;
-(NSString *)referenceName;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
