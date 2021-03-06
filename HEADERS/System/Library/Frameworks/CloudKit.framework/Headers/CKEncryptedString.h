/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKEncryptedData.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKEncryptedString : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (nonatomic,readonly) NSString * string; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)string;
-(id)initWithString:(id)arg1 ;
-(id)value;
@end

