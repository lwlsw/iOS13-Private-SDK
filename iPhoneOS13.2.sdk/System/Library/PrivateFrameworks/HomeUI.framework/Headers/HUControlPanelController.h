//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUControlViewDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet;
@protocol HUControlPanelControllerDelegate;

@interface HUControlPanelController : NSObject <HUControlViewDelegate>
{
    NSMutableSet *_allItems;
    id <HUControlPanelControllerDelegate> _delegate;
    NSSet *_configurations;
    NSMutableDictionary *_interactionStateByControlID;
}

@property(readonly, nonatomic) NSMutableDictionary *interactionStateByControlID; // @synthesize interactionStateByControlID=_interactionStateByControlID;
@property(readonly, nonatomic) NSSet *configurations; // @synthesize configurations=_configurations;
@property(readonly, nonatomic) NSSet *allItems; // @synthesize allItems=_allItems;
@property(readonly, nonatomic) __weak id <HUControlPanelControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (void)controlViewDidEndUserInteraction:(id)arg1;
- (void)controlViewDidBeginUserInteraction:(id)arg1;
- (void)_updateWriteStateForControlItem:(id)arg1 controlPanelItem:(id)arg2;
- (void)_updateWriteStateForControlView:(id)arg1;
- (id)_createWriteThrottleForControlItem:(id)arg1 controlPanelItem:(id)arg2;
- (id)_valueTransformerForControlItem:(id)arg1 controlPanelItem:(id)arg2;
- (id)_configurationForItem:(id)arg1;
- (id)_createConfigurations;
- (id)_controlItemForControlView:(id)arg1;
- (id)_controlPanelItemForControlView:(id)arg1;
- (void)_updateStateForControlView:(id)arg1 controlPanelItem:(id)arg2;
- (id)sectionFooterForItem:(id)arg1 forSourceItem:(id)arg2;
- (id)sectionTitleForItem:(id)arg1 forSourceItem:(id)arg2;
- (BOOL)shouldShowSectionFooterForItem:(id)arg1;
- (BOOL)shouldShowSectionTitleForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (BOOL)shouldDisplayItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

