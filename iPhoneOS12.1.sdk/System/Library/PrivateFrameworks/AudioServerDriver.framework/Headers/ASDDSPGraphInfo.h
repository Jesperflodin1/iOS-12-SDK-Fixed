/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:50:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/ASDDSPItemInfo.h>

@class NSString, NSArray, NSDictionary;

@interface ASDDSPGraphInfo : ASDDSPItemInfo {

	NSString* _path;
	NSString* _text;
	NSArray* _includePaths;
	NSDictionary* _substitutions;

}

@property (nonatomic,retain) NSString * path;                           //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSArray * includePaths;                    //@synthesize includePaths=_includePaths - In the implementation block
@property (nonatomic,retain) NSDictionary * substitutions;              //@synthesize substitutions=_substitutions - In the implementation block
-(void)setSubstitutions:(NSDictionary *)arg1 ;
-(NSDictionary *)substitutions;
-(NSArray *)includePaths;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 ;
-(void)setIncludePaths:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
@end
