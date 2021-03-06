//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateBattery : CLKComplicationTemplate
{
    long long _family;
    BOOL _charging;
    CLKTextProvider *_textProvider;
    double _level;
}

+ (id)batteryTemplateWithFamily:(long long)arg1;
@property(nonatomic) BOOL charging; // @synthesize charging=_charging;
@property(nonatomic) double level; // @synthesize level=_level;
@property(copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;
// - (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBOOLKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFloatKeysWithBlock:(CDUnknownBlockType)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end

