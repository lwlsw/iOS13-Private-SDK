//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDEntityEncoder.h>

@interface _HDMedicalRecordEntityEncoder : HDEntityEncoder
{
}

+ (BOOL)applyConceptIndexToObject:(id)arg1 profile:(id)arg2 error:(id )arg3;
+ (void)resetConceptIndexDueToError:(id)arg1 profile:(id)arg2;
//  (BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow )arg3 error:(id )arg4;
//  (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow )arg2 error:(id )arg3;
- (id)createBareObject;
//  (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow )arg2 error:(id )arg3;
- (id)orderedProperties;

@end

