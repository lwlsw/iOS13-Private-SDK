//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKNumeralsAnalogStyleEditOption : NTKEnumeratedEditOption
{
}

+ (id)_nameLocalizationKeyForValue:(NSUInteger)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(NSUInteger)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (long long)indexForNumeralsStyle:(NSUInteger)arg1 forDevice:(id)arg2;
+ (id)availableOrderedValuesForDevice:(id)arg1;
+ (id)optionWithStyle:(NSUInteger)arg1 forDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
@property(readonly, nonatomic) NSUInteger style;
- (long long)swatchStyle;

@end

