//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFTask.h>

@class NSLocale, WFLocation;

@interface WFAirQualityRequest : WFTask
{
    BOOL _attachRawAPIData;
    NSLocale *_locale;
    WFLocation *_location;
    id /* CDUnknownBlockType */ _completionHandler;
}

+ (id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) BOOL attachRawAPIData; // @synthesize attachRawAPIData=_attachRawAPIData;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) WFLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
// - (void).cxx_destruct;
- (void)cleanup;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;
- (id)options;
- (id)initWithLocation:(id)arg1 locale:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

