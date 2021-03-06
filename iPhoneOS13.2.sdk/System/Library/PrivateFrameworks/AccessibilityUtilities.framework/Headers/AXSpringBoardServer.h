//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUtilities/AXServer.h>

#import <AccessibilityUtilities/AXSystemAppServer-Protocol.h>

@class AXAccessQueue, NSMutableArray, NSMutableDictionary;

@interface AXSpringBoardServer : AXServer <AXSystemAppServer>
{
    BOOL _shouldFocusNonExclusiveSystemUI;
    AXAccessQueue *_accessQueue;
    id /* CDUnknownBlockType */ _currentAlertHandler;
    NSMutableArray *_actionHandlers;
    NSMutableDictionary *_reachabilityHandlers;
}

+ (id)server;
@property(retain, nonatomic) NSMutableDictionary *reachabilityHandlers; // @synthesize reachabilityHandlers=_reachabilityHandlers;
@property(nonatomic) BOOL shouldFocusNonExclusiveSystemUI; // @synthesize shouldFocusNonExclusiveSystemUI=_shouldFocusNonExclusiveSystemUI;
@property(retain, nonatomic) NSMutableArray *actionHandlers; // @synthesize actionHandlers=_actionHandlers;
@property(copy, nonatomic) id /* CDUnknownBlockType */ currentAlertHandler; // @synthesize currentAlertHandler=_currentAlertHandler;
@property(retain, nonatomic) AXAccessQueue *accessQueue; // @synthesize accessQueue=_accessQueue;
// - (void).cxx_destruct;
- (id)runningAppProcesses;
- (id)focusedAppProcess;
- (id)applicationWithIdentifier:(id)arg1;
- (BOOL)isMagnifierVisible;
- (void)didPotentiallyDismissNonExclusiveSystemUI;
- (BOOL)isNonExclusiveSystemUIFocusable;
- (void)setLockScreenDimTimerEnabled:(BOOL)arg1;
- (void)userEventOccurred;
- (void)isMagnifierVisibleWithCompletion:(CDUnknownBlockType)arg1;
- (void)launchMagnifierApp;
- (void)reactivateInCallService;
- (BOOL)loadGAXBundleForUnmanagedASAM;
- (void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2;
- (id)focusedApps;
- (BOOL)isMultiTaskingActive;
- (BOOL)isSettingsAppFrontmost;
- (BOOL)dismissBuddyIfNecessary;
- (BOOL)isPurpleBuddyAppFrontmost;
- (BOOL)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1;
- (void)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isSystemAppFrontmostExludingSiri;
- (void)isSystemAppFrontmost:(CDUnknownBlockType)arg1;
- (BOOL)isSystemAppFrontmost;
- (id)runningAppPIDs;
- (void)purpleBuddyPID:(CDUnknownBlockType)arg1;
- (int)purpleBuddyPID;
- (id)focusedAppPID;
- (BOOL)isSystemAppShowingAnAlert;
- (void)systemAppInfoWithQuery:(NSUInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)canSetDockIconActivationMode;
- (void)setDockIconActivationMode:(NSUInteger)arg1;
- (id)medusaApps;
- (BOOL)performMedusaGesture:(NSUInteger)arg1;
- (id)allowedMedusaGestures;
- (BOOL)isSpeakThisTemporarilyDisabled;
- (BOOL)isVoiceControlRunning;
- (void)openVoiceControl;
- (BOOL)isPasscodeLockVisible;
- (BOOL)isReceivingAirPlay;
- (BOOL)isSiriTalkingOrListening;
- (BOOL)isSiriVisible;
- (BOOL)dismissSiri;
- (BOOL)isSpotlightVisible;
@property(readonly, nonatomic) BOOL isGuidedAccessActive;
- (BOOL)toggleDarkMode;
- (BOOL)isDarkModeActive;
- (void)revealSpotlight;
- (void)toggleSpotlight;
- (void)simulateEdgePressHaptics;
- (void)dismissAppSwitcher;
- (void)openAppSwitcher;
- (BOOL)isAppSwitcherVisible;
- (BOOL)isShowingHomescreen;
- (BOOL)isShowingNonSystemApp;
- (BOOL)isStatusBarNativeFocusable;
- (BOOL)isDockVisible;
- (void)toggleDock;
- (void)armApplePay;
- (BOOL)showControlCenter:(BOOL)arg1;
- (BOOL)showNotificationCenter:(BOOL)arg1;
- (BOOL)isControlCenterVisible;
- (void)hideNotificationCenter;
- (void)showNotificationCenter;
- (void)toggleNotificationCenter;
- (BOOL)isNotificationVisible;
- (BOOL)isScreenshotWindowVisible;
- (BOOL)isNotificationCenterVisible;
- (BOOL)isMakingEmergencyCall;
- (BOOL)hasActiveOrPendingCallOrFaceTime;
- (BOOL)hasActiveOrPendingCall;
- (BOOL)hasActiveEndpointCall;
- (BOOL)hasActiveCall;
- (void)resumeMediaForApp:(id)arg1;
- (void)resumeMedia;
- (void)pauseMediaForApp:(id)arg1;
- (void)pauseMedia;
- (void)isMediaPlayingForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isMediaPlayingForApp:(id)arg1;
- (id)_messageForMediaPlayingQueryForBundleID:(id)arg1;
- (BOOL)isMediaPlaying;
- (void)rebootDevice;
- (void)unlockDevice;
- (void)wakeUpDeviceIfNecessary;
- (id)installedApps;
- (BOOL)areSystemGesturesDisabledByAccessibility;
- (BOOL)areSystemGesturesDisabledNatively;
- (BOOL)isSyncingRestoringResettingOrUpdating;
- (void)isSystemSleeping:(CDUnknownBlockType)arg1;
- (BOOL)isSystemSleeping;
- (void)screenLockStatus:(CDUnknownBlockType)arg1;
- (BOOL)isScreenLockedWithPasscode:(BOOL )arg1;
- (void)_getPasscodeStatusImmediate:(CDUnknownBlockType)arg1;
- (id)splashImageForAppWithBundleIdentifier:(id)arg1;
- (void)performVoiceShortcutWithIdentifier:(id)arg1 bundleID:(id)arg2;
- (void)activateSOSMode;
- (BOOL)isSoftwareUpdateUIVisible;
- (BOOL)isNowPlayingUIVisible;
- (BOOL)isScreenSaverVisible;
- (void)copyStringToPasteboard:(id)arg1;
- (void)activeInterfaceOrientation:(CDUnknownBlockType)arg1;
- (long long)activeInterfaceOrientation;
- (int)activeApplicationOrientation;
- (void)pid:(CDUnknownBlockType)arg1;
- (int)pid;
- (BOOL)isPointInsideAccessibilityInspector:(id)arg1;
- (BOOL)isInspectorMinimized;
- (void)removeReachabilityHandler:(id)arg1;
- (void)setReachabilityEnabled:(BOOL)arg1;
- (void)setReachabilityActive:(BOOL)arg1;
- (void)toggleReachability;
- (BOOL)toggleIncomingCall;
- (void)registerReachabilityHandler:(CDUnknownBlockType)arg1 withIdentifierCallback:(CDUnknownBlockType)arg2;
- (void)cancelReachabilityDetection;
- (void)setCancelGestureActivation:(NSUInteger)arg1 cancelEnabled:(BOOL)arg2;
- (void)registerSpringBoardActionHandler:(CDUnknownBlockType)arg1 withIdentifierCallback:(CDUnknownBlockType)arg2;
- (void)removeActionHandler:(id)arg1;
- (void)setShowSpeechPlaybackControls:(BOOL)arg1;
- (void)_sendRemoteViewIPCMessage:(int)arg1 withRemoteViewType:(long long)arg2 withData:(id)arg3;
- (id)_payloadForRemoteViewType:(long long)arg1 data:(id)arg2;
- (BOOL)isShowingRemoteView:(long long)arg1;
- (void)hideRemoteView:(long long)arg1;
- (void)showRemoteView:(long long)arg1 withData:(id)arg2;
- (void)showAlert:(int)arg1 withHandler:(CDUnknownBlockType)arg2 withData:(id)arg3;
- (void)showAlert:(int)arg1 withHandler:(CDUnknownBlockType)arg2;
- (BOOL)isShowingAXAlert;
- (void)hideAlert;
- (void)cleanupAlertHandler;
- (double)volumeLevel;
- (double)reachabilityOffset;
- (BOOL)isRingerMuted;
- (BOOL)isSideSwitchUsedForOrientation;
- (void)resetDimTimer;
- (void)setOrientationLocked:(BOOL)arg1;
- (BOOL)isOrientationLocked;
- (int)topEventPidOverride;
- (void)startHearingAidServer;
- (void)setHearingAidControlVisible:(BOOL)arg1;
- (void)setCaptionPanelContextId:(unsigned int)arg1;
- (void)setVolume:(double)arg1;
- (void)openCommandAndControlVocabulary;
- (void)openCommandAndControlCommands;
- (void)openCommandAndControlSettings;
- (void)openSCATCustomGestureCreation;
- (void)openAssistiveTouchCustomGestureCreation;
- (void)takeScreenshot;
- (void)_didConnectToClient;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (void)_didConnectToServer;
- (BOOL)_shouldValidateEntitlements;
- (id)_handleActionResult:(id)arg1;
- (id)_handleReachabilityResult:(id)arg1;
- (id)_handleReplyResult:(id)arg1;
- (id)_serviceName;
- (id)init;
- (BOOL)_shouldDispatchLocally;
- (id)_axSpringBoardServerInstanceDelegate;
- (id)_axSpringBoardServerInstanceIfExists;
- (id)_axSpringBoardServerInstance;

@end

