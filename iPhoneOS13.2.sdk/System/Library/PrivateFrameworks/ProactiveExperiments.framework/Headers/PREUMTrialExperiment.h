//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface PREUMTrialExperiment : PBCodable <NSCopying>
{
    NSString *_experimentId;
    NSString *_treatmentId;
    NSString *_treatmentModelName;
}

@property(retain, nonatomic) NSString *treatmentModelName; // @synthesize treatmentModelName=_treatmentModelName;
@property(retain, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property(retain, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTreatmentModelName;
@property(readonly, nonatomic) BOOL hasTreatmentId;
@property(readonly, nonatomic) BOOL hasExperimentId;

@end

