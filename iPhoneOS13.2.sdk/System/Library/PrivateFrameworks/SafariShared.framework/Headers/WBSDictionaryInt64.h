//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface WBSDictionaryInt64 : NSObject <NSCoding, NSSecureCoding, NSCopying>
{
    unordered_map_fcbaed0a _map;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
// - (void).cxx_destruct;
@property(readonly, nonatomic) const unordered_map_fcbaed0a map;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMovableMap:(unordered_map_fcbaed0a )arg1;
- (id)initWithMap:(const unordered_map_fcbaed0a )arg1;
- (id)init;

@end

