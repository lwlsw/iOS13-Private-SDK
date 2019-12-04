//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICMusicUserTokenCache : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_cachedMusicUserTokens;
}

+ (void)_getCacheKeyForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(id /* block */)arg3;
+ (id)_decodeDeveloperTokenPart:(id)arg1;
+ (id)sharedCache;
- (void)_postLocalChangeNotification;
- (void)_persistCache;
- (void)_loadPersistedCacheWithCompletion:(id /* block */)arg1;
- (void)_handleMusicUserTokensDidChangeDistributedNotification:(id)arg1;
- (void)setCachedMusicUserToken:(id)arg1 forDeveloperToken:(id)arg2 requestContext:(id)arg3 completion:(id /* block */)arg4;
- (void)getCachedMusicUserTokenForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)_init;

@end
