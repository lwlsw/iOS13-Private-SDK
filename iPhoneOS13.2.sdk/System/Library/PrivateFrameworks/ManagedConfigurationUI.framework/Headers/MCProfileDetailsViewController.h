//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>

@class MCUIProfile, NSArray;

__attribute__((visibility("hidden")))
@interface MCProfileDetailsViewController : UITableViewController <PSStateRestoration>
{
    BOOL _showTitleIfOnlyOneSection;
    BOOL _viewControllerCanPop;
    int _mode;
    double _tableViewBottomInset;
    MCUIProfile *_UIProfile;
    NSArray *_sections;
}

@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) BOOL viewControllerCanPop; // @synthesize viewControllerCanPop=_viewControllerCanPop;
@property(nonatomic) BOOL showTitleIfOnlyOneSection; // @synthesize showTitleIfOnlyOneSection=_showTitleIfOnlyOneSection;
@property(retain, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
@property(nonatomic) double tableViewBottomInset; // @synthesize tableViewBottomInset=_tableViewBottomInset;
@property(nonatomic) int mode; // @synthesize mode=_mode;
// - (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_profileChanged:(id)arg1;
- (void)reloadSectionArray;
- (void)setUIProfile:(id)arg1 mode:(int)arg2;
- (void)setProfileDetailsMode:(int)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_setup;
- (id)initWithStyle:(long long)arg1;

@end

