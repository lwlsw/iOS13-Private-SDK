//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMCaptureConfiguration, CAMConflictingControlConfiguration, NSDate, NSUserDefaults;

@interface CAMUserPreferences : NSObject
{
    BOOL _didResetTorchMode;
    BOOL _shouldShowGridView;
    BOOL _QRBannersEnabledInSettings;
    BOOL _forceEnableQRBanners;
    BOOL _shouldCaptureHDREV0;
    BOOL _shouldUseModernHDRBehavior;
    BOOL _didAcknowledgePortraitModeDescription;
    BOOL _autoLowLightVideoEnabled;
    BOOL _shouldForceMonoAudioRecording;
    BOOL _photoOverCaptureEnabled;
    BOOL _videoOverCaptureEnabled;
    BOOL _autoAdjustmentsEnabled;
    BOOL _didAcknowledgeCTMDescription;
    BOOL _preserveEffectFilter;
    BOOL _preserveCaptureMode;
    BOOL _preserveLivePhoto;
    BOOL _lockAsShutterEnabled;
    BOOL _shouldDelayRemotePersistence;
    BOOL _burstFollowsEncoderSettings;
    BOOL __preferHEVCWhenAvailable;
    BOOL __shouldDisableCameraSwitchingDuringVideoRecording;
    CAMCaptureConfiguration *_captureConfiguration;
    CAMConflictingControlConfiguration *_conflictingControlConfiguration;
    long long _videoConfiguration;
    long long _slomoConfiguration;
    long long _previewViewAspectMode;
    long long _photoModeLastCapturedEffectFilterType;
    long long _squareModeLastCapturedEffectFilterType;
    long long _portraitModeLastCapturedEffectFilterType;
    NSDate *_resetTimeoutDate;
    long long _preferredMinimumFreeBytes;
    long long _overriddenBackCaptureInterval;
    long long _overriddenFrontCaptureInterval;
    NSUserDefaults *__underlyingUserDefaults;
    double __resetTimeoutOverride;
}

