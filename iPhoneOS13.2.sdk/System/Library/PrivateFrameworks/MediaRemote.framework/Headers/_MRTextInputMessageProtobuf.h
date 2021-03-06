//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface _MRTextInputMessageProtobuf : PBCodable <NSCopying>
{
    double _timestamp;
    int _actionType;
    NSString *_text;
   struct {
        unsigned int timestamp:1;
        unsigned int actionType:1;
    } _has;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
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
- (int)StringAsActionType:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasActionType;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) BOOL hasText;
@property(nonatomic) BOOL hasTimestamp;

@end

