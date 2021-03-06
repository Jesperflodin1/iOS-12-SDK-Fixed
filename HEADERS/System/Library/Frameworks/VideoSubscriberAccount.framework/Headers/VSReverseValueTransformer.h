/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:15 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSValueTransformer;

@interface VSReverseValueTransformer : NSValueTransformer {

	NSValueTransformer* _valueTransformer;

}

@property (nonatomic,retain) NSValueTransformer * valueTransformer;              //@synthesize valueTransformer=_valueTransformer - In the implementation block
+(id)reverseValueTransformerWithValueTransformer:(id)arg1 ;
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(NSValueTransformer *)valueTransformer;
-(void)setValueTransformer:(NSValueTransformer *)arg1 ;
-(id)initWithValueTransformer:(id)arg1 ;
-(id)init;
@end

