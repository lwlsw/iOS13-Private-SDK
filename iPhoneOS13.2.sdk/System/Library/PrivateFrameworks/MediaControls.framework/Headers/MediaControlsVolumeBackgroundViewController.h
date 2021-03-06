//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUIKit/CCUISliderModuleBackgroundViewController.h>

#import <MediaControls/MediaControlsVolumeControllerObserver-Protocol.h>

@class MediaControlsBluetoothListeningModeButton, MediaControlsRouteView, MediaControlsVolumeController, NSTimer;

@interface MediaControlsVolumeBackgroundViewController : CCUISliderModuleBackgroundViewController <UIGestureRecognizerDelegate, MediaControlsVolumeControllerObserver>
{
    MediaControlsRouteView *_primaryRouteView;
    MediaControlsRouteView *_secondaryRouteView;
    MediaControlsBluetoothListeningModeButton *_primaryBluetoothListeningModeButton;
    MediaControlsBluetoothListeningModeButton *_secondaryBluetoothListeningModeButton;
    NSTimer *_primaryUpdateTimer;
    NSTimer *_secondaryUpdateTimer;
    MediaControlsVolumeController *_volumeController;
}

@property(retain, nonatomic) MediaControlsVolumeController *volumeController; // @synthesize volumeController=_volumeController;
// - (void).cxx_destruct;
- (void)_springAnimate:(CDUnknownBlockType)arg1;
- (void)_performLayoutWithAnimation:(CDUnknownBlockType)arg1;
- (void)_updateVisibility;
- (void)_updateButtonAxis;
- (void)_updateButton:(id)arg1 routeType:(NSUInteger)arg2;
- (void)_configureOptionsButton:(id)arg1 forRouteType:(NSUInteger)arg2;
- (void)_configureSecondaryOptionsButtonIfNeeded;
- (void)_configurePrimaryOptionsButtonIfNeeded;
- (void)_configureRouteView:(id)arg1 forRouteType:(NSUInteger)arg2;
- (void)_configureRouteViews;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)collapseBluetoothListeningModeButtons;
- (void)secondaryBluetoothListeningModeButtonDidChangeValue:(id)arg1;
- (void)didTapSecondaryBluetoothListeningModeButton:(id)arg1;
- (void)primaryBluetoothListeningModeButtonDidChangeValue:(id)arg1;
- (void)didTapPrimaryBluetoothListeningModeButton:(id)arg1;
- (void)mediaControlsVolumeController:(id)arg1 didChangeVolumeAvailable:(BOOL)arg2 effectiveVolume:(float)arg3 forRoute:(NSUInteger)arg4;
- (void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(BOOL)arg2;
- (double)_horizontalPadding;
- (double)_verticalPadding;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

