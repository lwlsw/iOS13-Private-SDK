//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

#import <NanoTimeKitCompanion/NTKOlympusViewDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKUtilityFlatComplicationViewDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKVictoryAnalogBackgroundViewDelegate-Protocol.h>

@class NSDate, NSNumber, NTKCircularAnalogDialView, NTKOlympusTimeView, NTKRoundedCornerOverlayView, NTKVictoryAnalogBackgroundView;

@interface NTKOlympusFaceView : NTKAnalogFaceView <NTKVictoryAnalogBackgroundViewDelegate, NTKUtilityFlatComplicationViewDelegate, NTKOlympusViewDelegate>
{
    BOOL _contentLoaded;
    BOOL _trackSeconds;
    NTKOlympusTimeView *_olympusView;
    NTKVictoryAnalogBackgroundView *_analogBackgroundView;
    NTKCircularAnalogDialView *_dialView;
    NTKRoundedCornerOverlayView *_cornerView;
    NSUInteger _hour;
    NSUInteger _minute;
    NSUInteger _second;
    NSDate *_date;
    double _circleDiameter;
    NSUInteger _currentStyle;
    NSUInteger _currentDial;
    NSUInteger _currentColor;
    NSNumber *_clockTimerToken;
}

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (long long)uiSensitivity;
@property(retain, nonatomic) NSNumber *clockTimerToken; // @synthesize clockTimerToken=_clockTimerToken;
@property(nonatomic) NSUInteger currentColor; // @synthesize currentColor=_currentColor;
@property(nonatomic) NSUInteger currentDial; // @synthesize currentDial=_currentDial;
@property(nonatomic) NSUInteger currentStyle; // @synthesize currentStyle=_currentStyle;
@property(nonatomic) double circleDiameter; // @synthesize circleDiameter=_circleDiameter;
@property(nonatomic) BOOL trackSeconds; // @synthesize trackSeconds=_trackSeconds;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) NSUInteger second; // @synthesize second=_second;
@property(nonatomic) NSUInteger minute; // @synthesize minute=_minute;
@property(nonatomic) NSUInteger hour; // @synthesize hour=_hour;
@property(nonatomic) BOOL contentLoaded; // @synthesize contentLoaded=_contentLoaded;
@property(retain, nonatomic) NTKRoundedCornerOverlayView *cornerView; // @synthesize cornerView=_cornerView;
@property(retain, nonatomic) NTKCircularAnalogDialView *dialView; // @synthesize dialView=_dialView;
@property(retain, nonatomic) NTKVictoryAnalogBackgroundView *analogBackgroundView; // @synthesize analogBackgroundView=_analogBackgroundView;
@property(retain, nonatomic) NTKOlympusTimeView *olympusView; // @synthesize olympusView=_olympusView;
// - (void).cxx_destruct;
- (id)utilityBezelComplicationView;
- (double)bezelComplicationTextWidthInRadius;
- (void)_updateDialTicksForBezelText;
- (void)utilityComplicationView:(id)arg1 didChangeTextWidth:(double)arg2;
- (id)_additonalViewsToApplyDesaturationDuringComplicationEditing;
- (void)openVictoryAppFromRect:(CGRect)arg1;
- (void)logoTappedFromRect:(CGRect)arg1;
- (void)olympusView:(id)arg1 didTapAppLogoFromRect:(CGRect)arg2;
- (BOOL)_showAnalogHands;
- (BOOL)_hasWindrunnerWedge;
- (void)animateClockHandsFromDate:(id)arg1 toDate:(id)arg2 duration:(double)arg3;
- (double)_calculateDeviationBetweenHourAngle:(double)arg1 minuteAngle:(double)arg2;
- (void)applyWindrunnerMaskStartAngle:(double)arg1 endAngle:(double)arg2;
- (void)applyWindrunnerMask;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (id)customEditOptionContainerViewForSlot:(id)arg1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (void)_cleanupAfterZoom;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_setComplicationAlphaForTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)setCircularMaskForCircularDialFraction:(double)arg1 circleDiameter:(double)arg2;
- (void)updateCircularMask;
- (BOOL)isCircularDialWithBezel;
- (void)applyTransitionToCircularDialWithBezelFraction:(double)arg1;
- (double)contentViewScale;
- (void)_applyContentViewTranform:(CGAffineTransform)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4;
- (void)_updateDialBezelComplicationColor:(id)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 animateElements:(BOOL)arg4;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(NSUInteger)arg2 toColor:(NSUInteger)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromStyle:(NSUInteger)arg2 toStyle:(NSUInteger)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromDial:(NSUInteger)arg2 toDial:(NSUInteger)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)applyColorOnAnalogHands;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (double)_timeAlphaForEditMode:(long long)arg1;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (double)_dialAlphaForEditMode:(long long)arg1;
- (double)_bezelUtilityComplicationAlphaForEditMode:(long long)arg1;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (void)configureComplicationAlphaFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)layoutSubviews;
- (BOOL)_wantsStatusBarIconShadow;
- (void)_configureTimeView:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)_stopClockUpdates;
- (void)setTimeOffset:(double)arg1;
- (void)updateHourComponentsWithDate:(id)arg1;
- (void)_startClockUpdates;
- (void)_applyDataMode;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (BOOL)_needsForegroundContainerView;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)tearDownDialView;
- (void)_tearDownOlympusView;
- (void)createOlympusViewIfNeeded;
- (void)_tearDownAnalogView;
- (void)_setupDialViewIfNeeded;
- (void)_createAnalogBackgroundIfNeeded;
- (void)configureViewsForEditing;
- (void)setupViewsForCurrentState;
- (void)createAndRemoveViewsForCurrentStateIfNeeded;
- (void)_removeViews;
- (void)_setupViews;
- (void)_handleSignificantTimeChanged;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)dealloc;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

@end

