//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MontrealNNModelNetwork, NSMutableDictionary;

@interface MontrealNNGenerateModel : NSObject
{
//    struct MontrealNeuralNetwork _nnObject;
    NSUInteger _weightFormat;
    MontrealNNModelNetwork *_network;
    NSMutableDictionary *_inputs;
    NSMutableDictionary *_outputs;
}

@property(readonly) NSMutableDictionary *outputs; // @synthesize outputs=_outputs;
@property(readonly) NSMutableDictionary *inputs; // @synthesize inputs=_inputs;
@property(readonly) MontrealNNModelNetwork *network; // @synthesize network=_network;
@property(readonly) NSUInteger weightFormat; // @synthesize weightFormat=_weightFormat;
// - (void).cxx_destruct;
- (id)networkOutputs;
- (id)networkInputs;
- (void)removeOutput:(id)arg1;
- (void)addOutputs:(id)arg1;
- (void)removeInput:(id)arg1;
- (void)addInputs:(id)arg1;
- (id)modelContainerPath;
- (void )generateModelContainer;
- (void)merge:(id)arg1;
// property struct MontrealNeuralNetwork nnObject; // @synthesize nnObject=_nnObject;
- (void)dealloc;
- (id)initWithWeightFormat:(NSUInteger)arg1;

@end

