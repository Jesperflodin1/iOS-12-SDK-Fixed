/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:59 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPMediaPlaylistCreationMetadata : NSObject {

	NSString* _defaultAuthorDisplayName;
	NSString* _name;
	NSString* _authorDisplayName;
	NSString* _descriptionText;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * authorDisplayName;              //@synthesize authorDisplayName=_authorDisplayName - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                //@synthesize descriptionText=_descriptionText - In the implementation block
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(NSString *)authorDisplayName;
-(void)setAuthorDisplayName:(NSString *)arg1 ;
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
@end

