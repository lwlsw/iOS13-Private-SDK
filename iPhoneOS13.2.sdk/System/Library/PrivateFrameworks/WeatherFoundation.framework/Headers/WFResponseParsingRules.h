//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WFSettings;

@interface WFResponseParsingRules : NSObject
{
    id <WFSettings> _settings;
}

+ (BOOL)aqiEnabledByRules:(id)arg1 forLocation:(id)arg2;
@property(readonly, nonatomic) id <WFSettings> settings; // @synthesize settings=_settings;
// - (void).cxx_destruct;
- (BOOL)aqiEnabledForCountryCode:(id)arg1;
- (id)initWithSettings:(id)arg1;

@end

