//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class AKController, NSArray, UITableView;

@interface AKLineStylesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    AKController *_controller;
    UITableView *_tableView;
    NSArray *_lineWidthTags;
}

+ (id)generateLineImageForTag:(long long)arg1 selected:(BOOL)arg2;
@property(retain, nonatomic) NSArray *lineWidthTags; // @synthesize lineWidthTags=_lineWidthTags;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak AKController *controller; // @synthesize controller=_controller;
// - (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)selectedLineWidthChanged:(long long)arg1;
- (long long)currentLineWidthTag;
- (void)selectRowForTag:(long long)arg1;
- (id)indexPathForLineWidthTag:(long long)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1;

@end

