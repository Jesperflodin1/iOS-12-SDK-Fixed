/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:20 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObjectDeleteRequest.h>

@interface PHMomentShareDeleteRequest : PHObjectDeleteRequest {

	long long _operation;

}

@property (assign,nonatomic) long long operation;              //@synthesize operation=_operation - In the implementation block
-(BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
@end

