/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:48 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSAKDeserializer : NSObject {

	id ds;

}
-(id)deserializeNewData;
-(id)deserializeNewList;
-(id)deserializeNewPList;
-(id)deserializeNewString;
-(id)deserializeData:(id)arg1 ;
-(id)deserializeString:(id)arg1 ;
-(id)deserializeList:(id)arg1 ;
-(id)deserializeListItemIn:(id)arg1 at:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
-(id)deserializeNewObject;
-(id)deserializePList:(id)arg1 ;
-(id)deserializePListKeyIn:(id)arg1 ;
-(id)deserializePListValueIn:(id)arg1 key:(id)arg2 length:(unsigned long long)arg3 ;
-(id)deserializeNewKeyString;
-(id)initForDeserializerStream:(id)arg1 ;
-(id)deserializerStream;
-(void)dealloc;
@end

