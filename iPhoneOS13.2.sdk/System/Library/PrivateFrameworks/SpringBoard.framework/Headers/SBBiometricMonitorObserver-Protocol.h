//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SBBiometricMonitorDataSource;

@protocol SBBiometricMonitorObserver <NSObject>

@optional
- (void)biometricMonitorDataSourcePoseUpdated:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionEnded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionFailed:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourcePresenceDetectionStarted:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingEnded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingSucceeded:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingFailed:(id <SBBiometricMonitorDataSource>)arg1;
- (void)biometricMonitorDataSourceMatchingStarted:(id <SBBiometricMonitorDataSource>)arg1;
@end

