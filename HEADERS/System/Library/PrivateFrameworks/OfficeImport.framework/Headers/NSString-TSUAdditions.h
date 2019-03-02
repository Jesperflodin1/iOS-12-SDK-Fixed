//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSUAdditions)
+ (id)tsu_stringByHexEncodingData:(id)arg1;
+ (id)tsu_stringWithXMLString:(const char *)arg1;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2 breakLines:(_Bool)arg3;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsu_stringWithHexFromBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsu_stringByIndentingString:(id)arg1;
+ (id)tsu_stringByIndentingString:(id)arg1 times:(unsigned long long)arg2;
+ (id)tsu_stringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)tsu_stringWithUUID;
- (_Bool)tsu_isEqualToString:(id)arg1;
- (id)tsu_middleTruncateToLength:(unsigned long long)arg1;
- (id)tsu_stringWithoutAttachmentCharacters;
- (id)tsu_setOfContainedWordsIncludingPunctuationAndSymbols:(_Bool)arg1;
- (_Bool)tsu_containsSubstring:(id)arg1;
- (void)tsu_enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct _NSRange)tsu_range;
- (struct _NSRange)tsu_rangeOfString:(id)arg1 options:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;
- (id)tsu_tolerantStringByAppendingPathExtension:(id)arg1;
- (_Bool)tsu_containsOnlyCharactersFromSet:(id)arg1;
- (id)tsu_unescapeXML;
- (id)tsu_escapeXML;
- (id)tsu_stringByMakingFirstCharacterUppercase;
- (id)tsu_stringByMakingFirstCharacterLowercase;
- (id)tsu_encodeStringBase64;
- (id)tsu_stringByTrimmingCharactersInSetFromFront:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(_Bool)arg2;
- (id)tsu_stringWithPathRelativeTo:(id)arg1;
- (id)tsu_substringWithComposedCharacterSequencesToFileSystemLength:(unsigned long long)arg1;
- (id)tsu_substringWithComposedCharacterSequencesTruncatedToLength:(unsigned long long)arg1;
- (id)tsu_stringWithRealpath;
- (_Bool)tsu_isChildOfPath:(id)arg1;
- (_Bool)tsu_isDescendantOfPath:(id)arg1;
- (id)tsu_escapeForIcuRegex;
- (unsigned long long)tsu_countInstancesOfString:(id)arg1 options:(unsigned long long)arg2;
- (id)tsu_stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;
- (id)tsu_md5Hash;
- (id)tsu_stringByFixingBrokenSurrogatePairs;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1 withFormat:(id)arg2;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1;
- (id)tsu_stringByAddingCSVEscapesForLocale:(id)arg1;
- (id)tsu_stringByAppendingSeparator:(id)arg1 format:(id)arg2;
- (id)tsu_stringQuotedIfContainsCharacterSet:(id)arg1;
- (id)tsu_stringByExpandingTableFormatting;
@end
