#import <CoreMotion/CMSedentaryTimer_Internal.h>
#import <CoreMotion/CMSedentaryTimer.h>
#import <CoreMotion/CMMotionActivityManager.h>
#import <CoreMotion/CMNatalieData.h>
#import <CoreMotion/CMAccelerometerDataInternal.h>
#import <CoreMotion/CMAccelerometerData.h>
#import <CoreMotion/CMAltitudeDataInternal.h>
#import <CoreMotion/CMAltitudeData.h>
#import <CoreMotion/CMSignificantElevationSample.h>
#import <CoreMotion/CMVehicleStateData.h>
#import <CoreMotion/CMVehicleState.h>
#import <CoreMotion/CMWorkout.h>
#import <CoreMotion/CMSwimWorkout.h>
#import <CoreMotion/CMFitnessMachineWorkout.h>
#import <CoreMotion/CLIntersiloRecordingProxyToRecipient.h>
#import <CoreMotion/CLIntersiloRecordingProxyToInitiator.h>
#import <CoreMotion/CLIntersiloRecordingProxy.h>
#import <CoreMotion/CMDeviceMotionInternal.h>
#import <CoreMotion/CMDeviceMotion.h>
#import <CoreMotion/CMAttitudeInternal.h>
#import <CoreMotion/CMAttitude.h>
#import <CoreMotion/CMAmbientPressureDataInternal.h>
#import <CoreMotion/CMAmbientPressureData.h>
#import <CoreMotion/CMRecordedAccelerometerData.h>
#import <CoreMotion/CMRecordedGyroData.h>
#import <CoreMotion/CMSensorDataList.h>
#import <CoreMotion/CMSensorRecorderInternal.h>
#import <CoreMotion/CMSensorRecorder.h>
#import <CoreMotion/CMLogItemInternal.h>
#import <CoreMotion/CMLogItem.h>
#import <CoreMotion/CMWakeGesturePhone.h>
#import <CoreMotion/CMOdometerProxy.h>
#import <CoreMotion/CMOdometer.h>
#import <CoreMotion/CMExerciseMinuteData.h>
#import <CoreMotion/CMGyroDataInternal.h>
#import <CoreMotion/CMGyroData.h>
#import <CoreMotion/CMMotionManagerInternal.h>
#import <CoreMotion/CMMotionManager.h>
#import <CoreMotion/CMCatherineData.h>
#import <CoreMotion/CMSpringTrackerInternal.h>
#import <CoreMotion/CMSleepTracker.h>
#import <CoreMotion/CMVO2MaxInputs.h>
#import <CoreMotion/CMMotionTimeRange.h>
#import <CoreMotion/CMCallHandednessManager.h>
#import <CoreMotion/CMCalorieUserInfo.h>
#import <CoreMotion/CLIntersiloUniverse.h>
#import <CoreMotion/CMSedentaryTimerData.h>
#import <CoreMotion/CMExerciseMinuteInternal.h>
#import <CoreMotion/CMExerciseMinute.h>
#import <CoreMotion/CMErrorUtils.h>
#import <CoreMotion/CMMotionAlarmManagerInternal.h>
#import <CoreMotion/CMMotionAlarmManager.h>
#import <CoreMotion/CMNatalimeterInternal.h>
#import <CoreMotion/CMNatalimeter.h>
#import <CoreMotion/CMMagnetometerDataInternal.h>
#import <CoreMotion/CMMagnetometerData.h>
#import <CoreMotion/CMAnomalyManager.h>
#import <CoreMotion/CMHealthTrackerInternal.h>
#import <CoreMotion/CMHealthTracker.h>
#import <CoreMotion/CLDeviceMotionProperties.h>
#import <CoreMotion/CMElevationData.h>
#import <CoreMotion/CMActivity.h>
#import <CoreMotion/CMGestureManagerInternal.h>
#import <CoreMotion/CMGestureManager.h>
#import <CoreMotion/CMActivityManagerInternal.h>
#import <CoreMotion/CMActivityManager.h>
#import <CoreMotion/CMPedometerProxy.h>
#import <CoreMotion/CMPedometer.h>
#import <CoreMotion/CLIntersiloReplayService.h>
#import <CoreMotion/CLCompassDatabaseAdapter.h>
#import <CoreMotion/CMWakeGestureWatch.h>
#import <CoreMotion/CMAnomalyEvent.h>
#import <CoreMotion/CMOdometerData.h>
#import <CoreMotion/CLGeomagneticModelProviderAdapter.h>
#import <CoreMotion/CMFitnessMachineInternal.h>
#import <CoreMotion/CMFitnessMachine.h>
#import <CoreMotion/CLLocationInternalClient_CoreMotion.h>
#import <CoreMotion/CLSensorRecorderSensorMeta.h>
#import <CoreMotion/CLSensorRecorderSensorMetaRequestById.h>
#import <CoreMotion/CLSensorRecorderSensorMetaRequestByDateRange.h>
#import <CoreMotion/CLSensorRecorderSensorDataRequestById.h>
#import <CoreMotion/CLSensorRecorderRecordSensorTypeFor.h>
#import <CoreMotion/CLSensorRecorderWriteSensorDataToFileForDateRange.h>
#import <CoreMotion/CLSensorRecorderSensorAvailable.h>
#import <CoreMotion/CLSensorRecorderSensorSampleRate.h>
#import <CoreMotion/CMAnomalyMessenger.h>
#import <CoreMotion/CMMotionActivity.h>
#import <CoreMotion/CMPickupManager.h>
#import <CoreMotion/CMPedometerData.h>
#import <CoreMotion/CMPedometerEvent.h>
#import <CoreMotion/CMDeviceOrientation.h>
#import <CoreMotion/CMDeviceOrientationManagerInternal.h>
#import <CoreMotion/CMDeviceOrientationManager.h>
#import <CoreMotion/CMPocketStateQueueBlockPair.h>
#import <CoreMotion/CMPocketStateManager.h>
#import <CoreMotion/CMSleepData.h>
#import <CoreMotion/CMFall.h>
#import <CoreMotion/CMSkiTrackerInternal.h>
#import <CoreMotion/CMSkiTracker.h>
#import <CoreMotion/CMCatherineFeederInternal.h>
#import <CoreMotion/CMCatherineFeeder.h>
#import <CoreMotion/CMSkiData.h>
#import <CoreMotion/CLGyroCalibrationDatabaseAdapter.h>
#import <CoreMotion/CMPedometerBin.h>
#import <CoreMotion/CMDyskineticSymptomResult.h>
#import <CoreMotion/CMTremorResult.h>
#import <CoreMotion/CLHealthAssessmentRecordTypeForDuration.h>
#import <CoreMotion/CMMotionUtils.h>
#import <CoreMotion/CMActivityAlarmProxy.h>
#import <CoreMotion/CMVehicleConnectionData.h>
#import <CoreMotion/CMVehicleConnection.h>
#import <CoreMotion/CMActivityAlarm.h>
#import <CoreMotion/CMStepCounterProxy.h>
#import <CoreMotion/CMStepCounter.h>
#import <CoreMotion/CMDeviceMotionLite.h>
#import <CoreMotion/CLSilo.h>
#import <CoreMotion/CLDispatchTimerScheduler.h>
#import <CoreMotion/CLDispatchSilo.h>
#import <CoreMotion/CLTimer.h>
#import <CoreMotion/CLIntersiloInterfaceSelectorInfo.h>
#import <CoreMotion/CLIntersiloInterface.h>
#import <CoreMotion/CMAltimeterInternal.h>
#import <CoreMotion/CMAltimeter.h>
#import <CoreMotion/CMElevation.h>
#import <CoreMotion/CMSwimTrackerInternal.h>
#import <CoreMotion/CMSwimTracker.h>
#import <CoreMotion/CMMotionAlarm.h>
#import <CoreMotion/CMMetMinute.h>
#import <CoreMotion/CMSwimData.h>
#import <CoreMotion/CLIntersiloProxyToRecipient.h>
#import <CoreMotion/CLIntersiloProxyToInitiator.h>
#import <CoreMotion/CLIntersiloProxy.h>
#import <CoreMotion/CMOnBodyStatus.h>
#import <CoreMotion/CLIntersiloService.h>
#import <CoreMotion/CLIntersiloServiceMock.h>
#import <CoreMotion/CMWakeGestureManager.h>
#import <CoreMotion/CLServiceVendorHeartbeatRecord.h>
#import <CoreMotion/_Locationd.h>
#import <CoreMotion/_CLMainService.h>
#import <CoreMotion/_CLUnSupportedService.h>
#import <CoreMotion/CLServiceVendor.h>
#import <CoreMotion/CMFitnessMachineData.h>
#import <CoreMotion/CMOnBodyStatusManager.h>
#import <CoreMotion/CLNotifierData.h>
#import <CoreMotion/CLNotifierClientAdapter.h>
#import <CoreMotion/CLNotifierServiceAdapter.h>
#import <CoreMotion/CMWorkoutManagerInternal.h>
#import <CoreMotion/CMWorkoutManager.h>