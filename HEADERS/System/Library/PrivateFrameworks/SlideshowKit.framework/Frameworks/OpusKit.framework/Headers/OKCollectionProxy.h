/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:09 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSDictionary.h>

@protocol OKCollectionProxyDataSource;
@interface OKCollectionProxy : NSDictionary {

	id<OKCollectionProxyDataSource> _dataSource;
	unsigned long long _tag;

}

@property (assign,nonatomic) id<OKCollectionProxyDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long tag;                                  //@synthesize tag=_tag - In the implementation block
-(id)objectAtIndexPath:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(void)setTag:(unsigned long long)arg1 ;
-(unsigned long long)tag;
-(id)keyEnumerator;
-(id<OKCollectionProxyDataSource>)dataSource;
-(void)setDataSource:(id<OKCollectionProxyDataSource>)arg1 ;
@end
