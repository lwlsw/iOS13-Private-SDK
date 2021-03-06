//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NNMKProtoAccountAuthenticationState : PBCodable <NSCopying>
{
    NSString *_accountId;
    NSString *_displayName;
    unsigned int _standaloneState;
    NSString *_subsectionId;
   struct {
        unsigned int standaloneState:1;
    } _has;
}

@property(retain, nonatomic) NSString *subsectionId; // @synthesize subsectionId=_subsectionId;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) unsigned int standaloneState; // @synthesize standaloneState=_standaloneState;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
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
@property(readonly, nonatomic) BOOL hasSubsectionId;
@property(readonly, nonatomic) BOOL hasDisplayName;
@property(nonatomic) BOOL hasStandaloneState;
@property(readonly, nonatomic) BOOL hasAccountId;

@end

