//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface BLTCircularBitBuffer : NSObject
{
    NSMutableData *_bitVector;
    NSUInteger _beginIndex;
    NSUInteger _capacity;
}

+ (NSUInteger)actualCapacity:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) NSUInteger beginIndex; // @synthesize beginIndex=_beginIndex;
// - (void).cxx_destruct;
- (void)clear;
- (id)bitVector;
- (unsigned char)bitAtIndex:(NSUInteger)arg1;
- (void)setBit:(BOOL)arg1 atIndex:(NSUInteger)arg2;
- (void)_setBit:(BOOL)arg1 atIndex:(NSUInteger)arg2;
- (id)initWithData:(id)arg1 andIndex:(NSUInteger)arg2;
- (id)initWithCapacity:(NSUInteger)arg1;

@end

