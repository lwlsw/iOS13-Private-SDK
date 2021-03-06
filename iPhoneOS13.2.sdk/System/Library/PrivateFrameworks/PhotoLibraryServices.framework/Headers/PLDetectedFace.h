//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLSyncableDetectedFace-Protocol.h>

@interface PLDetectedFace : PLManagedObject <PLSyncableDetectedFace>
{
}

+ (id)predicateForArchival;
+ (id)predicatesForFacesNeedingFaceCropGeneration;
+ (id)predicatesToExcludeNonVisibleFaces;
+ (void)batchFetchKeyFacesByPersonUUIDWithPersonUUIDs:(id)arg1 library:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)batchFetchDetectedFacesByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (NSUInteger)countOfHiddenFacesOnAssetsWithObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)detectedFaceWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
+ (void)enumerateAssetUUIDsForSearchIndexingWithDetctedFaceUUIDs:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(CDUnknownBlockType)arg3;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(BOOL)arg2;
+ (long long)resetAssetForAllSyncableFacesInManagedObjectContext:(id)arg1 error:(id )arg2;
+ (id)syncableFacesToUploadInitiallyInLibrary:(id)arg1 limit:(NSUInteger)arg2;
+ (id)_syncableFacesToUploadInitiallyPredicate;
+ (id)syncableFacesPredicate;
+ (id)_facesMatchingPredicate:(id)arg1 limit:(NSUInteger)arg2 inPhotoLibrary:(id)arg3;
+ (id)findExistingFaceMatchingDimension:(id)arg1 inFaces:(id)arg2 ignoreSourceAssetDimensions:(BOOL)arg3;
@property(nonatomic) int effectiveNameSource;
- (void)addClusterRejectedPerson:(id)arg1;
- (void)addRejectedPersonNeedingFaceCrops:(id)arg1;
- (void)addRejectedPerson:(id)arg1;
- (id)namingDescription;
- (id)debugLogDescription;
- (void)removeFaceprint;
- (void)_verifyAssetRelationship;
@property(readonly, nonatomic) BOOL isTrainingFace;
- (void)_updateFaceGroupIfNeeded;
- (void)_touchPersonForPersistenceIfNeeded;
- (void)willSave;
- (void)delete;
- (void)awakeFromInsert;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)arg1;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (BOOL)isValidForPersistence;
- (double)photosFaceRepresentationQuality;
- (double)photosFaceRepresentationRoll;
- (id)photosFaceRepresentationLocalIdentifier;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (long long)photosFaceRepresentationQualityMeasure;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationHasSmile;
- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationCenterX;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
- (id)syncDescription;
- (id)momentShare;
- (id)cplFullRecord;
@property(readonly, retain, nonatomic) id localID;
- (BOOL)isSyncableChange;
- (BOOL)supportsCloudUpload;

@end

