//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@protocol TSCEReferenceResolving;

@protocol TSCETableResolverFactoryProtocol <NSObject>
- (vector_4115f7f8)cellRefsForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (vector_a1208d01)valuesForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2 error:(id *)arg3;
- (unsigned char)aggregateTypeForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (struct TSCETableResolver *)newTableResolverForResolver:(id <TSCEReferenceResolving>)arg1;
- (id)initWithCalcEngine:(struct TSCECalcEngine *)arg1;
@end
