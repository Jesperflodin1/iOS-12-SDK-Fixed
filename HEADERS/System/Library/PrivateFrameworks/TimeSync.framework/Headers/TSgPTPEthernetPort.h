//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TimeSync/TSgPTPFDPtPPort.h>

@interface TSgPTPEthernetPort : TSgPTPFDPtPPort
{
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;
- (void)dealloc;
- (int)portType;
- (id)_destinationAddressString;
- (id)_sourceAddressString;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;

@end
