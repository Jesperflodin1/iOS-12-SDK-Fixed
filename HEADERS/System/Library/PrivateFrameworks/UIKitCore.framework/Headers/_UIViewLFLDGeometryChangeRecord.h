/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:21 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIViewLFLDChangeRecord.h>

@class NSString, NSValue, UIView;

@interface _UIViewLFLDGeometryChangeRecord : _UIViewLFLDChangeRecord {

	NSString* _geometricPropertyName;
	NSValue* _geometricPropertyValue;
	UIView* _currentLayoutView;
	NSString* _currentLayoutMethodName;

}

@property (nonatomic,readonly) NSString * geometricPropertyName;                //@synthesize geometricPropertyName=_geometricPropertyName - In the implementation block
@property (nonatomic,readonly) NSValue * geometricPropertyValue;                //@synthesize geometricPropertyValue=_geometricPropertyValue - In the implementation block
@property (nonatomic,readonly) UIView * currentLayoutView;                      //@synthesize currentLayoutView=_currentLayoutView - In the implementation block
@property (nonatomic,readonly) NSString * currentLayoutMethodName;              //@synthesize currentLayoutMethodName=_currentLayoutMethodName - In the implementation block
-(id)description;
-(id)initWithGeometricPropertyName:(id)arg1 value:(id)arg2 currentLayoutView:(id)arg3 methodName:(id)arg4 ;
-(NSString *)geometricPropertyName;
-(NSValue *)geometricPropertyValue;
-(UIView *)currentLayoutView;
-(NSString *)currentLayoutMethodName;
@end
