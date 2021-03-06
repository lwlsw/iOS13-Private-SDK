//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class MPUDataSource, MPUQueryDataSource;

@interface MPUDataSourceViewController : UIViewController <UIStateRestoring, UIViewControllerRestoration>
{
    BOOL _hasEverReloadedData;
    BOOL _visible;
    BOOL _shouldReloadWhenVisible;
    MPUDataSource *_dataSource;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(retain, nonatomic) MPUDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) BOOL shouldReloadWhenVisible; // @synthesize shouldReloadWhenVisible=_shouldReloadWhenVisible;
@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
// - (void).cxx_destruct;
- (void)_setDataSource:(id)arg1 shouldReloadData:(BOOL)arg2;
- (void)_MPUStandardViewController_dataSourceDidInvalidateNotification:(id)arg1;
- (void)_MPUStandardViewController_dataSourceWillInvalidateNotification:(id)arg1;
- (void)reloadData;
- (void)dataSourceDidInvalidate;
- (void)dataSourceWillInvalidate;
@property(readonly, nonatomic) MPUQueryDataSource *queryDataSource;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

@end

