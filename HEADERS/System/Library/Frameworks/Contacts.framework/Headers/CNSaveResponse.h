/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface CNSaveResponse : NSObject <NSSecureCoding> {

	NSMutableDictionary* _contactSnapshotsByIndexPath;
	NSMutableDictionary* _groupSnapshotsByIndexPath;
	NSMutableDictionary* _containerSnapshotsByIndexPath;
	BOOL _didAffectMeCard;

}

@property (readonly) BOOL didAffectMeCard; 
+(BOOL)supportsSecureCoding;
-(void)applySnapshotsToSaveRequest:(id)arg1 ;
-(BOOL)didAffectMeCard;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

