//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface NTKSiderealCache : NSObject
{
    NSCache *_dataCache;
}

+ (id)sharedCache;
// - (void).cxx_destruct;
- (id)gradientData:(CDUnknownBlockType)arg1;
- (id)imageDataForKey:(id)arg1 generationBlock:(CDUnknownBlockType)arg2;
- (void)purgeCachedKey:(id)arg1;
- (void)_purgeEverything;
- (id)_init;

@end

