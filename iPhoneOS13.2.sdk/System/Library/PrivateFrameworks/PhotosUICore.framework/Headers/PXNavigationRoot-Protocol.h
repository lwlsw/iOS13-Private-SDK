//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, PXNavigationListDataSectionManager, UIBarButtonItem, UINavigationController;
@protocol PXNavigationListItem;

@protocol PXNavigationRoot <NSObject>
@property(readonly, nonatomic) UINavigationController *navigationController;
@property(retain, nonatomic) UIBarButtonItem *navigationDisplayModeButtonItem;
@property(readonly, nonatomic) NSString *navigationIdentifier;
@property(readonly, nonatomic) NSString *navigationTitle;

@optional
@property(readonly, nonatomic) PXNavigationListDataSectionManager *navigationListDataSourceManager;
- (void)selectNavigationListItem:(id <PXNavigationListItem>)arg1 hintIndex:(long long)arg2 animated:(BOOL)arg3 completion:(void (^)(BOOL))arg4;
@end

