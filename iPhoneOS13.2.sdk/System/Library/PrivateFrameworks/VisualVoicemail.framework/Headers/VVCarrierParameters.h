//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VVCarrierParameters : NSObject
{
    NSDictionary *_parameterValues;
}

+ (id)messageNotificationFallbackTimeout;
+ (id)retryIntervals;
+ (BOOL)supportsDetachedStorage;
+ (BOOL)ignoresRoamingSwitch;
@property(readonly, nonatomic) NSDictionary *parameterValues; // @synthesize parameterValues=_parameterValues;
// - (void).cxx_destruct;
- (id)parameterValueForKey:(id)arg1;
- (id)initWithService:(id)arg1;

@end

