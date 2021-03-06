//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GEOPDMapsIdentifier, NSData;

@interface GEOMapItemIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    GEOPDMapsIdentifier *_mapsIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)mapItemIdentifiersFromMapsIdentifiers:(id)arg1;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSData *comparableRepresentation;
- (BOOL)isEqualToGEOMapItemIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)shortDebugDescription;
- (id)debugDescription;
// @property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic, getter=hasCoordinate) BOOL hasCoordinate;
@property(readonly, nonatomic) int resultProviderID;
@property(readonly, nonatomic) NSUInteger muid;
- (id)mapsIdentifier;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithXPCCoder:(id)arg1;
- (id)initWithXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlace:(id)arg1;
- (id)initWithMapItem:(id)arg1;
// - (id)initWithBasemapId:(NSUInteger)arg1 resultProviderID:(int)arg2 coordinate:(CDStruct_c3b9c2ee)arg3;
// - (id)initWithMUID:(NSUInteger)arg1 resultProviderID:(int)arg2 coordinate:(CDStruct_c3b9c2ee)arg3;
// - (id)initWithMUID:(NSUInteger)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;
- (id)initWithMUID:(NSUInteger)arg1;
- (id)initWithMapsIdentifier:(id)arg1;
- (id)init;

@end

