//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FIUIUnitManager;

@interface FIUIFormattingManager : NSObject
{
    FIUIUnitManager *_unitManager;
}

+ (id)localizedShortPowerUnitString;
+ (id)localizedShortCadenceUnitStringForActivityType:(NSUInteger)arg1;
+ (id)percentStringWithNumber:(id)arg1;
+ (id)stringWithNumber:(id)arg1 decimalPrecision:(NSUInteger)arg2 roundingMode:(NSUInteger)arg3;
+ (id)stringWithNumber:(id)arg1 decimalPrecision:(NSUInteger)arg2;
@property(readonly, nonatomic) FIUIUnitManager *unitManager; // @synthesize unitManager=_unitManager;
// - (void).cxx_destruct;
- (id)localizedInSessionDescriptionForGroundElevation:(NSUInteger)arg1;
- (id)localizedInSessionDescriptionForElevation:(NSUInteger)arg1;
- (id)localizedDistanceByStrokeStyle:(id)arg1 isPoolSwim:(BOOL)arg2;
- (id)localizedHeartRateUnitString;
- (id)localizedStringWithBeatsPerMinute:(double)arg1 requirePositiveValue:(BOOL)arg2;
- (id)localizedStringWithBeatsPerMinute:(double)arg1;
- (id)localizedStringWithHeartRate:(id)arg1 unitStyle:(NSUInteger)arg2 requirePositiveValue:(BOOL)arg3;
- (id)localizedStringWithHeartRate:(id)arg1 unitStyle:(NSUInteger)arg2;
- (id)localizedStringWithHeartRate:(id)arg1;
- (id)localizedTitleForSplit:(id)arg1 unit:(id)arg2 lapIndex:(long long)arg3 useShortFormat:(BOOL)arg4;
- (id)localizedPaceValueForSplit:(id)arg1 activityType:(id)arg2;
- (id)localizedShareTextWithWorkout:(id)arg1 shareValue:(id)arg2;
- (id)_localizedOpenGoalKeyMetricStringForWorkout:(id)arg1 withUnitStyle:(NSUInteger)arg2;
- (id)_localizedKeyMetricCyclingStringWithWorkout:(id)arg1 withUnitStyle:(NSUInteger)arg2;
- (id)_localizedKeyMetricDurationStringWithWorkout:(id)arg1;
- (id)_localizedKeyMetricDistanceStringForWorkout:(id)arg1 withUnitStyle:(NSUInteger)arg2;
- (id)_localizedKeyMetricEnergyBurnedStringForWorkout:(id)arg1 withUnitStyle:(NSUInteger)arg2;
- (id)localizedKeyMetricStringForWorkout:(id)arg1 unitStyle:(NSUInteger)arg2;
- (id)localizedGoalDescriptionForGoalType:(NSUInteger)arg1 goalValue:(double)arg2 activityType:(id)arg3;
- (BOOL)_workoutSupportsDistanceMetricForGoalDisplay:(id)arg1;
- (NSUInteger)_effectiveGoalTypeForWorkout:(id)arg1;
- (id)_localizedEnergyDescriptionForWorkout:(id)arg1 withValue:(id )arg2 appendActivityType:(BOOL)arg3 activityTypeString:(id)arg4;
- (id)_localizedTimeDescriptionForWorkout:(id)arg1 withValue:(id )arg2 appendActivityType:(BOOL)arg3 activityTypeString:(id)arg4;
- (id)localizedGoalDescriptionForWorkout:(id)arg1 withValue:(id )arg2 appendActivityType:(BOOL)arg3;
- (id)_energyBurnedUnitStringForUnit:(id)arg1 useShortString:(BOOL)arg2;
- (id)localizedLongActiveEnergyUnitStringWithTextCase:(NSUInteger)arg1;
- (id)localizedLongActiveEnergyUnitString;
- (id)localizedShortTypeDistinguishingUnitStringForEnergyType:(NSUInteger)arg1;
- (id)localizedShortActiveEnergyUnitString;
- (id)localizedStringWithEnergyInCalories:(double)arg1 energyType:(NSUInteger)arg2 unitStyle:(NSUInteger)arg3;
- (id)localizedStringWithEnergy:(id)arg1 energyType:(NSUInteger)arg2 unitStyle:(NSUInteger)arg3;
- (id)localizedStringWithActiveEnergy:(id)arg1 unitStyle:(NSUInteger)arg2;
- (id)localizedStringWithActiveEnergy:(id)arg1;
- (id)localizedStringWithActiveHours:(id)arg1;
- (id)localizedStringWithBriskMinutes:(id)arg1;
- (double)caloriesForEnergyBurnedInUserUnit:(double)arg1;
- (double)energyBurnedInUserUnitForCalories:(double)arg1;
- (double)roundedDailyMoveGoalForCalories:(double)arg1;
- (id)localizedStringWithPersonHeight:(id)arg1 unitStyle:(long long)arg2;
- (NSUInteger)userDistanceUnitForSwimmingLapLength;
- (id)localizedDistinguishingPaceUnitStringWithMetricType:(NSUInteger)arg1 distanceType:(NSUInteger)arg2 distanceUnit:(NSUInteger)arg3 paceFormat:(long long)arg4 abbreviated:(BOOL)arg5;
- (id)localizedPaceUnitStringWithDistanceType:(NSUInteger)arg1 distanceUnit:(NSUInteger)arg2 unitStyle:(long long)arg3;
- (id)localizedPaceUnitStringWithDistanceType:(NSUInteger)arg1 distanceUnit:(NSUInteger)arg2;
- (id)localizedSpeedUnitStringForDistanceUnit:(NSUInteger)arg1;
- (id)localizedSpeedUnitStringForActivityType:(id)arg1;
- (id)localizedSpeedUnitString;
- (id)localizedShortTypeDistinguishingUnitStringForPowerType:(NSUInteger)arg1 unitString:(id)arg2;
- (id)localizedPowerUnitStringForPower:(double)arg1;
- (id)localizedStrokeCountStringWithCount:(long long)arg1 overDistance:(id)arg2 paceFormat:(long long)arg3;
- (id)localizedSwimmingPaceStringWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3;
- (double)speedPerHourWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3;
- (id)localizedPaceAndUnitStringForSpeed:(double)arg1 activityType:(id)arg2;
- (id)localizedPaceStringWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3;
- (id)localizedLongUnitStringForDistanceUnit:(NSUInteger)arg1 distanceInUnit:(double)arg2 textCase:(NSUInteger)arg3;
- (id)localizedLongUnitStringForDistanceUnit:(NSUInteger)arg1 distanceInUnit:(double)arg2;
- (id)localizedShortUnitStringForDistanceType:(NSUInteger)arg1;
- (id)localizedShortUnitStringForDistanceUnit:(NSUInteger)arg1 textCase:(NSUInteger)arg2;
- (id)localizedShortUnitStringForDistanceUnit:(NSUInteger)arg1;
- (id)_localizedStringWithDistanceUnit:(NSUInteger)arg1 distanceInUnit:(double)arg2 unitStyle:(long long)arg3 decimalPrecision:(NSUInteger)arg4 roundingMode:(NSUInteger)arg5;
- (NSUInteger)_naturalScaleUnitForDistanceInMeters:(double)arg1 distanceType:(NSUInteger)arg2;
- (id)localizedNaturalScaleStringWithDistanceInMeters:(double)arg1 distanceType:(NSUInteger)arg2 unitStyle:(NSUInteger)arg3 usedUnit:(NSUInteger )arg4;
- (id)localizedStringWithDistanceInMeters:(double)arg1 distanceType:(NSUInteger)arg2 unitStyle:(NSUInteger)arg3 roundingMode:(NSUInteger)arg4;
- (id)localizedStringWithDistanceInMeters:(double)arg1 distanceType:(NSUInteger)arg2 unitStyle:(NSUInteger)arg3;
- (id)_stringByReplacingThirtyThreeAndAThirdIfNeeded:(id)arg1 distanceInMeters:(double)arg2 distanceUnit:(NSUInteger)arg3;
- (id)localizedStringWithDistanceInMeters:(double)arg1 distanceUnit:(NSUInteger)arg2 unitStyle:(NSUInteger)arg3 decimalPrecision:(NSUInteger)arg4 roundingMode:(NSUInteger)arg5;
- (id)localizedStringWithDistanceInMeters:(double)arg1 distanceUnit:(NSUInteger)arg2 unitStyle:(NSUInteger)arg3 decimalPrecision:(NSUInteger)arg4;
- (id)stringWithDuration:(double)arg1 durationFormat:(NSUInteger)arg2;
- (id)localizationKeyForDistanceBaseKey:(id)arg1 distanceType:(NSUInteger)arg2;
- (id)localizationKeyForEnergyBaseKey:(id)arg1;
- (id)applyTextCase:(NSUInteger)arg1 toString:(id)arg2;
- (id)decimalSeparator;
- (id)initWithUnitManager:(id)arg1;

@end

