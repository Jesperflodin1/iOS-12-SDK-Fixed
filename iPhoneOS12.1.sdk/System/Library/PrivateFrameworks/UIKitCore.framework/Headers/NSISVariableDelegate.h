/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:16 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSISVariableDelegate <NSObject>
@optional
-(int)nsis_orientationHintForVariable:(id)arg1;

@required
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
-(id)nsis_descriptionOfVariable:(id)arg1;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;

@end
