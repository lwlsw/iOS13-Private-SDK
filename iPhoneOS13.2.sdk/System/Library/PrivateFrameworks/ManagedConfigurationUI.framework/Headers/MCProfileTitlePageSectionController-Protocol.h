//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UITableView, UITableViewCell;

@protocol MCProfileTitlePageSectionController <NSObject>
- (double)heightForRowAtIndex:(NSUInteger)arg1;
- (double)heightForHeader;
- (NSString *)titleForHeader;
- (UITableViewCell *)cellForRowAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfRows;
- (void)registerCellClassWithTableView:(UITableView *)arg1;
@end

