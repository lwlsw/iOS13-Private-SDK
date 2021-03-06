//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIBarButtonItem, UITableViewCell;
@protocol CertInfoTrustDescription, CertInfoTrustSummaryControllerDelegate;

@interface CertInfoTrustSummaryController : UITableViewController
{
    id <CertInfoTrustDescription> _description;
    id <CertInfoTrustSummaryControllerDelegate> _delegate;
    UIBarButtonItem *_doneButton;
    UITableViewCell *_headerCell;
    UITableViewCell *_descriptionCell;
    unsigned int _showsDoneButton:1;
}

@property(nonatomic) __weak id <CertInfoTrustSummaryControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)_descriptionCell;
- (id)_headerCell;
- (id)_cellForReuseIdentifier:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_actionButtonPressed:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)setActionButtonTitle:(id)arg1 destructive:(BOOL)arg2 animated:(BOOL)arg3;
@property(nonatomic) BOOL showsDoneButton;
- (id)initWithTrustDescription:(id)arg1;

@end

