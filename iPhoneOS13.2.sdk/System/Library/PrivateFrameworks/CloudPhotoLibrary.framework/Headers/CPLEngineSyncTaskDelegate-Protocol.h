//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CPLEngineSyncTask, NSDictionary, NSError;

@protocol CPLEngineSyncTaskDelegate <NSObject>
- (void)task:(CPLEngineSyncTask *)arg1 didProgress:(float)arg2 userInfo:(NSDictionary *)arg3;
- (void)task:(CPLEngineSyncTask *)arg1 didFinishWithError:(NSError *)arg2;
@end

