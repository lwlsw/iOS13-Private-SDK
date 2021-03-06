//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMassFormatter;

@interface HKPersonWeightFormatter : NSObject
{
    NSMassFormatter *_massFormatter;
    long long _localWeightUnit;
}

+ (id)sharedFormatter;
@property(readonly, nonatomic) long long localWeightUnit; // @synthesize localWeightUnit=_localWeightUnit;
// - (void).cxx_destruct;
- (id)stringFromWeightValue:(double)arg1 inUnit:(long long)arg2;
- (id)stringFromWeightInKilograms:(id)arg1;
- (void)_updateRoundingIncrement;
- (void)_localeChanged:(id)arg1;
- (void)dealloc;
- (void)_commonInit;
- (id)init;

@end

