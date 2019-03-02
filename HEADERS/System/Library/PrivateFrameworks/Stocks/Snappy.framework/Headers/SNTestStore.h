/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:13 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNTestRunFactory.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SNTestStore : NSObject <SNTestRunFactory> {

	NSMutableArray* _testSuites;
	NSMutableDictionary* _testCases;

}

@property (nonatomic,readonly) NSMutableArray * testSuites;                  //@synthesize testSuites=_testSuites - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * testCases;              //@synthesize testCases=_testCases - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)testRunForTestName:(id)arg1 ;
-(NSMutableArray *)testSuites;
-(NSMutableDictionary *)testCases;
-(void)addTestCase:(id)arg1 ;
-(void)addTestSuite:(id)arg1 ;
-(id)init;
@end
