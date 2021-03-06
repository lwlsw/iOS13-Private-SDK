//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernReasonDataSource : NSObject <UITableViewDataSource>
{
    UITableView *_tableView;
    NSArray *_reasons;
    NSString *_selectReasonTitle;
    NSString *_selectReasonSubtitle;
}

@property(copy, nonatomic) NSString *selectReasonSubtitle; // @synthesize selectReasonSubtitle=_selectReasonSubtitle;
@property(copy, nonatomic) NSString *selectReasonTitle; // @synthesize selectReasonTitle=_selectReasonTitle;
@property(copy, nonatomic) NSArray *reasons; // @synthesize reasons=_reasons;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
// - (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithTableView:(id)arg1;
- (id)init;

@end

