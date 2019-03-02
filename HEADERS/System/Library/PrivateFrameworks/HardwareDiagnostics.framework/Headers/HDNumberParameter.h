/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/HDParameterDescription.h>

@class NSString;

@interface HDNumberParameter : NSObject <HDParameterDescription> {

	BOOL _required;
	NSString* _summary;

}

@property (nonatomic,retain) NSString * summary;                    //@synthesize summary=_summary - In the implementation block
@property (assign,nonatomic) BOOL required;                         //@synthesize required=_required - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)validateValue:(id)arg1 error:(id*)arg2 ;
-(NSString *)summary;
-(BOOL)required;
-(void)setRequired:(BOOL)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(id)initWithSummary:(id)arg1 required:(BOOL)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
