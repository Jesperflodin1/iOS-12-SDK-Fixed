/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:45 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator

@property (copy,readonly) NSDictionary * fileAttributes; 
@property (copy,readonly) NSDictionary * directoryAttributes; 
@property (readonly) unsigned long long level; 
-(void)skipDescendents;
-(NSDictionary *)fileAttributes;
-(NSDictionary *)directoryAttributes;
-(id)nextObject;
-(unsigned long long)level;
-(void)skipDescendants;
@end
