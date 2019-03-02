/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class PathPolicyManager;

@interface CoalescingDomainHolder : NSObject {

	CoalescingDomain* _coalescingDomain;
	PathPolicyManager* _pathPolicyManager;

}
-(id)pathIDForPath:(void*)arg1 lookup:(BOOL)arg2 ;
-(id)coalescingConnectionHostForRequestHost:(id)arg1 ;
-(void)addCoalescingConnectionHost:(id)arg1 withDNSRecord:(id)arg2 peerCerts:(id)arg3 trustData:(id)arg4 description:(id)arg5 ;
-(shared_ptr<__CoalescingConnectionKey>*)coalescingCoalescingConnectionHost:(id)arg1 ipAddrs:(id)arg2 ;
-(shared_ptr<__CoalescingConnectionKey>*)updateCoalescingConnectionWithHost:(id)arg1 ipAddrs:(id)arg2 ;
-(BOOL)removeCCEntryForHost:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
