//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, UILabel, UIView;

@interface HLPHelpSearchResultTableViewController : UITableViewController
{
    UILabel *_footerLabel;
    double _separatorValue;
    NSArray *_searchResults;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
// - (void).cxx_destruct;
- (void)preferSeparatorValue:(double)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateWithSearchText:(id)arg1 searchResults:(id)arg2;
- (void)viewDidLoad;

@end

