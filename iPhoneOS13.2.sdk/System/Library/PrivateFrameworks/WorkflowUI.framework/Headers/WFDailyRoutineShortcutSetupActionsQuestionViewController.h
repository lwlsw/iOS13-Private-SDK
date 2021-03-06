//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import <WorkflowUI/CNContactPickerDelegate-Protocol.h>
#import <WorkflowUI/WFDailyRoutineShortcutSetupQuestionChildViewController-Protocol.h>

@class WFDailyRoutineShortcutSetupActionsQuestion;
@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupActionsQuestionViewController : OBWelcomeController <CNContactPickerDelegate, WFDailyRoutineShortcutSetupQuestionChildViewController>
{
    id <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> _delegate;
    WFDailyRoutineShortcutSetupActionsQuestion *_question;
}

@property(readonly, nonatomic) WFDailyRoutineShortcutSetupActionsQuestion *question; // @synthesize question=_question;
@property(nonatomic) __weak id <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)didSelectSkipButton;
- (void)didSelectAddButton;
@property(readonly, nonatomic) BOOL parentShouldShowSkipButton;
- (id)initWithQuestion:(id)arg1;

@end

