//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, TSPDigest;

__attribute__((visibility("hidden")))
@interface TSPDataUniqueIdentifier : NSObject <NSCopying>
{
    TSPDigest *_digest;
}

@property(readonly, nonatomic) TSPDigest *digest; // @synthesize digest=_digest;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSString *digestString;
- (id)initWithDigest:(id)arg1;
- (id)init;

@end

