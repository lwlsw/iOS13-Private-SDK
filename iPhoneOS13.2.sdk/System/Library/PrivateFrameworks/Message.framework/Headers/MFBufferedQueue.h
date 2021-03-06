//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MFBufferedQueue : NSObject
{
    unsigned int _maximumSize;
    double _maximumLatency;
    double _timeOfLastFlush;
    NSMutableArray *_queue;
    unsigned int _currentSize;
}

@property(nonatomic) double maximumLatency; // @synthesize maximumLatency=_maximumLatency;
@property(nonatomic) unsigned int maximumSize; // @synthesize maximumSize=_maximumSize;
@property(readonly, nonatomic) unsigned int size; // @synthesize size=_currentSize;
// - (void).cxx_destruct;
- (BOOL)handleItems:(id)arg1;
- (NSUInteger)sizeForItem:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)flushIfNecessary;
- (BOOL)flush;
- (BOOL)_flush;
- (void)removeAllObjects;
- (BOOL)addItem:(id)arg1;
- (id)init;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;

@end

