//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface HDAWDHealthKitNotificationResponseFlags : PBCodable <NSCopying>
{
    BOOL _alreadyDoing;
    BOOL _poorTiming;
   struct {
        unsigned int alreadyDoing:1;
        unsigned int poorTiming:1;
    } _has;
}

@property(nonatomic) BOOL alreadyDoing; // @synthesize alreadyDoing=_alreadyDoing;
@property(nonatomic) BOOL poorTiming; // @synthesize poorTiming=_poorTiming;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAlreadyDoing;
@property(nonatomic) BOOL hasPoorTiming;

@end

