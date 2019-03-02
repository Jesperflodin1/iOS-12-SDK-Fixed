/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:40 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RCWaveformSelectionOverlayDelegate <NSObject>
@required
-(void)waveformSelectionOverlay:(id)arg1 willBeginTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4;
-(void)waveformSelectionOverlay:(id)arg1 didFinishTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4;
-(SCD_Struct_RC4*)waveformSelectionOverlay:(id)arg1 willChangeSelectedTimeRange:(SCD_Struct_RC4)arg2 isTracking:(BOOL)arg3;
-(double)waveformSelectionOverlay:(id)arg1 willChangeAssetCurrentTime:(double)arg2 isTracking:(BOOL)arg3;
-(double)waveformSelectionOverlay:(id)arg1 offsetForTime:(double)arg2;
-(double)waveformSelectionOverlay:(id)arg1 timeForOffset:(double)arg2;
-(double)waveformSelectionOverlayGetCurrentTime:(id)arg1;

@end
