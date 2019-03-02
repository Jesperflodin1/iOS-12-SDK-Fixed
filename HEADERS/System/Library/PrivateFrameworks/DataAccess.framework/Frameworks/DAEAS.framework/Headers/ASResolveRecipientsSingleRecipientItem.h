/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:09 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, ASResolveRecipientsCertificatesItem, ASResolveRecipientsAvailabilityItem;

@interface ASResolveRecipientsSingleRecipientItem : ASItem {

	NSString* _emailAddress;
	ASResolveRecipientsCertificatesItem* _certificates;
	ASResolveRecipientsAvailabilityItem* _availability;

}

@property (nonatomic,retain) NSString * emailAddress;                                         //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) ASResolveRecipientsCertificatesItem * certificates;              //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) ASResolveRecipientsAvailabilityItem * availability;              //@synthesize availability=_availability - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(ASResolveRecipientsAvailabilityItem *)availability;
-(void)setAvailability:(ASResolveRecipientsAvailabilityItem *)arg1 ;
-(void)setCertificates:(ASResolveRecipientsCertificatesItem *)arg1 ;
-(ASResolveRecipientsCertificatesItem *)certificates;
-(id)description;
@end
