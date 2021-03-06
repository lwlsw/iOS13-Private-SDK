//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface AWDMailError : PBCodable <NSCopying>
{
    long long _genericErrorCode;
    int _errorCode;
    struct {
        unsigned int genericErrorCode:1;
        unsigned int errorCode:1;
    } _has;
}

@property(nonatomic) long long genericErrorCode; // @synthesize genericErrorCode=_genericErrorCode;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasGenericErrorCode;
- (int)StringAsErrorCode:(id)arg1;
- (id)errorCodeAsString:(int)arg1;
@property(nonatomic) BOOL hasErrorCode;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;

@end

