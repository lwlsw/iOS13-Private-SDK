//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOAnalyticsPipelineProxy-Protocol.h>

@class NSOperationQueue, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineRemoteProxy : NSObject <GEOAnalyticsPipelineProxy>
{
    NSOperationQueue *_opQueue;
    NSUInteger _maxOpCount;
    NSUInteger _droppedLogMsgCount;
    geo_isolater *_enqueueLock;
}

// - (void).cxx_destruct;
- (id)getEvalStatus;
- (void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(CDUnknownBlockType)arg2 summaryBlock:(CDUnknownBlockType)arg3;
- (void)initiateUploadOfType:(int)arg1;
- (void)flushEvalData;
- (void)setEvalMode:(BOOL)arg1;
- (void)reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)reportLogMsgType:(int)arg1 eventType:(int)arg2 logMsg:(id)arg3 completion:(CDUnknownBlockType)arg4 completionQueue:(id)arg5;
- (void)setShortSessionValues:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)shortSessionValuesWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)_reportLogMsgType:(int)arg1 eventType:(int)arg2 logMsg:(id)arg3 completion:(CDUnknownBlockType)arg4 completionQueue:(id)arg5;
- (void)_reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;

@end

