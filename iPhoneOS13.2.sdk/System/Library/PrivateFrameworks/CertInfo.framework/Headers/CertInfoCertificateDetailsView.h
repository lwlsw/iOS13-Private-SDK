//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSMutableArray, UITableView;

@interface CertInfoCertificateDetailsView : UIView <UITableViewDataSource>
{
    UITableView *_tableView;
    NSMutableArray *_tableSections;
}

// - (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_detailForIndexPath:(id)arg1;
- (id)_titleForIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1 certificateProperties:(id)arg2;
- (id)_sectionsFromProperties:(id)arg1;
- (id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2;
- (id)_cellInfosForSection:(id)arg1;
- (void)appendInfoFromCertView:(id)arg1;

@end

