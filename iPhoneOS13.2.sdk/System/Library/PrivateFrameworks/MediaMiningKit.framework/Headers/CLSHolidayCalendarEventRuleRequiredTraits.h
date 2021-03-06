//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSHolidayCalendarEventRuleTraits.h>

@interface CLSHolidayCalendarEventRuleRequiredTraits : CLSHolidayCalendarEventRuleTraits
{
    BOOL _mustContainMePerson;
    BOOL _allowSceneClassificationBasedEvaluation;
    NSUInteger _type;
    NSUInteger _category;
    NSRange * _peopleRange;
}

+ (id)_peopleTraitDebugStringForTrait:(NSUInteger)arg1;
+ (id)_locationTraitDebugStringForTrait:(NSUInteger)arg1;
@property(nonatomic) BOOL allowSceneClassificationBasedEvaluation; // @synthesize allowSceneClassificationBasedEvaluation=_allowSceneClassificationBasedEvaluation;
@property(nonatomic) NSRange * peopleRange; // @synthesize peopleRange=_peopleRange;
@property(nonatomic) BOOL mustContainMePerson; // @synthesize mustContainMePerson=_mustContainMePerson;
@property(nonatomic) NSUInteger category; // @synthesize category=_category;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
- (id)description;
@property(readonly, nonatomic) BOOL isCelebration;
- (BOOL)peopleCountRangeIsRequired;
- (BOOL)evaluateWithTraits:(id)arg1;
- (id)initWithDescription:(id)arg1;

@end

