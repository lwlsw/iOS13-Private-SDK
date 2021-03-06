//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class HDAWDHealthKitCloudSyncEvent, NSString;

@interface HDAWDHealthKitCloudSyncEndEvent : PBCodable <NSCopying>
{
    NSUInteger _countSinceLastSuccess;
    NSUInteger _duration;
    NSUInteger _errorCode;
    NSUInteger _timeSinceLastSuccess;
    NSUInteger _timestamp;
    NSUInteger _underlyingErrorCode;
    NSString *_errorDomain;
    HDAWDHealthKitCloudSyncEvent *_event;
    int _result;
    NSString *_underlyingErrorDomain;
   struct {
        unsigned int countSinceLastSuccess:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
        unsigned int timeSinceLastSuccess:1;
        unsigned int timestamp:1;
        unsigned int underlyingErrorCode:1;
        unsigned int result:1;
    } _has;
}

@property(nonatomic) NSUInteger underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property(retain, nonatomic) NSString *underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property(nonatomic) NSUInteger errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) NSUInteger timeSinceLastSuccess; // @synthesize timeSinceLastSuccess=_timeSinceLastSuccess;
@property(nonatomic) NSUInteger countSinceLastSuccess; // @synthesize countSinceLastSuccess=_countSinceLastSuccess;
@property(nonatomic) NSUInteger duration; // @synthesize duration=_duration;
@property(retain, nonatomic) HDAWDHealthKitCloudSyncEvent *event; // @synthesize event=_event;
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
@property(nonatomic) BOOL hasUnderlyingErrorCode;
@property(readonly, nonatomic) BOOL hasUnderlyingErrorDomain;
@property(nonatomic) BOOL hasErrorCode;
@property(readonly, nonatomic) BOOL hasErrorDomain;
@property(nonatomic) BOOL hasTimeSinceLastSuccess;
@property(nonatomic) BOOL hasCountSinceLastSuccess;
- (int)StringAsResult:(id)arg1;
- (id)resultAsString:(int)arg1;
@property(nonatomic) BOOL hasResult;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) BOOL hasDuration;
@property(readonly, nonatomic) BOOL hasEvent;
@property(nonatomic) BOOL hasTimestamp;

@end

