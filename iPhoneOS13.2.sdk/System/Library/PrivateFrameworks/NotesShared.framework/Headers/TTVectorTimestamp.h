//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary;

@interface TTVectorTimestamp : NSObject <NSCopying>
{
    NSMutableDictionary *_clock;
}

// - (void).cxx_destruct;
- (id)description;
- (void)mergeWithTimestamp:(id)arg1;
- (NSUInteger)compareTo:(id)arg1;
- (id)sortedUUIDs;
- (id)allUUIDs;
- (void)incrementClockForUUID:(id)arg1;
- (void)setClock:(NSUInteger)arg1 subclock:(NSUInteger)arg2 forUUID:(id)arg3;
- (void)setClock:(NSUInteger)arg1 forUUID:(id)arg2;
- (NSUInteger)subclockForUUID:(id)arg1;
- (NSUInteger)clockForUUID:(id)arg1;
- (id)clockElementForUUID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)serialize;
- (void)saveToArchive:(VectorTimestamp_cd1d3bcf )arg1;
- (id)initWithArchive:(const VectorTimestamp_cd1d3bcf )arg1;
- (id)initWithData:(id)arg1;

@end

