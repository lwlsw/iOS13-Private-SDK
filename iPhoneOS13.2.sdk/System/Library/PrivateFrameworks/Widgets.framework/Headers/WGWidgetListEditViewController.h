//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSArray, NSMutableArray, UINavigationController, UITableViewController;
@protocol WGWidgetListEditViewControllerDataSource, WGWidgetListEditViewControllerDelegate;

@interface WGWidgetListEditViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UINavigationController *_navigationController;
    UITableViewController *_tableViewController;
    NSMutableArray *_enabledTodayItemIDs;
    NSMutableArray *_favoriteItemIDs;
    NSMutableArray *_disabledItemIDs;
    NSArray *_groupIDs;
    double _contentMinY;
    NSArray *_originalFavoriteItemIDs;
    BOOL _dismissingDueToInterfaceAction;
    BOOL _showsPinSection;
    BOOL _showsFavorites;
    BOOL _widgetsPinnedOriginally;
    BOOL _widgetsPinned;
    id <WGWidgetListEditViewControllerDataSource> _dataSource;
    id <WGWidgetListEditViewControllerDelegate> _delegate;
    id _statusBarColorAssertion;
}

@property(nonatomic, getter=areWidgetsPinned) BOOL widgetsPinned; // @synthesize widgetsPinned=_widgetsPinned;
@property(nonatomic, getter=wereWidgetsPinnedOriginally) BOOL widgetsPinnedOriginally; // @synthesize widgetsPinnedOriginally=_widgetsPinnedOriginally;
@property(nonatomic) BOOL showsFavorites; // @synthesize showsFavorites=_showsFavorites;
@property(nonatomic) BOOL showsPinSection; // @synthesize showsPinSection=_showsPinSection;
@property(retain, nonatomic, getter=_statusBarColorAssertion, setter=_setStatusBarColorAssertion:) id statusBarColorAssertion; // @synthesize statusBarColorAssertion=_statusBarColorAssertion;
@property(nonatomic, getter=_isDismissingDueToInterfaceAction, setter=_setDismissingDueToInterfaceAction:) BOOL dismissingDueToInterfaceAction; // @synthesize dismissingDueToInterfaceAction=_dismissingDueToInterfaceAction;
@property(nonatomic) __weak id <WGWidgetListEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WGWidgetListEditViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)pinSwitchChanaged:(id)arg1;
- (id)_widgetListEditViewTableHeaderView;
- (long long)_compareItemWithIdentifier:(id)arg1 andItemWithIdentifierConsideringIsNew:(id)arg2;
- (BOOL)_isNewItem:(id)arg1;
- (long long)_indexOfLastEnabledWidgetInSection:(NSUInteger)arg1;
- (long long)_indexOfFirstEnabledWidgetInSection:(NSUInteger)arg1;
- (NSUInteger)_indexForInsertingItemWithIdentifier:(id)arg1 intoArray:(id)arg2;
- (id)_itemIdentifierForIndexPath:(id)arg1;
- (void)_disableItemAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)_enableItemAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (id)_indexPathForItemWithIdentifier:(id)arg1;
- (id)_itemIdentifiersInSection:(NSUInteger)arg1;
- (NSUInteger)_sectionIndexForGroupKey:(id)arg1;
- (id)_groupKeyForSectionAtIndex:(NSUInteger)arg1;
- (void)_saveItemState;
- (void)_acknowledgeItemsAndResetNewWidgetsCount;
- (void)_saveItemArrangement;
- (void)_loadItems;
- (id)_enabledItemIdentifiersForGroupID:(id)arg1;
- (void)_dismissWidgetListEditView;
- (void)_cancelWidgetListEditView;
- (void)_dismissDueToInterfaceActionAndAcknowledgeItemsSavingItemState:(BOOL)arg1;
- (void)_acknowledgeItemsSavingItemState:(BOOL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)disabledWidgetsSection;
- (long long)favoritesSection;
- (long long)todaySection;
- (long long)pinSection;
- (BOOL)showsFavoritesSection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (long long)_layoutMode;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

