//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity
{
    long long _sourceType;
    NSString *_sourceHost;
    NSString *_sourceOwner;
}

// - (void).cxx_destruct;
- (BOOL)_isLocalSource;
- (BOOL)_supportsConsistentExternalIDAcrossDevices;
- (BOOL)_supportsConsistentExternalIDAcrossDevices:(long long)arg1;
- (BOOL)_requiresHostAndOwner;
- (NSUInteger)isMatchForSource:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(id)arg1 type:(NSUInteger)arg2;

@end

