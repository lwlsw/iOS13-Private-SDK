//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPSpecializationMetadata.h>

#import <LinkPresentation/LPLinkMetadataBackwardCompatibility-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>
#import <LinkPresentation/LPMultipleMetadataPresentationTransformer-Protocol.h>

@class LPImage, NSDate, NSString;

@interface LPFileMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPMultipleMetadataPresentationTransformer>
{
    NSString *_name;
    NSString *_type;
    NSUInteger _size;
    LPImage *_thumbnail;
    LPImage *_icon;
    NSDate *_creationDate;
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) LPImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) NSUInteger size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)summaryTypeForTransformer:(id)arg1;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)_nameForTransformer:(id)arg1;
- (id)_singleLineDescriptionForRemoteFileWithTransformer:(id)arg1;
- (BOOL)_shouldUseCircularIcon;
- (BOOL)_shouldUseSquareIcon;
- (BOOL)_isPlainText;
- (BOOL)_isImage;
- (id)_bottomCaptionStringForTransformer:(id)arg1;
- (id)_fileDetailStringForTransformer:(id)arg1;
- (id)_fileTypeStringForTransformer:(id)arg1;

@end

