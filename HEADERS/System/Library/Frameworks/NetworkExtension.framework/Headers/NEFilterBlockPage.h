/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:27:15 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface NEFilterBlockPage : NSObject {

	NSString* _organization;
	NSURL* _pageTemplateURL;
	NSString* _userURL;
	NSString* _formActionURL;
	NSString* _unblockStyle;
	NSString* _remediationButtonText;

}

@property (readonly) NSURL * pageTemplateURL;                   //@synthesize pageTemplateURL=_pageTemplateURL - In the implementation block
@property (copy) NSString * userURL;                            //@synthesize userURL=_userURL - In the implementation block
@property (copy) NSString * formActionURL;                      //@synthesize formActionURL=_formActionURL - In the implementation block
@property (copy) NSString * organization; 
@property (copy) NSString * unblockStyle;                       //@synthesize unblockStyle=_unblockStyle - In the implementation block
@property (copy) NSString * remediationButtonText;              //@synthesize remediationButtonText=_remediationButtonText - In the implementation block
-(void)setOrganization:(NSString *)arg1 ;
-(NSString *)organization;
-(id)_blockPage;
-(id)_css;
-(NSURL *)pageTemplateURL;
-(NSString *)userURL;
-(void)setUserURL:(NSString *)arg1 ;
-(NSString *)formActionURL;
-(void)setFormActionURL:(NSString *)arg1 ;
-(NSString *)unblockStyle;
-(void)setUnblockStyle:(NSString *)arg1 ;
-(NSString *)remediationButtonText;
-(void)setRemediationButtonText:(NSString *)arg1 ;
-(id)init;
-(id)page;
@end

