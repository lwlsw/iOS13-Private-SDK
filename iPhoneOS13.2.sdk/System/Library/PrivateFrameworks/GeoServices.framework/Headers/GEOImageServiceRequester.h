//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, geo_isolater;

@interface GEOImageServiceRequester : NSObject
{
    geo_isolater *_isolater;
    NSHashTable *_pendingRequests;
    NSMapTable *_requestToIdentifier;
}

+ (id)sharedRequester;
// - (void).cxx_destruct;
- (NSUInteger)shrinkDiskCacheToSize:(NSUInteger)arg1;
- (NSUInteger)calculateFreeableSize;
- (BOOL)_finishRequest:(id)arg1;
- (void)cancelImageServiceRequest:(id)arg1;
- (void)startImageServiceRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 finished:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;
- (id)init;

@end

