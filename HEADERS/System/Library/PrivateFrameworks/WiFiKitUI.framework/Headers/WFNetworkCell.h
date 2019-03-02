/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:43:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, WFHotspotDetails;


@protocol WFNetworkCell <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL secure; 
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) unsigned long long bars; 
@property (assign,nonatomic) BOOL personalHotspot; 
@property (nonatomic,retain) WFHotspotDetails * hotspotDetails; 
@property (assign,nonatomic) BOOL connectionError; 
@required
-(BOOL)secure;
-(void)setConnectionError:(BOOL)arg1;
-(BOOL)connectionError;
-(void)setPersonalHotspot:(BOOL)arg1;
-(WFHotspotDetails *)hotspotDetails;
-(void)setHotspotDetails:(id)arg1;
-(BOOL)personalHotspot;
-(unsigned long long)bars;
-(void)setBars:(unsigned long long)arg1;
-(long long)state;
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(void)setSubtitle:(id)arg1;
-(NSString *)subtitle;
-(void)setState:(long long)arg1;
-(void)setSecure:(BOOL)arg1;

@end
