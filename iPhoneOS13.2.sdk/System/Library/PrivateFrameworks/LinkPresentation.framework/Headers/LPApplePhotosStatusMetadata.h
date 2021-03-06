//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPSpecializationMetadata.h>

#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>

@class NSAttributedString;

@interface LPApplePhotosStatusMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer>
{
    NSAttributedString *_status;
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSAttributedString *status; // @synthesize status=_status;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;

@end

