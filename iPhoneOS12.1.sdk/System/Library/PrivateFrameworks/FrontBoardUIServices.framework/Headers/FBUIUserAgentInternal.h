/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:35:53 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBUIUserAgentInternal <FBUIUserAgent>
@property (assign,getter=isSystemApp,nonatomic) BOOL systemApp; 
@required
-(id)processManager;
-(BOOL)isSystemApp;
-(id)sceneManager;
-(void)setSystemApp:(BOOL)arg1;
-(id)mainQueue;

@end
