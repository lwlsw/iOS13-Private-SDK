//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKPaymentSetupFieldCell;

@protocol PKPaymentSetupFieldCellDelegate <NSObject>

@optional
- (void)fieldCellDidTapButton:(PKPaymentSetupFieldCell *)arg1;
- (BOOL)fieldCellEditableTextFieldShouldClear:(PKPaymentSetupFieldCell *)arg1;
- (BOOL)fieldCellEditableTextFieldShouldReturn:(PKPaymentSetupFieldCell *)arg1;
- (void)fieldCellEditableTextFieldValueDidChange:(PKPaymentSetupFieldCell *)arg1;
- (BOOL)fieldCellEditableTextFieldShouldBeginEditing:(PKPaymentSetupFieldCell *)arg1;
@end

