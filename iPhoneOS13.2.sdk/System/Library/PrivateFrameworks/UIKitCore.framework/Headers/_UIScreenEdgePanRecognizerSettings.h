//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISettings.h>

@class NSString, _UIScreenEdgePanRecognizerCornerSettings, _UIScreenEdgePanRecognizerDwellSettings, _UIScreenEdgePanRecognizerEdgeSettings;

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizerSettings : _UISettings
{
    NSString *_multitaskingGestureMode;
    NSString *_navigationGestureMode;
    _UIScreenEdgePanRecognizerEdgeSettings *_edgeSettings;
    _UIScreenEdgePanRecognizerDwellSettings *_dwellSettings;
    _UIScreenEdgePanRecognizerCornerSettings *_cornerSettings;
}

+ (id)settingsControllerModule;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerCornerSettings *cornerSettings; // @synthesize cornerSettings=_cornerSettings;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerDwellSettings *dwellSettings; // @synthesize dwellSettings=_dwellSettings;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerEdgeSettings *edgeSettings; // @synthesize edgeSettings=_edgeSettings;
@property(copy, nonatomic) NSString *navigationGestureMode; // @synthesize navigationGestureMode=_navigationGestureMode;
@property(copy, nonatomic) NSString *multitaskingGestureMode; // @synthesize multitaskingGestureMode=_multitaskingGestureMode;
// - (void).cxx_destruct;

@end