+ (long long)defaultLightingTypeForMode:(long long)arg1;
+ (long long)defaultFilterTypeForMode:(long long)arg1;
+ (id)_defaultCaptureConfiguration;
+ (id)preferences;
+ (BOOL)_fallBackToCameraDefaultsForBundleIdentifier:(id)arg1;
@property(readonly, nonatomic) BOOL _shouldDisableCameraSwitchingDuringVideoRecording; // @synthesize _shouldDisableCameraSwitchingDuringVideoRecording=__shouldDisableCameraSwitchingDuringVideoRecording;
@property(readonly, nonatomic) double _resetTimeoutOverride; // @synthesize _resetTimeoutOverride=__resetTimeoutOverride;
@property(readonly, nonatomic) BOOL _preferHEVCWhenAvailable; // @synthesize _preferHEVCWhenAvailable=__preferHEVCWhenAvailable;
@property(retain, nonatomic, getter=_underlyingUserDefaults, setter=_setUnderlyingUserDefaults:) NSUserDefaults *_underlyingUserDefaults; // @synthesize _underlyingUserDefaults=__underlyingUserDefaults;
@property(readonly, nonatomic) long long overriddenFrontCaptureInterval; // @synthesize overriddenFrontCaptureInterval=_overriddenFrontCaptureInterval;
@property(readonly, nonatomic) long long overriddenBackCaptureInterval; // @synthesize overriddenBackCaptureInterval=_overriddenBackCaptureInterval;
@property(readonly, nonatomic) long long preferredMinimumFreeBytes; // @synthesize preferredMinimumFreeBytes=_preferredMinimumFreeBytes;
@property(readonly, nonatomic) BOOL burstFollowsEncoderSettings; // @synthesize burstFollowsEncoderSettings=_burstFollowsEncoderSettings;
@property(readonly, nonatomic) BOOL shouldDelayRemotePersistence; // @synthesize shouldDelayRemotePersistence=_shouldDelayRemotePersistence;
@property(readonly, nonatomic, getter=isLockAsShutterEnabled) BOOL lockAsShutterEnabled; // @synthesize lockAsShutterEnabled=_lockAsShutterEnabled;
@property(readonly, nonatomic) BOOL preserveLivePhoto; // @synthesize preserveLivePhoto=_preserveLivePhoto;
@property(readonly, nonatomic) BOOL preserveCaptureMode; // @synthesize preserveCaptureMode=_preserveCaptureMode;
@property(readonly, nonatomic) BOOL preserveEffectFilter; // @synthesize preserveEffectFilter=_preserveEffectFilter;
@property(retain, nonatomic, setter=_setResetTimeoutDate:) NSDate *resetTimeoutDate; // @synthesize resetTimeoutDate=_resetTimeoutDate;
@property(nonatomic) long long portraitModeLastCapturedEffectFilterType; // @synthesize portraitModeLastCapturedEffectFilterType=_portraitModeLastCapturedEffectFilterType;
@property(nonatomic) long long squareModeLastCapturedEffectFilterType; // @synthesize squareModeLastCapturedEffectFilterType=_squareModeLastCapturedEffectFilterType;
@property(nonatomic) long long photoModeLastCapturedEffectFilterType; // @synthesize photoModeLastCapturedEffectFilterType=_photoModeLastCapturedEffectFilterType;
@property(nonatomic) long long previewViewAspectMode; // @synthesize previewViewAspectMode=_previewViewAspectMode;
@property(nonatomic) BOOL didAcknowledgeCTMDescription; // @synthesize didAcknowledgeCTMDescription=_didAcknowledgeCTMDescription;
@property(readonly, nonatomic, getter=isAutoAdjustmentsEnabled) BOOL autoAdjustmentsEnabled; // @synthesize autoAdjustmentsEnabled=_autoAdjustmentsEnabled;
@property(readonly, nonatomic, getter=isVideoOverCaptureEnabled) BOOL videoOverCaptureEnabled; // @synthesize videoOverCaptureEnabled=_videoOverCaptureEnabled;
@property(readonly, nonatomic, getter=isPhotoOverCaptureEnabled) BOOL photoOverCaptureEnabled; // @synthesize photoOverCaptureEnabled=_photoOverCaptureEnabled;
@property(readonly, nonatomic) BOOL shouldForceMonoAudioRecording; // @synthesize shouldForceMonoAudioRecording=_shouldForceMonoAudioRecording;
@property(readonly, nonatomic, getter=isAutoLowLightVideoEnabled) BOOL autoLowLightVideoEnabled; // @synthesize autoLowLightVideoEnabled=_autoLowLightVideoEnabled;
@property(readonly, nonatomic) long long slomoConfiguration; // @synthesize slomoConfiguration=_slomoConfiguration;
@property(readonly, nonatomic) long long videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(nonatomic) BOOL didAcknowledgePortraitModeDescription; // @synthesize didAcknowledgePortraitModeDescription=_didAcknowledgePortraitModeDescription;
@property(readonly, nonatomic) BOOL shouldUseModernHDRBehavior; // @synthesize shouldUseModernHDRBehavior=_shouldUseModernHDRBehavior;
@property(readonly, nonatomic) BOOL shouldCaptureHDREV0; // @synthesize shouldCaptureHDREV0=_shouldCaptureHDREV0;
@property(nonatomic) BOOL forceEnableQRBanners; // @synthesize forceEnableQRBanners=_forceEnableQRBanners;
@property(readonly, nonatomic) BOOL QRBannersEnabledInSettings; // @synthesize QRBannersEnabledInSettings=_QRBannersEnabledInSettings;
@property(readonly, nonatomic) BOOL shouldShowGridView; // @synthesize shouldShowGridView=_shouldShowGridView;
@property(retain, nonatomic) CAMConflictingControlConfiguration *conflictingControlConfiguration; // @synthesize conflictingControlConfiguration=_conflictingControlConfiguration;
@property(retain, nonatomic) CAMCaptureConfiguration *captureConfiguration; // @synthesize captureConfiguration=_captureConfiguration;
@property(nonatomic, setter=_setDidResetTorchMode:) BOOL didResetTorchMode; // @synthesize didResetTorchMode=_didResetTorchMode;
// - (void).cxx_destruct;
- (BOOL)isOverCaptureEnabledForCTMCaptureType:(long long)arg1;
@property(readonly, nonatomic) BOOL didConfirmSlomo1080p240MostCompatible;
@property(readonly, nonatomic) BOOL didConfirmVideo4k60MostCompatible;
@property(readonly, nonatomic) BOOL usingMostCompatibleEncoding;
- (long long)maxSupportedPhotoQualityPrioritizationForMode:(long long)arg1;
- (BOOL)shouldDisableCameraSwitchingDuringVideoRecordingForMode:(long long)arg1;
@property(readonly, nonatomic) long long photoEncodingBehavior;
- (long long)videoEncodingBehaviorForConfiguration:(long long)arg1;
@property(readonly, nonatomic) BOOL shouldShowQRBanners;
- (BOOL)shouldResetCaptureConfiguration;
- (void)updateResetTimeoutDate;
- (void)writePreferences;
- (BOOL)readPreferencesWithOverrides:(id)arg1 emulationMode:(long long)arg2 callActive:(BOOL)arg3;
- (long long)_sanitizeLightingType:(long long)arg1 forMode:(long long)arg2;
- (long long)ppt_readPortraitLightingType;
- (long long)_sanitizeEffectFilterType:(long long)arg1 forMode:(long long)arg2;
- (id)filterTypesForMode:(long long)arg1;

@end

