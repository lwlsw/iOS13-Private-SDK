//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, PXNavigationListDataSectionManager, UIBarButtonItem, UINavigationController;
@protocol PXNavigationListItem;

@protocol PXNavigationRoot 
@property(readonly, nonatomic) UINavigationController *navigationController;
@property(retain, nonatomic) UIBarButtonItem *navigationDisplayModeButtonItem;
@property(readonly, nonatomic) NSString *navigationIdentifier;
@property(readonly, nonatomic) NSString *navigationTitle;

@optional
@property(readonly, nonatomic) PXNavigationListDataSectionManager *navigationListDataSourceManager;
- (void)selectNavigationListItem:(id <PXNavigationListItem>)arg1 hintIndex:(long long)arg2 animated:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
@end
