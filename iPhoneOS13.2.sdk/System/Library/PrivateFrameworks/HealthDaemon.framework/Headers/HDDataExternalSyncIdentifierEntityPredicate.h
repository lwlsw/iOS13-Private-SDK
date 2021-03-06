//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLitePredicate.h>

#import <HealthDaemon/HDMetadataPredicate-Protocol.h>

@class NSString;

@interface HDDataExternalSyncIdentifierEntityPredicate : HDSQLitePredicate <HDMetadataPredicate>
{
    HDSQLitePredicate *_valuePredicate;
    BOOL _matchObjectsWithoutKey;
}

+ (id)_valuePredicateForKey:(id)arg1 allowedValues:(id)arg2;
+ (id)_valuePredicateForKey:(id)arg1 value:(id)arg2 operatorType:(NSUInteger)arg3;
+ (Class)_valueClassForKey:(id)arg1;
+ (id)_propertyForKey:(id)arg1;
+ (id)predicateWithMetadataKey:(id)arg1 exists:(BOOL)arg2;
+ (id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(NSUInteger)arg3;
+ (id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
//  (void)bindToStatement:(struct sqlite3_stmt )arg1 bindingIndex:(inout int )arg2;
- (id)SQLForEntityClass:(Class)arg1;

@end

