//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface NFLBatchContext : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSUInteger _batchType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger batchType; // @synthesize batchType=_batchType;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initForTesting;
- (id)initWithBatchType:(NSUInteger)arg1;
- (id)init;

@end

