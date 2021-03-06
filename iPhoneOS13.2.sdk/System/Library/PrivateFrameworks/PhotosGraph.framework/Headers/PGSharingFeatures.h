//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface PGSharingFeatures : NSObject <NSSecureCoding>
{
    NSArray *_classes;
    NSArray *_momentFeatureVectors;
    NSArray *_assetFeatureVectors;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *assetFeatureVectors; // @synthesize assetFeatureVectors=_assetFeatureVectors;
@property(readonly, nonatomic) NSArray *momentFeatureVectors; // @synthesize momentFeatureVectors=_momentFeatureVectors;
@property(readonly, nonatomic) NSArray *classes; // @synthesize classes=_classes;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClasses:(id)arg1 momentFeatureVectors:(id)arg2 assetFeatureVectors:(id)arg3;

@end

