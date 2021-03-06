//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString;

@interface REBulletinDistributorRelevanceProvider : RERelevanceProvider
{
    NSString *_bulletinSectionIdentifier;
}

+ (id)relevanceSimulatorID;
@property(readonly, nonatomic) NSString *bulletinSectionIdentifier; // @synthesize bulletinSectionIdentifier=_bulletinSectionIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)_hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithBulletinSectionIdentifier:(id)arg1;

@end

