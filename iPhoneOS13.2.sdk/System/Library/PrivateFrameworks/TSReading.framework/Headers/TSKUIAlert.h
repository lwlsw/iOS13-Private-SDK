//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKAbstractAlert.h>


@class UIAlertView;

@interface TSKUIAlert : TSKAbstractAlert <UIAlertViewDelegate>
{
    UIAlertView *_alertView;
}

+ (id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;
+ (void)setUseMockUIAlert:(BOOL)arg1;
- (void)willPresentAlertView:(id)arg1;
- (void)didPresentAlertView:(id)arg1;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2;
- (long long)firstOtherButtonIndex;
- (void)setCancelButtonIndex:(long long)arg1;
- (long long)cancelButtonIndex;
- (long long)numberOfButtons;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (void)showAlert;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 otherOtherButtonTitle:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;

@end

