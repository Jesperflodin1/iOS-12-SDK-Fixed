/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact, CNContactStore, NSURL;

@interface CNDraggingContact : NSObject {

	CNContact* _contact;
	CNContactStore* _contactStore;
	NSURL* _cachedFileURLRepresentation;

}

@property (nonatomic,retain) CNContact * contact;                              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSURL * cachedFileURLRepresentation;              //@synthesize cachedFileURLRepresentation=_cachedFileURLRepresentation - In the implementation block
+(id)availableDataRepresentationTypes;
-(NSURL *)cachedFileURLRepresentation;
-(id)serializeContactToVCard:(id)arg1 ;
-(void)setCachedFileURLRepresentation:(NSURL *)arg1 ;
-(id)fileURLRepresentation;
-(void)cleanupFileURLRepresentation;
-(id)initWithContact:(id)arg1 contactStore:(id)arg2 ;
-(id)fileNameForContact:(id)arg1 ;
-(id)fetchContactWithKeys:(id)arg1 ;
-(id)dataRepresentationForType:(id)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(CNContactStore *)contactStore;
-(CNContact *)contact;
-(void)setContactStore:(CNContactStore *)arg1 ;
@end
