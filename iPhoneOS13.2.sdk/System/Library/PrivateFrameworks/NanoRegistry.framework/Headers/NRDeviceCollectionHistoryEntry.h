//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NRDeviceCollectionDiff, NRDeviceCollectionHistory, NRMutableDeviceCollection, NRPBDeviceCollectionHistoryEntry, NSDate;

@interface NRDeviceCollectionHistoryEntry : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _switchIndex;
    NSUInteger _index;
    NSDate *_date;
    NRDeviceCollectionDiff *_diff;
    NRDeviceCollectionHistory *_historyManager;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak NRDeviceCollectionHistory *historyManager; // @synthesize historyManager=_historyManager;
@property(nonatomic) unsigned int switchIndex; // @synthesize switchIndex=_switchIndex;
@property(retain, nonatomic) NRDeviceCollectionDiff *diff; // @synthesize diff=_diff;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) NSUInteger index; // @synthesize index=_index;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NRMutableDeviceCollection *state;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NRPBDeviceCollectionHistoryEntry *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistory:(id)arg1 index:(NSUInteger)arg2 date:(id)arg3 diff:(id)arg4 switchIndex:(unsigned int)arg5;

@end

