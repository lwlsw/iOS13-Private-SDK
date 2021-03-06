//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDQueryServer, NSString;

@interface _HDQueryDatabaseAccessBlock : NSObject
{
    id /* CDUnknownBlockType */ _block;
    HDQueryServer *_queryServer;
    NSString *_processBundleIdentifier;
    long long _qualityOfService;
    double _creationTime;
}

@property(readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, copy, nonatomic) NSString *processBundleIdentifier; // @synthesize processBundleIdentifier=_processBundleIdentifier;
@property(readonly, nonatomic) __weak HDQueryServer *queryServer; // @synthesize queryServer=_queryServer;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) BOOL shouldThrottle;
- (BOOL)shouldRunAfterBlock:(id)arg1 foregroundBundleIdentifiers:(id)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1 queryServer:(id)arg2;

@end

