/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:43:59 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKKeyValueDomainServerInterface <HKUnitTestingTaskServerInterface>
@required
-(void)remote_setNumber:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_setDate:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_setValuesWithDictionary:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_removeValuesForKeys:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_numberForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_dateForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_stringForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_allValuesWithCompletion:(/*^block*/id)arg1;

@end

