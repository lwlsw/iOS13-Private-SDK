//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFSettingsCell.h>

@class UISwitch;

@interface WFSettingsSwitchCell : WFSettingsCell
{
    UISwitch *_switchControl;
}

@property(readonly, nonatomic) __weak UISwitch *switchControl; // @synthesize switchControl=_switchControl;
// - (void).cxx_destruct;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (NSUInteger)accessibilityTraits;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

