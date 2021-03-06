/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>
#import <libobjc.A.dylib/_DKDeduping.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/CUByteCodable.h>
#import <libobjc.A.dylib/NSFetchRequestResult.h>

@class NSString;

@interface NSNumber : NSValue <_DKDeduping, CKRecordValue, CUByteCodable, NSFetchRequestResult>

@property (nonatomic,readonly) long long PHAssetExportRequestVariantValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long _cn_reputationScoreValue; 
@property (nonatomic,readonly) double _cn_timeIntervalValue; 
@property (readonly) SCD_Struct_NS52 decimalValue; 
@property (readonly) char charValue; 
@property (readonly) unsigned char unsignedCharValue; 
@property (readonly) short shortValue; 
@property (readonly) unsigned short unsignedShortValue; 
@property (readonly) int intValue; 
@property (readonly) unsigned unsignedIntValue; 
@property (readonly) long long longValue; 
@property (readonly) unsigned long long unsignedLongValue; 
@property (readonly) long long longLongValue; 
@property (readonly) unsigned long long unsignedLongLongValue; 
@property (readonly) float floatValue; 
@property (readonly) double doubleValue; 
@property (readonly) BOOL boolValue; 
@property (readonly) long long integerValue; 
@property (readonly) unsigned long long unsignedIntegerValue; 
@property (copy,readonly) NSString * stringValue; 
+(id)numberWithCGFloat:(double)arg1 ;
+(id)cr_numberWithCRRecentID:(long long)arg1 ;
+(id)cr_numberWithCRContactID:(long long)arg1 ;
+(id)cr_numberWithCRContactGroupKind:(unsigned long long)arg1 ;
+(id)boolFromICSString:(id)arg1 ;
+(id)createWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)numberWithItemIdentifier:(unsigned long long)arg1 ;
+(id)numberWithUnsignedChar:(unsigned char)arg1 ;
+(id)numberWithShort:(short)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)numberWithInteger:(long long)arg1 ;
+(void)initialize;
+(id)numberWithBool:(BOOL)arg1 ;
+(id)numberWithUnsignedLongLong:(unsigned long long)arg1 ;
+(id)numberWithUnsignedInteger:(unsigned long long)arg1 ;
+(id)numberWithDouble:(double)arg1 ;
+(id)numberWithInt:(int)arg1 ;
+(id)numberWithFloat:(float)arg1 ;
+(id)numberWithLong:(long long)arg1 ;
+(id)numberWithUnsignedInt:(unsigned)arg1 ;
+(id)numberWithUnsignedLong:(unsigned long long)arg1 ;
+(id)numberWithLongLong:(long long)arg1 ;
+(id)numberWithUnsignedShort:(unsigned short)arg1 ;
+(id)numberWithChar:(char)arg1 ;
-(long long)PHAssetExportRequestVariantValue;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)initWithCGFloat:(double)arg1 ;
-(double)cgFloatValue;
-(int)_mk_laneDirectionValue;
-(id)MPMediaLibraryDataProviderSystemML3CoercedString;
-(id)ml_stringValueForSQL;
-(void)ml_bindToSQLiteStatement:(sqlite3_stmtRef)arg1 atPosition:(int)arg2 ;
-(BOOL)ml_matchesValue:(id)arg1 usingComparison:(int)arg2 ;
-(id)dedup;
-(BOOL)_intents_isDouble;
-(BOOL)_intents_isInteger;
-(double)cgFloatValue;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(id)cl_json_serializeKey;
-(long long)_cn_reputationScoreValue;
-(BOOL)_BoolValue;
-(id)localizedString;
-(long long)cr_CRRecentIDValue;
-(long long)cr_CRContactIDValue;
-(unsigned long long)cr_CRContactGroupKindValue;
-(void)_cn_times:(/*^block*/id)arg1 ;
-(double)_cn_timeIntervalValue;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)_ICSBoolAppendingToString:(id)arg1 ;
-(void)_ICSUTCOffsetAppendingToString:(id)arg1 ;
-(void)_ICSFBTypeAppendingToString:(id)arg1 ;
-(BOOL)fm_isEqualToNumber:(id)arg1 withPrecision:(double)arg2 ;
-(const char*)encodedBytesAndReturnLength:(unsigned long long*)arg1 error:(id*)arg2 ;
-(id)encodedDataAndReturnError:(id*)arg1 ;
-(unsigned long long)itemIdentifierValue;
-(id)initWithItemIdentifier:(unsigned long long)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)CA_roundToIntegerFromValue:(id)arg1 ;
-(double)CA_distanceToValue:(id)arg1 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(Object*)CA_copyRenderValue;
-(unsigned long long)CA_copyNumericValue:(double)arg1 ;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(id)cl_json_serializeKey;
-(unsigned long long)_cfTypeID;
-(long long)_cfNumberType;
-(unsigned char)_getValue:(void*)arg1 forType:(long long)arg2 ;
-(long long)_reverseCompare:(id)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)redactedDescription;
-(id)initWithChar:(char)arg1 ;
-(id)initWithShort:(short)arg1 ;
-(id)initWithUnsignedShort:(unsigned short)arg1 ;
-(BOOL)_getCString:(char*)arg1 length:(int)arg2 multiplier:(double)arg3 ;
-(id)initWithUnsignedLongLong:(unsigned long long)arg1 ;
-(id)initWithUnsignedInt:(unsigned)arg1 ;
-(id)initWithDouble:(double)arg1 ;
-(short)shortValue;
-(id)initWithInt:(int)arg1 ;
-(BOOL)isNSNumber__;
-(id)initWithUnsignedChar:(unsigned char)arg1 ;
-(id)initWithLongLong:(long long)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithFloat:(float)arg1 ;
-(char)charValue;
-(id)initWithUnsignedInteger:(unsigned long long)arg1 ;
-(unsigned short)unsignedShortValue;
-(id)initWithInteger:(long long)arg1 ;
-(id)initWithUnsignedLong:(unsigned long long)arg1 ;
-(SCD_Struct_NS52)decimalValue;
-(unsigned char)unsignedCharValue;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)unsignedLongLongValue;
-(BOOL)boolValue;
-(long long)integerValue;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(float)floatValue;
-(double)doubleValue;
-(int)intValue;
-(unsigned long long)unsignedIntegerValue;
-(long long)compare:(id)arg1 ;
-(unsigned long long)unsignedLongValue;
-(unsigned)unsignedIntValue;
-(long long)longLongValue;
-(BOOL)isEqualToNumber:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithLong:(long long)arg1 ;
-(id)initWithBool:(BOOL)arg1 ;
-(long long)longValue;
@end

