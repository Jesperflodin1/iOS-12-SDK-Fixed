/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:08 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSMutableArray, NSArray;

@interface ASMeetingResponseResponse : ASItem {

	NSMutableArray* _mSingularResponses;

}

@property (nonatomic,retain) NSMutableArray * mSingularResponses;              //@synthesize mSingularResponses=_mSingularResponses - In the implementation block
@property (nonatomic,readonly) NSArray * singularResponses; 
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSArray *)singularResponses;
-(void)setMSingularResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mSingularResponses;
-(void)_addSingularResponse:(id)arg1 ;
-(id)init;
-(id)description;
@end
