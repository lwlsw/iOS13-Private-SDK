//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOrderedSet;

@interface DOCFileProviderDomainMonitor : NSObject
{
    id _providerDomainMonitoringContext;
    NSMutableDictionary *_providerNames;
    NSOrderedSet *_monitoredIdentifiers;
    id /* CDUnknownBlockType */ _monitorCallback;
}

// - (void).cxx_destruct;
- (void)notifyIfNecessary;
- (void)monitorProviderDomainNamesForSourceIdentifiers:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

