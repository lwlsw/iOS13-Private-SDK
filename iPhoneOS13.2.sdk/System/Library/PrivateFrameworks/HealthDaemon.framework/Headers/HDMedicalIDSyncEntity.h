//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>
#import <HealthDaemon/HDSyncEntity-Protocol.h>

@interface HDMedicalIDSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>
{
}

+ (BOOL)setSyncProvenance:(long long)arg1 profile:(id)arg2 error:(id )arg3;
+ (id)getSyncProvencanceOfMedicalIDForProfile:(id)arg1 error:(id )arg2;
+ (BOOL)_setSyncAnchor:(long long)arg1 profile:(id)arg2 error:(id )arg3;
+ (long long)_getCurrentSyncAnchorWithProfile:(id)arg1 error:(id )arg2;
+ (id)_medicalIDFromCodable:(id)arg1;
+ (id)_codableFromMedicalID:(id)arg1;
+ (BOOL)supportsSyncStore:(id)arg1;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id )arg4;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id )arg4;
//  (BOOL)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id )arg5;
+ (id)syncEntityIdentifier;
+ (BOOL)_touchSyncAnchorWithProfile:(id)arg1 shouldIncrement:(BOOL)arg2 error:(id )arg3;
+ (BOOL)incrementSyncAnchorWithProfile:(id)arg1 error:(id )arg2;
+ (BOOL)touchSyncAnchorIfNecessaryWithProfile:(id)arg1 error:(id )arg2;
+ (BOOL)companionDidChangeForProfile:(id)arg1 error:(id )arg2;
+ (NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

@end

