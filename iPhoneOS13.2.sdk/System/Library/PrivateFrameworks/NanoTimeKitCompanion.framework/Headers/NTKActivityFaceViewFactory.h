//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKUtilityComplicationFactoryDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKWellnessTimelineModelSubscriber-Protocol.h>

@class CLKDevice, NTKUtilityComplicationFactory, NTKWellnessEntryModel;
@protocol NTKActivityFaceViewFactoryDelegate, OS_dispatch_source;

@interface NTKActivityFaceViewFactory : NSObject <NTKUtilityComplicationFactoryDelegate, NTKWellnessTimelineModelSubscriber>
{
    NTKWellnessEntryModel *_nowEntryModel;
    BOOL _wantsUpdateNowEntryModelNextLive;
    double _lastWristRaiseTime;
    double _wristRaiseTimoutDuration;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    BOOL _analog;
    BOOL _hasBeenLiveOrOnDeck;
    BOOL _isLoadingData;
    BOOL _showsCanonicalContent;
    BOOL _showsLockedContent;
    CLKDevice *_device;
    id <NTKActivityFaceViewFactoryDelegate> _delegate;
    long long _dataMode;
}

+ (BOOL)userActiveEnergyIsCalories;
+ (id)userActiveEnergyUnit;
+ (id)prelaunchApplicationIdentifiers;
+ (void)prewarmForDevice:(id)arg1;
+ (id)sharedRingsViewRenderer;
@property(nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) __weak id <NTKActivityFaceViewFactoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL showsLockedContent; // @synthesize showsLockedContent=_showsLockedContent;
@property(nonatomic) BOOL showsCanonicalContent; // @synthesize showsCanonicalContent=_showsCanonicalContent;
@property(nonatomic) BOOL isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) BOOL hasBeenLiveOrOnDeck; // @synthesize hasBeenLiveOrOnDeck=_hasBeenLiveOrOnDeck;
@property(retain, nonatomic) NTKUtilityComplicationFactory *complicationFactory; // @synthesize complicationFactory=_complicationFactory;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) BOOL analog; // @synthesize analog=_analog;
// - (void).cxx_destruct;
- (id)debugStringForEntry:(id)arg1;
- (id)_complicationSlots;
- (id)_colorComplicationSlots;
- (id)_utilityComplicationSlots;
- (long long)keylineStyleForComplicationSlot:(id)arg1;
- (id)_slotForUtilitySlot:(long long)arg1;
- (long long)_utilitySlotForSlot:(id)arg1;
- (void)_configureComplicationFactory:(id)arg1;
- (void)launchActivityApp;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (double)faceView:(id)arg1 keylineCornerRadiusForComplicationSlot:(id)arg2;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (NSUInteger)faceView:(id)arg1 keylineLabelAlignmentForComplicationSlot:(id)arg2;
- (long long)faceView:(id)arg1 legacyLayoutOverrideforComplicationType:(NSUInteger)arg2 slot:(id)arg3;
- (void)faceView:(id)arg1 configureComplicationView:(id)arg2 forSlot:(id)arg3;
- (id)faceView:(id)arg1 newLegacyViewForComplication:(id)arg2 family:(long long)arg3 slot:(id)arg4;
- (double)_lisaGapForState:(long long)arg1;
- (double)_edgeGapForState:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)curvedMaskForSlot:(id)arg1;
- (void)curvedCircleRadius:(double )arg1 centerAngle:(double )arg2 maxAngularWidth:(double )arg3 circleCenter:(CGPoint )arg4 interior:(BOOL )arg5 forSlot:(id)arg6;
- (BOOL)_slotUsesCurvedText:(long long)arg1;
- (id)_dateComplicationFontForStyle:(NSUInteger)arg1;
- (BOOL)slotUsesCurvedText:(long long)arg1;
- (id)utilityDateComplicationFontForDateStyle:(NSUInteger)arg1;
- (void)_resetWristRaiseAnimationTimeout;
- (BOOL)shouldPerformFromZeroWristRaise;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)dealloc;
- (void)_handleActiveEnergyUnitChange;
- (id)_canonicalEntryModel;
@property(readonly, nonatomic) NTKWellnessEntryModel *currentEntryModel;
- (void)_updateRingsForCurrentEntryModelAnimated:(BOOL)arg1;
- (void)_loadCurrentEntryForce:(BOOL)arg1;
- (void)_loadCurrentEntry;
- (void)wellnessTimeLineModelCurrentEntryModelUpdated:(id)arg1;
- (id)initForAnalog:(BOOL)arg1 forDevice:(id)arg2;

@end

