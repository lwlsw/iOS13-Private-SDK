//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKOverlayRoomViewControllerIntegratedContext.h>

@class NSString;
@protocol HKOverlayRoomViewControllerIntegratedContextDelegate;

@interface HKOverlayRoomViewControllerQuantityContext : HKOverlayRoomViewControllerIntegratedContext
{
    NSString *_quantityTypeIdentifier;
    id <HKOverlayRoomViewControllerIntegratedContextDelegate> _optionalDelegate;
    long long _options;
}

@property(nonatomic) long long options; // @synthesize options=_options;
@property(nonatomic) __weak id <HKOverlayRoomViewControllerIntegratedContextDelegate> optionalDelegate; // @synthesize optionalDelegate=_optionalDelegate;
@property(retain, nonatomic) NSString *quantityTypeIdentifier; // @synthesize quantityTypeIdentifier=_quantityTypeIdentifier;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (void)fetchCachedDataForTimeScope:(long long)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)buildOverlayDisplayTypeForTimeScope:(long long)arg1;
- (id)buildContextItemWithValue:(id)arg1 valueContext:(id)arg2 forTimeScope:(long long)arg3;
- (id)representativeDisplayType;
- (id)initWithQuantityIdentifier:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 optionalDelegate:(id)arg4 seriesOptions:(long long)arg5 mode:(long long)arg6;

@end

