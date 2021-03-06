//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface CPLRampingRequestResource : PBCodable <NSCopying>
{
    long long _numRequested;
    NSString *_resource;
   struct {
        unsigned int numRequested:1;
    } _has;
}

@property(nonatomic) long long numRequested; // @synthesize numRequested=_numRequested;
@property(retain, nonatomic) NSString *resource; // @synthesize resource=_resource;
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
@property(nonatomic) BOOL hasNumRequested;
@property(readonly, nonatomic) BOOL hasResource;

@end

