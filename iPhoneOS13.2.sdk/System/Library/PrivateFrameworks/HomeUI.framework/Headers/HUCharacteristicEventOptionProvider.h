//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HFItem, HMHome, NSMutableSet;
@protocol HFCharacteristicValueSource, HFServiceVendor;

@interface HUCharacteristicEventOptionProvider : HFItemProvider
{
    HMHome *_home;
    id /* CDUnknownBlockType */ _filter;
    HFItem<HFServiceVendor> *_serviceVendingItem;
    NSMutableSet *_optionItems;
    id <HFCharacteristicValueSource> _overrideValueSource;
}

+ (id)_characteristicTypesRequiringUpdatedHomeHubs;
+ (id)_supportedCharacteristicTypes;
+ (BOOL)homeHubUpdateRequiredForServiceVendingItem:(id)arg1 forHome:(id)arg2;
+ (BOOL)_hasOptionsForServices:(id)arg1 outCharacteristicType:(id )arg2;
+ (BOOL)hasOptionsForAnyServiceInHome:(id)arg1;
+ (BOOL)hasOptionsForServiceVendingItem:(id)arg1 outCharacteristicType:(id )arg2;
@property(retain, nonatomic) id <HFCharacteristicValueSource> overrideValueSource; // @synthesize overrideValueSource=_overrideValueSource;
@property(retain, nonatomic) NSMutableSet *optionItems; // @synthesize optionItems=_optionItems;
@property(retain, nonatomic) HFItem<HFServiceVendor> *serviceVendingItem; // @synthesize serviceVendingItem=_serviceVendingItem;
@property(copy, nonatomic) id /* CDUnknownBlockType */ filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (void)setValueSource:(id)arg1;
- (id)valueSource;
- (id)_optionsForCharacteristicType:(id)arg1 characteristics:(id)arg2;
- (id)_notifyingCharacteristicsKeyedByTypeForServices:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithServiceVendingItem:(id)arg1 home:(id)arg2;
- (id)init;

@end

