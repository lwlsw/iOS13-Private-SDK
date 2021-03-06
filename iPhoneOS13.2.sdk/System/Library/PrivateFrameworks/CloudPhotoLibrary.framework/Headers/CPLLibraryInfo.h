//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CPLAccountFlags, CPLFeatureVersionHistory, CPLMomentShare, NSData, NSDictionary;

@interface CPLLibraryInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_assetCounts;
    CPLFeatureVersionHistory *_featureVersionHistory;
    NSData *_accountFlagsData;
    CPLMomentShare *_momentShare;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) CPLMomentShare *momentShare; // @synthesize momentShare=_momentShare;
@property(copy, nonatomic) NSData *accountFlagsData; // @synthesize accountFlagsData=_accountFlagsData;
@property(retain, nonatomic) CPLFeatureVersionHistory *featureVersionHistory; // @synthesize featureVersionHistory=_featureVersionHistory;
@property(copy, nonatomic) NSDictionary *assetCounts; // @synthesize assetCounts=_assetCounts;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CPLAccountFlags *accountFlags;
- (id)prettyDescriptionWithAnchorDesciptionBlock:(CDUnknownBlockType)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

