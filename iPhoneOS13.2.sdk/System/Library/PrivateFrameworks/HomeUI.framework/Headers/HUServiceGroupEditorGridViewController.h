//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class HFServiceGroupBuilder, HUServiceGroupEditorGridItemManager;
@protocol HUServiceGroupEditorGridViewControllerDelegate;

@interface HUServiceGroupEditorGridViewController : HUSelectableServiceGridViewController
{
    HFServiceGroupBuilder *_serviceGroupBuilder;
}

@property(readonly, nonatomic) HFServiceGroupBuilder *serviceGroupBuilder; // @synthesize serviceGroupBuilder=_serviceGroupBuilder;
- (id)_serviceVendorItemForItem:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (void)didDeselectItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)viewDidLoad;
- (id)initWithServiceGroupBuilder:(id)arg1;
- (id)initWithServiceGridItemManager:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <HUServiceGroupEditorGridViewControllerDelegate> delegate;
@property(retain, nonatomic) HUServiceGroupEditorGridItemManager *itemManager; // @dynamic itemManager;

@end
