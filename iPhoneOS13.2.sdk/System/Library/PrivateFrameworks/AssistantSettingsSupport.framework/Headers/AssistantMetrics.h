//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETEventProperty, PETScalarEventTracker;

@interface AssistantMetrics : NSObject
{
    PETEventProperty *_toggleTrackerNameProperty;
    PETEventProperty *_detailToggleTrackerNameProperty;
    PETEventProperty *_onOffProperty;
    PETEventProperty *_confirmedTrueFalseProperty;
    PETEventProperty *_siriSourceProperty;
    PETEventProperty *_foundInAppsProperty;
    PETScalarEventTracker *_visitTracker;
    PETScalarEventTracker *_enableSiriTracker;
    PETScalarEventTracker *_disableSiriTracker;
    PETScalarEventTracker *_startEnrollmentTracker;
    PETScalarEventTracker *_toggleTracker;
    PETScalarEventTracker *_detailVisitTracker;
    PETScalarEventTracker *_detailVisitFoundInAppsTracker;
    PETScalarEventTracker *_detailToggleFoundInAppsTracker;
    PETScalarEventTracker *_detailToggleSiriKitTracker;
    PETScalarEventTracker *_detailToggleSearchTracker;
}

+ (void)didDetailToggle:(id)arg1 bundleId:(id)arg2 on:(BOOL)arg3;
+ (void)didDetailVisit:(id)arg1;
+ (void)didToggle:(id)arg1 on:(BOOL)arg2;
+ (void)didStartEnrollment:(BOOL)arg1;
+ (void)didDisableSiriConfirmed:(BOOL)arg1 source:(id)arg2;
+ (void)didEnableSiriConfirmed:(BOOL)arg1 source:(id)arg2;
+ (void)didVisit;
+ (id)sharedMetrics;
// - (void).cxx_destruct;
- (void)logDetailToggle:(id)arg1 bundleId:(id)arg2 on:(BOOL)arg3;
- (void)logDetailVisit:(id)arg1;
- (void)logToggle:(id)arg1 on:(BOOL)arg2;
- (void)logStartEnrollment:(BOOL)arg1;
- (void)logDisableSiriConfirmed:(BOOL)arg1 source:(id)arg2;
- (void)logEnableSiriConfirmed:(BOOL)arg1 source:(id)arg2;
- (void)logVisit;
- (id)__detailToggleSiriKitTracker;
- (id)__detailToggleSearchTracker;
- (id)__detailToggleFoundInAppsTracker;
- (id)__detailVisitFoundInAppsTracker;
- (id)__detailVisitTracker;
- (id)__startEnrollmentTracker;
- (id)__toggleTracker;
- (id)__disableSiriTracker;
- (id)__enableSiriTracker;
- (id)__visitTracker;
- (id)__foundInAppsProperty;
- (id)__siriSourceProperty;
- (id)__detailToggleTrackerNameProperty;
- (id)__toggleTrackerNameProperty;
- (id)__confirmedTrueFalseProperty;
- (id)__onOffProperty;

@end

