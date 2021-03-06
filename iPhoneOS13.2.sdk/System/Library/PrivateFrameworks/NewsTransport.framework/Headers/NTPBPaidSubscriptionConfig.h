//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface NTPBPaidSubscriptionConfig : PBCodable <NSCopying>
{
    long long _maxGroupSizeIPad;
    long long _maxGroupSizeIPhone;
    long long _maxTimesHeadlineInGroup;
   struct {
        unsigned int maxGroupSizeIPad:1;
        unsigned int maxGroupSizeIPhone:1;
        unsigned int maxTimesHeadlineInGroup:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMaxTimesHeadlineInGroup;
@property(nonatomic) long long maxTimesHeadlineInGroup; // @synthesize maxTimesHeadlineInGroup=_maxTimesHeadlineInGroup;
@property(nonatomic) BOOL hasMaxGroupSizeIPhone;
@property(nonatomic) long long maxGroupSizeIPhone; // @synthesize maxGroupSizeIPhone=_maxGroupSizeIPhone;
@property(nonatomic) BOOL hasMaxGroupSizeIPad;
@property(nonatomic) long long maxGroupSizeIPad; // @synthesize maxGroupSizeIPad=_maxGroupSizeIPad;

@end

