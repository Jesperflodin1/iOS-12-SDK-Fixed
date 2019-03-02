/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:02 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol NFNdefMessage <NSObject>
@property (nonatomic,readonly) NSArray * records; 
@required
-(id)asData;
-(id)decode;
-(id)initWithNDEFMessage:(id)arg1;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2;
-(NSArray *)records;
-(void)addRecord:(id)arg1;

@end
