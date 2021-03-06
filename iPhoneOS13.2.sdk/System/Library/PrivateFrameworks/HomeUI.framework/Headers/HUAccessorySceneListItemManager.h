//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFItem;
@protocol HFServiceLikeItem;

@interface HUAccessorySceneListItemManager : HFItemManager
{
    HFItem<HFServiceLikeItem> *_serviceLikeItem;
    HFItem *_existingScenesContentItem;
    HFItem *_suggestedScenesContentItem;
}

@property(readonly, nonatomic) HFItem *suggestedScenesContentItem; // @synthesize suggestedScenesContentItem=_suggestedScenesContentItem;
@property(readonly, nonatomic) HFItem *existingScenesContentItem; // @synthesize existingScenesContentItem=_existingScenesContentItem;
@property(readonly, copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // @synthesize serviceLikeItem=_serviceLikeItem;
// - (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 serviceLikeItem:(id)arg2;

@end

