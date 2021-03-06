//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainerID, NSArray, NSString;

@interface SCKDatabaseSchema : NSObject
{
    NSString *_name;
    long long _environment;
    NSArray *_zoneSchemas;
    long long _security;
}

@property(nonatomic) long long security; // @synthesize security=_security;
@property(copy, nonatomic) NSArray *zoneSchemas; // @synthesize zoneSchemas=_zoneSchemas;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)schemaForZoneName:(id)arg1;
@property(readonly, nonatomic) BOOL requiresDeviceToDeviceEncryption;
@property(readonly, copy, nonatomic) NSArray *zoneIDs;
@property(readonly, copy, nonatomic) CKContainerID *containerID;
- (id)initWithName:(id)arg1 environment:(long long)arg2 security:(long long)arg3 zoneSchemas:(id)arg4;

@end

