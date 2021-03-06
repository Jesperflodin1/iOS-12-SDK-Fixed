/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:51:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/EditScript.framework/EditScript
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EditScript/EditScript-Structs.h>
@class NSString;

@interface ESAtomRanged : NSObject {

	NSString* _replacementText;
	NSRange _editRange;

}

@property (assign,nonatomic) NSRange editRange;                       //@synthesize editRange=_editRange - In the implementation block
@property (nonatomic,retain) NSString * replacementText;              //@synthesize replacementText=_replacementText - In the implementation block
+(id)atomWithEditRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(BOOL)isEqualToEditScriptAtomRanged:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)replacementText;
-(NSRange)editRange;
-(void)setReplacementText:(NSString *)arg1 ;
-(void)setEditRange:(NSRange)arg1 ;
-(id)initWithEditRange:(NSRange)arg1 replacementText:(id)arg2 ;
@end

