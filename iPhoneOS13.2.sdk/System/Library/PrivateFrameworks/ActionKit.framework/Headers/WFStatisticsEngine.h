//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WFStatisticsEngine : NSObject
{
    NSObject<OS_dispatch_queue> *_statisticsQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statisticsQueue; // @synthesize statisticsQueue=_statisticsQueue;
// - (void).cxx_destruct;
- (void)standardDeviationOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rangeOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)modeOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)medianOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sumOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)maximumOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)minimumOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)averageOfValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asyncApplyNSExpressionFunction:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyOperation:(long long)arg1 onStatisticsSampleProviders:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyOperation:(long long)arg1 onNumbers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

