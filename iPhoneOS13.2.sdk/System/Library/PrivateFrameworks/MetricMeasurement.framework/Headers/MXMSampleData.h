//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableDictionary, NSSet;

@interface MXMSampleData : NSObject <NSFastEnumeration, NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSArray *_enumSet;
    NSMutableDictionary *_tagsToSampleSets;
}

+ (BOOL)supportsSecureCoding;
+ (id)data;
@property(retain, nonatomic) NSMutableDictionary *tagsToSampleSets; // @synthesize tagsToSampleSets=_tagsToSampleSets;
@property(retain) NSArray *enumSet; // @synthesize enumSet=_enumSet;
// - (void).cxx_destruct;
- (id)dataMatchingFilter:(id)arg1;
- (id)_dataMatchingFilter:(id)arg1;
- (void)_appendData:(id)arg1;
- (void)_appendSet:(id)arg1;
- (void)_appendAttribute:(id)arg1;
// - (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)mutableCopyWithZone:(_NSZone )arg1;
- (id)mutableCopy;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_sampleSetsWithTag:(id)arg1;
- (id)sampleSetWithTag:(id)arg1 attributes:(id)arg2;
- (id)sampleSetWithTag:(id)arg1 attribute:(id)arg2;
- (id)sampleSetsWithTag:(id)arg1;
- (id)initWithSets:(id)arg1;
- (id)initWithSet:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSUInteger numberOfSamples;
@property(readonly, nonatomic) NSUInteger numberOfSets;
@property(readonly, copy, nonatomic) NSArray *samples;
@property(readonly, copy, nonatomic) NSSet *tags;

@end

