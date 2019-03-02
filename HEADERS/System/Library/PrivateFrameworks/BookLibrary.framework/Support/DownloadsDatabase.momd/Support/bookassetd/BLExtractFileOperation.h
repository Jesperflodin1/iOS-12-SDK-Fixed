//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class BLBookInstallInfo, NSDictionary, NSError, NSString, SSOperationProgress;

__attribute__((visibility("hidden")))
@interface BLExtractFileOperation : NSOperation
{
    long long _activeFileBytesCopied;
    NSString *_activeFilePath;
    NSString *_destinationFilePath;
    NSDictionary *_fileAttributes;
    double _lastSnapshotTime;
    NSString *_sourceFilePath;
    long long _sourceFileType;
    _Bool _success;
    NSError *_error;
    SSOperationProgress *_progress;
    BLBookInstallInfo *_installInfo;
}

@property(nonatomic) __weak BLBookInstallInfo *installInfo; // @synthesize installInfo=_installInfo;
@property(retain, nonatomic) SSOperationProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) long long sourceFileType; // @synthesize sourceFileType=_sourceFileType;
@property(copy, nonatomic) NSString *sourceFilePath; // @synthesize sourceFilePath=_sourceFilePath;
@property(copy, nonatomic) NSDictionary *fileAttributes; // @synthesize fileAttributes=_fileAttributes;
@property(copy, nonatomic) NSString *destinationFilePath; // @synthesize destinationFilePath=_destinationFilePath;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)description;
- (void)_updateProgressWithByteCount:(long long)arg1;
- (_Bool)_performBOMCopy:(id *)arg1;
- (id)_newBOMCopierOptions;
- (void)_initializeProgress;
- (void)_copierUpdatedFileWithPath:(const char *)arg1 size:(long long)arg2;
- (void)_copierStartedFileWithPath:(const char *)arg1 size:(long long)arg2;
- (void)_copierFinishedFileWithPath:(const char *)arg1 size:(long long)arg2;
- (_Bool)_applyFileAttributesToDirectory:(id)arg1 error:(id *)arg2;
- (void)main;
- (id)initWithSoucePath:(id)arg1 destinationPath:(id)arg2 fileAttributes:(id)arg3 fileType:(long long)arg4 installInfo:(id)arg5;

@end
