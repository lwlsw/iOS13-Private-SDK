//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSInvalidSATEntriesCleaner : NSObject
{
}

- (void)_cleanupModelFilesAtDir:(id)arg1 forAsset:(id)arg2;
- (void)_cleanupInvalidModelsForAsset:(id)arg1;
- (id)_cleanupPayloadUtterancesExceedingLifeTimeInDays:(long long)arg1 forType:(NSUInteger)arg2 forLanguageCode:(id)arg3 dryRun:(BOOL)arg4;
- (id)_cleanupOrphanedMetafilesAtURL:(id)arg1 dryRun:(BOOL)arg2;
- (id)_cleanupInvalidAudioFiles:(id)arg1 dryRun:(BOOL)arg2;
- (id)_cleanupContentsOfSatFolderWithLanguageCode:(id)arg1 dryRun:(BOOL)arg2;
- (id)_cleanupOrphanedMetafilesForLanguage:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 dryRun:(BOOL)arg3;
- (void)_cleanupImplicitUtteranceCache;
- (id)cleanupInvalidSATEntriesAtSATRoot:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 dryRun:(BOOL)arg3;
- (void)sanitizeSATFilesWithAsset:(id)arg1;
- (id)init;

@end

