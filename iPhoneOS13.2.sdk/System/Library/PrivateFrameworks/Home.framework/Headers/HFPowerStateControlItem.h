//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFPrimaryStateControlItem.h>

#import <Home/HFPrimaryStateWriter-Protocol.h>

@class NSSet;

@interface HFPowerStateControlItem : HFPrimaryStateControlItem <HFPrimaryStateWriter>
{
    NSSet *_auxiliaryTargetValueTuples;
}

+ (id)_powerStateTargetValues;
+ (Class)valueClass;
@property(readonly, nonatomic) NSSet *auxiliaryTargetValueTuples; // @synthesize auxiliaryTargetValueTuples=_auxiliaryTargetValueTuples;
// - (void).cxx_destruct;
- (id)_allTargetValues;
- (BOOL)supportsItemRepresentingServices:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)toggleValue;
- (id)togglePrimaryState;
- (id)writePrimaryState:(long long)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (BOOL)canCopyWithCharacteristicOptions:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;

@end

