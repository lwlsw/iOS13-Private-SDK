//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <HealthToolbox/HKProfileIconObserver-Protocol.h>
#import <HealthToolbox/WDFavoriteDisplayTypesControllerObserver-Protocol.h>

@class HKNavigationController, UIWindow, WDHealthDataViewController, WDProfile, WDTabBarController;

__attribute__((visibility("hidden")))
@interface WDAppDelegate : UIResponder <HKProfileIconObserver, WDFavoriteDisplayTypesControllerObserver, UIApplicationDelegate>
{
    WDProfile *_profile;
    HKNavigationController *_profileNavigationController;
    HKNavigationController *_medicalIDNavigationController;
    HKNavigationController *_sourcesNavigationController;
    WDTabBarController *_tabBarController;
    WDHealthDataViewController *_healthDataViewController;
    UIWindow *_window;
}

+ (id)currentDelegate;
@property(readonly, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
// - (void).cxx_destruct;
- (void)_postAWDMetricForUsingDeepLink;
- (void)_postAWDMetricForFinishedAddingAccount;
- (void)_postAWDOnboardingMetricForType:(int)arg1;
- (id)_storeDemoModeFavoriteDisplayTypes;
- (void)favoriteDisplayTypesControllerReady:(id)arg1;
- (void)resetStoreDemoModeFavorites;
- (void)restoreStoreDemoModeFavoritesIfNeeded;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_restoreApplicationStateWithUserActivity:(id)arg1;
- (BOOL)_restoreApplicationStateWithOnboardingUserActivity:(id)arg1;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)didTapProfileIcon;
- (void)presentProfileViewController;
- (void)_configureUserActivityPolicies;
- (void)_configureNotificationPolicies;
- (void)_buildUIWithProfile:(id)arg1;
- (void)_restoreToBaseStateAndSelectTabAtIndex:(long long)arg1;
- (id)tabBarController;
- (BOOL)_openURL:(id)arg1 options:(id)arg2;
- (void)openHealthAppURL:(id)arg1;
- (BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (BOOL)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;
- (BOOL)application:(id)arg1 shouldSaveApplicationState:(id)arg2;
- (BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;

@end

