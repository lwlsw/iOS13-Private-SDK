//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class LPLinkMetadata, LPMetadataProviderSpecialization;

@protocol LPMetadataProviderSpecializationDelegate <NSObject>
- (void)metadataProviderSpecializationDidFail:(LPMetadataProviderSpecialization *)arg1;
- (void)metadataProviderSpecialization:(LPMetadataProviderSpecialization *)arg1 didCompleteWithMetadata:(LPLinkMetadata *)arg2;

@optional
- (void)metadataProviderSpecialization:(LPMetadataProviderSpecialization *)arg1 didFetchPreliminaryMetadata:(LPLinkMetadata *)arg2;
@end

