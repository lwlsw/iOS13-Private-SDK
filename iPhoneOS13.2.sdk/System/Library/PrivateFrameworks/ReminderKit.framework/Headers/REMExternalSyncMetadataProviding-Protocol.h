//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol REMExternalSyncMetadataProviding
@property(readonly, nonatomic) NSString *daPushKey;
@property(readonly, nonatomic) NSString *daSyncToken;
@property(readonly, nonatomic) NSString *externalModificationTag;
@property(readonly, nonatomic) NSString *externalIdentifier;
- (NSString *)externalIdentifierForMarkedForDeletionObject;
@end

