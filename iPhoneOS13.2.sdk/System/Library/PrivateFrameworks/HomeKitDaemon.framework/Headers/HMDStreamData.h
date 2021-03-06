//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDStreamDataSequenceNumber, NSData, NSString;

@interface HMDStreamData : HMFObject
{
    HMDStreamDataSequenceNumber *_sequenceNumber;
    NSData *_data;
    NSString *_type;
}

@property(readonly, copy) NSString *type; // @synthesize type=_type;
@property(readonly, copy) NSData *data; // @synthesize data=_data;
@property(readonly, copy) HMDStreamDataSequenceNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithSequenceNumber:(id)arg1 data:(id)arg2 type:(id)arg3;

@end

