//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class NSString;

@interface REElementGroup : NSObject <REAutomaticExportedInterface, NSCopying>
{
    NSString *_groupIdentifier;
    NSUInteger _behavior;
    long long _maxElementCount;
}

+ (id)adjoiningElementGroupWithIdentifier:(id)arg1;
+ (id)topElementGroupWithIdentifier:(id)arg1;
@property(nonatomic) long long maxElementCount; // @synthesize maxElementCount=_maxElementCount;
@property(nonatomic) NSUInteger behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithGroupIdentifier:(id)arg1;

@end

