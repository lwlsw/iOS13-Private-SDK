//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupFieldCell.h>

@class UIButton;

@interface PKPaymentSetupBuiltInPrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell
{
    BOOL _showsCameraCaptureButton;
    UIButton *_cameraCaptureButton;
}

@property(readonly, retain, nonatomic) UIButton *cameraCaptureButton; // @synthesize cameraCaptureButton=_cameraCaptureButton;
@property(nonatomic) BOOL showsCameraCaptureButton; // @synthesize showsCameraCaptureButton=_showsCameraCaptureButton;
// - (void).cxx_destruct;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange *)arg2 replacementString:(id)arg3;
- (void)setEnabled:(BOOL)arg1;
- (void)setPaymentSetupField:(id)arg1;
- (void)dealloc;
- (id)init;

@end

