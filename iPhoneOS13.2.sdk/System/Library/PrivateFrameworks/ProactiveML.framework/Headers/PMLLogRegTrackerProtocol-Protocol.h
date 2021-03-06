//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, NSDictionary, PMLDenseVector;

@protocol PMLLogRegTrackerProtocol <PMLPlistAndChunksSerializableProtocol>
- (NSDictionary *)trackGradient:(PMLDenseVector *)arg1 scaleFactor:(float)arg2 minibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg3 evaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg4 serverIteration:(NSUInteger)arg5;
- (NSDictionary *)trackWeights:(PMLDenseVector *)arg1 scaleFactor:(float)arg2 minibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg3 evaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg4;
@end

