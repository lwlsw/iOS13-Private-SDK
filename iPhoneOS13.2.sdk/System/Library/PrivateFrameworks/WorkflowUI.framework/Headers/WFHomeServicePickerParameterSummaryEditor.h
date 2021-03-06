//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFModuleSummaryEditor.h>

#import <WorkflowUI/HUServicePickerViewControllerDelegate-Protocol.h>

@class HMHome, UIViewController;

@interface WFHomeServicePickerParameterSummaryEditor : WFModuleSummaryEditor <HUServicePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    UIViewController *_presentedViewController;
    HMHome *_home;
}

@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
// - (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)servicePickerDidCancel:(id)arg1;
- (void)servicePickerDidFinish:(id)arg1 selectedServices:(id)arg2;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4;

@end

