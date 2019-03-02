/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding> {

	long long _operation;
	NSString* _sharedContentType;
	long long _numberOfInvitations;
	BOOL _invitationsSentViaThirdPartyService;
	BOOL _publicShare;

}

@property (assign) long long operation;                                   //@synthesize operation=_operation - In the implementation block
@property (assign) BOOL invitationsSentViaThirdPartyService;              //@synthesize invitationsSentViaThirdPartyService=_invitationsSentViaThirdPartyService - In the implementation block
@property (assign) BOOL publicShare;                                      //@synthesize publicShare=_publicShare - In the implementation block
@property (assign) long long numberOfInvitations;                         //@synthesize numberOfInvitations=_numberOfInvitations - In the implementation block
@property (copy) NSString * sharedContentType;                            //@synthesize sharedContentType=_sharedContentType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_variantSubstrings;
-(BOOL)invitationsSentViaThirdPartyService;
-(void)setInvitationsSentViaThirdPartyService:(BOOL)arg1 ;
-(BOOL)publicShare;
-(void)setPublicShare:(BOOL)arg1 ;
-(long long)numberOfInvitations;
-(void)setNumberOfInvitations:(long long)arg1 ;
-(NSString *)sharedContentType;
-(void)setSharedContentType:(NSString *)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
@end
