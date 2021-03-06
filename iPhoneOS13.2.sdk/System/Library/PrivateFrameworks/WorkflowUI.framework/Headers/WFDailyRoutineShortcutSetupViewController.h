//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <WorkflowUI/WFDailyRoutineShortcutSetupQuestionViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFDailyRoutineShortcutSetupTriggerViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFLocationPickerViewControllerDelegate-Protocol.h>

@class CLCircularRegion, NSMutableArray, NSMutableDictionary, UINavigationController, WFDailyRoutineShortcutSetupFlow;
@protocol WFDailyRoutineShortcutSetupViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupViewController : UIViewController <WFDailyRoutineShortcutSetupQuestionViewControllerDelegate, WFDailyRoutineShortcutSetupTriggerViewControllerDelegate, WFLocationPickerViewControllerDelegate>
{
    id <WFDailyRoutineShortcutSetupViewControllerDelegate> _delegate;
    WFDailyRoutineShortcutSetupFlow *_flow;
    UINavigationController *_setupNavigationController;
    NSMutableDictionary *_actionsPerQuestionIndex;
    CLCircularRegion *_selectedRegion;
    NSMutableArray *_setupStepEvents;
}

@property(retain, nonatomic) NSMutableArray *setupStepEvents; // @synthesize setupStepEvents=_setupStepEvents;
@property(retain, nonatomic) CLCircularRegion *selectedRegion; // @synthesize selectedRegion=_selectedRegion;
@property(retain, nonatomic) NSMutableDictionary *actionsPerQuestionIndex; // @synthesize actionsPerQuestionIndex=_actionsPerQuestionIndex;
@property(retain, nonatomic) UINavigationController *setupNavigationController; // @synthesize setupNavigationController=_setupNavigationController;
@property(readonly, nonatomic) WFDailyRoutineShortcutSetupFlow *flow; // @synthesize flow=_flow;
@property(nonatomic) __weak id <WFDailyRoutineShortcutSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)submitMetrics:(BOOL)arg1;
- (id)currentStepEvent;
- (void)dailyRoutineShortcutSetupTriggerViewControllerDidSkip:(id)arg1;
- (void)dailyRoutineShortcutSetupTriggerViewControllerDidAddTrigger:(id)arg1;
- (void)dailyRoutineShortcutSetupQuestionViewControllerDidSkip:(id)arg1;
- (void)dailyRoutineShortcutSetupQuestionViewController:(id)arg1 didAddActions:(id)arg2;
- (id)selectedLocationForDailyRoutineShortcutSetupQuestionViewController:(id)arg1;
- (void)locationPickerDidCancel:(id)arg1;
- (void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2;
- (void)finishWithTrigger:(id)arg1;
- (void)didSelectCancel;
- (void)configureBackButtonOnViewController:(id)arg1;
- (void)pushToNextStep;
- (void)pushStepForQuestion:(id)arg1;
- (void)pushTriggerSetupStep;
- (long long)currentQuestionIndex;
- (void)viewDidLoad;
- (id)initWithFlow:(id)arg1;

@end

