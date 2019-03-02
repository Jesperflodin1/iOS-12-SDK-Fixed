/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:39:45 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression;

@interface ADDateStringNormalizer : NSObject {

	NSRegularExpression* _regularExpression;

}

@property (nonatomic,retain) NSRegularExpression * regularExpression;              //@synthesize regularExpression=_regularExpression - In the implementation block
+(id)formatter;
+(id)normalizers;
+(id)relativeDateFormatStringForDate:(id)arg1 ;
+(id)dateFromString:(id)arg1 ;
-(NSRegularExpression *)regularExpression;
-(void)setRegularExpression:(NSRegularExpression *)arg1 ;
-(id)normalize:(id)arg1 ;
-(void)dealloc;
@end
