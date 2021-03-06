//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class NSString;

@interface CSLockScreenTestPluginSettings : PTSettings
{
    BOOL _enablePlugin;
    BOOL _enableLostModePlugin;
    BOOL _restrictSiri;
    BOOL _restrictCamera;
    BOOL _restrictUnlock;
    BOOL _restrictLogout;
    BOOL _restrictTouchID;
    BOOL _restrictMediaControls;
    BOOL _restrictTodayCenter;
    BOOL _restrictControlCenter;
    BOOL _hideStatusBar;
    BOOL _hideTimeAndDate;
    BOOL _hideSubtitle;
    BOOL _disableOnUnlock;
    long long _presentationStyle;
    long long _backgroundStyle;
    long long _notificationBehavior;
    NSString *_subtitleValue;
}

+ (id)settingsControllerModule;
@property BOOL disableOnUnlock; // @synthesize disableOnUnlock=_disableOnUnlock;
@property(retain) NSString *subtitleValue; // @synthesize subtitleValue=_subtitleValue;
@property BOOL hideSubtitle; // @synthesize hideSubtitle=_hideSubtitle;
@property BOOL hideTimeAndDate; // @synthesize hideTimeAndDate=_hideTimeAndDate;
@property BOOL hideStatusBar; // @synthesize hideStatusBar=_hideStatusBar;
@property BOOL restrictControlCenter; // @synthesize restrictControlCenter=_restrictControlCenter;
@property BOOL restrictTodayCenter; // @synthesize restrictTodayCenter=_restrictTodayCenter;
@property BOOL restrictMediaControls; // @synthesize restrictMediaControls=_restrictMediaControls;
@property BOOL restrictTouchID; // @synthesize restrictTouchID=_restrictTouchID;
@property BOOL restrictLogout; // @synthesize restrictLogout=_restrictLogout;
@property BOOL restrictUnlock; // @synthesize restrictUnlock=_restrictUnlock;
@property BOOL restrictCamera; // @synthesize restrictCamera=_restrictCamera;
@property BOOL restrictSiri; // @synthesize restrictSiri=_restrictSiri;
@property long long notificationBehavior; // @synthesize notificationBehavior=_notificationBehavior;
@property long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property BOOL enableLostModePlugin; // @synthesize enableLostModePlugin=_enableLostModePlugin;
@property BOOL enablePlugin; // @synthesize enablePlugin=_enablePlugin;
// - (void).cxx_destruct;
- (void)setDefaultValues;

@end

