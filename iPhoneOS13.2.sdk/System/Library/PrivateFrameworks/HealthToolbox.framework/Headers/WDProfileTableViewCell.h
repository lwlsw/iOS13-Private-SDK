//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSString, UIButton, UIColor, UILabel, UITextField, UIView;

__attribute__((visibility("hidden")))
@interface WDProfileTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    UILabel *_displayNameLabel;
    UIButton *_clearButton;
    UIColor *_normalDisplayValueColor;
    UIColor *_selectedDisplayValueColor;
    BOOL _shouldUseSelectedColorForDisplayValue;
    BOOL _shouldDisplayClearButtonDuringEditing;
    NSString *_displayName;
    NSString *_displayValue;
    NSString *_placeholderValue;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    UITextField *_displayValueTextField;
}

+ (double)notEditingRightEdgeMargin;
+ (double)editingRightEdgeMargin;
@property(retain, nonatomic) UITextField *displayValueTextField; // @synthesize displayValueTextField=_displayValueTextField;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) BOOL shouldDisplayClearButtonDuringEditing; // @synthesize shouldDisplayClearButtonDuringEditing=_shouldDisplayClearButtonDuringEditing;
@property(nonatomic) BOOL shouldUseSelectedColorForDisplayValue; // @synthesize shouldUseSelectedColorForDisplayValue=_shouldUseSelectedColorForDisplayValue;
@property(retain, nonatomic) NSString *placeholderValue; // @synthesize placeholderValue=_placeholderValue;
@property(retain, nonatomic) NSString *displayValue; // @synthesize displayValue=_displayValue;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
// - (void).cxx_destruct;
- (void)_updateClearButtonState;
- (void)removeClearButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)addClearButtonTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)_updateForCurrentSizeCategory;
- (void)_setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

