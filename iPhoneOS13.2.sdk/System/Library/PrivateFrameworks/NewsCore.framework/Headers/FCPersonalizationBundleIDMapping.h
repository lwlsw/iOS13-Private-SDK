//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCJSONEncodableObjectProviding-Protocol.h>

@class NSDictionary, NTPBBundleIDMapping;

@interface FCPersonalizationBundleIDMapping : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding>
{
    NTPBBundleIDMapping *_pbBundleIDMapping;
    NSDictionary *_bundleIDMapping;
}

+ (BOOL)supportsSecureCoding;
+ (id)decendingSpecificityBundleIDsForBundleID:(id)arg1;
@property(retain, nonatomic) NSDictionary *bundleIDMapping; // @synthesize bundleIDMapping=_bundleIDMapping;
// - (void).cxx_destruct;
- (id)jsonEncodableObject;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tagScoresForBundleID:(id)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (id)init;
- (id)initWithPBBundleIDMapping:(id)arg1;

@end

