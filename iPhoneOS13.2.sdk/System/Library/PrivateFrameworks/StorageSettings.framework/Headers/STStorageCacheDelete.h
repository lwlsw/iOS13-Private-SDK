//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface STStorageCacheDelete : NSObject
{
    int _cdNotifyToken;
    NSDictionary *_cdDict;
}

+ (id)sharedMonitor;
@property(retain) NSDictionary *cdDict; // @synthesize cdDict=_cdDict;
// - (void).cxx_destruct;
- (void)refreshPurgeableSpace;
- (id)cacheDeleteDict;
- (void)stopMonitor;
- (void)startMonitor;
- (void)dealloc;
- (id)init;

@end

