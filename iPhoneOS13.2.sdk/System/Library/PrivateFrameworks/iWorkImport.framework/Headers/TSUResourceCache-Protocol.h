//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject, NSURL;
@protocol OS_dispatch_queue, TSUResourceInfo;

@protocol TSUResourceCache <NSObject>
- (void)purge;
- (void)cacheResourceAtURL:(NSURL *)arg1 forInfo:(id <TSUResourceInfo>)arg2 copy:(BOOL)arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4 completionHandler:(void (^)(BOOL, NSError *))arg5;
- (BOOL)cachedResourceExistsForInfo:(id <TSUResourceInfo>)arg1;
@end

