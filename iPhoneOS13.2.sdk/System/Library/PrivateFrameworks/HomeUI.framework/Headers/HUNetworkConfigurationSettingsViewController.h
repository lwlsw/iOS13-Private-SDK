//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

@class HUNetworkConfigurationSettingsModuleController;

@interface HUNetworkConfigurationSettingsViewController : HUItemTableViewController
{
    HUNetworkConfigurationSettingsModuleController *_networkConfigurationSettingsModuleController;
}

@property(retain, nonatomic) HUNetworkConfigurationSettingsModuleController *networkConfigurationSettingsModuleController; // @synthesize networkConfigurationSettingsModuleController=_networkConfigurationSettingsModuleController;
// - (void).cxx_destruct;
- (void)updateNetworkConfigurationSettingsModuleFooter;
- (void)itemManagerDidFinishUpdate:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithNetworkConfigurationGroupItem:(id)arg1;

@end

