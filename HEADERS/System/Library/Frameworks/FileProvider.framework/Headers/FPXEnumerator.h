/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:25:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPXEnumerator.h>

@protocol FPXEnumerator <NSObject>
@required
-(void)enumerateItemsFromPage:(id)arg1 reply:(/*^block*/id)arg2;
-(void)enumerateChangesFromToken:(id)arg1 reply:(/*^block*/id)arg2;
-(void)invalidate;

@end


@protocol NSFileProviderEnumerator, FPXEnumeratorObserver;
@class FPXDomainContext, FPItemID, NSString;

@interface FPXEnumerator : NSObject <FPXEnumerator> {

	FPXDomainContext* _domainContext;
	id<NSFileProviderEnumerator> _vendorEnumerator;
	FPItemID* _observedItemID;
	BOOL _invalidated;
	id<FPXEnumeratorObserver> _observer;

}

@property (readonly) id<FPXEnumeratorObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) FPItemID * observedItemID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FPItemID *)observedItemID;
-(void)alternateContentsWereUpdatedAtURL:(id)arg1 forItem:(id)arg2 ;
-(id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 vendorEnumerator:(id)arg3 observer:(id)arg4 ;
-(void)forceItemUpdate:(id)arg1 ;
-(void)enumerateItemsFromPage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)invalidateVendorEnumeration;
-(void)enumerateChangesFromToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id<FPXEnumeratorObserver>)observer;
@end

