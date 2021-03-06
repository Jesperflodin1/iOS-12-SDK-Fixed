//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSSPreset-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSDMediaStyle : TSSStyle <TSDMixing, TSSPreset>
{
}

+ (_Bool)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
+ (id)propertiesAllowingNSNull;
+ (id)defaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (id)properties;
+ (id)movieStylePresetStyleDescriptor;
+ (id)imageStylePresetStyleDescriptor;
+ (void)initialize;
+ (void)saveMediaStylePropertyMap:(id)arg1 toArchive:(struct MediaStylePropertiesArchive *)arg2 archiver:(id)arg3;
+ (void)loadMediaStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct MediaStylePropertiesArchive *)arg2 unarchiver:(id)arg3;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) NSString *presetKind;
- (void)saveToArchive:(struct MediaStyleArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct MediaStyleArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;

@end

