//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface WBSAnalyticsSafariViewControllerPresentedFromHostAppEvent : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    NSString *_hostAppBundleID;
//     CDStruct_b5306035 _has;
}

@property(retain, nonatomic) NSString *hostAppBundleID; // @synthesize hostAppBundleID=_hostAppBundleID;
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
@property(readonly, nonatomic) BOOL hasHostAppBundleID;
@property(nonatomic) BOOL hasTimestamp;

@end

