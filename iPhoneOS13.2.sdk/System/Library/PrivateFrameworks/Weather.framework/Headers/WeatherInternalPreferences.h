//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol WeatherPreferencesPersistence;

@interface WeatherInternalPreferences : NSUserDefaults
{
    id  _persistence;
}

+ (id)sharedInternalPreferences;
@property(retain) id  persistence; // @synthesize persistence=_persistence;
// - (void).cxx_destruct;
@property(readonly) BOOL shouldShowUpdateTimestamp;
@property(readonly) BOOL isV3Enabled;
@property(readonly) BOOL isInternalInstall;

@end

