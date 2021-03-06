//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface AWDHomeKitDatabaseCKOperationCompletionEvent : PBCodable <NSCopying>
{
    long long _errorCode;
    NSUInteger _timestamp;
    int _containerType;
    NSString *_errorDomain;
    BOOL _didSucceed;
   struct {
        unsigned int errorCode:1;
        unsigned int timestamp:1;
        unsigned int containerType:1;
        unsigned int didSucceed:1;
    } _has;
}

@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) BOOL didSucceed; // @synthesize didSucceed=_didSucceed;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
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
@property(readonly, nonatomic) BOOL hasErrorDomain;
- (int)StringAsContainerType:(id)arg1;
- (id)containerTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasContainerType;
@property(nonatomic) int containerType; // @synthesize containerType=_containerType;
@property(nonatomic) BOOL hasErrorCode;
@property(nonatomic) BOOL hasDidSucceed;
@property(nonatomic) BOOL hasTimestamp;

@end

