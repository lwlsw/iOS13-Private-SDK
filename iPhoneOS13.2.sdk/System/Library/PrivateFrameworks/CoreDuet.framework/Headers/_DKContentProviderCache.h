//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface _DKContentProviderCache : NSObject
{
    NSCache *_cache;
}

@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
// - (void).cxx_destruct;
- (id)contentProviderForEventStream:(id)arg1 error:(id )arg2;
- (id)init;

@end

